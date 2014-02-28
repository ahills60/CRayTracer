/*
 * shapes.h
 * 
 * This header file defines shapes based on the primitive objects
 * created in objects.h file.
 *
 *  Created on: 5 Dec 2013
 *      Author: andrew
 */

#ifndef SHAPES_H_
#define SHAPES_H_

#include <math.h>
#include "datatypes.h"
#include "objects.h"

/* Define a cube */
void createCube(Object *object, Material material, fixedp size, MathStat *m, FuncStat *f)
{
    Vector u, v, w, minBound, maxBound;
    Triangle *triangle;
    
    // Allocate memory for the 12 triangles and make up the cube
    triangle = (Triangle *)malloc(sizeof(Triangle) * 12);
    
    // Define the bounds of the object. Note that this is prior
    // to translating the object to a specific position
    size >>= 1; // Halve it (was size *= 0.5)
    setVector(&minBound, -size, -size, -size, f);
    setVector(&maxBound, size, size, size, f);
    
    /* Start with the front of the cube (fixed in z) */
    // Triangle 1:
    setVector(&u, minBound.x, minBound.y, minBound.z, f);
    setVector(&v, maxBound.x, minBound.y, minBound.z, f);
    setVector(&w, maxBound.x, maxBound.y, minBound.z, f);
    setTriangle(&triangle[0], w, v, u, m, f);
    // Triangle 2:
    setVector(&u, maxBound.x, maxBound.y, minBound.z, f);
    setVector(&v, minBound.x, maxBound.y, minBound.z, f);
    setVector(&w, minBound.x, minBound.y, minBound.z, f);
    setTriangle(&triangle[1], w, v, u, m, f);
    
    /* Right side (fixed in x) */
    // Triangle 1:
    setVector(&u, maxBound.x, minBound.y, minBound.z, f);
    setVector(&v, maxBound.x, minBound.y, maxBound.z, f);
    setVector(&w, maxBound.x, maxBound.y, maxBound.z, f);
    setTriangle(&triangle[2], w, v, u, m, f);
    // Triangle 2:
    setVector(&u, maxBound.x, maxBound.y, maxBound.z, f);
    setVector(&v, maxBound.x, maxBound.y, minBound.z, f);
    setVector(&w, maxBound.x, minBound.y, minBound.z, f);
    setTriangle(&triangle[3], w, v, u, m, f);
    
    /* Back side of cube (fixed in z) */
    // Triangle 1:
    setVector(&u, maxBound.x, minBound.y, maxBound.z, f);
    setVector(&v, minBound.x, minBound.y, maxBound.z, f);
    setVector(&w, minBound.x, maxBound.y, maxBound.z, f);
    setTriangle(&triangle[4], w, v, u, m, f);
    // Triangle 2:
    setVector(&u, minBound.x, maxBound.y, maxBound.z, f);
    setVector(&v, maxBound.x, maxBound.y, maxBound.z, f);
    setVector(&w, maxBound.x, minBound.y, maxBound.z, f);
    setTriangle(&triangle[5], w, v, u, m, f);
    
    /* Left side (fixed in x) */
    // Triangle 1:
    setVector(&u, minBound.x, minBound.y, maxBound.z, f);
    setVector(&v, minBound.x, minBound.y, minBound.z, f);
    setVector(&w, minBound.x, maxBound.y, minBound.z, f);
    setTriangle(&triangle[6], w, v, u, m, f);
    // Triangle 2:
    setVector(&u, minBound.x, maxBound.y, minBound.z, f);
    setVector(&v, minBound.x, maxBound.y, maxBound.z, f);
    setVector(&w, minBound.x, minBound.y, maxBound.z, f);
    setTriangle(&triangle[7], w, v, u, m, f);
    
    /* Bottom side (fixed in y) */
    // Triangle 1:
    setVector(&u, minBound.x, minBound.y, minBound.z, f);
    setVector(&v, minBound.x, minBound.y, maxBound.z, f);
    setVector(&w, maxBound.x, minBound.y, maxBound.z, f);
    setTriangle(&triangle[8], w, v, u, m, f);
    // Triangle 2:
    setVector(&u, maxBound.x, minBound.y, maxBound.z, f);
    setVector(&v, maxBound.x, minBound.y, minBound.z, f);
    setVector(&w, minBound.x, minBound.y, minBound.z, f);
    setTriangle(&triangle[9], w, v, u, m, f);
    
    /* Top side (fixed in y) */
    // Triangle 1:
    setVector(&u, minBound.x, maxBound.y, minBound.z, f);
    setVector(&v, maxBound.x, maxBound.y, minBound.z, f);
    setVector(&w, maxBound.x, maxBound.y, maxBound.z, f);
    setTriangle(&triangle[10], w, v, u, m, f);
    // Triangle 2:
    setVector(&u, maxBound.x, maxBound.y, maxBound.z, f);
    setVector(&v, minBound.x, maxBound.y, maxBound.z, f);
    setVector(&w, minBound.x, maxBound.y, minBound.z, f);
    setTriangle(&triangle[11], w, v, u, m, f);
    
    // Now create the object
    setObject(object, material, 12, triangle, f);
}

