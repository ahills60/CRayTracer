/*
 * construct.h
 * 
 * Builds a scene with the primitives created in other header files
 *
 *  Created on: 6 Dec 2013
 *      Author: andrew
 */

#ifndef CONSTRUCT_H_
#define CONSTRUCT_H_

#include "fpmath.h"

#include "craytracer.h"
#include "datatypes.h"
#include "rays.h"
#include "image.h"
#include "lighting.h"
#include "objects.h"
#include "colours.h"
#include "shapes.h"

// Add math stats
#include "mathstats.h"

// Add function stats
#include "funcstats.h"

/* Populate a scene with set items */
void populateScene(Scene *scene, Light lightSrc, MathStat *m, FuncStat *f)
{
    Object cube, planeBase, planeLeft, planeRight, planeTop, planeBack, mirrCube;
    Material redGlass, nonreflBlue, nonreflGreen, nonreflPurple, mirror;
    Vector red = int2Vector(RED);
    Vector blue = int2Vector(BLUE);
    Vector green = int2Vector(GREEN);
    Vector purple = int2Vector(PURPLE);
    Vector white = int2Vector(WHITE);
    
    // Set material types
    //setMaterial(*matObj, light, Vector colour, fixedp ambiance, fixedp diffusivity, fixedp specular, fixedp shininess, fixedp reflectivity, fixedp opacity, fixedp refractivity)
    setMaterial(&redGlass, lightSrc, red, fp_Flt2FP(0.0), fp_Flt2FP(0.5), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(0.8), fp_Flt2FP(1.4), -1, m, f);
    setMaterial(&nonreflBlue, lightSrc, blue, fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.4), fp_Flt2FP(2.0), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(1.4), -1, m, f);
    setMaterial(&nonreflGreen, lightSrc, green, fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.4), fp_Flt2FP(2.0), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(1.4), -1, m, f);
    setMaterial(&nonreflPurple, lightSrc, purple, fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.4), fp_Flt2FP(2.0), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(1.4), -1, m, f);
    setMaterial(&mirror, lightSrc, white, fp_Flt2FP(0.1), fp_Flt2FP(0.0), fp_Flt2FP(0.9), fp_Flt2FP(32.0), fp_Flt2FP(0.6), fp_Flt2FP(0.0), fp_Flt2FP(1.4), -1, m, f);
    
    // Create objects
    createCube(&cube, redGlass, fp_Flt2FP(1.0), m, f);
    createPlaneXZ(&planeBase, nonreflPurple, fp_Flt2FP(10.0), m, f);
    createPlaneXZ(&planeTop, nonreflPurple, fp_Flt2FP(10.0), m, f);
    createPlaneXZ(&planeLeft, nonreflGreen, fp_Flt2FP(10.0), m, f);
    createPlaneXZ(&planeRight, nonreflGreen, fp_Flt2FP(10.0), m, f);
    createPlaneXZ(&planeBack, nonreflBlue, fp_Flt2FP(10.0), m, f);
    createCube(&mirrCube, mirror, fp_Flt2FP(1.5), m, f);
    
    // Arrange
    transformObject(&cube, matMult(genTransMatrix(fp_Flt2FP(2), fp_Flt2FP(0.5), -fp_Flt2FP(1), m, f), genYRotateMat(fp_Flt2FP(45), m, f), m, f), m, f);
    transformObject(&planeBase, genTransMatrix(fp_Flt2FP(1), 0, -fp_Flt2FP(4), m, f), m, f);
    transformObject(&planeLeft, matMult(genTransMatrix(-fp_Flt2FP(2), 0, -fp_Flt2FP(4), m, f), genZRotateMat(-fp_Flt2FP(90), m, f), m, f), m, f);
    transformObject(&planeRight, matMult(genTransMatrix(fp_Flt2FP(4), 0, -fp_Flt2FP(4), m, f), genZRotateMat(fp_Flt2FP(90), m, f), m, f), m, f);
    transformObject(&planeBack, matMult(genTransMatrix(fp_Flt2FP(1), 0, -fp_Flt2FP(6), m, f), genXRotateMat(fp_Flt2FP(90), m, f), m, f), m, f);
    transformObject(&planeTop, matMult(genTransMatrix(fp_Flt2FP(1), fp_Flt2FP(5), -fp_Flt2FP(4), m, f), genZRotateMat(fp_Flt2FP(180), m, f), m, f), m, f);
    transformObject(&mirrCube, matMult(genTransMatrix(fp_Flt2FP(0), fp_Flt2FP(0.9), -fp_Flt2FP(2.7), m, f), genYRotateMat(fp_Flt2FP(20), m, f), m, f), m, f);
    
    // Create the scene
    initialiseScene(scene, 6, f);
    addObject(scene, cube, f);
    addObject(scene, planeBase, f);
    addObject(scene, planeLeft, f);
    addObject(scene, planeRight, f);
    addObject(scene, planeBack, f);
    addObject(scene, mirrCube, f);
    // addObject(scene, planeTop);
}

Vector draw(Ray ray, Scene scene, Light light, int recursion, MathStat *m, FuncStat *f)
{
    Hit hit;
    Vector outputColour, reflectiveColour, refractiveColour, textureColour;
    fixedp reflection, refraction;
    
    (*f).draw++;
    
    // Default is black. We can add to this (if there's a hit) 
    // or just return it (if there's no object)
    setVector(&outputColour, 0, 0, 0, f);
    
    hit = sceneIntersection(ray, scene, m, f);
    
    // Determine whether there was a hit. Otherwise default.
    if (hit.objectIndex >= 0)
    {
        // There was a hit.
        Vector lightDirection = vecNormalised(vecSub(light.location, hit.location, m, f), m, f);
        
        // Determine whether this has a texture or not
        if (scene.object[hit.objectIndex].material.textureIdx < 0)
            setVector(&textureColour, -1, -1, -1, f);
        else
            textureColour = getColour(Textures[scene.object[hit.objectIndex].material.textureIdx], scene, hit, m, f);
        // outputColour = vecAdd(ambiance(hit, scene, light, m, f), diffusion(hit, scene, light, m, f), m, f);
        outputColour = vecAdd(ambiance(hit, scene, light, textureColour, m, f), vecAdd(diffusion(hit, scene, light, lightDirection, textureColour, m, f), specular(hit, scene, light, lightDirection, textureColour, m, f), m, f), m, f);
        
        // Should we go deeper?
        if (recursion > 0)
        {
            // Yes, we should
            // Get the reflection
            reflectiveColour = draw(reflectRay(hit, m, f), scene, light, recursion - 1, m, f);
            statSubtractInt(m, 1);
            reflection = scene.object[hit.objectIndex].material.reflectivity;
            outputColour = vecAdd(outputColour, scalarVecMult(reflection, reflectiveColour, m, f), m, f);
            
            // Get the refraction
            refractiveColour = draw(refractRay(hit, scene.object[hit.objectIndex].material.inverserefractivity, scene.object[hit.objectIndex].material.squareinverserefractivity, m, f), scene, light, recursion - 1, m, f);
            statSubtractInt(m, 1);
            refraction = scene.object[hit.objectIndex].material.opacity;
            outputColour = vecAdd(outputColour, scalarVecMult(refraction, refractiveColour, m, f), m, f);
        }
        
        // We've got what we needed after the hit, so return
        statSubtractFlt(m, 1);
        // return outputColour;
        return scalarVecMult(fp_fp1 - traceShadow(hit, scene, light, lightDirection, m, f), outputColour, m, f);
    }
    
    // No hit, return black.
    
    return outputColour;
}

#endif
