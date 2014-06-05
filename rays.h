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
int DomMod[] = {0, 1, 2, 0, 1};

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
    int bitshift;               // The number of bits shifted for this hit.
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
fixedp triangleIntersection(Ray ray, Triangle triangle, fixedp CurDist, fixedp *Mu, fixedp *Mv, int *bitshift, MathStat *m, FuncStat *f)
{
    int ku, kv;
    fixedp dk, du, dv, ok, ou, ov, denom, dist, hu, hv, au, av, numer, beta, gamma, cmpopt;
    // float betafl, gammafl;
    // And some variables for bit shifting:
    int shift1, msb1, msb2, bitdiff1, biteval;
    fixedp tempVar1, tempVar2;
    
    // Determine if an error occurred when preprocessing this triangle.
    if (triangle.DominantAxisIdx > 2 || triangle.DominantAxisIdx < 0)
        return 0;
    
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
    DEBUG_PRINT("1");
    denom = dk + fp_mult(triangle.NUDom, du) + fp_mult(triangle.NVDom, dv);
    if (denom < 0x4 && denom > -0x4)
        return 0;
    // denom = (denom == 0) ? fp_fp1 : denom;
    DEBUG_PRINT(".\n2a");
    numer = triangle.NDDom - ok - fp_mult(triangle.NUDom, ou) - fp_mult(triangle.NVDom, ov);
    if (numer == 0)
        return 0;
    // Before we do the actual division, do a sign check:
    if ((denom & 0x80000000) ^ (numer & 0x80000000))
        return 0;
    DEBUG_PRINT(".\n2x");
    // denom = fp_div(fp_fp1, denom);
    
    tempVar1 = fp_fabs(numer);
    msb1 = 0;
    // Work out where the msb is:
    if (tempVar1 & 0xFFFF0000)
    {
        tempVar1 >>= 16;
        msb1 += 16;
    }
    if (tempVar1 & 0x0000FF00)
    {
        tempVar1 >>= 8;
        msb1 += 8;
    }
    if (tempVar1 & 0x000000F0)
    {
        tempVar1 >>= 4;
        msb1 += 4;
    }
    if (tempVar1 & 0x0000000C)
    {
        tempVar1 >>= 2;
        msb1 += 2;
    }
    if (tempVar1 & 0x00000002)
    {
        tempVar1 >>= 1;
        msb1 += 1;
    }
    // Then add any remaining:
    msb1 += tempVar1;
    
    // Now do the same to the numerator:
    tempVar1 = fp_fabs(denom);
    msb2 = 0;
    if (tempVar1 & 0xFFFF0000)
    {
        tempVar1 >>= 16;
        msb2 += 16;
    }
    if (tempVar1 & 0x0000FF00)
    {
        tempVar1 >>= 8;
        msb2 += 8;
    }
    if (tempVar1 & 0x000000F0)
    {
        tempVar1 >>= 4;
        msb2 += 4;
    }
    if (tempVar1 & 0x0000000C)
    {
        tempVar1 >>= 2;
        msb2 += 2;
    }
    if (tempVar1 & 0x00000002)
    {
        tempVar1 >>= 1;
        msb2 += 1;
    }
    // Finally, add any remaining:
    msb2 += tempVar1;
    
    // Now evaluate the bit differences:
    bitdiff1 = 16 - msb2;
    biteval = (msb1 - msb2) <= 14; // if true, then bit shifting is not required.
    if (biteval)
    {
        // do standard approach
        DEBUG_PRINT(".\n2b");
        dist = fp_div(numer, denom);
        DEBUG_PRINT(".\n");
        // Early exit if the computed distances is greater than what we've already encountered
        // and if it's not a valid distance.
        if (CurDist < dist)
            return 0;
    }
    else
    {
        dist = fp_div(numer, denom << bitdiff1);
        
        // // Now to look at the cases where one bitshift is greater than the other:
//         if (msb2 > msb1)
//         {
//             // Denominator is greater than the numerator
//             DEBUG_PRINT(".\n2c");
//             dist = fp_mult(numer >> bitdiff1, denom);
//         }
//         else
//         {
//             // Numerator is larger than the denominator:
//             DEBUG_PRINT(".\n2d");
//             dist = fp_mult(numer, denom >> bitdiff1);
//         }
        DEBUG_PRINT(".\n");
        // Finally, compute the early exit:
        if ((CurDist >> bitdiff1) < dist)
            return 0;
    }
    
    // Extract points from primary vector:
    au = (ku == 0) ? triangle.u.x : ((ku == 1) ? triangle.u.y : triangle.u.z);
    av = (kv == 0) ? triangle.u.x : ((kv == 1) ? triangle.u.y : triangle.u.z);
    
    // Continue calculating intersections.
    
    DEBUG_PRINT("3");
    if (biteval)
        hu = ou + fp_mult(dist, du) - au;
    else
        hu = (ou >> bitdiff1) + fp_mult(dist, du) - (au >> bitdiff1);
    DEBUG_PRINT(".\n4");
    if (biteval)
        hv = ov + fp_mult(dist, dv) - av;
    else
        hv = (ov >> bitdiff1) + fp_mult(dist, dv) - (av >> bitdiff1);
    DEBUG_PRINT(".\n5");
    //betafl = (((float) hv) / 65536.) * (((float)triangle.BUDom) / 65536.) + (((float) hu) / 65536.) * (((float)triangle.BVDom) / 65536.);

    beta = fp_mult(hv, triangle.BUDom) + fp_mult(hu, triangle.BVDom);
      
    DEBUG_PRINT(".\n");
    
    cmpopt = EPS + (biteval ? fp_fp1 : (fp_fp1 >> bitdiff1));

    // if (betafl < 0 || betafl > (((float)cmpopt) / 65536.))
    //     return 0;
    
    // If this is negative, early exit
    if (beta < 0 || beta > cmpopt)
        return 0;
    DEBUG_PRINT("6");
    // gammafl = (((float) hu) / 65536.) * (((float)triangle.CUDom) / 65536.) + (((float) hv) / 65536.) * (((float)triangle.CVDom) / 65536.);
    gamma = fp_mult(hu, triangle.CUDom) + fp_mult(hv, triangle.CVDom);
    DEBUG_PRINT(".\n");
    
    // if (gammafl < 0 || gammafl > (((float)cmpopt) / 65536.))
    //     return 0;
    
    // Then exit if this is also negative
    if (gamma < 0 || gamma > cmpopt)
        return 0;
    
    DEBUG_PRINT("7.\n");
    // And exit if they add up to something greater than 1:
    // if ((gamma + beta) > 1)//fp_fp1)
    // if ((gammafl + betafl) > (((float)cmpopt) / 65536.))
    //     return 0;
    
    if ((gamma + beta) > cmpopt)
        return 0;
    DEBUG_PRINT("8.\n");
    
    *Mu = beta; // fp_Flt2FP(betafl);// beta;
    *Mv = gamma; // fp_Flt2FP(gammafl); // gamma;
    *bitshift = bitdiff1;
    /*
    // Now just do the same but with floats:
    Vector edge1 = triangle.vmu;
    Vector edge2 = triangle.wmu;
    
    Vector fpu = cross(ray.direction, edge2, m, f);
    float fla = ((float) dot(edge1, fpu, m, f)) / 65536.;
    
    if (fla > 0.00001 && fla < 0.00001)
    {
        if (isShadow)
            printf("Fixed point intersection at: %f\tFloat at: A\n", ((float)dist) / 65536.);
    }
    
    Vector fpv = vecSub(ray.source, triangle.u, m, f);
    float flb = ((float) dot(fpv, fpu, m, f)) / 65536.;
    float arecip = 1. / fla;
    flb = flb * arecip;
    if (flb > 1)
    {
        if (isShadow)
            printf("Fixed point intersection at: %f\tFloat at: B\n", ((float)dist) / 65536.);
    }
    Vector fpw = cross(fpv, edge1, m, f);
    float flc = ((float) dot(ray.direction, fpw, m, f))/ 65536.;
    flc = flc * arecip;
    if (flb + flc > 1.)
    {
        if (isShadow)
            printf("Fixed point intersection at: %f\tFloat at: C\n", ((float)dist) / 65536.);
    }
    float intersection = (((float) dot(edge2, fpw, m, f))/65536.) * arecip;
    if (intersection <= 0.00001)
        if (isShadow)
            printf("Fixed point intersection at: %f\tFloat at: D\n", ((float)dist) / 65536.);
    
    if (isShadow)
    {
        printf("\tFloat at: %f\thu: %f\thv: %f\tbu: %f\tbv: %f\tcu: %f\tcv: %f\tou: %f\tau: %f\tdu: %f\tov: %f\tav: %f\tdv: %f\tk: %i\tku: %i\tkv: %i\tdk: %f\tok: %f\tbiteval: %i\n", intersection, ((float)hu)/65536., ((float)hv)/65536., ((float)triangle.BUDom)/65536., ((float)triangle.BVDom)/65536., ((float)triangle.CUDom)/65536., ((float)triangle.CVDom)/65536., ((float)ou)/65536., ((float)au)/65536., ((float)du)/65536., ((float)ov)/65536., ((float)av)/65536., ((float)dv)/65536., triangle.DominantAxisIdx, ku, kv, ((float)dk)/65536., ((float)ok)/65536., biteval);
    
        printf("Fixed point intersection at: %f\tFloat at: %f\tDiff: %f\n", ((float)dist) / 65536., intersection, intersection - ((float)dist) / 65536.);
}
    */
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

/*
fixedp triangleIntersectionShadow(Ray ray, Triangle triangle, fixedp CurDist, fixedp *Mu, fixedp *Mv, int *bitshift, int isShadow, MathStat *m, FuncStat *f)
{
    // Now just do the same but with floats:
    Vector edge1 = triangle.vmu;
    Vector edge2 = triangle.wmu;
    
    Vector fpu = cross(ray.direction, edge2, m, f);
    float fla = ((float) dot(edge1, fpu, m, f)) / 65536.;
    
    if (fla > 0.00001 && fla < 0.00001)
    {
            return 0;
            // printf("Fixed point intersection at: %f\tFloat at: A\n", ((float)dist) / 65536.);
    }
    
    Vector fpv = vecSub(ray.source, triangle.u, m, f);
    float flb = ((float) dot(fpv, fpu, m, f)) / 65536.;
    float arecip = 1. / fla;
    flb = flb * arecip;
    if (flb > 1.)
    {
        return 0;
            // printf("Fixed point intersection at: %f\tFloat at: B\n", ((float)dist) / 65536.);
    }
    Vector fpw = cross(fpv, edge1, m, f);
    float flc = ((float) dot(ray.direction, fpw, m, f))/ 65536.;
    flc = flc * arecip;
    if (flb + flc > 1.)
    {
        return 0;
        // if (isShadow)
        //     printf("Fixed point intersection at: %f\tFloat at: C\n", ((float)dist) / 65536.);
    }
    float intersection = (((float) dot(edge2, fpw, m, f))/65536.) * arecip;
    if (intersection <= 0.00001)
        return 0;
        // if (isShadow)
        //     printf("Fixed point intersection at: %f\tFloat at: D\n", ((float)dist) / 65536.);
    
//     if (isShadow)
//     {
//         printf("\tFloat at: %f\thu: %f\thv: %f\tbu: %f\tbv: %f\tcu: %f\tcv: %f\tou: %f\tau: %f\tdu: %f\tov: %f\tav: %f\tdv: %f\tk: %i\tku: %i\tkv: %i\tdk: %f\tok: %f\tbiteval: %i\n", intersection, ((float)hu)/65536., ((float)hv)/65536., ((float)triangle.BUDom)/65536., ((float)triangle.BVDom)/65536., ((float)triangle.CUDom)/65536., ((float)triangle.CVDom)/65536., ((float)ou)/65536., ((float)au)/65536., ((float)du)/65536., ((float)ov)/65536., ((float)av)/65536., ((float)dv)/65536., triangle.DominantAxisIdx, ku, kv, ((float)dk)/65536., ((float)ok)/65536., biteval);
//     
//         printf("Fixed point intersection at: %f\tFloat at: %f\tDiff: %f\n", ((float)dist) / 65536., intersection, intersection - ((float)dist) / 65536.);
// }
    // If here, it looks like we have an intersection.
    return fp_Flt2FP(intersection);
}
*/

/* Go through the triangles within an object and find one that intersects with this ray */
Hit objectIntersection(Ray ray, Object object, int objectIndex, MathStat *m, FuncStat *f)
{
    fixedp Mu, Mv, tempMu, tempMv, intersectionPoint, nearestIntersection = FURTHEST_RAY;
    int n, nearestIdx, bitshift, nearestbitshift = 32;
    Hit hit;
    
    (*f).objectIntersection++;
    
    // Default distance is 0 just in case there's no hit
    hit.distance = 0;
    
    for (n = 0; n < object.noTriangles; n++)
    {
        statPlusInt(m, 1); // For the loop
        intersectionPoint = triangleIntersection(ray, object.triangle[n], nearestIntersection, &tempMu, &tempMv, &bitshift, m, f);
        
        // Determine whether there was an intersection and whether this was
        // the closest intersection to the camera for this object
        if (bitshift <= nearestbitshift && intersectionPoint > 0 && intersectionPoint < nearestIntersection)
        {
            // Ensure that only front facing triangles reply
            if (dot(object.triangle[n].normcrvmuwmu, ray.direction, m, f) < EPS)
            {
                nearestIdx = n;
                nearestIntersection = intersectionPoint;
                nearestbitshift = bitshift;
                Mu = tempMu;
                Mv = tempMv;
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
        hit.Mu = Mu;
        hit.Mv = Mv;
        hit.bitshift = nearestbitshift;
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
    fixedp tempMu, tempMv, tempDist = FURTHEST_RAY, bitshift;
    
    (*f).traceShadow++;
    
    setRay(&shadow, hit.location, direction, f);
    
    // Now send the shadow ray back to the light. If it intersects, then the ray is a shadow
    for (m = 0; m < scene.noObjects; m++)
    {
        statPlusInt(ma, 1); // For the loop
        // Now all triangles within this object
        for (n = 0; n < scene.object[m].noTriangles; n++)
        {
            // Make sure we're not intersecting with the same triangle
            if (m == hit.objectIndex && n == hit.triangleIndex)
                continue;
            statPlusInt(ma, 1); // For the loop
            // Is this significant?
            if (triangleIntersection(shadow, scene.object[m].triangle[n], tempDist, &tempMu, &tempMv, &bitshift, ma, f) > (EPS << 1))
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
