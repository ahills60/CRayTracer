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
void createCube(Object *object, Material material, float size)
{
    Vector u, v, w, minBound, maxBound;
    Triangle *triangle;
    
    // Allocate memory for the 12 triangles and make up the cube
    triangle = (Triangle *)malloc(sizeof(Triangle) * 12);
    
    // Define the bounds of the object. Note that this is prior
    // to translating the object to a specific position
    size *= 0.5;
    setVector(&minBound, -size, -size, -size);
    setVector(&maxBound, size, size, size);
    
    /* Start with the front of the cube (fixed in z) */
    // Triangle 1:
    setVector(&u, minBound.x, minBound.y, minBound.z);
    setVector(&v, maxBound.x, minBound.y, minBound.z);
    setVector(&w, maxBound.x, maxBound.y, minBound.z);
    setTriangle(&triangle[0], w, v, u);
    // Triangle 2:
    setVector(&u, maxBound.x, maxBound.y, minBound.z);
    setVector(&v, minBound.x, maxBound.y, minBound.z);
    setVector(&w, minBound.x, minBound.y, minBound.z);
    setTriangle(&triangle[1], w, v, u);
    
    /* Right side (fixed in x) */
    // Triangle 1:
    setVector(&u, maxBound.x, minBound.y, minBound.z);
    setVector(&v, maxBound.x, minBound.y, maxBound.z);
    setVector(&w, maxBound.x, maxBound.y, maxBound.z);
    setTriangle(&triangle[2], w, v, u);
    // Triangle 2:
    setVector(&u, maxBound.x, maxBound.y, maxBound.z);
    setVector(&v, maxBound.x, maxBound.y, minBound.z);
    setVector(&w, maxBound.x, minBound.y, minBound.z);
    setTriangle(&triangle[3], w, v, u);
    
    /* Back side of cube (fixed in z) */
    // Triangle 1:
    setVector(&u, maxBound.x, minBound.y, maxBound.z);
    setVector(&v, minBound.x, minBound.y, maxBound.z);
    setVector(&w, minBound.x, maxBound.y, maxBound.z);
    setTriangle(&triangle[4], w, v, u);
    // Triangle 2:
    setVector(&u, minBound.x, maxBound.y, maxBound.z);
    setVector(&v, maxBound.x, maxBound.y, maxBound.z);
    setVector(&w, maxBound.x, minBound.y, maxBound.z);
    setTriangle(&triangle[5], w, v, u);
    
    /* Left side (fixed in x) */
    // Triangle 1:
    setVector(&u, minBound.x, minBound.y, maxBound.z);
    setVector(&v, minBound.x, minBound.y, minBound.z);
    setVector(&w, minBound.x, maxBound.y, minBound.z);
    setTriangle(&triangle[6], w, v, u);
    // Triangle 2:
    setVector(&u, minBound.x, maxBound.y, minBound.z);
    setVector(&v, minBound.x, maxBound.y, maxBound.z);
    setVector(&w, minBound.x, minBound.y, maxBound.z);
    setTriangle(&triangle[7], w, v, u);
    
    /* Bottom side (fixed in y) */
    // Triangle 1:
    setVector(&u, minBound.x, minBound.y, minBound.z);
    setVector(&v, minBound.x, minBound.y, maxBound.z);
    setVector(&w, maxBound.x, minBound.y, maxBound.z);
    setTriangle(&triangle[8], w, v, u);
    // Triangle 2:
    setVector(&u, maxBound.x, minBound.y, maxBound.z);
    setVector(&v, maxBound.x, minBound.y, minBound.z);
    setVector(&w, minBound.x, minBound.y, minBound.z);
    setTriangle(&triangle[9], w, v, u);
    
    /* Top side (fixed in y) */
    // Triangle 1:
    setVector(&u, minBound.x, maxBound.y, minBound.z);
    setVector(&v, maxBound.x, maxBound.y, minBound.z);
    setVector(&w, maxBound.x, maxBound.y, maxBound.z);
    setTriangle(&triangle[10], w, v, u);
    // Triangle 2:
    setVector(&u, maxBound.x, maxBound.y, maxBound.z);
    setVector(&v, minBound.x, maxBound.y, maxBound.z);
    setVector(&w, minBound.x, maxBound.y, minBound.z);
    setTriangle(&triangle[11], w, v, u);
    
    // Now create the object
    setObject(object, material, 12, triangle);
}

