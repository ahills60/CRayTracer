/*
 * rays.h
 *
 * Creates a ray primitive for handling light
 *
 *  Created on: 5 Dec 2013
 *      Author: andrew
 */

#ifndef RAYS_H_
#define RAYS_H_

#define FURTHEST_RAY 1<<30

#include "datatypes.h"
#include "objects.h"

// Add math stats
#include "mathstats.h"

// Add function stats
#include "funcstats.h"

/* Define a ray */
typedef struct Ray
{
    Vector source;
    Vector direction;
}
Ray;

/* Define a hit as an interception point */
typedef struct Hit
{
    Vector location;            // Location of interception
    Vector normal;              // Normal at the point of interception
    Ray ray;                    // The ray that hit this point
    int objectIndex;            // The index of the object that was hit
    float distance;             // Distance from the camera to the nearest hit.
}
Hit;

/* Set the parameters of a ray */
void setRay(Ray *ray, Vector source, Vector direction, FuncStat *f)
{
    (*ray).source = source;
    (*ray).direction = direction;
    (*f).setRay++;
}

/* Create a ray at this point from this camera */
Ray createRay(int x, int y, Camera camera, MathStat *m, FuncStat *f)
{
    (*f).createRay++;
//    printf("Establishing dimensions... ");
    float sx = (float)x * camera.dfovardw - camera.fovar;
    statGroupFlt(m, 0, 1, 1, 0);
    float sy = (float)y * camera.dfovdh - camera.fov;
    statGroupFlt(m, 0, 1, 1, 0);
//    printf("Dimensions established.\nSetting views...");
    
    Vector shorizontal, svertical, sview;
    
    Ray ray;
    
    shorizontal = scalarVecMult(sx, camera.horizontal, m, f);
    svertical = scalarVecMult(sy, camera.vertical, m, f);
    sview = vecAdd(vecAdd(shorizontal, svertical, m, f), camera.view, m, f);
    
//    printf("Views established.\nCreating ray...");
    setRay(&ray, camera.location, vecNormalised(sview, m, f), f);
//    printf("Ray created.\n");
    return ray;
}

/* Compute the intersection of a triangle */
float triangleIntersection(Ray ray, Triangle triangle, MathStat *m, FuncStat *f)
{
    float intersection, a, b, c, arecip;
    Vector edge1, edge2, u, v, w;
    
    (*f).triangleIntersection++;
    
    // Compute the edges of the triangle
    edge1 = triangle.vmu;
    edge2 = triangle.wmu;
    
    // Determine if there's an intersection (within tolerance)
    u = cross(ray.direction, edge2, m, f);
    a = dot(edge1, u, m, f);
    if (a > -EPS && a < EPS)
        return 0; // No intersection
    
    // Reciprocal of a (normalising constant)
    arecip = 1.0 / a;
    statDivideFlt(m, 1);
    
    v = vecSub(ray.source, triangle.u, m, f);
    b = dot(v, u, m, f) * arecip;
    statMultiplyFlt(m, 1);
    if (b < 0 || b > 1.0)
        return 0; // no intersection
    
    w = cross(v, edge1, m, f);
    c = dot(ray.direction, w, m, f) * arecip;
    statMultiplyFlt(m, 1);
    statPlusFlt(m, 1);
    if (c < 0 || b + c > 1.0)
        return 0; // no intersection
    
    intersection = dot(edge2, w, m, f) * arecip;
    
    statMultiplyFlt(m, 1);
    
    // Determine whether the intersection is significant 
    // and not due to rounding error.
    if (intersection > EPS)
        return intersection;
    else
        return 0;
}

