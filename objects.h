/*
 * objects.h
 * 
 * This header file creates primitives for scene creation.
 * 
 *  Created on: 4 Dec 2013
 *      Author: andrew
 */

#ifndef OBJECTS_H_
#define OBJECTS_H_

#include "fpmath.h"

#include "datatypes.h"
#include "colours.h"

// Add math stats
# include "mathstats.h"

// Add function stats
#include "funcstats.h"

/* Define materials */
typedef struct Material
{
    // Colour is defined as a vector as it's easier to convert
    Vector colour;              // Colour of object
    fixedp reflectivity;         // How reflective
    fixedp opacity;              // How opaque an object is: 
    fixedp refractivity;         // How refractive
    fixedp inverserefractivity;   // Inverse of the refractive index
    fixedp squareinverserefractivity; // The square of the inverse of refractivity
    fixedp ambiance;             // Ambiance constant
    fixedp diffusivity;          // Diffusive constant
    fixedp specular;             // How specular
    fixedp shininess;            // How shiny
    Vector matLightColour;         // material * light colour
    Vector compAmbianceColour;   // Computed ambiance colour.
    int textureIdx;              // An index to the appropriate texture. If < 0, use Vector colour.
}
Material;

/* Define an object */
typedef struct Object
{
    Material material;          // Material of object
    int noTriangles;            // Number of triangles
    Triangle *triangle;         // List of triangles
}
Object;

/* Define a scene that consists of objects */
typedef struct Scene
{
    int noObjects;
    int maxObjects;
    Object *object;
}
Scene;

/* Define a light source */
typedef struct Light
{
    Vector location;            // Location of light source
    Vector colour;              // Colour of light
    fixedp shadowFactor;         // Shadow factor
}
Light;

/* Define a camera */
typedef struct Camera
{
    Vector location;            // Location of camera
    Vector preview;             // Pre-normalised view vector
    Vector view;                // View unit vector
    Vector horizontal;          // Horizontal unit vector
    Vector vertical;             // Vertical unit vector
    Vector up;                  // General up unit vector (0, 1, 0)
    fixedp fov;                  // Field of view in radians
    fixedp ar;                   // Aspect ratio
    int width;
    int height;
    fixedp dfovardw;             // 2 * camerafov / width
    fixedp fovar;                // camerafov * cameraar
    fixedp dfovdh;               // 2 * camerafov / height
}
Camera;

/* Set the material */
void setMaterial(Material *matObj, Light lightSrc, Vector colour, fixedp ambiance, fixedp diffusivity, fixedp specular, fixedp shininess, fixedp reflectivity, fixedp opacity, fixedp refractivity, int textureIdx, MathStat *m, FuncStat *f)
{
    (*f).setMaterial++;
    (*matObj).colour = colour;
    (*matObj).reflectivity = reflectivity;
    (*matObj).opacity = opacity;
    (*matObj).refractivity = refractivity;
    if (refractivity == 0)
    {
        // to prevent div/0 errors
        (*matObj).inverserefractivity = fp_fp1;
        (*matObj).squareinverserefractivity = fp_fp1;
    }
    else
    {
        statGroupFlt(m, 0, 0, 1, 1);
        (*matObj).inverserefractivity = fp_div(fp_fp1, refractivity);
        (*matObj).squareinverserefractivity = fp_div(fp_fp1, fp_mult(refractivity, refractivity));
    }

    (*matObj).ambiance = ambiance;
    (*matObj).diffusivity = diffusivity;
    (*matObj).specular = specular;
    (*matObj).shininess = shininess;
    (*matObj).matLightColour = vecMult(colour, lightSrc.colour, m, f);
    (*matObj).compAmbianceColour = scalarVecMult(ambiance, (*matObj).matLightColour, m, f);
    (*matObj).textureIdx = textureIdx;
}

/* Set the object */
void setObject(Object *object, Material material, int noTriangles, Triangle *triangle, FuncStat *f)
{
    (*object).material = material;
    (*object).noTriangles = noTriangles;
    (*object).triangle = triangle;
    (*f).setObject++;
}

/* Initialise the scene */
void initialiseScene(Scene *scene, int maxObjects, FuncStat *f)
{
    (*f).initialiseScene++;
    (*scene).noObjects = 0;
    (*scene).maxObjects = maxObjects;
    // Allocate memory for the maximum number of objects
    (*scene).object = (Object *)malloc(sizeof(Object) * maxObjects);
}

/* Get the total number triangles in a scene */
int getTriangleTotal(Scene scene, FuncStat *f)
{
    (*f).getTriangleTotal++;
    int n, total = 0;
    
    for (n = 0; n < scene.noObjects; n++)
    {
        total += scene.object[n].noTriangles;
    }
    return total;
}