/* Define a plane that lies on the X-Z axis */
void createPlaneXZ(Object *object, Material material, fixedp size, MathStat *m, FuncStat *f)
{
    Triangle *triangle;
    Vector u, v, w;
    triangle = (Triangle *)malloc(sizeof(Triangle) * 2);
    
    size >>= 1; // Halve it (was size *= 0.5)
    
    // Triangle 1:
    setVector(&u, size, 0, size, f);
    setVector(&v, size, 0, -size, f);
    setVector(&w, -size, 0, -size, f);
    setTriangle(&triangle[0], u, v, w, m, f);
    
    // Triangle 2:
    setVector(&u, size, 0, size, f);
    setVector(&v, -size, 0, size, f);
    setVector(&w, -size, 0, -size, f);
    setTriangle(&triangle[1], w, v, u, m, f);
    
    // Now create the object
    setObject(object, material, 2, triangle, f);
}

/* Divides triangles given a triangle */
void divideTriangles(Triangle baseTriangle, Triangle *triangle, fixedp radius, MathStat *m, FuncStat *f){
    Vector u, v, w;
    
    // Compute the centre of triangle edges
    u = scalarVecMult(radius, vecNormalised(vecAdd(baseTriangle.u, baseTriangle.v, m, f), m, f), m, f);
    v = scalarVecMult(radius, vecNormalised(vecAdd(baseTriangle.v, baseTriangle.w, m, f), m, f), m, f);
    w = scalarVecMult(radius, vecNormalised(vecAdd(baseTriangle.w, baseTriangle.u, m, f), m, f), m, f);
    
    // Now create triangles from these vectors
    setTriangle(&triangle[0], u, v, w, m, f);
    setTriangle(&triangle[1], baseTriangle.u, u, w, m, f);
    setTriangle(&triangle[2], u, baseTriangle.v, v, m, f);
    setTriangle(&triangle[3], w, v, baseTriangle.w, m, f);
}

/* Subdivides triangles and calls divisions when necessary */
void subdivideTriangles(int resolution, Triangle baseTriangle, Triangle *triangle, int noTriangles, fixedp radius, MathStat *m, FuncStat *f)
{
    Triangle subTriangle[4];
    int n, noSubTriangles = fp_powi(4, resolution - 1);
    
    if (resolution > 0)
    {
        divideTriangles(baseTriangle, subTriangle, radius, m, f);
        
        // Decrement resolution and resume subdivision
        for (n = 0; n < 4; n++)
        {
            subdivideTriangles(resolution - 1, subTriangle[n], triangle, noTriangles + n * noSubTriangles, radius, m, f);
        }
    }
    else
    {
        // Recursion completed. Finally add the input triangle to the list and continue
        triangle[noTriangles] = baseTriangle;
    }
}

/* Create a sphere using triangles. The resolution should be a power of 4 */
void createSphere(Object *object, Material material, fixedp radius, int resolution, MathStat *m, FuncStat *f)
{
    Vector v[6];
    Triangle baseTriangle[8];
    Triangle *triangle;
    
    int noTriangles, n, tempTri;
    
    /*
        The sphere will start as an octohedron formed from base triangles. The product
        is then smoothed by subdividing into smaller triangles.
    */
    // Calculate the number of triangles:
    tempTri = fp_powi(4, resolution);
    noTriangles = tempTri << 3; // Was 8 * tempTri.
    
    // Allocate memory for the necessary number of triangles
    triangle = (Triangle *)malloc(sizeof(Triangle) * noTriangles);
    
    // Create base vectors
    setVector(&v[0], 0, 0, -radius, f);
    setVector(&v[1], 0, -radius, 0, f);
    setVector(&v[2], -radius, 0, 0, f);
    setVector(&v[3], 0, 0, radius, f);
    setVector(&v[4], 0, radius, 0, f);
    setVector(&v[5], radius, 0, 0, f);
    
    // Form top triangles:
    setTriangle(&baseTriangle[0], v[5], v[4], v[3], m, f);
    setTriangle(&baseTriangle[1], v[3], v[4], v[2], m, f);
    setTriangle(&baseTriangle[2], v[2], v[4], v[0], m, f);
    setTriangle(&baseTriangle[3], v[0], v[4], v[5], m, f);
    
    // For bottom triangles:
    setTriangle(&baseTriangle[4], v[3], v[1], v[5], m, f);
    setTriangle(&baseTriangle[5], v[5], v[1], v[0], m, f);
    setTriangle(&baseTriangle[6], v[0], v[1], v[2], m, f);
    setTriangle(&baseTriangle[7], v[2], v[1], v[3], m, f);
    
    // Subdivide for each of the triangles
    for (n = 0; n < 8; n++)
    {
        subdivideTriangles(resolution, baseTriangle[n], triangle, n * tempTri, radius, m, f);
    }
    
    // Bring these triangles together and create the object
    setObject(object, material, noTriangles, triangle, f);
}
#endif