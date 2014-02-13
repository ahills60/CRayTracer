/*
 * datatypes.h
 *
 * This creates some rudimentary data types for the C ray tracer
 *
 *  Created on: 3 Dec 2013
 *      Author: andrew
 */
#include <math.h>
// Include fixed point maths
#include "fpmath.h"

// Include math stats
#include "mathstats.h"

// Add function stats
#include "funcstats.h"

#ifndef DATATYPES_H_
#define DATATYPES_H_

// Define some constants
#define EPS         31 // Was 0.00001

/* A 3D vector */
typedef struct Vector
{
    fixedp x;
    fixedp y;
    fixedp z;
}
Vector;

typedef struct Matrix
{
    fixedp m[4][4];
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
void setVector(Vector *v, fixedp x, fixedp y, fixedp z, FuncStat *f)
{
    (*f).setVector++;
    (*v).x = x;
    (*v).y = y;
    (*v).z = z;
}

/* Fast convert of list to matrix */
void setMatrix(Matrix *F, fixedp *m, MathStat *ma, FuncStat *f)
{
    int n, p;
    (*f).setMatrix++;
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
float deg2rad(float deg, MathStat *m, FuncStat *f)
{
    (*f).deg2rad++;
    statGroupFlt(m, 0, 0, 1, 1);
    return deg * M_PI / 180.0;
}

/* Vector multiply */
Vector vecMult(Vector u, Vector v, MathStat *m, FuncStat *f)
{
    Vector w;
    (*f).vecMult++;
    setVector(&w, fp_mult(u.x, v.x), fp_mult(u.y, v.y), fp_mult(u.z, v.z), f);
    statMultiplyFlt(m, 3);
    return w;
}

/* Dot product of two vectors */
fixedp dot(Vector u, Vector v, MathStat *m, FuncStat *f)
{
    (*f).dot++;
    statGroupFlt(m, 2, 0, 3, 0);
    return fp_mult(u.x, v.x) + fp_mult(u.y, v.y) + fp_mult(u.z, v.z);
}

/* Cross product of two vectors */
Vector cross(Vector u, Vector v, MathStat *m, FuncStat *f)
{
    Vector w;
    (*f).cross++;
    setVector(&w, fp_mult(u.y, v.z) - fp_mult(v.y, u.z), fp_mult(u.z, v.x) - fp_mult(v.z, u.x), fp_mult(u.x, v.y) - fp_mult(v.x, u.y), f);
    statGroupFlt(m, 0, 3, 6, 0);
    return w;
}

/* Scalar multiplication with a vector */
Vector scalarVecMult(fixedp a, Vector u, MathStat *m, FuncStat *f)
{
    Vector w;
    (*f).scalarVecMult++;
    setVector(&w, fp_mult(a, u.x), fp_mult(a, u.y), fp_mult(a, u.z), f);
    statMultiplyFlt(m, 3);
    return w;
}

/* Vector addition */
Vector vecAdd(Vector u, Vector v, MathStat *m, FuncStat *f)
{
    Vector w;
    (*f).vecAdd++;
    setVector(&w, u.x + v.x, u.y + v.y, u.z + v.z, f);
    statPlusFlt(m, 3);
    return w;
}

/* Vector subtraction */
Vector vecSub(Vector u, Vector v, MathStat *m, FuncStat *f)
{
    Vector w;
    (*f).vecSub++;
    setVector(&w, u.x - v.x, u.y - v.y, u.z - v.z, f);
    statSubtractFlt(m, 3);
    return w;
}

/* -1 * vector */
Vector negVec(Vector u, FuncStat *f)
{
    Vector w;
    (*f).negVec++;
    setVector(&w, -u.x, -u.y, -u.z, f);
    return w;
}

/* Get the length of a vector */
fixedp vecLength(Vector u, MathStat *m, FuncStat *f)
{
    (*f).vecLength++;
    statGroupFlt(m, 2, 0, 3, 0);
    statSqrtFlt(m, 1);
    return fp_sqrt(fp_mult(u.x, u.x) + fp_mult(u.y, u.y) + fp_mult(u.z, u.z));
}

/* Normalised vector */
Vector vecNormalised(Vector u, MathStat *m, FuncStat *f)
{
    (*f).vecNormalised++;
    fixedp a = vecLength(u, m, f);
    // Vector w;
    
    // Assume anything less than epsilon is zero
    if (a < EPS && a > -EPS)
        return u;
    
    // setVector(&w, u.x / a, u.y / a, u.z / a);
    statDivideFlt(m, 1);
    return scalarVecMult(fp_div(fp_fp1, a), u, m, f);
}

/* Matrix multiplied by a vector */
Vector matVecMult(Matrix F, Vector u, MathStat *m, FuncStat *f)
{
    (*f).matVecMult++;
    Vector w;
    // Note that we don't consider the last row within the matrix. This is discarded deliberately.
    setVector(&w, fp_mult(F.m[0][0], u.x) + fp_mult(F.m[0][1], u.y) + fp_mult(F.m[0][2], u.z) + F.m[0][3],
                  fp_mult(F.m[1][0], u.x) + fp_mult(F.m[1][1], u.y) + fp_mult(F.m[1][2], u.z) + F.m[1][3],
                  fp_mult(F.m[2][0], u.x) + fp_mult(F.m[2][1], u.y) + fp_mult(F.m[2][2], u.z) + F.m[2][3], f);
    statGroupFlt(m, 9, 0, 9, 0);
    return w;
}

/* Matrix multiplied by a matrix */
Matrix matMult(Matrix F, Matrix G, MathStat *ma, FuncStat *f)
{
    (*f).matMult++;
    Matrix H;
    int m, n, p;
    
    for (m = 0; m < 4; m++)
    {
        statPlusInt(ma, 1);
        for (n = 0; n < 4; n++)
        {
            statPlusInt(ma, 1);
            // Initialise new matrix first
            H.m[n][m] = 0;
            
            // Now populate with the multiplication
            for (p = 0; p < 4; p++)
            {
                statPlusInt(ma, 1);
                 H.m[n][m] += fp_mult(F.m[n][p], G.m[p][m]);
                 statGroupFlt(ma, 1, 0, 1, 0);
            }
        }
    }
    return H;
}

/* Create an identity matrix */
Matrix genIdentMat(MathStat *ma, FuncStat *f)
{
    (*f).genIdentMat++;
    Matrix H;
    fixedp m[16] = {fp_fp1, 0, 0, 0,
                    0, fp_fp1, 0, 0,
                    0, 0, fp_fp1, 0,
                    0, 0, 0, fp_fp1};
    setMatrix(&H, m, ma, f);
    return H;
}

/* Create a rotation matrix for X-axis rotations */
Matrix genXRotateMat(fixedp a, MathStat *ma, FuncStat *f)
{
    (*f).genXRotateMat++;
    Matrix H;
    float cosa = cos(deg2rad(fp_FP2Flt(a), ma, f)), sina = sin(deg2rad(fp_FP2Flt(a), ma, f));
    statSine(ma, 1);
    statCosine(ma, 1);
    
    fixedp fpcosa = fp_Flt2FP(cosa);
    fixedp fpsina = fp_Flt2FP(sina);
    
    fixedp m[16] = {fp_fp1, 0, 0, 0,
                    0, fpcosa, -fpsina, 0,
                    0, fpsina, fpcosa, 0,
                    0, 0, 0, fp_fp1};
   setMatrix(&H, m, ma, f);
   return H;
}

/* Create a rotation matrix for Y-axis rotations */
Matrix genYRotateMat(fixedp a, MathStat *ma, FuncStat *f)
{
    (*f).genYRotateMat++;
    Matrix H;
    float cosa = cos(deg2rad(fp_FP2Flt(a), ma, f)), sina = sin(deg2rad(fp_FP2Flt(a), ma, f));
    statSine(ma, 1);
    statCosine(ma, 1);
    
    fixedp fpcosa = fp_Flt2FP(cosa);
    fixedp fpsina = fp_Flt2FP(sina);
    
    fixedp m[16] = {fpcosa, 0, fpsina, 0,
                   0, fp_fp1, 0, 0,
                   -fpsina, 0, fpcosa, 0,
                   0, 0, 0, fp_fp1};
   setMatrix(&H, m, ma, f);
   return H;
}

/* Create a rotation matrix for Z-axis rotations */
Matrix genZRotateMat(fixedp a, MathStat *ma, FuncStat *f)
{
    (*f).genZRotateMat++;
    Matrix H;
    float cosa = cos(deg2rad(fp_FP2Flt(a), ma, f)), sina = sin(deg2rad(fp_FP2Flt(a), ma, f));
    statSine(ma, 1);
    statCosine(ma, 1);
    
    fixedp fpcosa = fp_Flt2FP(cosa);
    fixedp fpsina = fp_Flt2FP(sina);
    
    fixedp m[16] = {fpcosa, -fpsina, 0, 0,
                   fpsina, fpcosa, 0, 0,
                   0, 0, fp_fp1, 0,
                   0, 0, 0, fp_fp1};
   setMatrix(&H, m, ma, f);
   return H;
}

/* Combine the three matrix rotations to give a single rotation matrix */
Matrix getRotateMatrix(fixedp ax, fixedp ay, fixedp az, MathStat *ma, FuncStat *f)
{
    (*f).getRotateMatrix++;
    return matMult(matMult(genXRotateMat(ax, ma, f), genYRotateMat(ay, ma, f), ma, f), genZRotateMat(az, ma, f), ma, f);
}

Matrix genTransMatrix(fixedp tx, fixedp ty, fixedp tz, MathStat *ma, FuncStat *f)
{
    (*f).genTransMatrix++;
    Matrix H;
    fixedp m[16] = {fp_fp1, 0, 0, tx,
                   0, fp_fp1, 0, ty,
                   0, 0, fp_fp1, tz,
                   0, 0, 0, fp_fp1};
   setMatrix(&H, m, ma, f);
   return H;
}

Matrix genScaleMatrix(fixedp sx, fixedp sy, fixedp sz, MathStat *ma, FuncStat *f)
{
    (*f).genScaleMatrix++;
    Matrix H;
    fixedp m[16] = {sx, 0, 0, 0,
                   0, sy, 0, 0,
                   0, 0, sz, 0,
                   0, 0, 0, fp_fp1};
    setMatrix(&H, m, ma, f);
    return H;
}

void setTriangle(Triangle *triangle, Vector u, Vector v, Vector w, MathStat *m, FuncStat *f)
{
    (*f).setTriangle++;
    (*triangle).u = u;
    (*triangle).v = v;
    (*triangle).w = w;
    (*triangle).vmu = vecSub(v, u, m, f);
    (*triangle).wmu = vecSub(w, u, m, f);
    (*triangle).normcrvmuwmu = vecNormalised(cross((*triangle).vmu, (*triangle).wmu, m, f), m, f);
}

#endif /* DATATYPES_H_ */
