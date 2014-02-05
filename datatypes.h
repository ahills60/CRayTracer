/*
 * datatypes.h
 *
 * This creates some rudimentary data types for the C ray tracer
 *
 *  Created on: 3 Dec 2013
 *      Author: andrew
 */
#include <math.h>

// Include math stats
#include "mathstats.h"

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
    Vector u;
    Vector v;
    Vector w;
    Vector vmu;             // v - u
    Vector wmu;             // w - u
    Vector normcrvmuwmu;    // vecNormalised(cross(vmu, wmu))
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
void setMatrix(Matrix *F, float *m, MathStat *ma)
{
    int n, p;
    for (n = 0; n < 4; n++)
    {
        statPlusInt(ma, 1); // for the loop
        for (p = 0; p < 4; p++)
        {
            statPlusInt(ma, 1); // for the loop
            (*F).m[p][n] = m[n + 4 * p];
            
            statGroupInt(ma, 1, 0, 1, 0);
        }
    }
}

/* Convert from degrees to radians */
float deg2rad(float deg, MathStat *m)
{
    statGroupFlt(m, 0, 0, 1, 1);
    return deg * M_PI / 180.0;
}

/* Vector multiply */
Vector vecMult(Vector u, Vector v, MathStat *m)
{
    Vector w;
    setVector(&w, u.x * v.x, u.y * v.y, u.z * v.z);
    statMultiplyFlt(m, 3);
    return w;
}

/* Dot product of two vectors */
float dot(Vector u, Vector v, MathStat *m)
{
    statGroupFlt(m, 2, 0, 3, 0);
    return u.x * v.x + u.y * v.y + u.z * v.z;
}

/* Cross product of two vectors */
Vector cross(Vector u, Vector v, MathStat *m)
{
    Vector w;
    setVector(&w, (u.y * v.z) - (v.y * u.z), (u.z * v.x) - (v.z * u.x), (u.x * v.y) - (v.x * u.y));
    statGroupFlt(m, 0, 3, 6, 0);
    return w;
}

/* Scalar multiplication with a vector */
Vector scalarVecMult(float a, Vector u, MathStat *m)
{
    Vector w;
    setVector(&w, a * u.x, a * u.y, a * u.z);
    statMultiplyFlt(m, 3);
    return w;
}

/* Vector addition */
Vector vecAdd(Vector u, Vector v, MathStat *m)
{
    Vector w;
    setVector(&w, u.x + v.x, u.y + v.y, u.z + v.z);
    statPlusFlt(m, 3);
    return w;
}

