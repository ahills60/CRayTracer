/*
 * datatypes.h
 *
 * This creates some rudimentary data types for the C ray tracer
 *
 *  Created on: 3 Dec 2013
 *      Author: andrew
 */
#include <math.h>

#ifndef DATATYPES_H_
#define DATATYPES_H_

// Define some constants
#define EPS         0.00001

/* A 3D vector */
typedef struct Vector
{
    float x;
    float y;
    float z;
}
Vector;

typedef struct Matrix
{
    float m[4][4];
}
Matrix;

typedef struct Triangle
{
    Vector v0;
    Vector v1;
    Vector v2;
}
Triangle;

/* Set the coordinates of a vector */
void setVector(Vector *v, float x, float y, float z)
{
    (*v).x = x;
    (*v).y = y;
    (*v).z = z;
}

/* Fast convert of list to matrix */
void setMatrix(Matrix *F, float *m)
{
    int n, p;
    for (n = 0; n < 4; n++)
    {
        for (p = 0; p < 4; p++)
        {
            (*F).m[n][p] = m[p + 4 * n];
        }
    }
}

/* Convert from degrees to radians */
float deg2rad(float deg)
{
    return deg * M_PI_2;
}

/* Vector multiply */
Vector vecMult(Vector u, Vector v)
{
    Vector w;
    setVector(&w, u.x * v.x, u.y * v.y, u.z * v.z);
    return w;
}

/* Dot product of two vectors */
float dot(Vector u, Vector v)
{
    return u.x * v.x + u.y * v.y + u.z * v.z;
}

/* Cross product of two vectors */
Vector cross(Vector u, Vector v)
{
    Vector w;
    setVector(&w, (u.y * v.z) - (v.y * u.z), (u.z * v.x) - (v.z * u.x), (u.x * v.y) - (v.x * u.y));
    return w;
}

/* Scalar multiplication with a vector */
Vector scalarVecMult(float a, Vector u)
{
    Vector w;
    setVector(&w, a * u.x, a * u.y, a * u.z);
    return w;
}

/* Vector addition */
Vector vecAdd(Vector u, Vector v)
{
    Vector w;
    setVector(&w, u.x + v.x, u.y + v.y, u.z + v.z);
    return w;
}

/* Vector subtraction */
Vector vecSub(Vector u, Vector v)
{
    Vector w;
    setVector(&w, u.x - v.x, u.y - v.y, u.z - v.z);
    return w;
}

/* -1 * vector */
Vector negVec(Vector u)
{
    Vector w;
    setVector(&w, -u.x, -u.y, -u.z);
    return w;
}

/* Get the length of a vector */
float vecLength(Vector u)
{
    return sqrt(u.x * u.x + u.y * u.y + u.z * u.z);
}

/* Normalised vector */
Vector vecNormalised(Vector u)
{
    float a = vecLength(u);
    // Vector w;
    
    // Assume anything less than epsilon is zero
    if (a < EPS && a > -EPS)
        return u;
    
    // setVector(&w, u.x / a, u.y / a, u.z / a);
    return scalarVecMult(1 / a, u);
}

/* Matrix multiplied by a vector */
Vector matVecMult(Matrix F, Vector u)
{
    Vector w;
    // Note that we don't consider the last row within the matrix. This is discarded deliberately.
    setVector(&w, F.m[0][0] * u.x + F.m[0][1] * u.y + F.m[0][2] * u.z + F.m[0][3],
                  F.m[1][0] * u.x + F.m[1][1] * u.y + F.m[1][2] * u.z + F.m[1][3],
                  F.m[2][0] * u.x + F.m[2][1] * u.y + F.m[2][2] * u.z + F.m[2][3]);
    return w;
}

/* Matrix multiplied by a matrix */
Matrix matMult(Matrix F, Matrix G)
{
    Matrix H;
    int m, n, p;
    
    for (m = 0; m < 4; m++)
    {
        for (n = 0; n < 4; n++)
        {
            // Initialise new matrix first
            H.m[m][n] = 0.0;
            
            // Now populate with the multiplication
            for (p = 0; p < 4; p++)
            {
                 H.m[m][n] += F.m[m][p] * F.m[p][n];
            }
        }
    }
    return H;
}

/* Create an identity matrix */
Matrix genIdentMat(void)
{
    Matrix H;
    float m[16] =  {1.0, 0.0, 0.0, 0.0,
                    0.0, 1.0, 0.0, 0.0,
                    0.0, 0.0, 1.0, 0.0,
                    0.0, 0.0, 0.0, 1.0};
    setMatrix(&H, m);
    return H;
}

/* Create a rotation matrix for X-axis rotations */
Matrix genXRotateMat(float a)
{
    Matrix H;
    float cosa = cos(deg2rad(a)), sina = sin(deg2rad(a));
    
    float m[16] = {1.0, 0.0, 0.0, 0.0,
                   0.0, cosa, -sina, 0.0,
                   0.0, sina, cosa, 0.0,
                   0.0, 0.0, 0.0, 1.0};
   setMatrix(&H, m);
   return H;
}

/* Create a rotation matrix for Y-axis rotations */
Matrix genYRotateMat(float a)
{
    Matrix H;
    float cosa = cos(deg2rad(a)), sina = sin(deg2rad(a));
    
    float m[16] = {cosa, 0.0, sina, 0.0,
                   0.0, 1.0, 1.0, 0.0,
                   -sina, 0.0, cosa, 0.0,
                   0.0, 0.0, 0.0, 1.0};
   setMatrix(&H, m);
   return H;
}

/* Create a rotation matrix for Z-axis rotations */
Matrix genZRotateMat(float a)
{
    Matrix H;
    float cosa = cos(deg2rad(a)), sina = sin(deg2rad(a));
    
    float m[16] = {cosa, -sina, 0.0, 0.0,
                   sina, cosa, 0.0, 0.0,
                   0.0, 0.0, 1.0, 0.0,
                   0.0, 0.0, 0.0, 1.0};
   setMatrix(&H, m);
   return H;
}

/* Combine the three matrix rotations to give a single rotation matrix */
Matrix getRotateMatrix(float ax, float ay, float az)
{
    return matMult(matMult(genXRotateMat(ax), genYRotateMat(ay)), genZRotateMat(az));
}

Matrix genTransMatrix(float tx, float ty, float tz)
{
    Matrix H;
    float m[16] = {1.0, 0.0, 0.0, tx,
                   0.0, 1.0, 0.0, ty,
                   0.0, 0.0, 1.0, tz,
                   0.0, 0.0, 0.0, 1.0};
   setMatrix(&H, m);
   return H;
}

Matrix genScaleMatrix(float sx, float sy, float sz)
{
    Matrix H;
    float m[16] = {sx, 0.0, 0.0, 0.0,
                   0.0, sy, 0.0, 0.0,
                   0.0, 0.0, sz, 0.0,
                   0.0, 0.0, 0.0, 1.0};
    setMatrix(&H, m);
    return H;
}

#endif /* DATATYPES_H_ */
