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

#include "fpmath.h"

#include "datatypes.h"
#include "objects.h"

// Add math stats
#include "mathstats.h"

// Add function stats
#include "funcstats.h"

// To help determine which element of vector to take based on the most dominant index.
// This saves on computing modulo itself.
int DomMod[5] = {0, 1, 2, 0, 1};

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
    fixedp distance;             // Distance from the camera to the nearest hit.
    int triangleIndex;          // The index of the triangle that was hit (useful for extracting UV information later)
    fixedp Mu;                  // Texture U-axis coefficient
    fixedp Mv;                  // Texture V-axis coefficient
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
    fixedp sx = fp_mult(fp_Int2FP(x), camera.dfovardw) - camera.fovar;
    statGroupFlt(m, 0, 1, 1, 0);
    fixedp sy = fp_mult(fp_Int2FP(y), camera.dfovdh) - camera.fov;
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
fixedp triangleIntersection(Ray ray, Triangle triangle, fixedp CurDist, MathStat *m, FuncStat *f)
{
    int ku, kv;
    fixedp dk, du, dv, ok, ou, ov, denom, dist, beta, gamma, hu, hv, au, av;
    
    // Firstly get the correct axes and offset using modulus array:
    ku = DomMod[triangle.DominantAxisIdx + 1];
    kv = DomMod[triangle.DominantAxisIdx + 2];
    
    // Now take the correct components for destination
    dk = (triangle.DominantAxisIdx == 0) ? ray.direction.x : ((triangle.DominantAxisIdx == 1) ? ray.direction.y : ray.direction.z);
    du = (ku == 0) ? ray.direction.x : ((ku == 1) ? ray.direction.y : ray.direction.z);
    dv = (kv == 0) ? ray.direction.x : ((kv == 1) ? ray.direction.y : ray.direction.z);
    // then the same for the source
    ok = (triangle.DominantAxisIdx == 0) ? ray.source.x : ((triangle.DominantAxisIdx == 1) ? ray.source.y : ray.source.z);
    ou = (ku == 0) ? ray.source.x : ((ku == 1) ? ray.source.y : ray.source.z);
    ov = (kv == 0) ? ray.source.x : ((kv == 1) ? ray.source.y : ray.source.z);
    
    // Compute demoninator:
    denom = dk + fp_mult(triangle.NUDom, du) + fp_mult(triangle.NVDom, dv);
    dist = fp_div(triangle.NDDom - ok - fp_mult(triangle.NUDom, ou) - fp_mult(triangle.NVDom, ov), denom);
    
    // Early exit if the computed distances is greater than what we've already encountered
    // and if it's not a valid distance.
    if (!(CurDist > dist && dist > 0))
        return 0;
    
    // Extract points from primary vector:
    au = (ku == 0) ? triangle.u.x : ((ku == 1) ? triangle.u.y : triangle.u.z);
    av = (kv == 0) ? triangle.u.x : ((kv == 1) ? triangle.u.y : triangle.u.z);
    
    // Continue calculating intersections.
    hu = ou + fp_mult(dist, du) - au;
    hv = ov + fp_mult(dist, dv) - av;
    beta = fp_mult(hv, triangle.BUDom) + fp_mult(hu, triangle.bvDom);
    
    // If this is negative, early exit
    if (beta < 0)
        return 0;
    
    gamma = fp_mult(hu, triangle.CUDom) + fp_mult(hv, triangle.CVDom);
    // Then exit if this is also negative
    if (gamma < 0)
        return 0;
    
    // And exit if they add up to something greater than 1:
    if ((gamma + beta) > 1)
        return 0;
    
    // If here, it looks like we have an intersection.
    return dist;
    
    
    /*
    fixedp intersection, a, b, c, tempVar, arecip;
    Vector edge1, edge2, u, v, w;
    int bitshift1 = 0, bitshift2 = 0, bitshift3 = 0, bitdiff = 0, bitdiff2 = 0, biteval, biteval2;
    
    (*f).triangleIntersection++;
    
    // Compute the edges of the triangle
    edge1 = triangle.vmu;
    edge2 = triangle.wmu;
    
    // Determine if there's an intersection (within tolerance)
    u = cross(ray.direction, edge2, m, f);
    a = dot(edge1, u, m, f);
    if (a > -EPS && a < EPS)
        return 0; // No intersection
    
    v = vecSub(ray.source, triangle.u, m, f);
    b = dot(v, u, m, f);
    
    if ((b & 0x80000000) ^ (a & 0x80000000))
        return 0;
    
    // Reciprocal of a (normalising constant)
    arecip = fp_div(fp_fp1, a);
    statDivideFlt(m, 1);
    
    // Temporarily hold this variable
    tempVar = fp_fabs(b);
    if (tempVar & 0xFFFF0000)
    {
        tempVar >>= 16;
        bitshift1 += 16;
    }
    if (tempVar & 0x0000FF00)
    {
        tempVar >>= 8;
        bitshift1 += 8;
    }
    if (tempVar & 0x000000F0)
    {
        tempVar >>= 4;
        bitshift1 += 4;
    }
    if (tempVar & 0x0000000C)
    {
        tempVar >>= 2;
        bitshift1 += 2;
    }
    if (tempVar & 0x00000002)
    {
        tempVar >>= 1;
        bitshift1 += 1;
    }
    // if ((tempVar & 0x00000001) > 0)
    // {
    //     tempVar >>= 1;
    //     bitshift1 += 1;
    // }
    bitshift1 += tempVar;
    
    // Now do the same for a:
    tempVar = fp_fabs(arecip);
    if (tempVar & 0xFFFF0000)
    {
        tempVar >>= 16;
        bitshift2 += 16;
    }
    if (tempVar & 0x0000FF00)
    {
        tempVar >>= 8;
        bitshift2 += 8;
    }
    if (tempVar & 0x000000F0)
    {
        tempVar >>= 4;
        bitshift2 += 4;
    }
    if (tempVar & 0x0000000C)
    {
        tempVar >>= 2;
        bitshift2 += 2;
    }
    if (tempVar & 0x00000002)
    {
        tempVar >>= 1;
        bitshift2 += 1;
    }
    // if ((tempVar & 0x00000001) > 0)
    // {
    //     tempVar >>= 1;
    //     bitshift2 += 1;
    // }
    bitshift2 += tempVar;
    // Compute shift calculation
    bitdiff = bitshift1 + bitshift2 - 47;
    // If the below is true, no shifting is required.
    biteval = bitdiff <= 0; // (bitshift1 + 16 - bitshift2 <= 30);
    // b = fp_div(b, biteval ? a : (a << bitdiff));
    statMultiplyFlt(m, 1);
    if (biteval)
        {
            b = fp_mult(b, arecip);
            if (b > fp_fp1)//(biteval ? fp_fp1 : (fp_fp1 >> bitdiff)))
                return 0; // no intersection
        }
    else
    {
        if (bitshift1 > bitshift2)
        {
            b = fp_mult(b >> bitdiff, arecip);
        }
        else
        {
            b = fp_mult(b, arecip >> bitdiff);
        }
        if (b > (fp_fp1 >> bitdiff))
            return 0; // no intersection
    }
    
    // 
    // if (b < 0 || b > fp_fp1)//(biteval ? fp_fp1 : (fp_fp1 >> bitdiff)))
    //     return 0; // no intersection
    
    w = cross(v, edge1, m, f);
    c = dot(ray.direction, w, m, f);
    if ((c & 0x80000000) ^ (a & 0x80000000))
        return 0;
    // Temporarily hold this variable:
    tempVar = fp_fabs(c);
    if (tempVar & 0xFFFF0000)
    {
        tempVar >>= 16;
        bitshift3 += 16;
    }
    if (tempVar & 0x0000FF00)
    {
        tempVar >>= 8;
        bitshift3 += 8;
    }
    if (tempVar & 0x000000F0)
    {
        tempVar >>= 4;
        bitshift3 += 4;
    }
    if (tempVar & 0x0000000C)
    {
        tempVar >>= 2;
        bitshift3 += 2;
    }
    if (tempVar & 0x00000002)
    {
        tempVar >>= 1;
        bitshift3 += 1;
    }
    // if ((tempVar & 0x00000001) > 0)
    // {
    //     tempVar >>= 1;
    //     bitshift3 += 1;
    // }
    bitshift3 += tempVar;
    bitdiff2 = bitshift3 + bitshift2 - 47;
    // If the below statement is true, no shifting is required.
    biteval2 = bitdiff2 <= 0; 
    
    statMultiplyFlt(m, 1);
    statPlusFlt(m, 1);
    if (!biteval2)
    {
        if (bitshift3 > bitshift2)
        {
            c = fp_mult(c >> bitdiff2, arecip); //c = fp_mult(dot(ray.direction, w, m, f), arecip);
        }
        else
        {
            c = fp_mult(c, arecip >> bitdiff2); //c = fp_mult(dot(ray.direction, w, m, f), arecip);
        }
        // c = fp_div(c, (a << bitdiff));
        // b was shifted and this needs shifting, so...
        if (biteval)
        {
            // variable b wasn't shifted before, so we need to compensate
            if ((b >> bitdiff2) + c > (fp_fp1 >> bitdiff2))
                return 0; // no intersection
        }
        else
        {
            if (bitdiff > bitdiff2)
            {
                // b was shifted more than c. Shift c by b.
                if (b + (c >> (bitdiff - bitdiff2)) > (fp_fp1 >> bitdiff))
                    return 0; // no intersection
            }
            else
            {
                // Bitdiff2 >= bitdiff
                // c was shifted more than b. Shift b by c
                if ((b >> (bitdiff2 - bitdiff)) + c > (fp_fp1 >> bitdiff2))
                    return 0; // no intersection
            }
        }
    }
    else
    {
        // c = fp_div(c, a);
        c = fp_mult(c, arecip); //c = fp_mult(dot(ray.direction, w, m, f), arecip);
        if (biteval)
        {
            // Variable b wasn't shifted before and c doesn't shift
            if (b + c > fp_fp1)
                return 0; // no intersection
        }
        else
        {
            // Variable b was shifted and c wasn't shifted.
            if (b + (c >> bitdiff) > (fp_fp1 >> bitdiff))
                return 0; // no intersection
        }
    }
    
    intersection = fp_mult(dot(edge2, w, m, f), arecip);//fp_div(dot(edge2, w, m, f), a); 
    
    statMultiplyFlt(m, 1);
    
    // Determine whether the intersection is significant 
    // and not due to rounding error.
    if (intersection > EPS)
        return intersection;
    else
        return 0;
    */
}

