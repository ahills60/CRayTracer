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

// Add math stats
#include "mathstats.h"

/* Creates ambiance effect given a hit, a scene and some light */
Vector ambiance(Hit hit, Scene scene, Light light, MathStat *m)
{
    return scalarVecMult(scene.object[hit.objectIndex].material.ambiance, vecMult(scene.object[hit.objectIndex].material.colour, light.colour, m), m);
}

/* Creates diffusion effect given a hit, a scene and some light */
Vector diffusion(Hit hit, Scene scene, Light light, MathStat *m)
{
    // Need to compute the direction of light
    Vector lightDirection = vecNormalised(vecSub(light.location, hit.location, m), m);
    float distance = dot(hit.normal, lightDirection, m) * scene.object[hit.objectIndex].material.diffusivity;
    statMultiplyFlt(m, 1);
    
    return scalarVecMult(distance, vecMult(scene.object[hit.objectIndex].material.colour, light.colour, m), m);
}

/* Creates specular effect given a hit, a scene and some light */
Vector specular(Hit hit, Scene scene, Light light, MathStat *m)
{
    // Reflective ray:
    Ray reflection = reflectRay(hit, m);
    Vector lightDirection = vecNormalised(vecSub(light.location, hit.location, m), m);
    float distance = pow(dot(lightDirection, reflection.direction, m), scene.object[hit.objectIndex].material.shininess) * scene.object[hit.objectIndex].material.specular;
    statMultiplyFlt(m, 1);
    statPower(m, 1);
    return scalarVecMult(distance, vecMult(scene.object[hit.objectIndex].material.colour, light.colour, m), m);
}

#endif