/* Go through the triangles within an object and find one that intersects with this ray */
Hit objectIntersection(Ray ray, Object object, int objectIndex, MathStat *m, FuncStat *f)
{
    float intersectionPoint, nearestIntersection = FURTHEST_RAY;
    int n, nearestIdx;
    Hit hit;
    
    (*f).objectIntersection++;
    
    // Default distance is 0 just in case there's no hit
    hit.distance = 0.0;
    
    for (n = 0; n < object.noTriangles; n++)
    {
        statPlusInt(m, 1); // For the loop
        intersectionPoint = triangleIntersection(ray, object.triangle[n], m, f);
        
        // Determine whether there was an intersection and whether this was
        // the closest intersection to the camera for this object
        if (intersectionPoint > 0.0 && intersectionPoint < nearestIntersection)
        {
            // Ensure that only front facing triangles reply
            if (dot(object.triangle[n].normcrvmuwmu, ray.direction, m, f) < EPS)
            {
                nearestIdx = n;
                nearestIntersection = intersectionPoint;
            }
        }
    }
    
    // Only fill in the parameters if there was an intersection and that it isn't far away
    if (nearestIntersection > 0.0 && nearestIntersection < FURTHEST_RAY)
    {
        hit.location = vecAdd(ray.source, scalarVecMult(nearestIntersection, ray.direction, m, f), m, f);
        
        hit.normal = object.triangle[nearestIdx].normcrvmuwmu;
        hit.ray = ray;
        hit.objectIndex = objectIndex;
        hit.distance = nearestIntersection;
        return hit;
    }
    
    // There wasn't a collision, so we set the objectIndex to be -1
    hit.objectIndex = -1;
    return hit;
}

/* Go through scene to detect whether a ray intersects an object within the scene */
Hit sceneIntersection(Ray ray, Scene scene, MathStat *m, FuncStat *f)
{
    int n;
    Hit hit;
    Hit nearestHit;
    nearestHit.distance = FURTHEST_RAY;
    
    (*f).sceneIntersection++;
    
    // Go through all objects within this scene
    for (n = 0; n < scene.noObjects; n++)
    {
        statPlusInt(m, 1); // For the loop
        hit = objectIntersection(ray, scene.object[n], n, m, f);
        
        // determine if there was an intersection and that it's the closest one
        if (hit.distance > 0.0 && hit.distance < nearestHit.distance)
            nearestHit = hit;
    }
    
    // If there wasn't a collosition or it was too far away, then:
    if (nearestHit.distance <= 0.0 || nearestHit.distance >= FURTHEST_RAY)
        nearestHit.objectIndex = -1;
    return nearestHit;
}

/* Trace a ray back and find the shadow for a particular light source*/
float traceShadow(Hit hit, Scene scene, Light light, MathStat *ma, FuncStat *f)
{
    Vector direction;
    Ray shadow;
    int n, m;
    
    (*f).traceShadow++;
    
    direction = vecNormalised(vecSub(light.location, hit.location, ma, f), ma, f);
    setRay(&shadow, hit.location, direction, f);
    
    // Now send the shadow ray back to the light. If it intersects, then the ray is a shadow
    for (m = 0; m < scene.noObjects; m++)
    {
        statPlusInt(ma, 1); // For the loop
        // Now all triangles within this object
        for (n = 0; n < scene.object[m].noTriangles; n++)
        {
            statPlusInt(ma, 1); // For the loop
            // Is this significant?
            if (triangleIntersection(shadow, scene.object[m].triangle[n], ma, f) > EPS)
                return light.shadowFactor;
        }
    }
    // No intersection so no shadow.
    return 0;
}

/* Compute a reflection for a ray */
Ray reflectRay(Hit hit, MathStat *m, FuncStat *f)
{
    Vector viewDirection;
    Ray reflection;
    
    (*f).reflectRay++;
    
    // 2 (n . v) * n - v
    viewDirection = negVec(hit.ray.direction, f);
    reflection.direction = vecSub(scalarVecMult(2.0 * dot(hit.normal, viewDirection, m, f), hit.normal, m, f), viewDirection, m, f);
    statMultiplyFlt(m, 1);
    reflection.source = hit.location;
    
    return reflection;
}

/* Compute a refraction ray */
Ray refractRay(Hit hit, float inverserefractivity, float squareinverserefractivity, MathStat *m, FuncStat *f)
{
    (*f).refractRay++;
    
    Vector incidence = negVec(hit.ray.direction, f);
    Ray refraction;
    
    float c = dot(incidence, hit.normal, m, f);
    float s = inverserefractivity * c - sqrtf(1.0 - squareinverserefractivity * (1.0 - c * c));
    statGroupFlt(m, 0, 3, 3, 0);
    statSqrtFlt(m, 1);
    
    // Direction of refractive ray
    refraction.direction = vecNormalised(vecSub(scalarVecMult(s, hit.normal, m, f), scalarVecMult(inverserefractivity, incidence, m, f), m, f), m, f);
    
    // The refraction occurs from the point where it hit the object
    refraction.source = hit.location;
    
    return refraction;
}
#endif