/* Define a plane that lies on the X-Z axis */
void createPlaneXZ(Object *object, Material material, float size)
{
    Triangle *triangle;
    Vector u, v, w;
    triangle = (Triangle *)malloc(sizeof(Triangle) * 2);
    
    size *= 0.5;
    
    // Triangle 1:
    setVector(&u, size, 0.0, size);
    setVector(&v, size, 0.0, -size);
    setVector(&w, -size, 0.0, -size);
    setTriangle(&triangle[0], u, v, w);
    
    // Triangle 2:
    setVector(&u, size, 0.0, size);
    setVector(&v, -size, 0.0, size);
    setVector(&w, -size, 0.0, -size);
    setTriangle(&triangle[1], w, v, u);
    
    // Now create the object
    setObject(object, material, 2, triangle);
}

/* Divides triangles given a triangle */
void divideTriangles(Triangle baseTriangle, Triangle *triangle, float radius, MathStat *m){
    Vector u, v, w;
    
    // Compute the centre of triangle edges
    u = scalarVecMult(radius, vecNormalised(vecAdd(baseTriangle.u, baseTriangle.v, m), m), m);
    v = scalarVecMult(radius, vecNormalised(vecAdd(baseTriangle.v, baseTriangle.w, m), m), m);
    w = scalarVecMult(radius, vecNormalised(vecAdd(baseTriangle.w, baseTriangle.u, m), m), m);
    
    // Now create triangles from these vectors
    setTriangle(&triangle[0], u, v, w);
    setTriangle(&triangle[1], baseTriangle.u, u, w);
    setTriangle(&triangle[2], u, baseTriangle.v, v);
    setTriangle(&triangle[3], w, v, baseTriangle.w);
}

/* Subdivides triangles and calls divisions when necessary */
void subdivideTriangles(int resolution, Triangle baseTriangle, Triangle *triangle, int noTriangles, float radius, MathStat *m)
{
    Triangle subTriangle[4];
    int n, noSubTriangles = (int)pow(4, (float)resolution - 1);
    
    if (resolution > 0)
    {
        divideTriangles(baseTriangle, subTriangle, radius, m);
        
        // Decrement resolution and resume subdivision
        for (n = 0; n < 4; n++)
        {
            subdivideTriangles(resolution - 1, subTriangle[n], triangle, noTriangles + n * noSubTriangles, radius, m);
        }
    }
    else
    {
        // Recursion completed. Finally add the input triangle to the list and continue
        triangle[noTriangles] = baseTriangle;
    }
}

/* Create a sphere using triangles. The resolution should be a power of 4 */
void createSphere(Object *object, Material material, float radius, int resolution, MathStat *m)
{
    Vector v[6];
    Triangle baseTriangle[8];
    Triangle *triangle;
    
    int noTriangles, n;
    
    /*
        The sphere will start as an octohedron formed from base triangles. The product
        is then smoothed by subdividing into smaller triangles.
    */
    // Calculate the number of triangles:
    noTriangles = 8 * (int)pow(4, resolution);
    
    // Allocate memory for the necessary number of triangles
    triangle = (Triangle *)malloc(sizeof(Triangle) * noTriangles);
    
    // Create base vectors
    setVector(&v[0], 0, 0, -radius);
    setVector(&v[1], 0, -radius, 0);
    setVector(&v[2], -radius, 0, 0);
    setVector(&v[3], 0, 0, radius);
    setVector(&v[4], 0, radius, 0);
    setVector(&v[5], radius, 0, 0);
    
    // Form top triangles:
    setTriangle(&baseTriangle[0], v[5], v[4], v[3]);
    setTriangle(&baseTriangle[1], v[3], v[4], v[2]);
    setTriangle(&baseTriangle[2], v[2], v[4], v[0]);
    setTriangle(&baseTriangle[3], v[0], v[4], v[5]);
    
    // For bottom triangles:
    setTriangle(&baseTriangle[4], v[3], v[1], v[5]);
    setTriangle(&baseTriangle[5], v[5], v[1], v[0]);
    setTriangle(&baseTriangle[6], v[0], v[1], v[2]);
    setTriangle(&baseTriangle[7], v[2], v[1], v[3]);
    
    // Subdivide for each of the triangles
    for (n = 0; n < 8; n++)
    {
        subdivideTriangles(resolution, baseTriangle[n], triangle, n * noTriangles / 8, radius, m);
    }
    
    // Bring these triangles together and create the object
    setObject(object, material, noTriangles, triangle);
}
#endif