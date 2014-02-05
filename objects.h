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

#include "datatypes.h"
#include "colours.h"

// Add math stats
# include "mathstats.h"

/* Define materials */
typedef struct Material
{
    // Colour is defined as a vector as it's easier to convert
    Vector colour;              // Colour of object
    float reflectivity;         // How reflective
    float opacity;              // How opaque an object is: 
    float refractivity;         // How refractive
    float inverserefractivity;   // Inverse of the refractive index
    float squareinverserefractivity; // The square of the inverse of refractivity
    float ambiance;             // Ambiance constant
    float diffusivity;          // Diffusive constant
    float specular;             // How specular
    float shininess;            // How shiny
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
    float shadowFactor;         // Shadow factor
}
Light;

/* Define a camera */
typedef struct Camera
{
    Vector location;            // Location of camera
    Vector view;                // View unit vector
    Vector horizontal;          // Horizontal unit vector
    Vector vertical;             // Vertical unit vector
    Vector up;                  // General up unit vector (0, 1, 0)
    float fov;                  // Field of view in radians
    float ar;                   // Aspect ratio
    int width;
    int height;
    float dfovardw;             // 2 * camerafov / width
    float fovar;                // camerafov * cameraar
    float dfovdh;               // 2 * camerafov / height
}
Camera;

/* Set the material */
void setMaterial(Material *matObj, Vector colour, float ambiance, float diffusivity, float specular, float shininess, float reflectivity, float opacity, float refractivity)
{
    (*matObj).colour = colour;
    (*matObj).reflectivity = reflectivity;
    (*matObj).opacity = opacity;
    (*matObj).refractivity = refractivity;
    (*matObj).inverserefractivity = 1.0 / refractivity;
    (*matObj).squareinverserefractivity = 1.0 / (refractivity * refractivity);
    (*matObj).ambiance = ambiance;
    (*matObj).diffusivity = diffusivity;
    (*matObj).specular = specular;
    (*matObj).shininess = shininess;
}

/* Set the object */
void setObject(Object *object, Material material, int noTriangles, Triangle *triangle)
{
    (*object).material = material;
    (*object).noTriangles = noTriangles;
    (*object).triangle = triangle;
}

/* Initialise the scene */
void initialiseScene(Scene *scene, int maxObjects)
{
    (*scene).noObjects = 0;
    (*scene).maxObjects = maxObjects;
    // Allocate memory for the maximum number of objects
    (*scene).object = (Object *)malloc(sizeof(Object) * maxObjects);
}

/* Get the total number triangles in a scene */
int getTriangleTotal(Scene scene)
{
    int n, total = 0;
    
    for (n = 0; n < scene.noObjects; n++)
    {
        total += scene.object[n].noTriangles;
    }
    return total;
}

/* Add an object to a scene */
void addObject(Scene *scene, Object object)
{
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
void deleteObject(Object *object)
{
    // Clear memory
    free((*object).triangle);
    
    (*object).triangle = NULL;
    (*object).noTriangles = 0;
}

/* Reset a scene and free memory */
void resetScene(Scene *scene)
{
    int n;

    // Go through each object and delete the object
    for (n = 0; n < (*scene).maxObjects; n++)
    {
        deleteObject(&(*scene).object[n]);
    }
    
    // Free memory
    free((*scene).object);
    
    (*scene).object = NULL;
    (*scene).noObjects = 0;
    (*scene).maxObjects = 0;
}

/* Set a light */
void setLight(Light *light, Vector location, Vector colour, float shadowFactor)
{
    (*light).location = location;
    (*light).colour = colour;
    (*light).shadowFactor = shadowFactor;
}

/* Set a camera */
void setCamera(Camera *camera, Vector location, Vector view, float fov, int width, int height, MathStat *m)
{
    Vector up, viewNorm, horizontal;
    
    // Standard up vector
    setVector(&up, 0.0, 1.0, 0.0);
    (*camera).up = up;
    
    // Location and Normalised view
    (*camera).location = location;
    viewNorm = vecNormalised(vecSub(view, location, m), m);
    (*camera).view = viewNorm;
    
    // Set horizontal and vertical
    horizontal = cross(viewNorm, up, m);
    (*camera).horizontal = horizontal;
    (*camera).vertical = cross(horizontal, viewNorm, m);
    
    // Field of view and aspect ratio
    (*camera).fov = deg2rad(fov * 0.5, m);
    (*camera).ar = (float)width / (float)height;
    
    // Height and width
    (*camera).width = width;
    (*camera).height = height;
    
    // Compute the coefficients used in creating a ray:
    (*camera).dfovardw = 2.0 * (*camera).fov / ((float) width) * (*camera).ar;
    (*camera).fovar = (*camera).fov * (*camera).ar;
    (*camera).dfovdh = 2.0 * (*camera).fov / ((float) height);
}

/* Transform object by transformation matrix T */
void transformObject(Object *object, Matrix T, MathStat *m)
{
    int i;
    Triangle temp;
    for (i = 0; i < (*object).noTriangles; i++)
    {
        temp.u = matVecMult(T, (*object).triangle[i].u, m);
        temp.v = matVecMult(T, (*object).triangle[i].v, m);
        temp.w = matVecMult(T, (*object).triangle[i].w, m);
        
        (*object).triangle[i].u = temp.u;
        (*object).triangle[i].v = temp.v;
        (*object).triangle[i].w = temp.w;
    }
}

#endif