/* Go through the triangles within an object and find one that intersects with this ray */
Hit objectIntersection(Ray ray, Object object, int objectIndex, MathStat *m, FuncStat *f)
{
    fixedp intersectionPoint, nearestIntersection = FURTHEST_RAY;
    int n, nearestIdx;
    Hit hit;
    
    (*f).objectIntersection++;
    
    // Default distance is 0 just in case there's no hit
    hit.distance = 0;
    
    for (n = 0; n < object.noTriangles; n++)
    {
        statPlusInt(m, 1); // For the loop
        intersectionPoint = triangleIntersection(ray, object.triangle[n], nearestIntersection, m, f);
        
        // Determine whether there was an intersection and whether this was
        // the closest intersection to the camera for this object
        if (intersectionPoint > 0 && intersectionPoint < nearestIntersection)
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
    if (nearestIntersection > 0 && nearestIntersection < FURTHEST_RAY)
    {
        hit.location = vecAdd(ray.source, scalarVecMult(nearestIntersection, ray.direction, m, f), m, f);
        hit.triangleIndex = nearestIdx;
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
        if (hit.distance > 0 && hit.distance < nearestHit.distance)
            nearestHit = hit;
    }
    
    // If there wasn't a collosition or it was too far away, then:
    if (nearestHit.distance <= 0 || nearestHit.distance >= FURTHEST_RAY)
        nearestHit.objectIndex = -1;
    return nearestHit;
}

/* Trace a ray back and find the shadow for a particular light source*/
fixedp traceShadow(Hit hit, Scene scene, Light light, Vector direction, MathStat *ma, FuncStat *f)
{
    Ray shadow;
    int n, m;
    
    (*f).traceShadow++;
    
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
            if (triangleIntersection(shadow, scene.object[m].triangle[n], ma, f) > 0x1000)
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
    reflection.direction = vecSub(scalarVecMult(dot(hit.normal, viewDirection, m, f) << 1, hit.normal, m, f), viewDirection, m, f);
    statMultiplyFlt(m, 1);
    reflection.source = hit.location;
    
    return reflection;
}

/* Compute a refraction ray */
Ray refractRay(Hit hit, fixedp inverserefractivity, fixedp squareinverserefractivity, MathStat *m, FuncStat *f)
{
    (*f).refractRay++;
    
    Vector incidence = negVec(hit.ray.direction, f);
    Ray refraction;
    
    fixedp c = dot(incidence, hit.normal, m, f);
    fixedp s = fp_mult(inverserefractivity, c) - fp_sqrt(fp_fp1 - fp_mult(squareinverserefractivity, (fp_fp1 - fp_mult(c, c))));
    statGroupFlt(m, 0, 3, 3, 0);
    statSqrtFlt(m, 1);
    
    // Direction of refractive ray
    refraction.direction = vecNormalised(vecSub(scalarVecMult(s, hit.normal, m, f), scalarVecMult(inverserefractivity, incidence, m, f), m, f), m, f);
    
    // The refraction occurs from the point where it hit the object
    refraction.source = hit.location;
    
    return refraction;
}
#endif
