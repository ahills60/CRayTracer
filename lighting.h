/*
 * lighting.h
 * 
 * This header file provides primitives for lighting and shading.
 *
 *  Created on: 5 Dec 2013
 *      Author: andrew
 */

#ifndef LIGHTING_H_
#define LIGHTING_H_

#include "rays.h"

/* Creates ambience effect given a hit, a scene and some light */
Vector ambience(Hit hit, Scene scene, Light light)
{
    return scalarVecMult(scene.object[hit.objectIndex].material.ambiance, vecMult(scene.object[hit.objectIndex].material.colour, light.colour));
}

/* Creates diffusion effect given a hit, a scene and some light */
Vector diffusion(Hit hit, Scene scene, Light light)
{
    // Need to compute the direction of light
    Vector lightDirection = vecNormalised(vecSub(light.location, hit.location));
    float distance = dot(hit.normal, lightDirection) * scene.object[hit.objectIndex].material.diffusivity;
    
    return scalarVecMult(distance, vecMult(scene.object[hit.objectIndex].material.colour, light.colour));
}

/* Creates specular effect given a hit, a scene and some light */
Vector specular(Hit hit, Scene scene, Light light)
{
    // Reflective ray:
    Ray reflection = reflectRay(hit);
    Vector lightDirection = vecNormalised(vecSub(light.location, hit.location));
    float distance = pow(dot(lightDirection, reflection.direction), scene.object[hit.objectIndex].material.shininess) * scene.object[hit.objectIndex].material.specular;
    
    return scalarVecMult(distance, vecMult(scene.object[hit.objectIndex].material.colour, light.colour));
}

#endif