/* Vector subtraction */
Vector vecSub(Vector u, Vector v, MathStat *m)
{
    Vector w;
    setVector(&w, u.x - v.x, u.y - v.y, u.z - v.z);
    statSubtractFlt(m, 3);
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
float vecLength(Vector u, MathStat *m)
{
    statGroupFlt(m, 2, 0, 3, 0);
    statSqrtFlt(m, 1);
    return sqrtf(u.x * u.x + u.y * u.y + u.z * u.z);
}

/* Normalised vector */
Vector vecNormalised(Vector u, MathStat *m)
{
    float a = vecLength(u, m);
    // Vector w;
    
    // Assume anything less than epsilon is zero
    if (a < EPS && a > -EPS)
        return u;
    
    // setVector(&w, u.x / a, u.y / a, u.z / a);
    statDivideFlt(m, 1);
    return scalarVecMult(1.0 / a, u, m);
}

/* Matrix multiplied by a vector */
Vector matVecMult(Matrix F, Vector u, MathStat *m)
{
    Vector w;
    // Note that we don't consider the last row within the matrix. This is discarded deliberately.
    setVector(&w, F.m[0][0] * u.x + F.m[0][1] * u.y + F.m[0][2] * u.z + F.m[0][3],
                  F.m[1][0] * u.x + F.m[1][1] * u.y + F.m[1][2] * u.z + F.m[1][3],
                  F.m[2][0] * u.x + F.m[2][1] * u.y + F.m[2][2] * u.z + F.m[2][3]);
    statGroupFlt(m, 9, 0, 9, 0);
    return w;
}

/* Matrix multiplied by a matrix */
Matrix matMult(Matrix F, Matrix G, MathStat *ma)
{
    Matrix H;
    int m, n, p;
    
    for (m = 0; m < 4; m++)
    {
        statPlusInt(ma, 1);
        for (n = 0; n < 4; n++)
        {
            statPlusInt(ma, 1);
            // Initialise new matrix first
            H.m[n][m] = 0.0;
            
            // Now populate with the multiplication
            for (p = 0; p < 4; p++)
            {
                statPlusInt(ma, 1);
                 H.m[n][m] += F.m[n][p] * G.m[p][m];
                 statGroupFlt(ma, 1, 0, 1, 0);
            }
        }
    }
    return H;
}

/* Create an identity matrix */
Matrix genIdentMat(MathStat *ma)
{
    Matrix H;
    float m[16] =  {1.0, 0.0, 0.0, 0.0,
                    0.0, 1.0, 0.0, 0.0,
                    0.0, 0.0, 1.0, 0.0,
                    0.0, 0.0, 0.0, 1.0};
    setMatrix(&H, m, ma);
    return H;
}

/* Create a rotation matrix for X-axis rotations */
Matrix genXRotateMat(float a, MathStat *ma)
{
    Matrix H;
    float cosa = cos(deg2rad(a, ma)), sina = sin(deg2rad(a, ma));
    statSine(ma, 1);
    statCosine(ma, 1);
    
    float m[16] = {1.0, 0.0, 0.0, 0.0,
                   0.0, cosa, -sina, 0.0,
                   0.0, sina, cosa, 0.0,
                   0.0, 0.0, 0.0, 1.0};
   setMatrix(&H, m, ma);
   return H;
}

/* Create a rotation matrix for Y-axis rotations */
Matrix genYRotateMat(float a, MathStat *ma)
{
    Matrix H;
    float cosa = cos(deg2rad(a, ma)), sina = sin(deg2rad(a, ma));
    statSine(ma, 1);
    statCosine(ma, 1);
    
    float m[16] = {cosa, 0.0, sina, 0.0,
                   0.0, 1.0, 0.0, 0.0,
                   -sina, 0.0, cosa, 0.0,
                   0.0, 0.0, 0.0, 1.0};
   setMatrix(&H, m, ma);
   return H;
}

/* Create a rotation matrix for Z-axis rotations */
Matrix genZRotateMat(float a, MathStat *ma)
{
    Matrix H;
    float cosa = cos(deg2rad(a, ma)), sina = sin(deg2rad(a, ma));
    statSine(ma, 1);
    statCosine(ma, 1);
    
    float m[16] = {cosa, -sina, 0.0, 0.0,
                   sina, cosa, 0.0, 0.0,
                   0.0, 0.0, 1.0, 0.0,
                   0.0, 0.0, 0.0, 1.0};
   setMatrix(&H, m, ma);
   return H;
}

/* Combine the three matrix rotations to give a single rotation matrix */
Matrix getRotateMatrix(float ax, float ay, float az, MathStat *ma)
{
    return matMult(matMult(genXRotateMat(ax, ma), genYRotateMat(ay, ma), ma), genZRotateMat(az, ma), ma);
}

Matrix genTransMatrix(float tx, float ty, float tz, MathStat *ma)
{
    Matrix H;
    float m[16] = {1.0, 0.0, 0.0, tx,
                   0.0, 1.0, 0.0, ty,
                   0.0, 0.0, 1.0, tz,
                   0.0, 0.0, 0.0, 1.0};
   setMatrix(&H, m, ma);
   return H;
}

Matrix genScaleMatrix(float sx, float sy, float sz, MathStat *ma)
{
    Matrix H;
    float m[16] = {sx, 0.0, 0.0, 0.0,
                   0.0, sy, 0.0, 0.0,
                   0.0, 0.0, sz, 0.0,
                   0.0, 0.0, 0.0, 1.0};
    setMatrix(&H, m, ma);
    return H;
}

void setTriangle(Triangle *triangle, Vector u, Vector v, Vector w, MathStat *m)
{
    (*triangle).u = u;
    (*triangle).v = v;
    (*triangle).w = w;
    (*triangle).vmu = vecSub(v, u, m);
    (*triangle).wmu = vecSub(w, u, m);
    (*triangle).normcrvmuwmu = vecNormalised(cross((*triangle).vmu, (*triangle).wmu, m), m);
}

#endif /* DATATYPES_H_ */
