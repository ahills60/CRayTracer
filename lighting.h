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

#include "fpmath.h"

#include "rays.h"

// Add math stats
#include "mathstats.h"

// Add function stats
#include "funcstats.h"

/* Creates ambiance effect given a hit, a scene and some light */
Vector ambiance(Hit hit, Scene scene, Light light, MathStat *m, FuncStat *f)
{
    (*f).ambiance++;
    return scalarVecMult(scene.object[hit.objectIndex].material.ambiance, vecMult(scene.object[hit.objectIndex].material.colour, light.colour, m, f), m, f);
}

/* Creates diffusion effect given a hit, a scene and some light */
Vector diffusion(Hit hit, Scene scene, Light light, MathStat *m, FuncStat *f)
{
    (*f).diffusion++;
    // Need to compute the direction of light
    Vector lightDirection = vecNormalised(vecSub(light.location, hit.location, m, f), m, f);
    fixedp distance = fp_mult(dot(hit.normal, lightDirection, m, f), scene.object[hit.objectIndex].material.diffusivity);
    statMultiplyFlt(m, 1);
    
    return scalarVecMult(distance, vecMult(scene.object[hit.objectIndex].material.colour, light.colour, m, f), m, f);
}

/* Creates specular effect given a hit, a scene and some light */
Vector specular(Hit hit, Scene scene, Light light, MathStat *m, FuncStat *f)
{
    (*f).specular++;
    // Reflective ray:
    Ray reflection = reflectRay(hit, m, f);
    Vector lightDirection = vecNormalised(vecSub(light.location, hit.location, m, f), m, f);
    fixedp distance = fp_mult(fp_pow(dot(lightDirection, reflection.direction, m, f), scene.object[hit.objectIndex].material.shininess), scene.object[hit.objectIndex].material.specular);
    statMultiplyFlt(m, 1);
    statPower(m, 1);
    return scalarVecMult(distance, vecMult(scene.object[hit.objectIndex].material.colour, light.colour, m, f), m, f);
}

#endif
