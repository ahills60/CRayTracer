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

/* Populate a scene with set items */
void populateScene(Scene *scene, MathStat *m)
{
    Object cube, planeBase, planeLeft, planeRight, planeTop, planeBack, mirrCube;
    Material redGlass, nonreflBlue, nonreflGreen, nonreflPurple, mirror;
    Vector red = int2Vector(RED);
    Vector blue = int2Vector(BLUE);
    Vector green = int2Vector(GREEN);
    Vector purple = int2Vector(PURPLE);
    Vector white = int2Vector(WHITE);
    
    // Set material types
    setMaterial(&redGlass, red, 0.0, 0.5, 0.0, 0.0, 0.0, 0.8, 1.4);
    setMaterial(&nonreflBlue, blue, 0.1, 0.5, 0.4, 2.0, 0.0, 0.0, 1.4);
    setMaterial(&nonreflGreen, green, 0.1, 0.5, 0.4, 2.0, 0.0, 0.0, 1.4);
    setMaterial(&nonreflPurple, purple, 0.1, 0.5, 0.4, 2.0, 0.0, 0.0, 1.4);
    setMaterial(&mirror, white, 0.1, 0.0, 0.9, 32.0, 0.6, 0.0, 1.4);
    
    // Create objects
    createCube(&cube, redGlass, 1.0, m);
    createPlaneXZ(&planeBase, nonreflPurple, 10.0, m);
    createPlaneXZ(&planeTop, nonreflPurple, 10.0, m);
    createPlaneXZ(&planeLeft, nonreflGreen, 10.0, m);
    createPlaneXZ(&planeRight, nonreflGreen, 10.0, m);
    createPlaneXZ(&planeBack, nonreflBlue, 10.0, m);
    createCube(&mirrCube, mirror, 1.5, m);
    
    // Arrange
    transformObject(&cube, matMult(genTransMatrix(2, 0.5, -1, m), genYRotateMat(45, m), m), m);
    transformObject(&planeBase, genTransMatrix(1, 0, -4, m), m);
    transformObject(&planeLeft, matMult(genTransMatrix(-2, 0, -4, m), genZRotateMat(-90, m), m), m);
    transformObject(&planeRight, matMult(genTransMatrix(4, 0, -4, m), genZRotateMat(90, m), m), m);
    transformObject(&planeBack, matMult(genTransMatrix(1, 0, -6, m), genXRotateMat(90, m), m), m);
    transformObject(&planeTop, matMult(genTransMatrix(1, 5, -4, m), genZRotateMat(180, m), m), m);
    transformObject(&mirrCube, matMult(genTransMatrix(0, 0.9, -2.7, m), genYRotateMat(20, m), m), m);
    
    // Create the scene
    initialiseScene(scene, 6);
    addObject(scene, cube);
    addObject(scene, planeBase);
    addObject(scene, planeLeft);
    addObject(scene, planeRight);
    addObject(scene, planeBack);
    addObject(scene, mirrCube);
    // addObject(scene, planeTop);
}

Vector draw(Ray ray, Scene scene, Light light, int recursion, MathStat *m)
{
    Hit hit;
    Vector outputColour, reflectiveColour, refractiveColour;
    float reflection, refraction;
    
    // Default is black. We can add to this (if there's a hit) 
    // or just return it (if there's no object)
    setVector(&outputColour, 0, 0, 0);
    
    hit = sceneIntersection(ray, scene, m);
    
    // Determine whether there was a hit. Otherwise default.
    if (hit.objectIndex >= 0)
    {
        // There was a hit.
        
        outputColour = vecAdd(ambiance(hit, scene, light, m), vecAdd(diffusion(hit, scene, light, m), specular(hit, scene, light, m), m), m);
        
        // Should we go deeper?
        if (recursion > 0)
        {
            // Yes, we should
            // Get the reflection
            reflectiveColour = draw(reflectRay(hit, m), scene, light, recursion - 1, m);
            statSubtractInt(m, 1);
            reflection = scene.object[hit.objectIndex].material.reflectivity;
            outputColour = vecAdd(outputColour, scalarVecMult(reflection, reflectiveColour, m), m);
            
            // Get the refraction
            refractiveColour = draw(refractRay(hit, scene.object[hit.objectIndex].material.inverserefractivity, scene.object[hit.objectIndex].material.squareinverserefractivity, m), scene, light, recursion - 1, m);
            statSubtractInt(m, 1);
            refraction = scene.object[hit.objectIndex].material.opacity;
            outputColour = vecAdd(outputColour, scalarVecMult(refraction, refractiveColour, m), m);
        }
        
        // We've got what we needed after the hit, so return
        statSubtractFlt(m, 1);
        return scalarVecMult(1.0 - traceShadow(hit, scene, light, m), outputColour, m);
    }
    
    // No hit, return black.
    
    return outputColour;
}

#endif