/* Add an object to a scene */
void addObject(Scene *scene, Object object, FuncStat *f)
{
    (*f).addObject++;
    
    // Make sure we have enough memory to allocate the object
    if ((*scene).noObjects < (*scene).maxObjects)
    {
        (*scene).object[(*scene).noObjects] = object;
        (*scene).noObjects++;
    }
    else
    {
        fprintf(stderr, "ERROR: Not enough space to add object\n");
    }
}

/* Delete a specific object and free memory */
void deleteObject(Object *object, FuncStat *f)
{
    (*f).deleteObject++;
    // Clear memory
    free((*object).triangle);
    
    (*object).triangle = NULL;
    (*object).noTriangles = 0;
}

/* Reset a scene and free memory */
void resetScene(Scene *scene, FuncStat *f)
{
    int n;
    
    (*f).resetScene++;

    // Go through each object and delete the object
    for (n = 0; n < (*scene).maxObjects; n++)
    {
        deleteObject(&(*scene).object[n], f);
    }
    
    // Free memory
    free((*scene).object);
    
    (*scene).object = NULL;
    (*scene).noObjects = 0;
    (*scene).maxObjects = 0;
}

/* Set a light */
void setLight(Light *light, Vector location, Vector colour, fixedp shadowFactor, FuncStat *f)
{
    (*f).setLight++;
    (*light).location = location;
    (*light).colour = colour;
    (*light).shadowFactor = shadowFactor;
}

/* Set a camera */
void setCamera(Camera *camera, Vector location, Vector view, fixedp fov, int width, int height, MathStat *m, FuncStat *f)
{
    Vector up, viewNorm, horizontal;
    
    (*f).setCamera++;
    
    // Standard up vector
    setVector(&up, 0, fp_fp1, 0, f);
    (*camera).up = up;
    
    // Location and Normalised view
    (*camera).location = location;
    (*camera).preview = view;
    viewNorm = vecNormalised(vecSub(view, location, m, f), m, f);
    (*camera).view = viewNorm;
    
    // Set horizontal and vertical
    horizontal = cross(viewNorm, up, m, f);
    (*camera).horizontal = horizontal;
    (*camera).vertical = cross(horizontal, viewNorm, m, f);
    
    // Field of view and aspect ratio
    (*camera).fov = fp_Flt2FP(deg2rad(fp_FP2Flt(fov >> 1), m, f));
    (*camera).ar = fp_div(fp_Int2FP(width), fp_Int2FP(height));
    statDivideFlt(m, 1);
    
    // Height and width
    (*camera).width = width;
    (*camera).height = height;
    
    // Compute the coefficients used in creating a ray:
    statGroupFlt(m, 0, 0, 3, 2);
    (*camera).dfovardw = fp_div(fp_mult(fp_mult(fp_fp2, (*camera).ar), (*camera).fov), fp_Int2FP(width));
    (*camera).fovar = fp_mult((*camera).fov, (*camera).ar);
    (*camera).dfovdh = fp_div((*camera).fov << 1, fp_Int2FP(height));
    printf("dfovardw: 0x%X\n", (*camera).dfovardw);
    printf("fovar: 0x%X\n", (*camera).fovar);
    printf("dfovdh: 0x%X\n", (*camera).dfovdh);
}

void updateCamera(Camera *camera, Vector location, Vector view, MathStat *m, FuncStat *f)
{
    // Update view and location
    (*camera).location = location;
    (*camera).preview = view;
    (*camera).view = vecNormalised(vecSub(view, location, m, f), m, f);
    
    // Update horizontal and vertical
    (*camera).horizontal = cross((*camera).view, (*camera).up, m, f);
    (*camera).vertical = cross((*camera).horizontal, (*camera).view, m, f);
}

/* Transform object by transformation matrix T */
void transformObject(Object *object, Matrix T, MathStat *m, FuncStat *f)
{
    int i;
    Triangle temp;
    
    (*f).transformObject++;
    
    for (i = 0; i < (*object).noTriangles; i++)
    {
        temp.u = matVecMult(T, (*object).triangle[i].u, m, f);
        temp.v = matVecMult(T, (*object).triangle[i].v, m, f);
        temp.w = matVecMult(T, (*object).triangle[i].w, m, f);
        
        (*object).triangle[i].u = temp.u;
        (*object).triangle[i].v = temp.v;
        (*object).triangle[i].w = temp.w;
        
        // Update vmu, wmu and normcrvmuwmu
        (*object).triangle[i].vmu = vecSub(temp.v, temp.u, m, f);
        (*object).triangle[i].wmu = vecSub(temp.w, temp.u, m, f);
        (*object).triangle[i].normcrvmuwmu = vecNormalised(cross((*object).triangle[i].vmu, (*object).triangle[i].wmu, m, f), m, f);
    }
}

#endif
