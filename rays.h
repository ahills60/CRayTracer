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
void setRay(Ray *ray, Vector source, Vector direction)
{
    (*ray).source = source;
    (*ray).direction = direction;
}

/* Create a ray at this point from this camera */
Ray createRay(int x, int y, Camera camera)
{
    float sx = (2 * ((float)x / (float)camera.width) - 1) * camera.ar;
    float sy = (2 * ((float)y / (float)camera.height) - 1);
    
    Vector shorizontal, svertical, sview;
    
    Ray ray;
    
    shorizontal = scalarVecMult(sx * camera.fov, camera.horizontal);
    svertical = scalarVecMult(sy * camera.fov, camera.vertical);
    sview = vecAdd(vecAdd(shorizontal, svertical), camera.view);
    
    setRay(&ray, camera.location, vecNormalised(sview));
    
    return ray;
}

/* Compute the intersection of a triangle */
float triangleIntersection(Ray ray, Triangle triangle)
{
    float intersection, a, b, c, arecip;
    Vector edge1, edge2, u, v, w;
    
    // Compute the edges of the triangle
    edge1 = vecSub(triangle.v, triangle.u);
    edge2 = vecSub(triangle.w, triangle.u);
    
    // Determine if there's an intersection (within tolerance)
    u = cross(ray.direction, edge2);
    a = dot(edge1, u);
    if (a > -EPS && a < EPS)
        return 0; // No intersection
    
    // Reciprocal of a (normalising constant)
    arecip = 1.0 / a;
    
    v = vecSub(ray.source, triangle.u);
    b = dot(v, u) * arecip;
    if (b < 0 || b > 1.0)
        return 0; // no intersection
    
    w = cross(v, edge1);
    c = dot(ray.direction, v) * arecip;
    if (c < 0 || b + c > 1.0)
        return 0; // no intersection
    
    intersection = dot(edge2, w) * arecip;
    
    // Determine whether the intersection is significant 
    // and not due to rounding error.
    if (intersection > EPS)
        return intersection;
    else
        return 0;
}

/* Go through the triangles within an object and find one that intersects with this ray */
Hit objectIntersection(Ray ray, Object object, int objectIdx)
{
    float intersectionPoint, nearestIntersection = 0.0;
    int n, nearestIdx;
    Triangle nearestTriangle;
    Hit hit;
    
    // Default distance is 0 just in case there's no hit
    hit.distance = 0;
    
    for (n = 0; n < object.noTriangles; n++)
    {
        intersectionPoint = triangleIntersection(ray, object.triangle[n]);
        
        // Determine whether there was an intersection and whether this was
        // the closest intersection to the camera for this object
        if (intersectionPoint > 0.0 && intersectionPoint < nearestIntersection)
        {
            // Ensure that only front facing triangles reply
            if (dot(vecNormalise(cross(vecSub(object.triangle[n].v, object.triangle[n].u), vecSub(object.triangle[n].w, object.triangle[n].u))), ray.direction) < EPS)
            {
                nearestIdx = n;
                nearestIntersection = intersectionPoint;
            }
        }
    }
    
    // Only fill in the parameters if there was an intersection and that it isn't far away
    if (nearestIntersection > 0.0 && nearestIntersection < FURTHEST_RAY)
    {
        nearestTriangle = object.triangle[nearestIdx];
        hit.location = vecAdd(ray.source, scalarVecMult(nearestIntersection, ray.direction));
        
        hit.normal = vecNormalise(cross(vecSub(nearestTriangle.v, nearestTriangle.u), vecSub(nearestTriangle.w, nearestTriangle.u)));
        hit.ray = ray;
        hit.objectIdx = objectIdx;
        hit.distance = nearestIntersection;
        return hit;
    }
    
    // There wasn't a collision, so we set the objectIdx to be -1
    hit.objectIdx = -1;
    return hit;
}

/* Go through scene to detect whether a ray intersects an object within the scene */
Hit sceneIntersection(Ray ray, Scene scene)
{
    int n;
    Hit hit;
    Hit nearestHit;
    nearestHit.distance = FURTHEST_RAY;
    
    // Go through all objects within this scene
    for (n = 1; n < scene.noObjects; n++)
    {
        hit = objectIntersection(ray, scene.object[n], n);
        
        // determine if there was an intersection and that it's the closest one
        if (hit.distance > 0 && hit.distance < nearestHit.distance)
            nearestHit = hit;
    }
    
    // If there wasn't a collosition or it was too far away, then:
    if (nearestHit.distance <= 0 || nearestHit.distance >= FURTHEST_RAY)
        nearestHit.objectIdx = -1;
    return nearestHit;
}

/* Trace a ray back and find the shadow for a particular light source*/
float traceShadow(Hit hit, Scene scene, Light light)
{
    Vector direction;
    Ray shadow;
    float distance = 0;
    int n, m;
    
    direction = vecNormalise(vecSub(light.location, hit.location));
    setRay(&shadow, hit.position, direction);
    
    // Now send the shadow ray back to the light. If it intersects, then the ray is a shadow
    for (m = 0; m < scene.noObjects; m++)
    {
        // Now all triangles within this object
        for (n = 0; n < scene.object[m].noTriangles; n++)
        {
            // Is this significant?
            if (triangleIntersection(shadow, scene.object[m].triangle[n]) > EPS)
                return light.shadow;
        }
    }
    // No intersection so no shadow.
    return 0;
}

/* Compute a reflection for a ray */
Ray reflectRay(Hit hit)
{
    Vector viewDirection;
    Ray reflection;
    
    // 2 (n . v) * n - v
    viewDirection = negVec(hit.ray.direction);
    reflection.direction = vecSub(scalarVecMult(2 * dot(hit.normal, viewDirection), hit.normal), viewDirection);
    reflection.source = hit.location;
    
    return reflection;
}

/* Compute a refraction ray */
Ray refractRay(Hit hit, float refractivity)
{
    Vector incidence = negVec(hit.ray.direction);
    Ray refraction;
    
    float c = dot(incidence, hit.normal);
    float inverseRef = 1 / refraction;
    float s = inverseRef * c - sqrt(1 - inverseRef * (1 - c * c));
    
    // Direction of refractive ray
    refraction.direction = vecNormalise(vecSub(scalarVecMult(s, hit.normal), scalarVecMult(inverseRef, incidence)));
    
    // The refraction occurs from the point where it hit the object
    refraction.source = hit.location;
    
    return refraction;
}
#endif