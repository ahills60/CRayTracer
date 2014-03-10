#ifndef OFCONSTRUCT_H_
#define OFCONSTRUCT_H_

#include "fpmath.h"
#include "craytracer.h"
#include "datatypes.h"
#include "rays.h"
#include "image.h"
#include "lighting.h"
#include "objects.h"
#include "colours.h"
#include "shapes.h"
#include "mathstats.h"
#include "funcstats.h"
#include "textures.h"

// This script is for model "Model"

// Put the object(s) on the scene
void populateScene(Scene *scene, Light lightSrc, MathStat *m, FuncStat *f)
{
    //fixedp normal[3];	// Storage for calculated surface normal
    
    Object myObj;
    Material myMat;
    Vector red = int2Vector(RED);
    Vector u, v, w;

    UVCoord uUV, vUV, wUV;

    ReadTexture(&texture,"texture.tga", f);
    setMaterial(&myMat, lightSrc, red, fp_Flt2FP(0.0), fp_Flt2FP(0.5), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(0.8), fp_Flt2FP(1.4), f);
    Triangle *triangle;
    triangle = (Triangle *)malloc(sizeof(Triangle) * 1196);
    // Now begin object writing

    // Triangle 0:

    setVector(&u, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.182044f), fp_Flt2FP(-0.278460f), f);
    setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(-0.253597f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.178492f), fp_Flt2FP(-0.114017f), f);
    setUVTriangle(&triangle[0], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1:

    setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.282139f), fp_Flt2FP(-0.289111f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.278588f), fp_Flt2FP(-0.114017f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.278588f), fp_Flt2FP(-0.475919f), f);
    setUVTriangle(&triangle[1], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 2:

    setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.282139f), fp_Flt2FP(-0.289111f), f);
    setVector(&v, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.282139f), fp_Flt2FP(-0.264248f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.278588f), fp_Flt2FP(-0.114017f), f);
    setUVTriangle(&triangle[2], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 3:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.829275f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.960208f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.985069f), f);
    setUVTriangle(&triangle[3], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 4:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.784766f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.829275f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.829275f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[4], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 5:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.784766f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.960208f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.829275f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[5], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 6:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.747113f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.784766f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.829275f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[6], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 7:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.725790f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.620205f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.620205f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[7], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 8:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.725790f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.763442f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.620205f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[8], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 9:

    setVector(&u, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.705629f), fp_Flt2FP(-0.564734f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.619256f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.724503f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[9], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 10:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739397f), fp_Flt2FP(-0.682928f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.619256f), f);
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.705629f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[10], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 11:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739397f), fp_Flt2FP(-0.682928f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.667563f), f);
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.619256f), f);
    setUVTriangle(&triangle[11], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 12:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.619263f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.619256f), f);
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[12], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 13:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739397f), fp_Flt2FP(-0.682928f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.741793f), f);
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.741786f), f);
    setUVTriangle(&triangle[13], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 14:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.667557f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.741793f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739397f), fp_Flt2FP(-0.682928f), f);
    setUVTriangle(&triangle[14], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 15:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.667557f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.667563f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.741793f), f);
    setUVTriangle(&triangle[15], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 16:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.632162f), fp_Flt2FP(-0.564734f), f);
    setVector(&v, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.619256f), f);
    setUVTriangle(&triangle[16], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 17:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.619256f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.739397f), fp_Flt2FP(-0.682928f), f);
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.705629f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[17], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 18:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.619256f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.667557f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739397f), fp_Flt2FP(-0.682928f), f);
    setUVTriangle(&triangle[18], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 19:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.619256f), f);
    setVector(&v, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.705629f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.632162f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[19], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 20:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646014f), fp_Flt2FP(-0.896280f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.790086f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[20], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 21:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.800863f), fp_Flt2FP(-0.985069f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.944587f), f);
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.944587f), f);
    setUVTriangle(&triangle[21], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 22:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.724504f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.944587f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646014f), fp_Flt2FP(-0.944587f), f);
    setUVTriangle(&triangle[22], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 23:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.731607f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.829275f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.800863f), fp_Flt2FP(-0.985069f), f);
    setUVTriangle(&triangle[23], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 24:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.800863f), fp_Flt2FP(-0.985069f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.829275f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.985069f), f);
    setUVTriangle(&triangle[24], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 25:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.724504f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.800863f), fp_Flt2FP(-0.985069f), f);
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.944587f), f);
    setUVTriangle(&triangle[25], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 26:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.724504f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.731607f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.800863f), fp_Flt2FP(-0.985069f), f);
    setUVTriangle(&triangle[26], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 27:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.632162f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.724504f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646014f), fp_Flt2FP(-0.944587f), f);
    setUVTriangle(&triangle[27], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 28:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.667563f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.619263f), f);
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[28], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 29:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.790086f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625059f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[29], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 30:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.632162f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646014f), fp_Flt2FP(-0.896280f), f);
    setUVTriangle(&triangle[30], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 31:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625059f), fp_Flt2FP(-0.564734f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.790086f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.741793f), f);
    setUVTriangle(&triangle[31], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 32:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.667563f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625059f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.741793f), f);
    setUVTriangle(&triangle[32], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 33:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646014f), fp_Flt2FP(-0.944587f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646014f), fp_Flt2FP(-0.896280f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.632162f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[33], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 34:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.896280f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.944587f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.896280f), f);
    setUVTriangle(&triangle[34], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 35:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.896280f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.944587f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.944587f), f);
    setUVTriangle(&triangle[35], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 36:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646014f), fp_Flt2FP(-0.896280f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.790079f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646013f), fp_Flt2FP(-0.790086f), f);
    setUVTriangle(&triangle[36], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 37:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.896280f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.790079f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646014f), fp_Flt2FP(-0.896280f), f);
    setUVTriangle(&triangle[37], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 38:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.896280f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.896280f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.790079f), f);
    setUVTriangle(&triangle[38], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 39:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.083725f), fp_Flt2FP(-0.475923f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.444316f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.444316f), f);
    setUVTriangle(&triangle[39], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 40:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.083725f), fp_Flt2FP(-0.475923f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.176066f), fp_Flt2FP(-0.475923f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.444316f), f);
    setUVTriangle(&triangle[40], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 41:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.083725f), fp_Flt2FP(-0.475923f), f);
    setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.396014f), f);
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.348427f), f);
    setUVTriangle(&triangle[41], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 42:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.444316f), f);
    setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.396014f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.083725f), fp_Flt2FP(-0.475923f), f);
    setUVTriangle(&triangle[42], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 43:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.083725f), fp_Flt2FP(-0.114019f), f);
    setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119241f), fp_Flt2FP(-0.215242f), f);
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119241f), fp_Flt2FP(-0.166935f), f);
    setUVTriangle(&triangle[43], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 44:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176066f), fp_Flt2FP(-0.114017f), f);
    setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119241f), fp_Flt2FP(-0.166935f), f);
    setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.166937f), f);
    setUVTriangle(&triangle[44], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 45:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176066f), fp_Flt2FP(-0.114017f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.083725f), fp_Flt2FP(-0.114019f), f);
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119241f), fp_Flt2FP(-0.166935f), f);
    setUVTriangle(&triangle[45], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 46:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176066f), fp_Flt2FP(-0.475923f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.396017f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.444316f), f);
    setUVTriangle(&triangle[46], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 47:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176066f), fp_Flt2FP(-0.475923f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.176066f), fp_Flt2FP(-0.114017f), f);
    setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.300119f), f);
    setUVTriangle(&triangle[47], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 48:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176066f), fp_Flt2FP(-0.475923f), f);
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.300119f), f);
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.348427f), f);
    setUVTriangle(&triangle[48], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 49:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.396017f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.176066f), fp_Flt2FP(-0.475923f), f);
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.348427f), f);
    setUVTriangle(&triangle[49], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 50:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.300119f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.176066f), fp_Flt2FP(-0.114017f), f);
    setVector(&w, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.215239f), f);
    setUVTriangle(&triangle[50], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 51:

    setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.166937f), f);
    setVector(&v, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.215239f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.176066f), fp_Flt2FP(-0.114017f), f);
    setUVTriangle(&triangle[51], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 52:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.300119f), f);
    setVector(&v, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.215239f), f);
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119241f), fp_Flt2FP(-0.215242f), f);
    setUVTriangle(&triangle[52], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 53:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.300119f), f);
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.300119f), f);
    setVector(&w, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.215239f), f);
    setUVTriangle(&triangle[53], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 54:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.348427f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.083725f), fp_Flt2FP(-0.114019f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.083725f), fp_Flt2FP(-0.475923f), f);
    setUVTriangle(&triangle[54], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 55:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.300119f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.083725f), fp_Flt2FP(-0.114019f), f);
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.348427f), f);
    setUVTriangle(&triangle[55], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 56:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.300119f), f);
    setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119241f), fp_Flt2FP(-0.215242f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.083725f), fp_Flt2FP(-0.114019f), f);
    setUVTriangle(&triangle[56], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 57:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.348427f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.396017f), f);
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.348427f), f);
    setUVTriangle(&triangle[57], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 58:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.348427f), f);
    setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119240f), fp_Flt2FP(-0.396014f), f);
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(-0.396017f), f);
    setUVTriangle(&triangle[58], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 59:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.215242f), f);
    setVector(&v, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.282139f), fp_Flt2FP(-0.264248f), f);
    setVector(&w, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.307000f), fp_Flt2FP(-0.264252f), f);
    setUVTriangle(&triangle[59], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 60:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.215242f), f);
    setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.166935f), f);
    setVector(&w, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.282139f), fp_Flt2FP(-0.264248f), f);
    setUVTriangle(&triangle[60], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 61:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.300118f), f);
    setVector(&v, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.282139f), fp_Flt2FP(-0.289111f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.278588f), fp_Flt2FP(-0.475919f), f);
    setUVTriangle(&triangle[61], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 62:

    setVector(&u, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.307000f), fp_Flt2FP(-0.289109f), f);
    setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.215240f), f);
    setVector(&w, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.307000f), fp_Flt2FP(-0.264252f), f);
    setUVTriangle(&triangle[62], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 63:

    setVector(&u, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.307000f), fp_Flt2FP(-0.264252f), f);
    setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.215240f), f);
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.215242f), f);
    setUVTriangle(&triangle[63], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 64:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.300118f), f);
    setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.215240f), f);
    setVector(&w, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.307000f), fp_Flt2FP(-0.289109f), f);
    setUVTriangle(&triangle[64], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 65:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.300118f), f);
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.300119f), f);
    setVector(&w, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.215240f), f);
    setUVTriangle(&triangle[65], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 66:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.475926f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.396017f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.444316f), f);
    setUVTriangle(&triangle[66], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 67:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.278588f), fp_Flt2FP(-0.475919f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.444316f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.444316f), f);
    setUVTriangle(&triangle[67], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 68:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.278588f), fp_Flt2FP(-0.475919f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.475926f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.444316f), f);
    setUVTriangle(&triangle[68], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 69:

    setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.282139f), fp_Flt2FP(-0.289111f), f);
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.300118f), f);
    setVector(&w, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.307000f), fp_Flt2FP(-0.289109f), f);
    setUVTriangle(&triangle[69], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 70:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.300118f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.278588f), fp_Flt2FP(-0.475919f), f);
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.348427f), f);
    setUVTriangle(&triangle[70], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 71:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.348427f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.278588f), fp_Flt2FP(-0.475919f), f);
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.396017f), f);
    setUVTriangle(&triangle[71], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 72:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.444316f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.396017f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.278588f), fp_Flt2FP(-0.475919f), f);
    setUVTriangle(&triangle[72], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 73:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.348427f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.396017f), f);
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.396017f), f);
    setUVTriangle(&triangle[73], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 74:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.348427f), f);
    setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.348427f), f);
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.396017f), f);
    setUVTriangle(&triangle[74], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 75:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.278588f), fp_Flt2FP(-0.114017f), f);
    setVector(&v, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.282139f), fp_Flt2FP(-0.264248f), f);
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.166935f), f);
    setUVTriangle(&triangle[75], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 76:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.114017f), f);
    setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.166935f), f);
    setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.166937f), f);
    setUVTriangle(&triangle[76], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 77:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.114017f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.278588f), fp_Flt2FP(-0.114017f), f);
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(-0.166935f), f);
    setUVTriangle(&triangle[77], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 78:

    setVector(&u, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.215240f), f);
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.300119f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.114017f), f);
    setUVTriangle(&triangle[78], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 79:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.300119f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.475926f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.114017f), f);
    setUVTriangle(&triangle[79], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 80:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.348427f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.475926f), f);
    setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.300119f), f);
    setUVTriangle(&triangle[80], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 81:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.348427f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.396017f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.475926f), f);
    setUVTriangle(&triangle[81], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 82:

    setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.166937f), f);
    setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(-0.215240f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.114017f), f);
    setUVTriangle(&triangle[82], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 83:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.178492f), fp_Flt2FP(-0.114017f), f);
    setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(-0.253597f), f);
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.166939f), f);
    setUVTriangle(&triangle[83], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 84:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.114020f), f);
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.166939f), f);
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.166939f), f);
    setUVTriangle(&triangle[84], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 85:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.114020f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.178492f), fp_Flt2FP(-0.114017f), f);
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.166939f), f);
    setUVTriangle(&triangle[85], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 86:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.348432f), f);
    setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(-0.278460f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.396017f), f);
    setUVTriangle(&triangle[86], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 87:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.215244f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.114020f), f);
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.166939f), f);
    setUVTriangle(&triangle[87], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 88:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.475921f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.114020f), f);
    setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.300126f), f);
    setUVTriangle(&triangle[88], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 89:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.215244f), f);
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.300126f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.114020f), f);
    setUVTriangle(&triangle[89], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 90:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.348432f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.396017f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.396017f), f);
    setUVTriangle(&triangle[90], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 91:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.348432f), f);
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.348432f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.396017f), f);
    setUVTriangle(&triangle[91], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 92:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.348432f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.396017f), f);
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.475921f), f);
    setUVTriangle(&triangle[92], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 93:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.348432f), f);
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.475921f), f);
    setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.300126f), f);
    setUVTriangle(&triangle[93], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 94:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.215240f), f);
    setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(-0.253597f), f);
    setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.206905f), fp_Flt2FP(-0.253597f), f);
    setUVTriangle(&triangle[94], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 95:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.215240f), f);
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.166939f), f);
    setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.182044f), fp_Flt2FP(-0.253597f), f);
    setUVTriangle(&triangle[95], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 96:

    setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(-0.278465f), f);
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.348432f), f);
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.300123f), f);
    setUVTriangle(&triangle[96], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 97:

    setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(-0.278465f), f);
    setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(-0.278460f), f);
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.348432f), f);
    setUVTriangle(&triangle[97], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 98:

    setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(-0.253597f), f);
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.215244f), f);
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.215240f), f);
    setUVTriangle(&triangle[98], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 99:

    setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(-0.253597f), f);
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.300126f), f);
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.215244f), f);
    setUVTriangle(&triangle[99], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 100:

    setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(-0.278465f), f);
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.300126f), f);
    setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.206905f), fp_Flt2FP(-0.253597f), f);
    setUVTriangle(&triangle[100], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 101:

    setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(-0.278465f), f);
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.300123f), f);
    setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.300126f), f);
    setUVTriangle(&triangle[101], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 102:

    setVector(&u, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.182044f), fp_Flt2FP(-0.278460f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.178492f), fp_Flt2FP(-0.114017f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.178493f), fp_Flt2FP(-0.475923f), f);
    setUVTriangle(&triangle[102], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 103:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.475921f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.396017f), f);
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.444318f), f);
    setUVTriangle(&triangle[103], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 104:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.444318f), f);
    setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(-0.278460f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.178493f), fp_Flt2FP(-0.475923f), f);
    setUVTriangle(&triangle[104], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 105:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.444318f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.396017f), f);
    setVector(&w, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.182044f), fp_Flt2FP(-0.278460f), f);
    setUVTriangle(&triangle[105], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 106:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.444318f), f);
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.475921f), f);
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(-0.444318f), f);
    setUVTriangle(&triangle[106], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 107:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(-0.444318f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.178493f), fp_Flt2FP(-0.475923f), f);
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.475921f), f);
    setUVTriangle(&triangle[107], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 108:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.725790f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.620205f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.667550f), f);
    setUVTriangle(&triangle[108], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 109:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.667550f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.515433f), fp_Flt2FP(-0.564727f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.619249f), f);
    setUVTriangle(&triangle[109], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 110:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.667550f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.515433f), fp_Flt2FP(-0.564727f), f);
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.667550f), f);
    setUVTriangle(&triangle[110], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 111:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.667550f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.619249f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515433f), fp_Flt2FP(-0.564727f), f);
    setUVTriangle(&triangle[111], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 112:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.564734f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.619249f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.423092f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[112], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 113:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.896280f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.843353f), f);
    setUVTriangle(&triangle[113], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 114:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.843353f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.896280f), f);
    setUVTriangle(&triangle[114], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 115:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.843353f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.795046f), f);
    setUVTriangle(&triangle[115], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 116:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.843353f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.960194f), f);
    setUVTriangle(&triangle[116], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 117:

    setVector(&u, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.591792f), fp_Flt2FP(-0.985056f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.944573f), f);
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.522536f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[117], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 118:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.725790f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.667550f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.667550f), f);
    setUVTriangle(&triangle[118], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 119:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.725790f), f);
    setVector(&v, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.725790f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.667550f), f);
    setUVTriangle(&triangle[119], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 120:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.667550f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.619249f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[120], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 121:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.667550f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[121], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 122:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.985056f), f);
    setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.591792f), fp_Flt2FP(-0.985056f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.620205f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[122], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 123:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.620205f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.591792f), fp_Flt2FP(-0.985056f), f);
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.522536f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[123], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 124:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.620205f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.960194f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.985056f), f);
    setUVTriangle(&triangle[124], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 125:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.763442f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.960194f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.620205f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[125], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 126:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.960194f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.763442f), f);
    setUVTriangle(&triangle[126], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 127:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.763442f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.763442f), f);
    setUVTriangle(&triangle[127], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 128:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.795046f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.763442f), f);
    setUVTriangle(&triangle[128], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 129:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.667550f), f);
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.795046f), f);
    setUVTriangle(&triangle[129], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 130:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.667550f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.667550f), f);
    setUVTriangle(&triangle[130], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 131:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.667550f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.795046f), f);
    setUVTriangle(&triangle[131], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 132:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.763442f), f);
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.667550f), f);
    setUVTriangle(&triangle[132], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 133:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.667550f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.763442f), f);
    setVector(&w, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.725790f), f);
    setUVTriangle(&triangle[133], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 134:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.667550f), f);
    setVector(&v, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.725790f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.667550f), f);
    setUVTriangle(&triangle[134], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 135:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.896273f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.843353f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[135], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 136:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[136], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 137:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.944573f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.896273f), f);
    setUVTriangle(&triangle[137], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 138:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.795046f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.843353f), f);
    setUVTriangle(&triangle[138], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 139:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.896273f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.944573f), f);
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515433f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[139], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 140:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.843353f), f);
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.896273f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.896273f), f);
    setUVTriangle(&triangle[140], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 141:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.843353f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.843353f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.896273f), f);
    setUVTriangle(&triangle[141], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 142:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.896273f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.896280f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.843353f), f);
    setUVTriangle(&triangle[142], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 143:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.896273f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.944573f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.896280f), f);
    setUVTriangle(&triangle[143], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 144:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.515433f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.944573f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.896273f), f);
    setUVTriangle(&triangle[144], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 145:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.515433f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.522536f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.944573f), f);
    setUVTriangle(&triangle[145], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 146:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.944573f), f);
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.944573f), f);
    setUVTriangle(&triangle[146], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 147:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.515433f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.944573f), f);
    setUVTriangle(&triangle[147], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 148:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.944573f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[148], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 149:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.843353f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.896280f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.896273f), f);
    setUVTriangle(&triangle[149], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 150:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.843353f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.843353f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.896280f), f);
    setUVTriangle(&triangle[150], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 151:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.944573f), f);
    setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.591792f), fp_Flt2FP(-0.985056f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.591792f), fp_Flt2FP(-0.960194f), f);
    setUVTriangle(&triangle[151], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 152:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.944573f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.944573f), f);
    setVector(&w, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.591792f), fp_Flt2FP(-0.985056f), f);
    setUVTriangle(&triangle[152], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 153:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.896273f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.960194f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.843353f), f);
    setUVTriangle(&triangle[153], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 154:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.944573f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.960194f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.896273f), f);
    setUVTriangle(&triangle[154], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 155:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.944573f), f);
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.591792f), fp_Flt2FP(-0.960194f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.960194f), f);
    setUVTriangle(&triangle[155], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 156:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.619249f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.667550f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.620205f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[156], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 157:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.619249f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.522536f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515433f), fp_Flt2FP(-0.564727f), f);
    setUVTriangle(&triangle[157], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 158:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.619249f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.522536f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.619249f), f);
    setUVTriangle(&triangle[158], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 159:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(-0.619249f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.620205f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.522536f), fp_Flt2FP(-0.564734f), f);
    setUVTriangle(&triangle[159], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 160:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(-0.564734f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.619249f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515433f), fp_Flt2FP(-0.564727f), f);
    setUVTriangle(&triangle[160], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 161:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(-0.564734f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(-0.619249f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(-0.619249f), f);
    setUVTriangle(&triangle[161], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 162:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.731607f), fp_Flt2FP(-0.564734f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.619256f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.619256f), f);
    setUVTriangle(&triangle[162], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 163:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.731607f), fp_Flt2FP(-0.564734f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.724503f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.619256f), f);
    setUVTriangle(&triangle[163], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 164:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.829275f), fp_Flt2FP(-0.564734f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.731607f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.619256f), f);
    setUVTriangle(&triangle[164], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 165:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.667563f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.667563f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739397f), fp_Flt2FP(-0.682928f), f);
    setUVTriangle(&triangle[165], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 166:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.667563f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.741786f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.790079f), f);
    setUVTriangle(&triangle[166], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 167:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.667563f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.739397f), fp_Flt2FP(-0.682928f), f);
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.741786f), f);
    setUVTriangle(&triangle[167], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 168:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.747113f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.829275f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.667563f), f);
    setUVTriangle(&triangle[168], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 169:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.667563f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.829275f), fp_Flt2FP(-0.564734f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.619256f), f);
    setUVTriangle(&triangle[169], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 170:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.790079f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.896280f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.896280f), f);
    setUVTriangle(&triangle[170], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 171:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.944587f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.800863f), fp_Flt2FP(-0.985069f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.800863f), fp_Flt2FP(-0.960208f), f);
    setUVTriangle(&triangle[171], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 172:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.944587f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.944587f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.800863f), fp_Flt2FP(-0.985069f), f);
    setUVTriangle(&triangle[172], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 173:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.896280f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.784766f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.784759f), f);
    setUVTriangle(&triangle[173], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 174:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.747113f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.747113f), f);
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.667563f), f);
    setUVTriangle(&triangle[174], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 175:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.747113f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.667563f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.790079f), f);
    setUVTriangle(&triangle[175], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 176:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.896280f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.944587f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.960208f), f);
    setUVTriangle(&triangle[176], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 177:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.960208f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.944587f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.800863f), fp_Flt2FP(-0.960208f), f);
    setUVTriangle(&triangle[177], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 178:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.896280f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.960208f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.825724f), fp_Flt2FP(-0.784766f), f);
    setUVTriangle(&triangle[178], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 179:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.784759f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.747113f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.790079f), f);
    setUVTriangle(&triangle[179], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 180:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.752561f), fp_Flt2FP(-0.784759f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(-0.790079f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(-0.896280f), f);
    setUVTriangle(&triangle[180], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 181:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.944578f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.834129f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.907596f), fp_Flt2FP(-0.997498f), f);
    setUVTriangle(&triangle[181], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 182:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.944578f), f);
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.944578f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834129f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[182], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 183:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.896276f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.926470f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.811394f), f);
    setUVTriangle(&triangle[183], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 184:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.944578f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.926470f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.896276f), f);
    setUVTriangle(&triangle[184], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 185:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.944578f), f);
    setVector(&v, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.907596f), fp_Flt2FP(-0.997498f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.926470f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[185], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 186:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.763085f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.715499f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.715499f), f);
    setUVTriangle(&triangle[186], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 187:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.763085f), f);
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.763085f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.715499f), f);
    setUVTriangle(&triangle[187], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 188:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.715499f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.834129f), fp_Flt2FP(-0.635594f), f);
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.763085f), f);
    setUVTriangle(&triangle[188], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 189:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.896273f), f);
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.763085f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834129f), fp_Flt2FP(-0.635594f), f);
    setUVTriangle(&triangle[189], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 190:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.944578f), f);
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.896273f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834129f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[190], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 191:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.834129f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.896273f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834129f), fp_Flt2FP(-0.635594f), f);
    setUVTriangle(&triangle[191], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 192:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.834129f), fp_Flt2FP(-0.635594f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.715499f), f);
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.667199f), f);
    setUVTriangle(&triangle[192], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 193:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.926470f), fp_Flt2FP(-0.635596f), f);
    setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.667199f), f);
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.667199f), f);
    setUVTriangle(&triangle[193], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 194:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.926470f), fp_Flt2FP(-0.635596f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.834129f), fp_Flt2FP(-0.635594f), f);
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.667199f), f);
    setUVTriangle(&triangle[194], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 195:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.926470f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.926470f), fp_Flt2FP(-0.635596f), f);
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.811394f), f);
    setUVTriangle(&triangle[195], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 196:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.811394f), f);
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.926470f), fp_Flt2FP(-0.635596f), f);
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.763085f), f);
    setUVTriangle(&triangle[196], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 197:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.926470f), fp_Flt2FP(-0.635596f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.715499f), f);
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.763085f), f);
    setUVTriangle(&triangle[197], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 198:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.667199f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.715499f), f);
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.926470f), fp_Flt2FP(-0.635596f), f);
    setUVTriangle(&triangle[198], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 199:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.811394f), f);
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.896273f), f);
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.896276f), f);
    setUVTriangle(&triangle[199], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 200:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(-0.811394f), f);
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.811394f), f);
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847980f), fp_Flt2FP(-0.896273f), f);
    setUVTriangle(&triangle[200], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 201:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.763442f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.763442f), f);
    setVector(&w, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.725790f), f);
    setUVTriangle(&triangle[201], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 202:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(-0.725790f), f);
    setVector(&v, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.725790f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(-0.763442f), f);
    setUVTriangle(&triangle[202], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 203:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.595503f), fp_Flt2FP(-0.091652f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.595503f), fp_Flt2FP(-0.139951f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.602606f), fp_Flt2FP(-0.139951f), f);
    setUVTriangle(&triangle[203], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 204:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.602606f), fp_Flt2FP(-0.139951f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.602606f), fp_Flt2FP(-0.091652f), f);
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.595503f), fp_Flt2FP(-0.091652f), f);
    setUVTriangle(&triangle[204], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 205:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.145776f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.188751f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940027f), fp_Flt2FP(-0.188751f), f);
    setUVTriangle(&triangle[205], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 206:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940027f), fp_Flt2FP(-0.188751f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940027f), fp_Flt2FP(-0.145776f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.145776f), f);
    setUVTriangle(&triangle[206], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 207:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.942401f), fp_Flt2FP(-0.453564f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.942401f), fp_Flt2FP(-0.405265f), f);
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.935298f), fp_Flt2FP(-0.405265f), f);
    setUVTriangle(&triangle[207], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 208:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.935298f), fp_Flt2FP(-0.405265f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.935298f), fp_Flt2FP(-0.453564f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.942401f), fp_Flt2FP(-0.453564f), f);
    setUVTriangle(&triangle[208], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 209:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.980756f), fp_Flt2FP(-0.400412f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.980756f), fp_Flt2FP(-0.357438f), f);
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.973653f), fp_Flt2FP(-0.357438f), f);
    setUVTriangle(&triangle[209], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 210:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.973653f), fp_Flt2FP(-0.357438f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.973653f), fp_Flt2FP(-0.400412f), f);
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.980756f), fp_Flt2FP(-0.400412f), f);
    setUVTriangle(&triangle[210], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 211:

    setVector(&u, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.208207f), fp_Flt2FP(-0.026472f), f);
    setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.208200f), fp_Flt2FP(-0.074779f), f);
    setVector(&w, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215303f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[211], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 212:

    setVector(&u, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215303f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215303f), fp_Flt2FP(-0.026475f), f);
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.208207f), fp_Flt2FP(-0.026472f), f);
    setUVTriangle(&triangle[212], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 213:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947261f), fp_Flt2FP(-0.410589f), f);
    setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947254f), fp_Flt2FP(-0.453564f), f);
    setVector(&w, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954357f), fp_Flt2FP(-0.453564f), f);
    setUVTriangle(&triangle[213], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 214:

    setVector(&u, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954357f), fp_Flt2FP(-0.453564f), f);
    setVector(&v, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954364f), fp_Flt2FP(-0.410589f), f);
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947261f), fp_Flt2FP(-0.410589f), f);
    setUVTriangle(&triangle[214], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 215:

    setVector(&u, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.330277f), fp_Flt2FP(-0.478353f), f);
    setVector(&v, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.281973f), fp_Flt2FP(-0.478367f), f);
    setVector(&w, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.281977f), fp_Flt2FP(-0.485470f), f);
    setUVTriangle(&triangle[215], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 216:

    setVector(&u, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.281977f), fp_Flt2FP(-0.485470f), f);
    setVector(&v, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.330280f), fp_Flt2FP(-0.485456f), f);
    setVector(&w, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.330277f), fp_Flt2FP(-0.478353f), f);
    setUVTriangle(&triangle[216], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 217:

    setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954414f), fp_Flt2FP(-0.289259f), f);
    setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954414f), fp_Flt2FP(-0.246285f), f);
    setVector(&w, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947317f), fp_Flt2FP(-0.246285f), f);
    setUVTriangle(&triangle[217], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 218:

    setVector(&u, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947317f), fp_Flt2FP(-0.246285f), f);
    setVector(&v, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947310f), fp_Flt2FP(-0.289259f), f);
    setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954414f), fp_Flt2FP(-0.289259f), f);
    setUVTriangle(&triangle[218], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 219:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.614576f), fp_Flt2FP(-0.193111f), f);
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.614583f), fp_Flt2FP(-0.150137f), f);
    setVector(&w, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.607480f), fp_Flt2FP(-0.150137f), f);
    setUVTriangle(&triangle[219], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 220:

    setVector(&u, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.607480f), fp_Flt2FP(-0.150137f), f);
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.607466f), fp_Flt2FP(-0.193111f), f);
    setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.614576f), fp_Flt2FP(-0.193111f), f);
    setUVTriangle(&triangle[220], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 221:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.327947f), fp_Flt2FP(-0.499692f), f);
    setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.499678f), f);
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376255f), fp_Flt2FP(-0.492575f), f);
    setUVTriangle(&triangle[221], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 222:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.376255f), fp_Flt2FP(-0.492575f), f);
    setVector(&v, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.327946f), fp_Flt2FP(-0.492589f), f);
    setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.327947f), fp_Flt2FP(-0.499692f), f);
    setUVTriangle(&triangle[222], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 223:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.961644f), fp_Flt2FP(-0.410589f), f);
    setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.961644f), fp_Flt2FP(-0.453564f), f);
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.968747f), fp_Flt2FP(-0.453563f), f);
    setUVTriangle(&triangle[223], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 224:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.968747f), fp_Flt2FP(-0.453563f), f);
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.968747f), fp_Flt2FP(-0.410589f), f);
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.961644f), fp_Flt2FP(-0.410589f), f);
    setUVTriangle(&triangle[224], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 225:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.230162f), fp_Flt2FP(-0.478356f), f);
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.181855f), fp_Flt2FP(-0.478349f), f);
    setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.181854f), fp_Flt2FP(-0.485460f), f);
    setUVTriangle(&triangle[225], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 226:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.181854f), fp_Flt2FP(-0.485460f), f);
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230161f), fp_Flt2FP(-0.485460f), f);
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.230162f), fp_Flt2FP(-0.478356f), f);
    setUVTriangle(&triangle[226], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 227:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(-0.068369f), f);
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.423099f), fp_Flt2FP(-0.020062f), f);
    setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.020060f), f);
    setUVTriangle(&triangle[227], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 228:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.020060f), f);
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.068368f), f);
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.423092f), fp_Flt2FP(-0.068369f), f);
    setUVTriangle(&triangle[228], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 229:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.614570f), fp_Flt2FP(-0.139951f), f);
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.614570f), fp_Flt2FP(-0.096977f), f);
    setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.607459f), fp_Flt2FP(-0.096977f), f);
    setUVTriangle(&triangle[229], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 230:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.607459f), fp_Flt2FP(-0.096977f), f);
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.607459f), fp_Flt2FP(-0.139951f), f);
    setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.614570f), fp_Flt2FP(-0.139951f), f);
    setUVTriangle(&triangle[230], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 231:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839782f), fp_Flt2FP(-0.304608f), f);
    setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839789f), fp_Flt2FP(-0.352915f), f);
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846892f), fp_Flt2FP(-0.352914f), f);
    setUVTriangle(&triangle[231], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 232:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846892f), fp_Flt2FP(-0.352914f), f);
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846892f), fp_Flt2FP(-0.304607f), f);
    setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839782f), fp_Flt2FP(-0.304608f), f);
    setUVTriangle(&triangle[232], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 233:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.976076f), fp_Flt2FP(-0.301865f), f);
    setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976076f), fp_Flt2FP(-0.344839f), f);
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983180f), fp_Flt2FP(-0.344839f), f);
    setUVTriangle(&triangle[233], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 234:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983180f), fp_Flt2FP(-0.344839f), f);
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983180f), fp_Flt2FP(-0.301865f), f);
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.976076f), fp_Flt2FP(-0.301865f), f);
    setUVTriangle(&triangle[234], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 235:

    setVector(&u, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.931330f), fp_Flt2FP(-0.582434f), f);
    setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.931323f), fp_Flt2FP(-0.630741f), f);
    setVector(&w, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.938426f), fp_Flt2FP(-0.630744f), f);
    setUVTriangle(&triangle[235], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 236:

    setVector(&u, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.938426f), fp_Flt2FP(-0.630744f), f);
    setVector(&v, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.938426f), fp_Flt2FP(-0.582437f), f);
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.931330f), fp_Flt2FP(-0.582434f), f);
    setUVTriangle(&triangle[236], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 237:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.196031f), f);
    setVector(&v, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.239005f), f);
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940027f), fp_Flt2FP(-0.239005f), f);
    setUVTriangle(&triangle[237], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 238:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940027f), fp_Flt2FP(-0.239005f), f);
    setVector(&v, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940027f), fp_Flt2FP(-0.196030f), f);
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.196031f), f);
    setUVTriangle(&triangle[238], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 239:

    setVector(&u, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.590657f), fp_Flt2FP(-0.193108f), f);
    setVector(&v, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.590650f), fp_Flt2FP(-0.144806f), f);
    setVector(&w, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.583547f), fp_Flt2FP(-0.144809f), f);
    setUVTriangle(&triangle[239], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 240:

    setVector(&u, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.583547f), fp_Flt2FP(-0.144809f), f);
    setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.583554f), fp_Flt2FP(-0.193111f), f);
    setVector(&w, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.590657f), fp_Flt2FP(-0.193108f), f);
    setUVTriangle(&triangle[240], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 241:

    setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.968797f), fp_Flt2FP(-0.344839f), f);
    setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.968797f), fp_Flt2FP(-0.301865f), f);
    setVector(&w, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.961700f), fp_Flt2FP(-0.301865f), f);
    setUVTriangle(&triangle[241], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 242:

    setVector(&u, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.961700f), fp_Flt2FP(-0.301865f), f);
    setVector(&v, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.961693f), fp_Flt2FP(-0.344839f), f);
    setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.968797f), fp_Flt2FP(-0.344839f), f);
    setUVTriangle(&triangle[242], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 243:

    setVector(&u, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.442337f), fp_Flt2FP(-0.020067f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.442337f), fp_Flt2FP(-0.068369f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.449440f), fp_Flt2FP(-0.068369f), f);
    setUVTriangle(&triangle[243], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 244:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.449440f), fp_Flt2FP(-0.068369f), f);
    setVector(&v, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.449440f), fp_Flt2FP(-0.020069f), f);
    setVector(&w, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.442337f), fp_Flt2FP(-0.020067f), f);
    setUVTriangle(&triangle[244], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 245:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.684355f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.727329f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988337f), fp_Flt2FP(-0.727330f), f);
    setUVTriangle(&triangle[245], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 246:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988337f), fp_Flt2FP(-0.727330f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988337f), fp_Flt2FP(-0.684356f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.684355f), f);
    setUVTriangle(&triangle[246], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 247:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925651f), fp_Flt2FP(-0.400412f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925651f), fp_Flt2FP(-0.352114f), f);
    setVector(&w, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918548f), fp_Flt2FP(-0.352110f), f);
    setUVTriangle(&triangle[247], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 248:

    setVector(&u, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918548f), fp_Flt2FP(-0.352110f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918548f), fp_Flt2FP(-0.400412f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925651f), fp_Flt2FP(-0.400412f), f);
    setUVTriangle(&triangle[248], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 249:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911263f), fp_Flt2FP(-0.178085f), f);
    setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911263f), fp_Flt2FP(-0.135111f), f);
    setVector(&w, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.135111f), f);
    setUVTriangle(&triangle[249], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 250:

    setVector(&u, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.135111f), f);
    setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.178085f), f);
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911263f), fp_Flt2FP(-0.178085f), f);
    setUVTriangle(&triangle[250], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 251:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.990228f), fp_Flt2FP(-0.506720f), f);
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.990221f), fp_Flt2FP(-0.458419f), f);
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983125f), fp_Flt2FP(-0.458419f), f);
    setUVTriangle(&triangle[251], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 252:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983125f), fp_Flt2FP(-0.458419f), f);
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983125f), fp_Flt2FP(-0.506719f), f);
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.990228f), fp_Flt2FP(-0.506720f), f);
    setUVTriangle(&triangle[252], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 253:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918543f), fp_Flt2FP(-0.090189f), f);
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918550f), fp_Flt2FP(-0.133164f), f);
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925639f), fp_Flt2FP(-0.133163f), f);
    setUVTriangle(&triangle[253], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 254:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925639f), fp_Flt2FP(-0.133163f), f);
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925639f), fp_Flt2FP(-0.090189f), f);
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918543f), fp_Flt2FP(-0.090189f), f);
    setUVTriangle(&triangle[254], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 255:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983139f), fp_Flt2FP(-0.511575f), f);
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983125f), fp_Flt2FP(-0.559881f), f);
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.990228f), fp_Flt2FP(-0.559879f), f);
    setUVTriangle(&triangle[255], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 256:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.990228f), fp_Flt2FP(-0.559879f), f);
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.990228f), fp_Flt2FP(-0.511575f), f);
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983139f), fp_Flt2FP(-0.511575f), f);
    setUVTriangle(&triangle[256], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 257:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.284800f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.284800f), fp_Flt2FP(-0.031808f), f);
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.277697f), fp_Flt2FP(-0.031808f), f);
    setUVTriangle(&triangle[257], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 258:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.277697f), fp_Flt2FP(-0.031808f), f);
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.277697f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.284800f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[258], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 259:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911263f), fp_Flt2FP(-0.127831f), f);
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911263f), fp_Flt2FP(-0.084857f), f);
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.084856f), f);
    setUVTriangle(&triangle[259], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 260:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.084856f), f);
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.127831f), f);
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911263f), fp_Flt2FP(-0.127831f), f);
    setUVTriangle(&triangle[260], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 261:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.602613f), fp_Flt2FP(-0.193111f), f);
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.602606f), fp_Flt2FP(-0.144809f), f);
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.595510f), fp_Flt2FP(-0.144809f), f);
    setUVTriangle(&triangle[261], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 262:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.595510f), fp_Flt2FP(-0.144809f), f);
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.595510f), fp_Flt2FP(-0.193109f), f);
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.602613f), fp_Flt2FP(-0.193111f), f);
    setUVTriangle(&triangle[262], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 263:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.961688f), fp_Flt2FP(-0.145777f), f);
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.961695f), fp_Flt2FP(-0.188751f), f);
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.968784f), fp_Flt2FP(-0.188751f), f);
    setUVTriangle(&triangle[263], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 264:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.968784f), fp_Flt2FP(-0.188751f), f);
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.968784f), fp_Flt2FP(-0.145777f), f);
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.961688f), fp_Flt2FP(-0.145777f), f);
    setUVTriangle(&triangle[264], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 265:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.790189f), fp_Flt2FP(-0.144821f), f);
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.790175f), fp_Flt2FP(-0.193127f), f);
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.797279f), fp_Flt2FP(-0.193125f), f);
    setUVTriangle(&triangle[265], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 266:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.797279f), fp_Flt2FP(-0.193125f), f);
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.797279f), fp_Flt2FP(-0.144821f), f);
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.790189f), fp_Flt2FP(-0.144821f), f);
    setUVTriangle(&triangle[266], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 267:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.196031f), f);
    setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.239005f), f);
    setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954410f), fp_Flt2FP(-0.239005f), f);
    setUVTriangle(&triangle[267], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 268:

    setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954410f), fp_Flt2FP(-0.239005f), f);
    setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954410f), fp_Flt2FP(-0.196031f), f);
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.196031f), f);
    setUVTriangle(&triangle[268], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 269:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.790175f), fp_Flt2FP(-0.038509f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.790182f), fp_Flt2FP(-0.086810f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.797279f), fp_Flt2FP(-0.086810f), f);
    setUVTriangle(&triangle[269], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 270:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.797279f), fp_Flt2FP(-0.086810f), f);
    setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.797279f), fp_Flt2FP(-0.038511f), f);
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.790175f), fp_Flt2FP(-0.038509f), f);
    setUVTriangle(&triangle[270], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 271:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983171f), fp_Flt2FP(-0.289259f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983171f), fp_Flt2FP(-0.246285f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.976075f), fp_Flt2FP(-0.246285f), f);
    setUVTriangle(&triangle[271], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 272:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.976075f), fp_Flt2FP(-0.246285f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976075f), fp_Flt2FP(-0.289259f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983171f), fp_Flt2FP(-0.289259f), f);
    setUVTriangle(&triangle[272], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 273:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955938f), fp_Flt2FP(-0.679359f), f);
    setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955944f), fp_Flt2FP(-0.631059f), f);
    setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948841f), fp_Flt2FP(-0.631061f), f);
    setUVTriangle(&triangle[273], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 274:

    setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948841f), fp_Flt2FP(-0.631061f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948841f), fp_Flt2FP(-0.679359f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955938f), fp_Flt2FP(-0.679359f), f);
    setUVTriangle(&triangle[274], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 275:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.583547f), fp_Flt2FP(-0.091645f), f);
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.583547f), fp_Flt2FP(-0.139951f), f);
    setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.590643f), fp_Flt2FP(-0.139951f), f);
    setUVTriangle(&triangle[275], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 276:

    setVector(&u, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.590643f), fp_Flt2FP(-0.139951f), f);
    setVector(&v, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.590650f), fp_Flt2FP(-0.091649f), f);
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.583547f), fp_Flt2FP(-0.091645f), f);
    setUVTriangle(&triangle[276], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 277:

    setVector(&u, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.327939f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.327939f), fp_Flt2FP(-0.031808f), f);
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320842f), fp_Flt2FP(-0.031808f), f);
    setUVTriangle(&triangle[277], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 278:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320842f), fp_Flt2FP(-0.031808f), f);
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320842f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.327939f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[278], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 279:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988337f), fp_Flt2FP(-0.941913f), f);
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988337f), fp_Flt2FP(-0.893604f), f);
    setVector(&w, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.893608f), f);
    setUVTriangle(&triangle[279], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 280:

    setVector(&u, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.893608f), f);
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981241f), fp_Flt2FP(-0.941913f), f);
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988337f), fp_Flt2FP(-0.941913f), f);
    setUVTriangle(&triangle[280], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 281:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.959270f), fp_Flt2FP(-0.357438f), f);
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.959270f), fp_Flt2FP(-0.400412f), f);
    setVector(&w, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.966373f), fp_Flt2FP(-0.400412f), f);
    setUVTriangle(&triangle[281], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 282:

    setVector(&u, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.966373f), fp_Flt2FP(-0.400412f), f);
    setVector(&v, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.966373f), fp_Flt2FP(-0.357438f), f);
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.959270f), fp_Flt2FP(-0.357438f), f);
    setUVTriangle(&triangle[282], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 283:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983167f), fp_Flt2FP(-0.239005f), f);
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983167f), fp_Flt2FP(-0.196031f), f);
    setVector(&w, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.976071f), fp_Flt2FP(-0.196031f), f);
    setUVTriangle(&triangle[283], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 284:

    setVector(&u, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.976071f), fp_Flt2FP(-0.196031f), f);
    setVector(&v, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976071f), fp_Flt2FP(-0.239005f), f);
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983167f), fp_Flt2FP(-0.239005f), f);
    setUVTriangle(&triangle[284], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 285:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176064f), fp_Flt2FP(-0.478349f), f);
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.127755f), fp_Flt2FP(-0.478349f), f);
    setVector(&w, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.127760f), fp_Flt2FP(-0.485460f), f);
    setUVTriangle(&triangle[285], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 286:

    setVector(&u, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.127760f), fp_Flt2FP(-0.485460f), f);
    setVector(&v, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.176066f), fp_Flt2FP(-0.485446f), f);
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.176064f), fp_Flt2FP(-0.478349f), f);
    setUVTriangle(&triangle[286], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 287:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.248922f), fp_Flt2FP(-0.031808f), f);
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.248922f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.256032f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[287], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 288:

    setVector(&u, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.256032f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.256032f), fp_Flt2FP(-0.031808f), f);
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.248922f), fp_Flt2FP(-0.031808f), f);
    setUVTriangle(&triangle[288], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 289:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227851f), fp_Flt2FP(-0.499278f), f);
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276159f), fp_Flt2FP(-0.499278f), f);
    setVector(&w, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.492182f), f);
    setUVTriangle(&triangle[289], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 290:

    setVector(&u, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.492182f), f);
    setVector(&v, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227856f), fp_Flt2FP(-0.492168f), f);
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.227851f), fp_Flt2FP(-0.499278f), f);
    setUVTriangle(&triangle[290], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 291:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839789f), fp_Flt2FP(-0.090025f), f);
    setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839782f), fp_Flt2FP(-0.132999f), f);
    setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846885f), fp_Flt2FP(-0.133000f), f);
    setUVTriangle(&triangle[291], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 292:

    setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846885f), fp_Flt2FP(-0.133000f), f);
    setVector(&v, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846892f), fp_Flt2FP(-0.090025f), f);
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839789f), fp_Flt2FP(-0.090025f), f);
    setUVTriangle(&triangle[292], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 293:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.612321f), fp_Flt2FP(-0.038492f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.612328f), fp_Flt2FP(-0.086792f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.619425f), fp_Flt2FP(-0.086792f), f);
    setUVTriangle(&triangle[293], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 294:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.619425f), fp_Flt2FP(-0.086792f), f);
    setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.619425f), fp_Flt2FP(-0.038494f), f);
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.612321f), fp_Flt2FP(-0.038492f), f);
    setUVTriangle(&triangle[294], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 295:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954403f), fp_Flt2FP(-0.088242f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954403f), fp_Flt2FP(-0.045268f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.045268f), f);
    setUVTriangle(&triangle[295], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 296:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.045268f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.088243f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954403f), fp_Flt2FP(-0.088242f), f);
    setUVTriangle(&triangle[296], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 297:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.797279f), fp_Flt2FP(-0.139966f), f);
    setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.797279f), fp_Flt2FP(-0.091666f), f);
    setVector(&w, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.790175f), fp_Flt2FP(-0.091665f), f);
    setUVTriangle(&triangle[297], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 298:

    setVector(&u, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.790175f), fp_Flt2FP(-0.091665f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.790182f), fp_Flt2FP(-0.139966f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.797279f), fp_Flt2FP(-0.139966f), f);
    setUVTriangle(&triangle[298], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 299:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.930508f), fp_Flt2FP(-0.352119f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.930504f), fp_Flt2FP(-0.400412f), f);
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.937606f), fp_Flt2FP(-0.400412f), f);
    setUVTriangle(&triangle[299], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 300:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.937606f), fp_Flt2FP(-0.400412f), f);
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.937606f), fp_Flt2FP(-0.352119f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.930508f), fp_Flt2FP(-0.352119f), f);
    setUVTriangle(&triangle[300], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 301:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925644f), fp_Flt2FP(-0.183418f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925644f), fp_Flt2FP(-0.140443f), f);
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918543f), fp_Flt2FP(-0.140443f), f);
    setUVTriangle(&triangle[301], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 302:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918543f), fp_Flt2FP(-0.140443f), f);
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918543f), fp_Flt2FP(-0.183418f), f);
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925644f), fp_Flt2FP(-0.183418f), f);
    setUVTriangle(&triangle[302], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 303:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.234539f), fp_Flt2FP(-0.026482f), f);
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.234541f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241642f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[303], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 304:

    setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241642f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241640f), fp_Flt2FP(-0.026482f), f);
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234539f), fp_Flt2FP(-0.026482f), f);
    setUVTriangle(&triangle[304], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 305:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988036f), fp_Flt2FP(-0.357438f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988038f), fp_Flt2FP(-0.400412f), f);
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.995136f), fp_Flt2FP(-0.400412f), f);
    setUVTriangle(&triangle[305], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 306:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.995136f), fp_Flt2FP(-0.400412f), f);
    setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.995138f), fp_Flt2FP(-0.357438f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988036f), fp_Flt2FP(-0.357438f), f);
    setUVTriangle(&triangle[306], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 307:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839784f), fp_Flt2FP(-0.140279f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839782f), fp_Flt2FP(-0.188580f), f);
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846884f), fp_Flt2FP(-0.188580f), f);
    setUVTriangle(&triangle[307], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 308:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846884f), fp_Flt2FP(-0.188580f), f);
    setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846885f), fp_Flt2FP(-0.140279f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839784f), fp_Flt2FP(-0.140279f), f);
    setUVTriangle(&triangle[308], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 309:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.968795f), fp_Flt2FP(-0.289259f), f);
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.968795f), fp_Flt2FP(-0.246285f), f);
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.961693f), fp_Flt2FP(-0.246285f), f);
    setUVTriangle(&triangle[309], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 310:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.961693f), fp_Flt2FP(-0.246285f), f);
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.961693f), fp_Flt2FP(-0.289259f), f);
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.968795f), fp_Flt2FP(-0.289259f), f);
    setUVTriangle(&triangle[310], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 311:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.840451f), f);
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981236f), fp_Flt2FP(-0.888751f), f);
    setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988337f), fp_Flt2FP(-0.888751f), f);
    setUVTriangle(&triangle[311], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 312:

    setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988337f), fp_Flt2FP(-0.888751f), f);
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988336f), fp_Flt2FP(-0.840451f), f);
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.840451f), f);
    setUVTriangle(&triangle[312], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 313:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.961690f), fp_Flt2FP(-0.196031f), f);
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.961690f), fp_Flt2FP(-0.239005f), f);
    setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.968791f), fp_Flt2FP(-0.239005f), f);
    setUVTriangle(&triangle[313], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 314:

    setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.968791f), fp_Flt2FP(-0.239005f), f);
    setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.968791f), fp_Flt2FP(-0.196031f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.961690f), fp_Flt2FP(-0.196031f), f);
    setUVTriangle(&triangle[314], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 315:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940031f), fp_Flt2FP(-0.289259f), f);
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940027f), fp_Flt2FP(-0.246285f), f);
    setVector(&w, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.246285f), f);
    setUVTriangle(&triangle[315], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 316:

    setVector(&u, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.246285f), f);
    setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932927f), fp_Flt2FP(-0.289259f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940031f), fp_Flt2FP(-0.289259f), f);
    setUVTriangle(&triangle[316], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 317:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.583554f), fp_Flt2FP(-0.038485f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.583547f), fp_Flt2FP(-0.086785f), f);
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.590650f), fp_Flt2FP(-0.086792f), f);
    setUVTriangle(&triangle[317], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 318:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.590650f), fp_Flt2FP(-0.086792f), f);
    setVector(&v, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.590657f), fp_Flt2FP(-0.038492f), f);
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.583554f), fp_Flt2FP(-0.038485f), f);
    setUVTriangle(&triangle[318], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 319:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.301865f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947310f), fp_Flt2FP(-0.344839f), f);
    setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954414f), fp_Flt2FP(-0.344839f), f);
    setUVTriangle(&triangle[319], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 320:

    setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954414f), fp_Flt2FP(-0.344839f), f);
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954410f), fp_Flt2FP(-0.301865f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.301865f), f);
    setUVTriangle(&triangle[320], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 321:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.240952f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.289252f), f);
    setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911263f), fp_Flt2FP(-0.289245f), f);
    setUVTriangle(&triangle[321], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 322:

    setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911263f), fp_Flt2FP(-0.289245f), f);
    setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911263f), fp_Flt2FP(-0.240952f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.240952f), f);
    setUVTriangle(&triangle[322], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 323:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839784f), fp_Flt2FP(-0.195859f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839782f), fp_Flt2FP(-0.244166f), f);
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846884f), fp_Flt2FP(-0.244166f), f);
    setUVTriangle(&triangle[323], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 324:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846884f), fp_Flt2FP(-0.244166f), f);
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846885f), fp_Flt2FP(-0.195859f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839784f), fp_Flt2FP(-0.195859f), f);
    setUVTriangle(&triangle[324], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 325:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.313563f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.313563f), fp_Flt2FP(-0.031808f), f);
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.306461f), fp_Flt2FP(-0.031808f), f);
    setUVTriangle(&triangle[325], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 326:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.306461f), fp_Flt2FP(-0.031808f), f);
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.306461f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.313563f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[326], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 327:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948841f), fp_Flt2FP(-0.742226f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948843f), fp_Flt2FP(-0.790533f), f);
    setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955946f), fp_Flt2FP(-0.790533f), f);
    setUVTriangle(&triangle[327], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 328:

    setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955946f), fp_Flt2FP(-0.790533f), f);
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955943f), fp_Flt2FP(-0.742226f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948841f), fp_Flt2FP(-0.742226f), f);
    setUVTriangle(&triangle[328], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 329:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.976027f), fp_Flt2FP(-0.410589f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976027f), fp_Flt2FP(-0.453564f), f);
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983128f), fp_Flt2FP(-0.453564f), f);
    setUVTriangle(&triangle[329], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 330:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983128f), fp_Flt2FP(-0.453564f), f);
    setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983130f), fp_Flt2FP(-0.410589f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.976027f), fp_Flt2FP(-0.410589f), f);
    setUVTriangle(&triangle[330], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 331:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911261f), fp_Flt2FP(-0.077576f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911261f), fp_Flt2FP(-0.034602f), f);
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.034602f), f);
    setUVTriangle(&triangle[331], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 332:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.034602f), f);
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.077576f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911261f), fp_Flt2FP(-0.077576f), f);
    setUVTriangle(&triangle[332], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 333:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.949193f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981236f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988341f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[333], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 334:

    setVector(&u, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988341f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988336f), fp_Flt2FP(-0.949193f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.949193f), f);
    setUVTriangle(&triangle[334], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 335:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.734610f), f);
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981238f), fp_Flt2FP(-0.777584f), f);
    setVector(&w, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988342f), fp_Flt2FP(-0.777584f), f);
    setUVTriangle(&triangle[335], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 336:

    setVector(&u, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988342f), fp_Flt2FP(-0.777584f), f);
    setVector(&v, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988339f), fp_Flt2FP(-0.734610f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.734610f), f);
    setUVTriangle(&triangle[336], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 337:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.193815f), fp_Flt2FP(-0.026475f), f);
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.193810f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.200911f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[337], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 338:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.200911f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.200920f), fp_Flt2FP(-0.026475f), f);
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193815f), fp_Flt2FP(-0.026475f), f);
    setUVTriangle(&triangle[338], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 339:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.299181f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.299181f), fp_Flt2FP(-0.031808f), f);
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.292080f), fp_Flt2FP(-0.031808f), f);
    setUVTriangle(&triangle[339], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 340:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.292080f), fp_Flt2FP(-0.031808f), f);
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.292080f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.299181f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[340], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 341:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.435053f), fp_Flt2FP(-0.068369f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.435057f), fp_Flt2FP(-0.020062f), f);
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.427956f), fp_Flt2FP(-0.020062f), f);
    setUVTriangle(&triangle[341], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 342:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.427956f), fp_Flt2FP(-0.020062f), f);
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.427952f), fp_Flt2FP(-0.068369f), f);
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.435053f), fp_Flt2FP(-0.068369f), f);
    setUVTriangle(&triangle[342], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 343:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.944885f), fp_Flt2FP(-0.357438f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.944889f), fp_Flt2FP(-0.400412f), f);
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951990f), fp_Flt2FP(-0.400412f), f);
    setUVTriangle(&triangle[343], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 344:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951990f), fp_Flt2FP(-0.400412f), f);
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951987f), fp_Flt2FP(-0.357438f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.944885f), fp_Flt2FP(-0.357438f), f);
    setUVTriangle(&triangle[344], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 345:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911261f), fp_Flt2FP(-0.233672f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911261f), fp_Flt2FP(-0.185365f), f);
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.185365f), f);
    setUVTriangle(&triangle[345], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 346:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.185365f), f);
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.233672f), f);
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911261f), fp_Flt2FP(-0.233672f), f);
    setUVTriangle(&triangle[346], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 347:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955944f), fp_Flt2FP(-0.734946f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955943f), fp_Flt2FP(-0.686639f), f);
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948841f), fp_Flt2FP(-0.686639f), f);
    setUVTriangle(&triangle[347], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 348:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948841f), fp_Flt2FP(-0.686639f), f);
    setVector(&v, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948847f), fp_Flt2FP(-0.734946f), f);
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955944f), fp_Flt2FP(-0.734946f), f);
    setUVTriangle(&triangle[348], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 349:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.145777f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.188751f), f);
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954408f), fp_Flt2FP(-0.188751f), f);
    setUVTriangle(&triangle[349], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 350:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954408f), fp_Flt2FP(-0.188751f), f);
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954408f), fp_Flt2FP(-0.145777f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.145777f), f);
    setUVTriangle(&triangle[350], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 351:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988336f), fp_Flt2FP(-0.833171f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988336f), fp_Flt2FP(-0.784864f), f);
    setVector(&w, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981238f), fp_Flt2FP(-0.784864f), f);
    setUVTriangle(&triangle[351], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 352:

    setVector(&u, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981238f), fp_Flt2FP(-0.784864f), f);
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.833171f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988336f), fp_Flt2FP(-0.833171f), f);
    setUVTriangle(&triangle[352], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 353:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940022f), fp_Flt2FP(-0.088242f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940024f), fp_Flt2FP(-0.045268f), f);
    setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932926f), fp_Flt2FP(-0.045268f), f);
    setUVTriangle(&triangle[353], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 354:

    setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932926f), fp_Flt2FP(-0.045268f), f);
    setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.088242f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940022f), fp_Flt2FP(-0.088242f), f);
    setUVTriangle(&triangle[354], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 355:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839782f), fp_Flt2FP(-0.251453f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839786f), fp_Flt2FP(-0.299753f), f);
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846887f), fp_Flt2FP(-0.299753f), f);
    setUVTriangle(&triangle[355], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 356:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846887f), fp_Flt2FP(-0.299753f), f);
    setVector(&v, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846884f), fp_Flt2FP(-0.251446f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839782f), fp_Flt2FP(-0.251453f), f);
    setUVTriangle(&triangle[356], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 357:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988336f), fp_Flt2FP(-0.626821f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988336f), fp_Flt2FP(-0.583847f), f);
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.583847f), f);
    setUVTriangle(&triangle[357], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 358:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.583847f), f);
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.626821f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988336f), fp_Flt2FP(-0.626821f), f);
    setUVTriangle(&triangle[358], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 359:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932926f), fp_Flt2FP(-0.296539f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932926f), fp_Flt2FP(-0.344839f), f);
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940027f), fp_Flt2FP(-0.344839f), f);
    setUVTriangle(&triangle[359], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 360:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940027f), fp_Flt2FP(-0.344839f), f);
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940027f), fp_Flt2FP(-0.296539f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932926f), fp_Flt2FP(-0.296539f), f);
    setUVTriangle(&triangle[360], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 361:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839786f), fp_Flt2FP(-0.039771f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839782f), fp_Flt2FP(-0.082745f), f);
    setVector(&w, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846884f), fp_Flt2FP(-0.082745f), f);
    setUVTriangle(&triangle[361], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 362:

    setVector(&u, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846884f), fp_Flt2FP(-0.082745f), f);
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846887f), fp_Flt2FP(-0.039771f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839786f), fp_Flt2FP(-0.039771f), f);
    setUVTriangle(&triangle[362], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 363:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925644f), fp_Flt2FP(-0.289259f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925644f), fp_Flt2FP(-0.240952f), f);
    setVector(&w, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918546f), fp_Flt2FP(-0.240952f), f);
    setUVTriangle(&triangle[363], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 364:

    setVector(&u, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918546f), fp_Flt2FP(-0.240952f), f);
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918543f), fp_Flt2FP(-0.289259f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925644f), fp_Flt2FP(-0.289259f), f);
    setUVTriangle(&triangle[364], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 365:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954405f), fp_Flt2FP(-0.138497f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954407f), fp_Flt2FP(-0.095523f), f);
    setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947309f), fp_Flt2FP(-0.095522f), f);
    setUVTriangle(&triangle[365], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 366:

    setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947309f), fp_Flt2FP(-0.095522f), f);
    setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947307f), fp_Flt2FP(-0.138497f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954405f), fp_Flt2FP(-0.138497f), f);
    setUVTriangle(&triangle[366], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 367:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911263f), fp_Flt2FP(-0.344839f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911261f), fp_Flt2FP(-0.296532f), f);
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.296532f), f);
    setUVTriangle(&triangle[367], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 368:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.296532f), f);
    setVector(&v, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904165f), fp_Flt2FP(-0.344839f), f);
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911263f), fp_Flt2FP(-0.344839f), f);
    setUVTriangle(&triangle[368], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 369:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.095523f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.138497f), f);
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940025f), fp_Flt2FP(-0.138496f), f);
    setUVTriangle(&triangle[369], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 370:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940025f), fp_Flt2FP(-0.138496f), f);
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940025f), fp_Flt2FP(-0.095522f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932924f), fp_Flt2FP(-0.095523f), f);
    setUVTriangle(&triangle[370], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 371:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.270413f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.270417f), fp_Flt2FP(-0.031808f), f);
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.263316f), fp_Flt2FP(-0.031808f), f);
    setUVTriangle(&triangle[371], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 372:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.263316f), fp_Flt2FP(-0.031808f), f);
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.263312f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.270413f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[372], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 373:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.605041f), fp_Flt2FP(-0.086785f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.605038f), fp_Flt2FP(-0.038485f), f);
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.597937f), fp_Flt2FP(-0.038485f), f);
    setUVTriangle(&triangle[373], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 374:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.597937f), fp_Flt2FP(-0.038485f), f);
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.597940f), fp_Flt2FP(-0.086792f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.605041f), fp_Flt2FP(-0.086785f), f);
    setUVTriangle(&triangle[374], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 375:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981236f), fp_Flt2FP(-0.634101f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981234f), fp_Flt2FP(-0.677075f), f);
    setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988336f), fp_Flt2FP(-0.677075f), f);
    setUVTriangle(&triangle[375], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 376:

    setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988336f), fp_Flt2FP(-0.677075f), f);
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988337f), fp_Flt2FP(-0.634101f), f);
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981236f), fp_Flt2FP(-0.634101f), f);
    setUVTriangle(&triangle[376], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 377:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925646f), fp_Flt2FP(-0.344839f), f);
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925644f), fp_Flt2FP(-0.296539f), f);
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918543f), fp_Flt2FP(-0.296539f), f);
    setUVTriangle(&triangle[377], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 378:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918543f), fp_Flt2FP(-0.296539f), f);
    setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918544f), fp_Flt2FP(-0.344839f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925646f), fp_Flt2FP(-0.344839f), f);
    setUVTriangle(&triangle[378], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 379:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925644f), fp_Flt2FP(-0.233672f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925642f), fp_Flt2FP(-0.190698f), f);
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918543f), fp_Flt2FP(-0.190698f), f);
    setUVTriangle(&triangle[379], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 380:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918543f), fp_Flt2FP(-0.190698f), f);
    setVector(&v, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918544f), fp_Flt2FP(-0.233672f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925644f), fp_Flt2FP(-0.233672f), f);
    setUVTriangle(&triangle[380], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 381:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911259f), fp_Flt2FP(-0.400412f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911268f), fp_Flt2FP(-0.352119f), f);
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904165f), fp_Flt2FP(-0.352119f), f);
    setUVTriangle(&triangle[381], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 382:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904165f), fp_Flt2FP(-0.352119f), f);
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(-0.400412f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911259f), fp_Flt2FP(-0.400412f), f);
    setUVTriangle(&triangle[382], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 383:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948841f), fp_Flt2FP(-0.583232f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948848f), fp_Flt2FP(-0.626206f), f);
    setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955951f), fp_Flt2FP(-0.626206f), f);
    setUVTriangle(&triangle[383], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 384:

    setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955951f), fp_Flt2FP(-0.626206f), f);
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955944f), fp_Flt2FP(-0.583232f), f);
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948841f), fp_Flt2FP(-0.583232f), f);
    setUVTriangle(&triangle[384], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 385:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227259f), fp_Flt2FP(-0.074775f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227259f), fp_Flt2FP(-0.026482f), f);
    setVector(&w, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.220160f), fp_Flt2FP(-0.026489f), f);
    setUVTriangle(&triangle[385], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 386:

    setVector(&u, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.220160f), fp_Flt2FP(-0.026489f), f);
    setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.220156f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.227259f), fp_Flt2FP(-0.074775f), f);
    setUVTriangle(&triangle[386], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 387:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951017f), fp_Flt2FP(-0.870976f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.797813f), f);
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.943913f), fp_Flt2FP(-0.797813f), f);
    setUVTriangle(&triangle[387], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 388:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.943913f), fp_Flt2FP(-0.797813f), f);
    setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943912f), fp_Flt2FP(-0.870976f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951017f), fp_Flt2FP(-0.870976f), f);
    setUVTriangle(&triangle[388], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 389:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.632168f), fp_Flt2FP(-0.042505f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.632163f), fp_Flt2FP(-0.004853f), f);
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.004853f), f);
    setUVTriangle(&triangle[389], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 390:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.004853f), f);
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625062f), fp_Flt2FP(-0.042505f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.632168f), fp_Flt2FP(-0.042505f), f);
    setUVTriangle(&triangle[390], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 391:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.943915f), fp_Flt2FP(-0.873402f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943915f), fp_Flt2FP(-0.946565f), f);
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951017f), fp_Flt2FP(-0.946565f), f);
    setUVTriangle(&triangle[391], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 392:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951017f), fp_Flt2FP(-0.946565f), f);
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.873402f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.943915f), fp_Flt2FP(-0.873402f), f);
    setUVTriangle(&triangle[392], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 393:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.468024f), fp_Flt2FP(-0.042493f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.468026f), fp_Flt2FP(-0.004847f), f);
    setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.460921f), fp_Flt2FP(-0.004840f), f);
    setUVTriangle(&triangle[393], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 394:

    setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.460921f), fp_Flt2FP(-0.004840f), f);
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.460923f), fp_Flt2FP(-0.042493f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.468024f), fp_Flt2FP(-0.042493f), f);
    setUVTriangle(&triangle[394], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 395:

    setVector(&u, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150673f), fp_Flt2FP(-0.178829f), f);
    setVector(&v, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.151424f), fp_Flt2FP(-0.179581f), f);
    setVector(&w, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.152347f), fp_Flt2FP(-0.180114f), f);
    setUVTriangle(&triangle[395], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 396:

    setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.152347f), fp_Flt2FP(-0.180114f), f);
    setVector(&v, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153372f), fp_Flt2FP(-0.180387f), f);
    setVector(&w, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.154441f), fp_Flt2FP(-0.180387f), f);
    setUVTriangle(&triangle[396], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 397:

    setVector(&u, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.154441f), fp_Flt2FP(-0.180387f), f);
    setVector(&v, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.155464f), fp_Flt2FP(-0.180113f), f);
    setVector(&w, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156388f), fp_Flt2FP(-0.179580f), f);
    setUVTriangle(&triangle[397], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 398:

    setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.152347f), fp_Flt2FP(-0.180114f), f);
    setVector(&v, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.154441f), fp_Flt2FP(-0.180387f), f);
    setVector(&w, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156388f), fp_Flt2FP(-0.179580f), f);
    setUVTriangle(&triangle[398], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 399:

    setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156388f), fp_Flt2FP(-0.179580f), f);
    setVector(&v, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157143f), fp_Flt2FP(-0.178829f), f);
    setVector(&w, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.157676f), fp_Flt2FP(-0.177907f), f);
    setUVTriangle(&triangle[399], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 400:

    setVector(&u, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.157676f), fp_Flt2FP(-0.177907f), f);
    setVector(&v, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157948f), fp_Flt2FP(-0.176881f), f);
    setVector(&w, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.157948f), fp_Flt2FP(-0.175817f), f);
    setUVTriangle(&triangle[400], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 401:

    setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156388f), fp_Flt2FP(-0.179580f), f);
    setVector(&v, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157676f), fp_Flt2FP(-0.177907f), f);
    setVector(&w, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.157948f), fp_Flt2FP(-0.175817f), f);
    setUVTriangle(&triangle[401], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 402:

    setVector(&u, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.157948f), fp_Flt2FP(-0.175817f), f);
    setVector(&v, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157671f), fp_Flt2FP(-0.174790f), f);
    setVector(&w, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.157142f), fp_Flt2FP(-0.173868f), f);
    setUVTriangle(&triangle[402], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 403:

    setVector(&u, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.157142f), fp_Flt2FP(-0.173868f), f);
    setVector(&v, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156391f), fp_Flt2FP(-0.173117f), f);
    setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.155468f), fp_Flt2FP(-0.172584f), f);
    setUVTriangle(&triangle[403], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 404:

    setVector(&u, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.157948f), fp_Flt2FP(-0.175817f), f);
    setVector(&v, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157142f), fp_Flt2FP(-0.173868f), f);
    setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.155468f), fp_Flt2FP(-0.172584f), f);
    setUVTriangle(&triangle[404], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 405:

    setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156388f), fp_Flt2FP(-0.179580f), f);
    setVector(&v, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157948f), fp_Flt2FP(-0.175817f), f);
    setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.155468f), fp_Flt2FP(-0.172584f), f);
    setUVTriangle(&triangle[405], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 406:

    setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.155468f), fp_Flt2FP(-0.172584f), f);
    setVector(&v, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.154443f), fp_Flt2FP(-0.172310f), f);
    setVector(&w, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.153374f), fp_Flt2FP(-0.172310f), f);
    setUVTriangle(&triangle[406], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 407:

    setVector(&u, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.153374f), fp_Flt2FP(-0.172310f), f);
    setVector(&v, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.152351f), fp_Flt2FP(-0.172585f), f);
    setVector(&w, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.151427f), fp_Flt2FP(-0.173117f), f);
    setUVTriangle(&triangle[407], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 408:

    setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.155468f), fp_Flt2FP(-0.172584f), f);
    setVector(&v, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153374f), fp_Flt2FP(-0.172310f), f);
    setVector(&w, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.151427f), fp_Flt2FP(-0.173117f), f);
    setUVTriangle(&triangle[408], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 409:

    setVector(&u, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.151427f), fp_Flt2FP(-0.173117f), f);
    setVector(&v, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.150672f), fp_Flt2FP(-0.173869f), f);
    setVector(&w, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.150139f), fp_Flt2FP(-0.174791f), f);
    setUVTriangle(&triangle[409], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 410:

    setVector(&u, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150139f), fp_Flt2FP(-0.174791f), f);
    setVector(&v, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149867f), fp_Flt2FP(-0.175817f), f);
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(-0.176880f), f);
    setUVTriangle(&triangle[410], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 411:

    setVector(&u, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.151427f), fp_Flt2FP(-0.173117f), f);
    setVector(&v, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.150139f), fp_Flt2FP(-0.174791f), f);
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(-0.176880f), f);
    setUVTriangle(&triangle[411], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 412:

    setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.155468f), fp_Flt2FP(-0.172584f), f);
    setVector(&v, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.151427f), fp_Flt2FP(-0.173117f), f);
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(-0.176880f), f);
    setUVTriangle(&triangle[412], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 413:

    setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156388f), fp_Flt2FP(-0.179580f), f);
    setVector(&v, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.155468f), fp_Flt2FP(-0.172584f), f);
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(-0.176880f), f);
    setUVTriangle(&triangle[413], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 414:

    setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.152347f), fp_Flt2FP(-0.180114f), f);
    setVector(&v, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156388f), fp_Flt2FP(-0.179580f), f);
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(-0.176880f), f);
    setUVTriangle(&triangle[414], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 415:

    setVector(&u, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150673f), fp_Flt2FP(-0.178829f), f);
    setVector(&v, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.152347f), fp_Flt2FP(-0.180114f), f);
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(-0.176880f), f);
    setUVTriangle(&triangle[415], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 416:

    setVector(&u, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150144f), fp_Flt2FP(-0.177907f), f);
    setVector(&v, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.150673f), fp_Flt2FP(-0.178829f), f);
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(-0.176880f), f);
    setUVTriangle(&triangle[416], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 417:

    setVector(&u, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319793f), fp_Flt2FP(-0.308232f), f);
    setVector(&v, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320857f), fp_Flt2FP(-0.308234f), f);
    setVector(&w, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320721f), fp_Flt2FP(-0.307281f), f);
    setUVTriangle(&triangle[417], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 418:

    setVector(&u, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320721f), fp_Flt2FP(-0.307281f), f);
    setVector(&v, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319869f), fp_Flt2FP(-0.307280f), f);
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319793f), fp_Flt2FP(-0.308232f), f);
    setUVTriangle(&triangle[418], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 419:

    setVector(&u, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320857f), fp_Flt2FP(-0.308234f), f);
    setVector(&v, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.321872f), fp_Flt2FP(-0.308237f), f);
    setVector(&w, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.321533f), fp_Flt2FP(-0.307284f), f);
    setUVTriangle(&triangle[419], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 420:

    setVector(&u, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.321533f), fp_Flt2FP(-0.307284f), f);
    setVector(&v, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320721f), fp_Flt2FP(-0.307281f), f);
    setVector(&w, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320857f), fp_Flt2FP(-0.308234f), f);
    setUVTriangle(&triangle[420], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 421:

    setVector(&u, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242490f), fp_Flt2FP(-0.313268f), f);
    setVector(&v, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242451f), fp_Flt2FP(-0.312203f), f);
    setVector(&w, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241204f), fp_Flt2FP(-0.312355f), f);
    setUVTriangle(&triangle[421], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 422:

    setVector(&u, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241204f), fp_Flt2FP(-0.312355f), f);
    setVector(&v, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241237f), fp_Flt2FP(-0.313207f), f);
    setVector(&w, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242490f), fp_Flt2FP(-0.313268f), f);
    setUVTriangle(&triangle[422], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 423:

    setVector(&u, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242451f), fp_Flt2FP(-0.312203f), f);
    setVector(&v, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242234f), fp_Flt2FP(-0.311181f), f);
    setVector(&w, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241032f), fp_Flt2FP(-0.311538f), f);
    setUVTriangle(&triangle[423], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 424:

    setVector(&u, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241032f), fp_Flt2FP(-0.311538f), f);
    setVector(&v, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241204f), fp_Flt2FP(-0.312355f), f);
    setVector(&w, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242451f), fp_Flt2FP(-0.312203f), f);
    setUVTriangle(&triangle[424], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 425:

    setVector(&u, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242234f), fp_Flt2FP(-0.311181f), f);
    setVector(&v, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241856f), fp_Flt2FP(-0.310271f), f);
    setVector(&w, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240729f), fp_Flt2FP(-0.310809f), f);
    setUVTriangle(&triangle[425], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 426:

    setVector(&u, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240729f), fp_Flt2FP(-0.310809f), f);
    setVector(&v, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241032f), fp_Flt2FP(-0.311538f), f);
    setVector(&w, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242234f), fp_Flt2FP(-0.311181f), f);
    setUVTriangle(&triangle[426], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 427:

    setVector(&u, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.863490f), fp_Flt2FP(-0.772704f), f);
    setVector(&v, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.863485f), fp_Flt2FP(-0.771670f), f);
    setVector(&w, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862560f), fp_Flt2FP(-0.771594f), f);
    setUVTriangle(&triangle[427], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 428:

    setVector(&u, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862560f), fp_Flt2FP(-0.771594f), f);
    setVector(&v, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862564f), fp_Flt2FP(-0.772419f), f);
    setVector(&w, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.863490f), fp_Flt2FP(-0.772704f), f);
    setUVTriangle(&triangle[428], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 429:

    setVector(&u, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.863485f), fp_Flt2FP(-0.771670f), f);
    setVector(&v, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.863490f), fp_Flt2FP(-0.770602f), f);
    setVector(&w, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862564f), fp_Flt2FP(-0.770741f), f);
    setUVTriangle(&triangle[429], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 430:

    setVector(&u, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862564f), fp_Flt2FP(-0.770741f), f);
    setVector(&v, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862560f), fp_Flt2FP(-0.771594f), f);
    setVector(&w, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.863485f), fp_Flt2FP(-0.771670f), f);
    setUVTriangle(&triangle[430], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 431:

    setVector(&u, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.515665f), fp_Flt2FP(-0.185471f), f);
    setVector(&v, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.515646f), fp_Flt2FP(-0.186531f), f);
    setVector(&w, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516899f), fp_Flt2FP(-0.186446f), f);
    setUVTriangle(&triangle[431], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 432:

    setVector(&u, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516899f), fp_Flt2FP(-0.186446f), f);
    setVector(&v, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516915f), fp_Flt2FP(-0.185596f), f);
    setVector(&w, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515665f), fp_Flt2FP(-0.185471f), f);
    setUVTriangle(&triangle[432], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 433:

    setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.515646f), fp_Flt2FP(-0.186531f), f);
    setVector(&v, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.515806f), fp_Flt2FP(-0.187564f), f);
    setVector(&w, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.517026f), fp_Flt2FP(-0.187272f), f);
    setUVTriangle(&triangle[433], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 434:

    setVector(&u, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.517026f), fp_Flt2FP(-0.187272f), f);
    setVector(&v, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516899f), fp_Flt2FP(-0.186446f), f);
    setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515646f), fp_Flt2FP(-0.186531f), f);
    setUVTriangle(&triangle[434], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 435:

    setVector(&u, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.515806f), fp_Flt2FP(-0.187564f), f);
    setVector(&v, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516133f), fp_Flt2FP(-0.188491f), f);
    setVector(&w, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.517289f), fp_Flt2FP(-0.188012f), f);
    setUVTriangle(&triangle[435], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 436:

    setVector(&u, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.517289f), fp_Flt2FP(-0.188012f), f);
    setVector(&v, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.517026f), fp_Flt2FP(-0.187272f), f);
    setVector(&w, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515806f), fp_Flt2FP(-0.187564f), f);
    setUVTriangle(&triangle[436], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 437:

    setVector(&u, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516133f), fp_Flt2FP(-0.188491f), f);
    setVector(&v, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516606f), fp_Flt2FP(-0.189249f), f);
    setVector(&w, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.517666f), fp_Flt2FP(-0.188627f), f);
    setUVTriangle(&triangle[437], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 438:

    setVector(&u, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.517666f), fp_Flt2FP(-0.188627f), f);
    setVector(&v, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.517289f), fp_Flt2FP(-0.188012f), f);
    setVector(&w, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516133f), fp_Flt2FP(-0.188491f), f);
    setUVTriangle(&triangle[438], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 439:

    setVector(&u, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216572f), fp_Flt2FP(-0.431949f), f);
    setVector(&v, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.216223f), fp_Flt2FP(-0.432927f), f);
    setVector(&w, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217100f), fp_Flt2FP(-0.433317f), f);
    setUVTriangle(&triangle[439], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 440:

    setVector(&u, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217100f), fp_Flt2FP(-0.433317f), f);
    setVector(&v, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217379f), fp_Flt2FP(-0.432536f), f);
    setVector(&w, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216572f), fp_Flt2FP(-0.431949f), f);
    setUVTriangle(&triangle[440], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 441:

    setVector(&u, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216223f), fp_Flt2FP(-0.432927f), f);
    setVector(&v, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215867f), fp_Flt2FP(-0.433929f), f);
    setVector(&w, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216815f), fp_Flt2FP(-0.434120f), f);
    setUVTriangle(&triangle[441], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 442:

    setVector(&u, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216815f), fp_Flt2FP(-0.434120f), f);
    setVector(&v, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217100f), fp_Flt2FP(-0.433317f), f);
    setVector(&w, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216223f), fp_Flt2FP(-0.432927f), f);
    setUVTriangle(&triangle[442], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 443:

    setVector(&u, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215867f), fp_Flt2FP(-0.433929f), f);
    setVector(&v, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.434886f), f);
    setVector(&w, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216544f), fp_Flt2FP(-0.434885f), f);
    setUVTriangle(&triangle[443], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 444:

    setVector(&u, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216544f), fp_Flt2FP(-0.434885f), f);
    setVector(&v, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.216815f), fp_Flt2FP(-0.434120f), f);
    setVector(&w, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215867f), fp_Flt2FP(-0.433929f), f);
    setUVTriangle(&triangle[444], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 445:

    setVector(&u, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.334621f), fp_Flt2FP(-0.478353f), f);
    setVector(&v, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.334583f), fp_Flt2FP(-0.479417f), f);
    setVector(&w, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335838f), fp_Flt2FP(-0.479356f), f);
    setUVTriangle(&triangle[445], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 446:

    setVector(&u, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.335838f), fp_Flt2FP(-0.479356f), f);
    setVector(&v, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335870f), fp_Flt2FP(-0.478507f), f);
    setVector(&w, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.334621f), fp_Flt2FP(-0.478353f), f);
    setUVTriangle(&triangle[446], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 447:

    setVector(&u, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.334583f), fp_Flt2FP(-0.479417f), f);
    setVector(&v, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.334726f), fp_Flt2FP(-0.480452f), f);
    setVector(&w, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335950f), fp_Flt2FP(-0.480182f), f);
    setUVTriangle(&triangle[447], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 448:

    setVector(&u, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.335950f), fp_Flt2FP(-0.480182f), f);
    setVector(&v, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335838f), fp_Flt2FP(-0.479356f), f);
    setVector(&w, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.334583f), fp_Flt2FP(-0.479417f), f);
    setUVTriangle(&triangle[448], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 449:

    setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.334726f), fp_Flt2FP(-0.480452f), f);
    setVector(&v, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335039f), fp_Flt2FP(-0.481386f), f);
    setVector(&w, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.336201f), fp_Flt2FP(-0.480930f), f);
    setUVTriangle(&triangle[449], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 450:

    setVector(&u, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.336201f), fp_Flt2FP(-0.480930f), f);
    setVector(&v, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335950f), fp_Flt2FP(-0.480182f), f);
    setVector(&w, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.334726f), fp_Flt2FP(-0.480452f), f);
    setUVTriangle(&triangle[450], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 451:

    setVector(&u, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.952340f), fp_Flt2FP(-0.991842f), f);
    setVector(&v, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.952335f), fp_Flt2FP(-0.992876f), f);
    setVector(&w, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953319f), fp_Flt2FP(-0.992952f), f);
    setUVTriangle(&triangle[451], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 452:

    setVector(&u, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953319f), fp_Flt2FP(-0.992952f), f);
    setVector(&v, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953322f), fp_Flt2FP(-0.992120f), f);
    setVector(&w, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.952340f), fp_Flt2FP(-0.991842f), f);
    setUVTriangle(&triangle[452], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 453:

    setVector(&u, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.952335f), fp_Flt2FP(-0.992876f), f);
    setVector(&v, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.952340f), fp_Flt2FP(-0.993944f), f);
    setVector(&w, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953322f), fp_Flt2FP(-0.993798f), f);
    setUVTriangle(&triangle[453], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 454:

    setVector(&u, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953322f), fp_Flt2FP(-0.993798f), f);
    setVector(&v, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953319f), fp_Flt2FP(-0.992952f), f);
    setVector(&w, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.952335f), fp_Flt2FP(-0.992876f), f);
    setUVTriangle(&triangle[454], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 455:

    setVector(&u, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.952340f), fp_Flt2FP(-0.993944f), f);
    setVector(&v, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.952355f), fp_Flt2FP(-0.994957f), f);
    setVector(&w, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953334f), fp_Flt2FP(-0.994610f), f);
    setUVTriangle(&triangle[455], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 456:

    setVector(&u, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953334f), fp_Flt2FP(-0.994610f), f);
    setVector(&v, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953322f), fp_Flt2FP(-0.993798f), f);
    setVector(&w, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.952340f), fp_Flt2FP(-0.993944f), f);
    setUVTriangle(&triangle[456], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 457:

    setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.869213f), fp_Flt2FP(-0.911919f), f);
    setVector(&v, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.869183f), fp_Flt2FP(-0.910853f), f);
    setVector(&w, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867935f), fp_Flt2FP(-0.910998f), f);
    setUVTriangle(&triangle[457], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 458:

    setVector(&u, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867935f), fp_Flt2FP(-0.910998f), f);
    setVector(&v, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867958f), fp_Flt2FP(-0.911849f), f);
    setVector(&w, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.869213f), fp_Flt2FP(-0.911919f), f);
    setUVTriangle(&triangle[458], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 459:

    setVector(&u, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.869183f), fp_Flt2FP(-0.910853f), f);
    setVector(&v, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.868976f), fp_Flt2FP(-0.909832f), f);
    setVector(&w, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867771f), fp_Flt2FP(-0.910175f), f);
    setUVTriangle(&triangle[459], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 460:

    setVector(&u, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867771f), fp_Flt2FP(-0.910175f), f);
    setVector(&v, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867935f), fp_Flt2FP(-0.910998f), f);
    setVector(&w, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.869183f), fp_Flt2FP(-0.910853f), f);
    setUVTriangle(&triangle[460], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 461:

    setVector(&u, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241004f), fp_Flt2FP(-0.316554f), f);
    setVector(&v, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241579f), fp_Flt2FP(-0.316000f), f);
    setVector(&w, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240509f), fp_Flt2FP(-0.315394f), f);
    setUVTriangle(&triangle[461], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 462:

    setVector(&u, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240509f), fp_Flt2FP(-0.315394f), f);
    setVector(&v, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240049f), fp_Flt2FP(-0.315837f), f);
    setVector(&w, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241004f), fp_Flt2FP(-0.316554f), f);
    setUVTriangle(&triangle[462], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 463:

    setVector(&u, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.318755f), fp_Flt2FP(-0.308230f), f);
    setVector(&v, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319793f), fp_Flt2FP(-0.308232f), f);
    setVector(&w, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319869f), fp_Flt2FP(-0.307280f), f);
    setUVTriangle(&triangle[463], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 464:

    setVector(&u, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319869f), fp_Flt2FP(-0.307280f), f);
    setVector(&v, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319039f), fp_Flt2FP(-0.307278f), f);
    setVector(&w, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.318755f), fp_Flt2FP(-0.308230f), f);
    setUVTriangle(&triangle[464], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 465:

    setVector(&u, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319869f), fp_Flt2FP(-0.307280f), f);
    setVector(&v, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320721f), fp_Flt2FP(-0.307281f), f);
    setVector(&w, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320584f), fp_Flt2FP(-0.306329f), f);
    setUVTriangle(&triangle[465], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 466:

    setVector(&u, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320584f), fp_Flt2FP(-0.306329f), f);
    setVector(&v, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319946f), fp_Flt2FP(-0.306328f), f);
    setVector(&w, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319869f), fp_Flt2FP(-0.307280f), f);
    setUVTriangle(&triangle[466], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 467:

    setVector(&u, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320721f), fp_Flt2FP(-0.307281f), f);
    setVector(&v, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.321533f), fp_Flt2FP(-0.307284f), f);
    setVector(&w, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.321193f), fp_Flt2FP(-0.306331f), f);
    setUVTriangle(&triangle[467], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 468:

    setVector(&u, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.321193f), fp_Flt2FP(-0.306331f), f);
    setVector(&v, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320584f), fp_Flt2FP(-0.306329f), f);
    setVector(&w, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320721f), fp_Flt2FP(-0.307281f), f);
    setUVTriangle(&triangle[468], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 469:

    setVector(&u, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241237f), fp_Flt2FP(-0.313207f), f);
    setVector(&v, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241204f), fp_Flt2FP(-0.312355f), f);
    setVector(&w, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239957f), fp_Flt2FP(-0.312506f), f);
    setUVTriangle(&triangle[469], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 470:

    setVector(&u, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239957f), fp_Flt2FP(-0.312506f), f);
    setVector(&v, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239980f), fp_Flt2FP(-0.313143f), f);
    setVector(&w, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241237f), fp_Flt2FP(-0.313207f), f);
    setUVTriangle(&triangle[470], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 471:

    setVector(&u, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241204f), fp_Flt2FP(-0.312355f), f);
    setVector(&v, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241032f), fp_Flt2FP(-0.311538f), f);
    setVector(&w, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239830f), fp_Flt2FP(-0.311895f), f);
    setUVTriangle(&triangle[471], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 472:

    setVector(&u, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239830f), fp_Flt2FP(-0.311895f), f);
    setVector(&v, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239957f), fp_Flt2FP(-0.312506f), f);
    setVector(&w, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241204f), fp_Flt2FP(-0.312355f), f);
    setUVTriangle(&triangle[472], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 473:

    setVector(&u, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241032f), fp_Flt2FP(-0.311538f), f);
    setVector(&v, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240729f), fp_Flt2FP(-0.310809f), f);
    setVector(&w, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239602f), fp_Flt2FP(-0.311347f), f);
    setUVTriangle(&triangle[473], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 474:

    setVector(&u, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239602f), fp_Flt2FP(-0.311347f), f);
    setVector(&v, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239830f), fp_Flt2FP(-0.311895f), f);
    setVector(&w, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241032f), fp_Flt2FP(-0.311538f), f);
    setUVTriangle(&triangle[474], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 475:

    setVector(&u, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862564f), fp_Flt2FP(-0.772419f), f);
    setVector(&v, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862560f), fp_Flt2FP(-0.771594f), f);
    setVector(&w, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.861635f), fp_Flt2FP(-0.771511f), f);
    setUVTriangle(&triangle[475], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 476:

    setVector(&u, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.861635f), fp_Flt2FP(-0.771511f), f);
    setVector(&v, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.861638f), fp_Flt2FP(-0.772135f), f);
    setVector(&w, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862564f), fp_Flt2FP(-0.772419f), f);
    setUVTriangle(&triangle[476], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 477:

    setVector(&u, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862560f), fp_Flt2FP(-0.771594f), f);
    setVector(&v, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862564f), fp_Flt2FP(-0.770741f), f);
    setVector(&w, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.861638f), fp_Flt2FP(-0.770872f), f);
    setUVTriangle(&triangle[477], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 478:

    setVector(&u, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.861638f), fp_Flt2FP(-0.770872f), f);
    setVector(&v, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.861635f), fp_Flt2FP(-0.771511f), f);
    setVector(&w, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862560f), fp_Flt2FP(-0.771594f), f);
    setUVTriangle(&triangle[478], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 479:

    setVector(&u, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516915f), fp_Flt2FP(-0.185596f), f);
    setVector(&v, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516899f), fp_Flt2FP(-0.186446f), f);
    setVector(&w, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518152f), fp_Flt2FP(-0.186368f), f);
    setUVTriangle(&triangle[479], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 480:

    setVector(&u, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518152f), fp_Flt2FP(-0.186368f), f);
    setVector(&v, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518163f), fp_Flt2FP(-0.185728f), f);
    setVector(&w, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516915f), fp_Flt2FP(-0.185596f), f);
    setUVTriangle(&triangle[480], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 481:

    setVector(&u, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516899f), fp_Flt2FP(-0.186446f), f);
    setVector(&v, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.517026f), fp_Flt2FP(-0.187272f), f);
    setVector(&w, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518248f), fp_Flt2FP(-0.186980f), f);
    setUVTriangle(&triangle[481], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 482:

    setVector(&u, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518248f), fp_Flt2FP(-0.186980f), f);
    setVector(&v, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518152f), fp_Flt2FP(-0.186368f), f);
    setVector(&w, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516899f), fp_Flt2FP(-0.186446f), f);
    setUVTriangle(&triangle[482], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 483:

    setVector(&u, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.517026f), fp_Flt2FP(-0.187272f), f);
    setVector(&v, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.517289f), fp_Flt2FP(-0.188012f), f);
    setVector(&w, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518443f), fp_Flt2FP(-0.187540f), f);
    setUVTriangle(&triangle[483], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 484:

    setVector(&u, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518443f), fp_Flt2FP(-0.187540f), f);
    setVector(&v, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518248f), fp_Flt2FP(-0.186980f), f);
    setVector(&w, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.517026f), fp_Flt2FP(-0.187272f), f);
    setUVTriangle(&triangle[484], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 485:

    setVector(&u, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.517289f), fp_Flt2FP(-0.188012f), f);
    setVector(&v, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.517666f), fp_Flt2FP(-0.188627f), f);
    setVector(&w, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518727f), fp_Flt2FP(-0.187998f), f);
    setUVTriangle(&triangle[485], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 486:

    setVector(&u, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518727f), fp_Flt2FP(-0.187998f), f);
    setVector(&v, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518443f), fp_Flt2FP(-0.187540f), f);
    setVector(&w, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.517289f), fp_Flt2FP(-0.188012f), f);
    setUVTriangle(&triangle[486], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 487:

    setVector(&u, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217379f), fp_Flt2FP(-0.432536f), f);
    setVector(&v, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217100f), fp_Flt2FP(-0.433317f), f);
    setVector(&w, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217977f), fp_Flt2FP(-0.433709f), f);
    setUVTriangle(&triangle[487], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 488:

    setVector(&u, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217977f), fp_Flt2FP(-0.433709f), f);
    setVector(&v, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218186f), fp_Flt2FP(-0.433122f), f);
    setVector(&w, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217379f), fp_Flt2FP(-0.432536f), f);
    setUVTriangle(&triangle[488], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 489:

    setVector(&u, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217100f), fp_Flt2FP(-0.433317f), f);
    setVector(&v, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.216815f), fp_Flt2FP(-0.434120f), f);
    setVector(&w, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217764f), fp_Flt2FP(-0.434309f), f);
    setUVTriangle(&triangle[489], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 490:

    setVector(&u, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217764f), fp_Flt2FP(-0.434309f), f);
    setVector(&v, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217977f), fp_Flt2FP(-0.433709f), f);
    setVector(&w, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217100f), fp_Flt2FP(-0.433317f), f);
    setUVTriangle(&triangle[490], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 491:

    setVector(&u, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216815f), fp_Flt2FP(-0.434120f), f);
    setVector(&v, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.216544f), fp_Flt2FP(-0.434885f), f);
    setVector(&w, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217560f), fp_Flt2FP(-0.434885f), f);
    setUVTriangle(&triangle[491], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 492:

    setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217560f), fp_Flt2FP(-0.434885f), f);
    setVector(&v, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217764f), fp_Flt2FP(-0.434309f), f);
    setVector(&w, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216815f), fp_Flt2FP(-0.434120f), f);
    setUVTriangle(&triangle[492], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 493:

    setVector(&u, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.335870f), fp_Flt2FP(-0.478507f), f);
    setVector(&v, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335838f), fp_Flt2FP(-0.479356f), f);
    setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337092f), fp_Flt2FP(-0.479294f), f);
    setUVTriangle(&triangle[493], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 494:

    setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337092f), fp_Flt2FP(-0.479294f), f);
    setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337115f), fp_Flt2FP(-0.478657f), f);
    setVector(&w, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335870f), fp_Flt2FP(-0.478507f), f);
    setUVTriangle(&triangle[494], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 495:

    setVector(&u, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.335838f), fp_Flt2FP(-0.479356f), f);
    setVector(&v, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335950f), fp_Flt2FP(-0.480182f), f);
    setVector(&w, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337178f), fp_Flt2FP(-0.479916f), f);
    setUVTriangle(&triangle[495], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 496:

    setVector(&u, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337178f), fp_Flt2FP(-0.479916f), f);
    setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337092f), fp_Flt2FP(-0.479294f), f);
    setVector(&w, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335838f), fp_Flt2FP(-0.479356f), f);
    setUVTriangle(&triangle[496], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 497:

    setVector(&u, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.335950f), fp_Flt2FP(-0.480182f), f);
    setVector(&v, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.336201f), fp_Flt2FP(-0.480930f), f);
    setVector(&w, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337364f), fp_Flt2FP(-0.480473f), f);
    setUVTriangle(&triangle[497], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 498:

    setVector(&u, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337364f), fp_Flt2FP(-0.480473f), f);
    setVector(&v, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337178f), fp_Flt2FP(-0.479916f), f);
    setVector(&w, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335950f), fp_Flt2FP(-0.480182f), f);
    setUVTriangle(&triangle[498], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 499:

    setVector(&u, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953322f), fp_Flt2FP(-0.992120f), f);
    setVector(&v, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953319f), fp_Flt2FP(-0.992952f), f);
    setVector(&w, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954302f), fp_Flt2FP(-0.993021f), f);
    setUVTriangle(&triangle[499], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 500:

    setVector(&u, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954302f), fp_Flt2FP(-0.993021f), f);
    setVector(&v, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954305f), fp_Flt2FP(-0.992397f), f);
    setVector(&w, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953322f), fp_Flt2FP(-0.992120f), f);
    setUVTriangle(&triangle[500], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 501:

    setVector(&u, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953319f), fp_Flt2FP(-0.992952f), f);
    setVector(&v, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953322f), fp_Flt2FP(-0.993798f), f);
    setVector(&w, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954305f), fp_Flt2FP(-0.993659f), f);
    setUVTriangle(&triangle[501], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 502:

    setVector(&u, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954305f), fp_Flt2FP(-0.993659f), f);
    setVector(&v, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954302f), fp_Flt2FP(-0.993021f), f);
    setVector(&w, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953319f), fp_Flt2FP(-0.992952f), f);
    setUVTriangle(&triangle[502], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 503:

    setVector(&u, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953322f), fp_Flt2FP(-0.993798f), f);
    setVector(&v, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953334f), fp_Flt2FP(-0.994610f), f);
    setVector(&w, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954313f), fp_Flt2FP(-0.994270f), f);
    setUVTriangle(&triangle[503], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 504:

    setVector(&u, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954313f), fp_Flt2FP(-0.994270f), f);
    setVector(&v, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954305f), fp_Flt2FP(-0.993659f), f);
    setVector(&w, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953322f), fp_Flt2FP(-0.993798f), f);
    setUVTriangle(&triangle[504], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 505:

    setVector(&u, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867958f), fp_Flt2FP(-0.911849f), f);
    setVector(&v, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867935f), fp_Flt2FP(-0.910998f), f);
    setVector(&w, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.866689f), fp_Flt2FP(-0.911136f), f);
    setUVTriangle(&triangle[505], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 506:

    setVector(&u, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.866689f), fp_Flt2FP(-0.911136f), f);
    setVector(&v, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.866706f), fp_Flt2FP(-0.911775f), f);
    setVector(&w, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867958f), fp_Flt2FP(-0.911849f), f);
    setUVTriangle(&triangle[506], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 507:

    setVector(&u, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867935f), fp_Flt2FP(-0.910998f), f);
    setVector(&v, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867771f), fp_Flt2FP(-0.910175f), f);
    setVector(&w, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.866564f), fp_Flt2FP(-0.910525f), f);
    setUVTriangle(&triangle[507], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 508:

    setVector(&u, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.866564f), fp_Flt2FP(-0.910525f), f);
    setVector(&v, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.866689f), fp_Flt2FP(-0.911136f), f);
    setVector(&w, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867935f), fp_Flt2FP(-0.910998f), f);
    setUVTriangle(&triangle[508], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 509:

    setVector(&u, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240049f), fp_Flt2FP(-0.315837f), f);
    setVector(&v, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240509f), fp_Flt2FP(-0.315394f), f);
    setVector(&w, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239436f), fp_Flt2FP(-0.314786f), f);
    setUVTriangle(&triangle[509], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 510:

    setVector(&u, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239436f), fp_Flt2FP(-0.314786f), f);
    setVector(&v, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239089f), fp_Flt2FP(-0.315117f), f);
    setVector(&w, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240049f), fp_Flt2FP(-0.315837f), f);
    setUVTriangle(&triangle[510], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 511:

    setVector(&u, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319039f), fp_Flt2FP(-0.307278f), f);
    setVector(&v, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319869f), fp_Flt2FP(-0.307280f), f);
    setVector(&w, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319946f), fp_Flt2FP(-0.306328f), f);
    setUVTriangle(&triangle[511], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 512:

    setVector(&u, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319946f), fp_Flt2FP(-0.306328f), f);
    setVector(&v, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319323f), fp_Flt2FP(-0.306327f), f);
    setVector(&w, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319039f), fp_Flt2FP(-0.307278f), f);
    setUVTriangle(&triangle[512], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 513:

    setVector(&u, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319946f), fp_Flt2FP(-0.306328f), f);
    setVector(&v, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320584f), fp_Flt2FP(-0.306329f), f);
    setVector(&w, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320448f), fp_Flt2FP(-0.305376f), f);
    setUVTriangle(&triangle[513], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 514:

    setVector(&u, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320448f), fp_Flt2FP(-0.305376f), f);
    setVector(&v, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320023f), fp_Flt2FP(-0.305376f), f);
    setVector(&w, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319946f), fp_Flt2FP(-0.306328f), f);
    setUVTriangle(&triangle[514], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 515:

    setVector(&u, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320584f), fp_Flt2FP(-0.306329f), f);
    setVector(&v, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.321193f), fp_Flt2FP(-0.306331f), f);
    setVector(&w, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320854f), fp_Flt2FP(-0.305378f), f);
    setUVTriangle(&triangle[515], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 516:

    setVector(&u, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320854f), fp_Flt2FP(-0.305378f), f);
    setVector(&v, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320448f), fp_Flt2FP(-0.305376f), f);
    setVector(&w, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320584f), fp_Flt2FP(-0.306329f), f);
    setUVTriangle(&triangle[516], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 517:

    setVector(&u, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239980f), fp_Flt2FP(-0.313143f), f);
    setVector(&v, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239957f), fp_Flt2FP(-0.312506f), f);
    setVector(&w, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238710f), fp_Flt2FP(-0.312656f), f);
    setUVTriangle(&triangle[517], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 518:

    setVector(&u, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238710f), fp_Flt2FP(-0.312656f), f);
    setVector(&v, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238726f), fp_Flt2FP(-0.313083f), f);
    setVector(&w, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239980f), fp_Flt2FP(-0.313143f), f);
    setUVTriangle(&triangle[518], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 519:

    setVector(&u, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239957f), fp_Flt2FP(-0.312506f), f);
    setVector(&v, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239830f), fp_Flt2FP(-0.311895f), f);
    setVector(&w, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238624f), fp_Flt2FP(-0.312248f), f);
    setUVTriangle(&triangle[519], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 520:

    setVector(&u, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238624f), fp_Flt2FP(-0.312248f), f);
    setVector(&v, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238710f), fp_Flt2FP(-0.312656f), f);
    setVector(&w, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239957f), fp_Flt2FP(-0.312506f), f);
    setUVTriangle(&triangle[520], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 521:

    setVector(&u, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239830f), fp_Flt2FP(-0.311895f), f);
    setVector(&v, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239602f), fp_Flt2FP(-0.311347f), f);
    setVector(&w, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238474f), fp_Flt2FP(-0.311886f), f);
    setUVTriangle(&triangle[521], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 522:

    setVector(&u, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238474f), fp_Flt2FP(-0.311886f), f);
    setVector(&v, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238624f), fp_Flt2FP(-0.312248f), f);
    setVector(&w, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239830f), fp_Flt2FP(-0.311895f), f);
    setUVTriangle(&triangle[522], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 523:

    setVector(&u, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.861638f), fp_Flt2FP(-0.772135f), f);
    setVector(&v, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.861635f), fp_Flt2FP(-0.771511f), f);
    setVector(&w, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860710f), fp_Flt2FP(-0.771434f), f);
    setUVTriangle(&triangle[523], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 524:

    setVector(&u, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860710f), fp_Flt2FP(-0.771434f), f);
    setVector(&v, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860712f), fp_Flt2FP(-0.771850f), f);
    setVector(&w, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.861638f), fp_Flt2FP(-0.772135f), f);
    setUVTriangle(&triangle[524], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 525:

    setVector(&u, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.861635f), fp_Flt2FP(-0.771511f), f);
    setVector(&v, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.861638f), fp_Flt2FP(-0.770872f), f);
    setVector(&w, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860712f), fp_Flt2FP(-0.771011f), f);
    setUVTriangle(&triangle[525], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 526:

    setVector(&u, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860712f), fp_Flt2FP(-0.771011f), f);
    setVector(&v, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860710f), fp_Flt2FP(-0.771434f), f);
    setVector(&w, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.861635f), fp_Flt2FP(-0.771511f), f);
    setUVTriangle(&triangle[526], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 527:

    setVector(&u, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518163f), fp_Flt2FP(-0.185728f), f);
    setVector(&v, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518152f), fp_Flt2FP(-0.186368f), f);
    setVector(&w, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519404f), fp_Flt2FP(-0.186282f), f);
    setUVTriangle(&triangle[527], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 528:

    setVector(&u, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519404f), fp_Flt2FP(-0.186282f), f);
    setVector(&v, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519412f), fp_Flt2FP(-0.185854f), f);
    setVector(&w, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518163f), fp_Flt2FP(-0.185728f), f);
    setUVTriangle(&triangle[528], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 529:

    setVector(&u, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518152f), fp_Flt2FP(-0.186368f), f);
    setVector(&v, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518248f), fp_Flt2FP(-0.186980f), f);
    setVector(&w, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519468f), fp_Flt2FP(-0.186695f), f);
    setUVTriangle(&triangle[529], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 530:

    setVector(&u, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519468f), fp_Flt2FP(-0.186695f), f);
    setVector(&v, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519404f), fp_Flt2FP(-0.186282f), f);
    setVector(&w, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518152f), fp_Flt2FP(-0.186368f), f);
    setUVTriangle(&triangle[530], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 531:

    setVector(&u, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518248f), fp_Flt2FP(-0.186980f), f);
    setVector(&v, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518443f), fp_Flt2FP(-0.187540f), f);
    setVector(&w, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519600f), fp_Flt2FP(-0.187062f), f);
    setUVTriangle(&triangle[531], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 532:

    setVector(&u, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519600f), fp_Flt2FP(-0.187062f), f);
    setVector(&v, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519468f), fp_Flt2FP(-0.186695f), f);
    setVector(&w, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518248f), fp_Flt2FP(-0.186980f), f);
    setUVTriangle(&triangle[532], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 533:

    setVector(&u, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518443f), fp_Flt2FP(-0.187540f), f);
    setVector(&v, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518727f), fp_Flt2FP(-0.187998f), f);
    setVector(&w, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519788f), fp_Flt2FP(-0.187369f), f);
    setUVTriangle(&triangle[533], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 534:

    setVector(&u, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519788f), fp_Flt2FP(-0.187369f), f);
    setVector(&v, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519600f), fp_Flt2FP(-0.187062f), f);
    setVector(&w, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518443f), fp_Flt2FP(-0.187540f), f);
    setUVTriangle(&triangle[534], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 535:

    setVector(&u, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218186f), fp_Flt2FP(-0.433122f), f);
    setVector(&v, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217977f), fp_Flt2FP(-0.433709f), f);
    setVector(&w, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218855f), fp_Flt2FP(-0.434099f), f);
    setUVTriangle(&triangle[535], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 536:

    setVector(&u, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218855f), fp_Flt2FP(-0.434099f), f);
    setVector(&v, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218994f), fp_Flt2FP(-0.433709f), f);
    setVector(&w, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218186f), fp_Flt2FP(-0.433122f), f);
    setUVTriangle(&triangle[536], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 537:

    setVector(&u, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217977f), fp_Flt2FP(-0.433709f), f);
    setVector(&v, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217764f), fp_Flt2FP(-0.434309f), f);
    setVector(&w, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218712f), fp_Flt2FP(-0.434500f), f);
    setUVTriangle(&triangle[537], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 538:

    setVector(&u, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218712f), fp_Flt2FP(-0.434500f), f);
    setVector(&v, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218855f), fp_Flt2FP(-0.434099f), f);
    setVector(&w, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217977f), fp_Flt2FP(-0.433709f), f);
    setUVTriangle(&triangle[538], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 539:

    setVector(&u, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217764f), fp_Flt2FP(-0.434309f), f);
    setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217560f), fp_Flt2FP(-0.434885f), f);
    setVector(&w, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218576f), fp_Flt2FP(-0.434884f), f);
    setUVTriangle(&triangle[539], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 540:

    setVector(&u, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218576f), fp_Flt2FP(-0.434884f), f);
    setVector(&v, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218712f), fp_Flt2FP(-0.434500f), f);
    setVector(&w, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217764f), fp_Flt2FP(-0.434309f), f);
    setUVTriangle(&triangle[540], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 541:

    setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337115f), fp_Flt2FP(-0.478657f), f);
    setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337092f), fp_Flt2FP(-0.479294f), f);
    setVector(&w, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338346f), fp_Flt2FP(-0.479232f), f);
    setUVTriangle(&triangle[541], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 542:

    setVector(&u, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338346f), fp_Flt2FP(-0.479232f), f);
    setVector(&v, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338360f), fp_Flt2FP(-0.478806f), f);
    setVector(&w, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337115f), fp_Flt2FP(-0.478657f), f);
    setUVTriangle(&triangle[542], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 543:

    setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337092f), fp_Flt2FP(-0.479294f), f);
    setVector(&v, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337178f), fp_Flt2FP(-0.479916f), f);
    setVector(&w, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338402f), fp_Flt2FP(-0.479646f), f);
    setUVTriangle(&triangle[543], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 544:

    setVector(&u, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338402f), fp_Flt2FP(-0.479646f), f);
    setVector(&v, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338346f), fp_Flt2FP(-0.479232f), f);
    setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337092f), fp_Flt2FP(-0.479294f), f);
    setUVTriangle(&triangle[544], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 545:

    setVector(&u, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337178f), fp_Flt2FP(-0.479916f), f);
    setVector(&v, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337364f), fp_Flt2FP(-0.480473f), f);
    setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338526f), fp_Flt2FP(-0.480018f), f);
    setUVTriangle(&triangle[545], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 546:

    setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338526f), fp_Flt2FP(-0.480018f), f);
    setVector(&v, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338402f), fp_Flt2FP(-0.479646f), f);
    setVector(&w, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337178f), fp_Flt2FP(-0.479916f), f);
    setUVTriangle(&triangle[546], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 547:

    setVector(&u, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954305f), fp_Flt2FP(-0.992397f), f);
    setVector(&v, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954302f), fp_Flt2FP(-0.993021f), f);
    setVector(&w, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955285f), fp_Flt2FP(-0.993091f), f);
    setUVTriangle(&triangle[547], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 548:

    setVector(&u, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955285f), fp_Flt2FP(-0.993091f), f);
    setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955287f), fp_Flt2FP(-0.992674f), f);
    setVector(&w, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954305f), fp_Flt2FP(-0.992397f), f);
    setUVTriangle(&triangle[548], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 549:

    setVector(&u, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954302f), fp_Flt2FP(-0.993021f), f);
    setVector(&v, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954305f), fp_Flt2FP(-0.993659f), f);
    setVector(&w, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955287f), fp_Flt2FP(-0.993514f), f);
    setUVTriangle(&triangle[549], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 550:

    setVector(&u, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955287f), fp_Flt2FP(-0.993514f), f);
    setVector(&v, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955285f), fp_Flt2FP(-0.993091f), f);
    setVector(&w, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954302f), fp_Flt2FP(-0.993021f), f);
    setUVTriangle(&triangle[550], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 551:

    setVector(&u, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954305f), fp_Flt2FP(-0.993659f), f);
    setVector(&v, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954313f), fp_Flt2FP(-0.994270f), f);
    setVector(&w, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955293f), fp_Flt2FP(-0.993923f), f);
    setUVTriangle(&triangle[551], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 552:

    setVector(&u, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955293f), fp_Flt2FP(-0.993923f), f);
    setVector(&v, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955287f), fp_Flt2FP(-0.993514f), f);
    setVector(&w, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954305f), fp_Flt2FP(-0.993659f), f);
    setUVTriangle(&triangle[552], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 553:

    setVector(&u, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.866706f), fp_Flt2FP(-0.911775f), f);
    setVector(&v, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.866689f), fp_Flt2FP(-0.911136f), f);
    setVector(&w, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.865440f), fp_Flt2FP(-0.911279f), f);
    setUVTriangle(&triangle[553], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 554:

    setVector(&u, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.865440f), fp_Flt2FP(-0.911279f), f);
    setVector(&v, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.865452f), fp_Flt2FP(-0.911706f), f);
    setVector(&w, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.866706f), fp_Flt2FP(-0.911775f), f);
    setUVTriangle(&triangle[554], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 555:

    setVector(&u, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.866689f), fp_Flt2FP(-0.911136f), f);
    setVector(&v, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.866564f), fp_Flt2FP(-0.910525f), f);
    setVector(&w, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.865359f), fp_Flt2FP(-0.910869f), f);
    setUVTriangle(&triangle[555], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 556:

    setVector(&u, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.865359f), fp_Flt2FP(-0.910869f), f);
    setVector(&v, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.865440f), fp_Flt2FP(-0.911279f), f);
    setVector(&w, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.866689f), fp_Flt2FP(-0.911136f), f);
    setUVTriangle(&triangle[556], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 557:

    setVector(&u, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239089f), fp_Flt2FP(-0.315117f), f);
    setVector(&v, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239436f), fp_Flt2FP(-0.314786f), f);
    setVector(&w, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238362f), fp_Flt2FP(-0.314177f), f);
    setUVTriangle(&triangle[557], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 558:

    setVector(&u, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238362f), fp_Flt2FP(-0.314177f), f);
    setVector(&v, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238134f), fp_Flt2FP(-0.314400f), f);
    setVector(&w, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239089f), fp_Flt2FP(-0.315117f), f);
    setUVTriangle(&triangle[558], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 559:

    setVector(&u, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319323f), fp_Flt2FP(-0.306327f), f);
    setVector(&v, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319946f), fp_Flt2FP(-0.306328f), f);
    setVector(&w, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320023f), fp_Flt2FP(-0.305376f), f);
    setUVTriangle(&triangle[559], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 560:

    setVector(&u, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320023f), fp_Flt2FP(-0.305376f), f);
    setVector(&v, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319607f), fp_Flt2FP(-0.305375f), f);
    setVector(&w, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319323f), fp_Flt2FP(-0.306327f), f);
    setUVTriangle(&triangle[560], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 561:

    setVector(&u, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320023f), fp_Flt2FP(-0.305376f), f);
    setVector(&v, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320448f), fp_Flt2FP(-0.305376f), f);
    setVector(&w, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320312f), fp_Flt2FP(-0.304424f), f);
    setUVTriangle(&triangle[561], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 562:

    setVector(&u, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320312f), fp_Flt2FP(-0.304424f), f);
    setVector(&v, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320099f), fp_Flt2FP(-0.304424f), f);
    setVector(&w, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320023f), fp_Flt2FP(-0.305376f), f);
    setUVTriangle(&triangle[562], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 563:

    setVector(&u, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320448f), fp_Flt2FP(-0.305376f), f);
    setVector(&v, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320854f), fp_Flt2FP(-0.305378f), f);
    setVector(&w, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320515f), fp_Flt2FP(-0.304425f), f);
    setUVTriangle(&triangle[563], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 564:

    setVector(&u, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320515f), fp_Flt2FP(-0.304425f), f);
    setVector(&v, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320312f), fp_Flt2FP(-0.304424f), f);
    setVector(&w, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320448f), fp_Flt2FP(-0.305376f), f);
    setUVTriangle(&triangle[564], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 565:

    setVector(&u, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238726f), fp_Flt2FP(-0.313083f), f);
    setVector(&v, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238710f), fp_Flt2FP(-0.312656f), f);
    setVector(&w, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237467f), fp_Flt2FP(-0.312811f), f);
    setUVTriangle(&triangle[565], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 566:

    setVector(&u, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237467f), fp_Flt2FP(-0.312811f), f);
    setVector(&v, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237473f), fp_Flt2FP(-0.313022f), f);
    setVector(&w, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238726f), fp_Flt2FP(-0.313083f), f);
    setUVTriangle(&triangle[566], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 567:

    setVector(&u, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238710f), fp_Flt2FP(-0.312656f), f);
    setVector(&v, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238624f), fp_Flt2FP(-0.312248f), f);
    setVector(&w, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237422f), fp_Flt2FP(-0.312605f), f);
    setUVTriangle(&triangle[567], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 568:

    setVector(&u, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237422f), fp_Flt2FP(-0.312605f), f);
    setVector(&v, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237467f), fp_Flt2FP(-0.312811f), f);
    setVector(&w, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238710f), fp_Flt2FP(-0.312656f), f);
    setUVTriangle(&triangle[568], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 569:

    setVector(&u, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238624f), fp_Flt2FP(-0.312248f), f);
    setVector(&v, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238474f), fp_Flt2FP(-0.311886f), f);
    setVector(&w, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237347f), fp_Flt2FP(-0.312424f), f);
    setUVTriangle(&triangle[569], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 570:

    setVector(&u, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237347f), fp_Flt2FP(-0.312424f), f);
    setVector(&v, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237422f), fp_Flt2FP(-0.312605f), f);
    setVector(&w, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238624f), fp_Flt2FP(-0.312248f), f);
    setUVTriangle(&triangle[570], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 571:

    setVector(&u, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860712f), fp_Flt2FP(-0.771850f), f);
    setVector(&v, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860710f), fp_Flt2FP(-0.771434f), f);
    setVector(&w, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.859784f), fp_Flt2FP(-0.771358f), f);
    setUVTriangle(&triangle[571], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 572:

    setVector(&u, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.859784f), fp_Flt2FP(-0.771358f), f);
    setVector(&v, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859785f), fp_Flt2FP(-0.771566f), f);
    setVector(&w, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860712f), fp_Flt2FP(-0.771850f), f);
    setUVTriangle(&triangle[572], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 573:

    setVector(&u, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860710f), fp_Flt2FP(-0.771434f), f);
    setVector(&v, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860712f), fp_Flt2FP(-0.771011f), f);
    setVector(&w, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.859785f), fp_Flt2FP(-0.771143f), f);
    setUVTriangle(&triangle[573], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 574:

    setVector(&u, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.859785f), fp_Flt2FP(-0.771143f), f);
    setVector(&v, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859784f), fp_Flt2FP(-0.771358f), f);
    setVector(&w, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860710f), fp_Flt2FP(-0.771434f), f);
    setUVTriangle(&triangle[574], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 575:

    setVector(&u, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519412f), fp_Flt2FP(-0.185854f), f);
    setVector(&v, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519404f), fp_Flt2FP(-0.186282f), f);
    setVector(&w, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.520657f), fp_Flt2FP(-0.186197f), f);
    setUVTriangle(&triangle[575], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 576:

    setVector(&u, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520657f), fp_Flt2FP(-0.186197f), f);
    setVector(&v, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520661f), fp_Flt2FP(-0.185986f), f);
    setVector(&w, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519412f), fp_Flt2FP(-0.185854f), f);
    setUVTriangle(&triangle[576], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 577:

    setVector(&u, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519404f), fp_Flt2FP(-0.186282f), f);
    setVector(&v, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519468f), fp_Flt2FP(-0.186695f), f);
    setVector(&w, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.520689f), fp_Flt2FP(-0.186403f), f);
    setUVTriangle(&triangle[577], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 578:

    setVector(&u, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520689f), fp_Flt2FP(-0.186403f), f);
    setVector(&v, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520657f), fp_Flt2FP(-0.186197f), f);
    setVector(&w, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519404f), fp_Flt2FP(-0.186282f), f);
    setUVTriangle(&triangle[578], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 579:

    setVector(&u, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519468f), fp_Flt2FP(-0.186695f), f);
    setVector(&v, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519600f), fp_Flt2FP(-0.187062f), f);
    setVector(&w, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.520755f), fp_Flt2FP(-0.186590f), f);
    setUVTriangle(&triangle[579], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 580:

    setVector(&u, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520755f), fp_Flt2FP(-0.186590f), f);
    setVector(&v, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520689f), fp_Flt2FP(-0.186403f), f);
    setVector(&w, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519468f), fp_Flt2FP(-0.186695f), f);
    setUVTriangle(&triangle[580], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 581:

    setVector(&u, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519600f), fp_Flt2FP(-0.187062f), f);
    setVector(&v, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519788f), fp_Flt2FP(-0.187369f), f);
    setVector(&w, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.520849f), fp_Flt2FP(-0.186740f), f);
    setUVTriangle(&triangle[581], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 582:

    setVector(&u, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520849f), fp_Flt2FP(-0.186740f), f);
    setVector(&v, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520755f), fp_Flt2FP(-0.186590f), f);
    setVector(&w, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519600f), fp_Flt2FP(-0.187062f), f);
    setUVTriangle(&triangle[582], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 583:

    setVector(&u, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218994f), fp_Flt2FP(-0.433709f), f);
    setVector(&v, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218855f), fp_Flt2FP(-0.434099f), f);
    setVector(&w, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.219731f), fp_Flt2FP(-0.434491f), f);
    setUVTriangle(&triangle[583], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 584:

    setVector(&u, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219731f), fp_Flt2FP(-0.434491f), f);
    setVector(&v, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219801f), fp_Flt2FP(-0.434295f), f);
    setVector(&w, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218994f), fp_Flt2FP(-0.433709f), f);
    setUVTriangle(&triangle[584], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 585:

    setVector(&u, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218855f), fp_Flt2FP(-0.434099f), f);
    setVector(&v, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218712f), fp_Flt2FP(-0.434500f), f);
    setVector(&w, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.219661f), fp_Flt2FP(-0.434691f), f);
    setUVTriangle(&triangle[585], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 586:

    setVector(&u, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219661f), fp_Flt2FP(-0.434691f), f);
    setVector(&v, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219731f), fp_Flt2FP(-0.434491f), f);
    setVector(&w, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218855f), fp_Flt2FP(-0.434099f), f);
    setUVTriangle(&triangle[586], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 587:

    setVector(&u, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218712f), fp_Flt2FP(-0.434500f), f);
    setVector(&v, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218576f), fp_Flt2FP(-0.434884f), f);
    setVector(&w, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.219593f), fp_Flt2FP(-0.434882f), f);
    setUVTriangle(&triangle[587], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 588:

    setVector(&u, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219593f), fp_Flt2FP(-0.434882f), f);
    setVector(&v, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219661f), fp_Flt2FP(-0.434691f), f);
    setVector(&w, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218712f), fp_Flt2FP(-0.434500f), f);
    setUVTriangle(&triangle[588], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 589:

    setVector(&u, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338360f), fp_Flt2FP(-0.478806f), f);
    setVector(&v, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338346f), fp_Flt2FP(-0.479232f), f);
    setVector(&w, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.339600f), fp_Flt2FP(-0.479170f), f);
    setUVTriangle(&triangle[589], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 590:

    setVector(&u, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339600f), fp_Flt2FP(-0.479170f), f);
    setVector(&v, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339606f), fp_Flt2FP(-0.478955f), f);
    setVector(&w, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338360f), fp_Flt2FP(-0.478806f), f);
    setUVTriangle(&triangle[590], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 591:

    setVector(&u, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338346f), fp_Flt2FP(-0.479232f), f);
    setVector(&v, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338402f), fp_Flt2FP(-0.479646f), f);
    setVector(&w, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.339627f), fp_Flt2FP(-0.479375f), f);
    setUVTriangle(&triangle[591], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 592:

    setVector(&u, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339627f), fp_Flt2FP(-0.479375f), f);
    setVector(&v, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339600f), fp_Flt2FP(-0.479170f), f);
    setVector(&w, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338346f), fp_Flt2FP(-0.479232f), f);
    setUVTriangle(&triangle[592], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 593:

    setVector(&u, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338402f), fp_Flt2FP(-0.479646f), f);
    setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338526f), fp_Flt2FP(-0.480018f), f);
    setVector(&w, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.339692f), fp_Flt2FP(-0.479566f), f);
    setUVTriangle(&triangle[593], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 594:

    setVector(&u, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339692f), fp_Flt2FP(-0.479566f), f);
    setVector(&v, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339627f), fp_Flt2FP(-0.479375f), f);
    setVector(&w, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338402f), fp_Flt2FP(-0.479646f), f);
    setUVTriangle(&triangle[594], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 595:

    setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955287f), fp_Flt2FP(-0.992674f), f);
    setVector(&v, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955285f), fp_Flt2FP(-0.993091f), f);
    setVector(&w, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.956268f), fp_Flt2FP(-0.993160f), f);
    setUVTriangle(&triangle[595], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 596:

    setVector(&u, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956268f), fp_Flt2FP(-0.993160f), f);
    setVector(&v, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956269f), fp_Flt2FP(-0.992959f), f);
    setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955287f), fp_Flt2FP(-0.992674f), f);
    setUVTriangle(&triangle[596], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 597:

    setVector(&u, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955285f), fp_Flt2FP(-0.993091f), f);
    setVector(&v, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955287f), fp_Flt2FP(-0.993514f), f);
    setVector(&w, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.956269f), fp_Flt2FP(-0.993375f), f);
    setUVTriangle(&triangle[597], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 598:

    setVector(&u, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956269f), fp_Flt2FP(-0.993375f), f);
    setVector(&v, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956268f), fp_Flt2FP(-0.993160f), f);
    setVector(&w, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955285f), fp_Flt2FP(-0.993091f), f);
    setUVTriangle(&triangle[598], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 599:

    setVector(&u, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955287f), fp_Flt2FP(-0.993514f), f);
    setVector(&v, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955293f), fp_Flt2FP(-0.993923f), f);
    setVector(&w, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.956272f), fp_Flt2FP(-0.993576f), f);
    setUVTriangle(&triangle[599], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 600:

    setVector(&u, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956272f), fp_Flt2FP(-0.993576f), f);
    setVector(&v, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956269f), fp_Flt2FP(-0.993375f), f);
    setVector(&w, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955287f), fp_Flt2FP(-0.993514f), f);
    setUVTriangle(&triangle[600], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 601:

    setVector(&u, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.865452f), fp_Flt2FP(-0.911706f), f);
    setVector(&v, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.865440f), fp_Flt2FP(-0.911279f), f);
    setVector(&w, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.864192f), fp_Flt2FP(-0.911423f), f);
    setUVTriangle(&triangle[601], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 602:

    setVector(&u, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864192f), fp_Flt2FP(-0.911423f), f);
    setVector(&v, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864197f), fp_Flt2FP(-0.911636f), f);
    setVector(&w, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.865452f), fp_Flt2FP(-0.911706f), f);
    setUVTriangle(&triangle[602], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 603:

    setVector(&u, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.865440f), fp_Flt2FP(-0.911279f), f);
    setVector(&v, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.865359f), fp_Flt2FP(-0.910869f), f);
    setVector(&w, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.864151f), fp_Flt2FP(-0.911218f), f);
    setUVTriangle(&triangle[603], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 604:

    setVector(&u, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864151f), fp_Flt2FP(-0.911218f), f);
    setVector(&v, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864192f), fp_Flt2FP(-0.911423f), f);
    setVector(&w, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.865440f), fp_Flt2FP(-0.911279f), f);
    setUVTriangle(&triangle[604], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 605:

    setVector(&u, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238134f), fp_Flt2FP(-0.314400f), f);
    setVector(&v, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238362f), fp_Flt2FP(-0.314177f), f);
    setVector(&w, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237289f), fp_Flt2FP(-0.313567f), f);
    setUVTriangle(&triangle[605], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 606:

    setVector(&u, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237289f), fp_Flt2FP(-0.313567f), f);
    setVector(&v, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237175f), fp_Flt2FP(-0.313679f), f);
    setVector(&w, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238134f), fp_Flt2FP(-0.314400f), f);
    setUVTriangle(&triangle[606], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 607:

    setVector(&u, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319607f), fp_Flt2FP(-0.305375f), f);
    setVector(&v, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320023f), fp_Flt2FP(-0.305376f), f);
    setVector(&w, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320099f), fp_Flt2FP(-0.304424f), f);
    setUVTriangle(&triangle[607], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 608:

    setVector(&u, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320099f), fp_Flt2FP(-0.304424f), f);
    setVector(&v, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319892f), fp_Flt2FP(-0.304423f), f);
    setVector(&w, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319607f), fp_Flt2FP(-0.305375f), f);
    setUVTriangle(&triangle[608], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 609:

    setVector(&u, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320099f), fp_Flt2FP(-0.304424f), f);
    setVector(&v, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320312f), fp_Flt2FP(-0.304424f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320176f), fp_Flt2FP(-0.303472f), f);
    setUVTriangle(&triangle[609], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 610:

    setVector(&u, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320312f), fp_Flt2FP(-0.304424f), f);
    setVector(&v, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320515f), fp_Flt2FP(-0.304425f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320176f), fp_Flt2FP(-0.303472f), f);
    setUVTriangle(&triangle[610], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 611:

    setVector(&u, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237473f), fp_Flt2FP(-0.313022f), f);
    setVector(&v, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237467f), fp_Flt2FP(-0.312811f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.236220f), fp_Flt2FP(-0.312962f), f);
    setUVTriangle(&triangle[611], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 612:

    setVector(&u, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237467f), fp_Flt2FP(-0.312811f), f);
    setVector(&v, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237422f), fp_Flt2FP(-0.312605f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.236220f), fp_Flt2FP(-0.312962f), f);
    setUVTriangle(&triangle[612], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 613:

    setVector(&u, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237422f), fp_Flt2FP(-0.312605f), f);
    setVector(&v, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237347f), fp_Flt2FP(-0.312424f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.236220f), fp_Flt2FP(-0.312962f), f);
    setUVTriangle(&triangle[613], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 614:

    setVector(&u, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.859785f), fp_Flt2FP(-0.771566f), f);
    setVector(&v, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859784f), fp_Flt2FP(-0.771358f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.858859f), fp_Flt2FP(-0.771282f), f);
    setUVTriangle(&triangle[614], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 615:

    setVector(&u, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.859784f), fp_Flt2FP(-0.771358f), f);
    setVector(&v, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859785f), fp_Flt2FP(-0.771143f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.858859f), fp_Flt2FP(-0.771282f), f);
    setUVTriangle(&triangle[615], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 616:

    setVector(&u, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520661f), fp_Flt2FP(-0.185986f), f);
    setVector(&v, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520657f), fp_Flt2FP(-0.186197f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.521910f), fp_Flt2FP(-0.186111f), f);
    setUVTriangle(&triangle[616], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 617:

    setVector(&u, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520657f), fp_Flt2FP(-0.186197f), f);
    setVector(&v, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520689f), fp_Flt2FP(-0.186403f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.521910f), fp_Flt2FP(-0.186111f), f);
    setUVTriangle(&triangle[617], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 618:

    setVector(&u, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520689f), fp_Flt2FP(-0.186403f), f);
    setVector(&v, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520755f), fp_Flt2FP(-0.186590f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.521910f), fp_Flt2FP(-0.186111f), f);
    setUVTriangle(&triangle[618], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 619:

    setVector(&u, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520755f), fp_Flt2FP(-0.186590f), f);
    setVector(&v, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520849f), fp_Flt2FP(-0.186740f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.521910f), fp_Flt2FP(-0.186111f), f);
    setUVTriangle(&triangle[619], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 620:

    setVector(&u, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219801f), fp_Flt2FP(-0.434295f), f);
    setVector(&v, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219731f), fp_Flt2FP(-0.434491f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.220609f), fp_Flt2FP(-0.434882f), f);
    setUVTriangle(&triangle[620], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 621:

    setVector(&u, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219731f), fp_Flt2FP(-0.434491f), f);
    setVector(&v, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219661f), fp_Flt2FP(-0.434691f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.220609f), fp_Flt2FP(-0.434882f), f);
    setUVTriangle(&triangle[621], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 622:

    setVector(&u, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219661f), fp_Flt2FP(-0.434691f), f);
    setVector(&v, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219593f), fp_Flt2FP(-0.434882f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.220609f), fp_Flt2FP(-0.434882f), f);
    setUVTriangle(&triangle[622], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 623:

    setVector(&u, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339606f), fp_Flt2FP(-0.478955f), f);
    setVector(&v, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339600f), fp_Flt2FP(-0.479170f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.340855f), fp_Flt2FP(-0.479109f), f);
    setUVTriangle(&triangle[623], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 624:

    setVector(&u, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339600f), fp_Flt2FP(-0.479170f), f);
    setVector(&v, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339627f), fp_Flt2FP(-0.479375f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.340855f), fp_Flt2FP(-0.479109f), f);
    setUVTriangle(&triangle[624], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 625:

    setVector(&u, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339627f), fp_Flt2FP(-0.479375f), f);
    setVector(&v, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339692f), fp_Flt2FP(-0.479566f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.340855f), fp_Flt2FP(-0.479109f), f);
    setUVTriangle(&triangle[625], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 626:

    setVector(&u, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956269f), fp_Flt2FP(-0.992959f), f);
    setVector(&v, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956268f), fp_Flt2FP(-0.993160f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.957251f), fp_Flt2FP(-0.993236f), f);
    setUVTriangle(&triangle[626], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 627:

    setVector(&u, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956268f), fp_Flt2FP(-0.993160f), f);
    setVector(&v, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956269f), fp_Flt2FP(-0.993375f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.957251f), fp_Flt2FP(-0.993236f), f);
    setUVTriangle(&triangle[627], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 628:

    setVector(&u, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956269f), fp_Flt2FP(-0.993375f), f);
    setVector(&v, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956272f), fp_Flt2FP(-0.993576f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.957251f), fp_Flt2FP(-0.993236f), f);
    setUVTriangle(&triangle[628], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 629:

    setVector(&u, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864197f), fp_Flt2FP(-0.911636f), f);
    setVector(&v, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864192f), fp_Flt2FP(-0.911423f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862946f), fp_Flt2FP(-0.911561f), f);
    setUVTriangle(&triangle[629], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 630:

    setVector(&u, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864192f), fp_Flt2FP(-0.911423f), f);
    setVector(&v, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864151f), fp_Flt2FP(-0.911218f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862946f), fp_Flt2FP(-0.911561f), f);
    setUVTriangle(&triangle[630], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 631:

    setVector(&u, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237175f), fp_Flt2FP(-0.313679f), f);
    setVector(&v, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237289f), fp_Flt2FP(-0.313567f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.236220f), fp_Flt2FP(-0.312962f), f);
    setUVTriangle(&triangle[631], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 632:

    setVector(&u, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319892f), fp_Flt2FP(-0.304423f), f);
    setVector(&v, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320099f), fp_Flt2FP(-0.304424f), f);
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320176f), fp_Flt2FP(-0.303472f), f);
    setUVTriangle(&triangle[632], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 633:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227390f), fp_Flt2FP(-0.401840f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222356f), fp_Flt2FP(-0.401874f), f);
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218014f), fp_Flt2FP(-0.404424f), f);
    setUVTriangle(&triangle[633], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 634:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218014f), fp_Flt2FP(-0.404424f), f);
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.408800f), f);
    setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215563f), fp_Flt2FP(-0.413835f), f);
    setUVTriangle(&triangle[634], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 635:

    setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215563f), fp_Flt2FP(-0.413835f), f);
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218112f), fp_Flt2FP(-0.418176f), f);
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222490f), fp_Flt2FP(-0.420661f), f);
    setUVTriangle(&triangle[635], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 636:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218014f), fp_Flt2FP(-0.404424f), f);
    setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215563f), fp_Flt2FP(-0.413835f), f);
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222490f), fp_Flt2FP(-0.420661f), f);
    setUVTriangle(&triangle[636], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 637:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222490f), fp_Flt2FP(-0.420661f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227524f), fp_Flt2FP(-0.420626f), f);
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231865f), fp_Flt2FP(-0.418076f), f);
    setUVTriangle(&triangle[637], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 638:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.231865f), fp_Flt2FP(-0.418076f), f);
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.234352f), fp_Flt2FP(-0.413700f), f);
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234317f), fp_Flt2FP(-0.408665f), f);
    setUVTriangle(&triangle[638], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 639:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222490f), fp_Flt2FP(-0.420661f), f);
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.231865f), fp_Flt2FP(-0.418076f), f);
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234317f), fp_Flt2FP(-0.408665f), f);
    setUVTriangle(&triangle[639], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 640:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218014f), fp_Flt2FP(-0.404424f), f);
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222490f), fp_Flt2FP(-0.420661f), f);
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234317f), fp_Flt2FP(-0.408665f), f);
    setUVTriangle(&triangle[640], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 641:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227390f), fp_Flt2FP(-0.401840f), f);
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218014f), fp_Flt2FP(-0.404424f), f);
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234317f), fp_Flt2FP(-0.408665f), f);
    setUVTriangle(&triangle[641], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 642:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.231768f), fp_Flt2FP(-0.404324f), f);
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227390f), fp_Flt2FP(-0.401840f), f);
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234317f), fp_Flt2FP(-0.408665f), f);
    setUVTriangle(&triangle[642], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 643:

    setVector(&u, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.337523f), f);
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.226654f), fp_Flt2FP(-0.337523f), f);
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.227591f), fp_Flt2FP(-0.330712f), f);
    setUVTriangle(&triangle[643], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 644:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227591f), fp_Flt2FP(-0.330712f), f);
    setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.330712f), f);
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.337523f), f);
    setUVTriangle(&triangle[644], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 645:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.331483f), f);
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122580f), fp_Flt2FP(-0.336517f), f);
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.129625f), fp_Flt2FP(-0.336998f), f);
    setUVTriangle(&triangle[645], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 646:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.129625f), fp_Flt2FP(-0.336998f), f);
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.129625f), fp_Flt2FP(-0.331001f), f);
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.331483f), f);
    setUVTriangle(&triangle[646], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 647:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.703691f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.698828f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.698828f), f);
    setUVTriangle(&triangle[647], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 648:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.698828f), f);
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.704626f), f);
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.703691f), f);
    setUVTriangle(&triangle[648], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 649:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.698828f), f);
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.693966f), f);
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.693031f), f);
    setUVTriangle(&triangle[649], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 650:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.693031f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.698828f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.698828f), f);
    setUVTriangle(&triangle[650], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 651:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.859596f), fp_Flt2FP(-0.906290f), f);
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854562f), fp_Flt2FP(-0.906290f), f);
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.854079f), fp_Flt2FP(-0.913336f), f);
    setUVTriangle(&triangle[651], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 652:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.854079f), fp_Flt2FP(-0.913336f), f);
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860077f), fp_Flt2FP(-0.913336f), f);
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.859596f), fp_Flt2FP(-0.906290f), f);
    setUVTriangle(&triangle[652], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 653:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.173711f), f);
    setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.178574f), f);
    setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.178574f), f);
    setUVTriangle(&triangle[653], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 654:

    setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.178574f), f);
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.172775f), f);
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.173711f), f);
    setUVTriangle(&triangle[654], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 655:

    setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.178574f), f);
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.183437f), f);
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.184373f), f);
    setUVTriangle(&triangle[655], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 656:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.184373f), f);
    setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.178574f), f);
    setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.178574f), f);
    setUVTriangle(&triangle[656], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 657:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862764f), fp_Flt2FP(-0.775130f), f);
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.857731f), fp_Flt2FP(-0.775131f), f);
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857250f), fp_Flt2FP(-0.782176f), f);
    setUVTriangle(&triangle[657], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 658:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857250f), fp_Flt2FP(-0.782176f), f);
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.863247f), fp_Flt2FP(-0.782176f), f);
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862764f), fp_Flt2FP(-0.775130f), f);
    setUVTriangle(&triangle[658], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 659:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.881629f), fp_Flt2FP(-0.773994f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.773994f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.780805f), f);
    setUVTriangle(&triangle[659], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 660:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.780805f), f);
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.882563f), fp_Flt2FP(-0.780805f), f);
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.881629f), fp_Flt2FP(-0.773994f), f);
    setUVTriangle(&triangle[660], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 661:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.773994f), f);
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.871903f), fp_Flt2FP(-0.773994f), f);
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.870969f), fp_Flt2FP(-0.780805f), f);
    setUVTriangle(&triangle[661], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 662:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.870969f), fp_Flt2FP(-0.780805f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.780805f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.773994f), f);
    setUVTriangle(&triangle[662], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 663:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.684828f), f);
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.679794f), f);
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880569f), fp_Flt2FP(-0.679312f), f);
    setUVTriangle(&triangle[663], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 664:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880569f), fp_Flt2FP(-0.679312f), f);
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880569f), fp_Flt2FP(-0.685309f), f);
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.684828f), f);
    setUVTriangle(&triangle[664], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 665:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216929f), fp_Flt2FP(-0.337523f), f);
    setVector(&v, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.337523f), f);
    setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.330712f), f);
    setUVTriangle(&triangle[665], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 666:

    setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.330712f), f);
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215992f), fp_Flt2FP(-0.330712f), f);
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216929f), fp_Flt2FP(-0.337523f), f);
    setUVTriangle(&triangle[666], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 667:

    setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.330712f), f);
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227591f), fp_Flt2FP(-0.330712f), f);
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.228055f), fp_Flt2FP(-0.323902f), f);
    setUVTriangle(&triangle[667], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 668:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.228055f), fp_Flt2FP(-0.323902f), f);
    setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.323902f), f);
    setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.330712f), f);
    setUVTriangle(&triangle[668], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 669:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.129625f), fp_Flt2FP(-0.331001f), f);
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.129625f), fp_Flt2FP(-0.336998f), f);
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.136440f), fp_Flt2FP(-0.337242f), f);
    setUVTriangle(&triangle[669], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 670:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.136440f), fp_Flt2FP(-0.337242f), f);
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.136439f), fp_Flt2FP(-0.330757f), f);
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.129625f), fp_Flt2FP(-0.331001f), f);
    setUVTriangle(&triangle[670], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 671:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.704626f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.698828f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.698828f), f);
    setUVTriangle(&triangle[671], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 672:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.698828f), f);
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.705092f), f);
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.704626f), f);
    setUVTriangle(&triangle[672], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 673:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.698828f), f);
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.693031f), f);
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.692564f), f);
    setUVTriangle(&triangle[673], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 674:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.692564f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.698828f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880804f), fp_Flt2FP(-0.698828f), f);
    setUVTriangle(&triangle[674], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 675:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860077f), fp_Flt2FP(-0.913336f), f);
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854079f), fp_Flt2FP(-0.913336f), f);
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853836f), fp_Flt2FP(-0.920150f), f);
    setUVTriangle(&triangle[675], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 676:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853836f), fp_Flt2FP(-0.920150f), f);
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860320f), fp_Flt2FP(-0.920151f), f);
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860077f), fp_Flt2FP(-0.913336f), f);
    setUVTriangle(&triangle[676], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 677:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.172775f), f);
    setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.178574f), f);
    setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.178574f), f);
    setUVTriangle(&triangle[677], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 678:

    setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.178574f), f);
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.172310f), f);
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.172775f), f);
    setUVTriangle(&triangle[678], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 679:

    setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.178574f), f);
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.184373f), f);
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.184838f), f);
    setUVTriangle(&triangle[679], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 680:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.184838f), f);
    setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.178574f), f);
    setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222338f), fp_Flt2FP(-0.178574f), f);
    setUVTriangle(&triangle[680], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 681:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.863247f), fp_Flt2FP(-0.782176f), f);
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.857250f), fp_Flt2FP(-0.782176f), f);
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857006f), fp_Flt2FP(-0.788991f), f);
    setUVTriangle(&triangle[681], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 682:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857006f), fp_Flt2FP(-0.788991f), f);
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.863490f), fp_Flt2FP(-0.788990f), f);
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.863247f), fp_Flt2FP(-0.782176f), f);
    setUVTriangle(&triangle[682], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 683:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.882563f), fp_Flt2FP(-0.780805f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.780805f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.787615f), f);
    setUVTriangle(&triangle[683], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 684:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.787615f), f);
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.883030f), fp_Flt2FP(-0.787615f), f);
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.882563f), fp_Flt2FP(-0.780805f), f);
    setUVTriangle(&triangle[684], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 685:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.780805f), f);
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.870969f), fp_Flt2FP(-0.780805f), f);
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.870502f), fp_Flt2FP(-0.787615f), f);
    setUVTriangle(&triangle[685], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 686:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.870502f), fp_Flt2FP(-0.787615f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.787615f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.780805f), f);
    setUVTriangle(&triangle[686], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 687:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880569f), fp_Flt2FP(-0.685309f), f);
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880569f), fp_Flt2FP(-0.679312f), f);
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873755f), fp_Flt2FP(-0.679068f), f);
    setUVTriangle(&triangle[687], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 688:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873755f), fp_Flt2FP(-0.679068f), f);
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873754f), fp_Flt2FP(-0.685553f), f);
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880569f), fp_Flt2FP(-0.685309f), f);
    setUVTriangle(&triangle[688], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 689:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215992f), fp_Flt2FP(-0.330712f), f);
    setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.330712f), f);
    setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.323902f), f);
    setUVTriangle(&triangle[689], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 690:

    setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.323902f), f);
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.323902f), f);
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215992f), fp_Flt2FP(-0.330712f), f);
    setUVTriangle(&triangle[690], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 691:

    setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.323902f), f);
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.228055f), fp_Flt2FP(-0.323902f), f);
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.228055f), fp_Flt2FP(-0.317091f), f);
    setUVTriangle(&triangle[691], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 692:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.228055f), fp_Flt2FP(-0.317091f), f);
    setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.317091f), f);
    setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.323902f), f);
    setUVTriangle(&triangle[692], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 693:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.709677f), f);
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.705092f), f);
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.705092f), f);
    setUVTriangle(&triangle[693], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 694:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.705092f), f);
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.709677f), f);
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.709677f), f);
    setUVTriangle(&triangle[694], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 695:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.705092f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.698828f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.698828f), f);
    setUVTriangle(&triangle[695], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 696:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.698828f), f);
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.705092f), f);
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.705092f), f);
    setUVTriangle(&triangle[696], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 697:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.698828f), f);
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.692564f), f);
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.692564f), f);
    setUVTriangle(&triangle[697], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 698:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.692564f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.698828f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.698828f), f);
    setUVTriangle(&triangle[698], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 699:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.692564f), f);
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.687979f), f);
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.687979f), f);
    setUVTriangle(&triangle[699], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 700:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.687979f), f);
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.692564f), f);
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(-0.692564f), f);
    setUVTriangle(&triangle[700], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 701:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.172310f), f);
    setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.178574f), f);
    setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.178574f), f);
    setUVTriangle(&triangle[701], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 702:

    setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.178574f), f);
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.172310f), f);
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.172310f), f);
    setUVTriangle(&triangle[702], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 703:

    setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.178574f), f);
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.184838f), f);
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.184838f), f);
    setUVTriangle(&triangle[703], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 704:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.184838f), f);
    setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.178574f), f);
    setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.229149f), fp_Flt2FP(-0.178574f), f);
    setUVTriangle(&triangle[704], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 705:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.787615f), f);
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.883030f), fp_Flt2FP(-0.787615f), f);
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883030f), fp_Flt2FP(-0.794426f), f);
    setUVTriangle(&triangle[705], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 706:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.883030f), fp_Flt2FP(-0.794426f), f);
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.794426f), f);
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.787615f), f);
    setUVTriangle(&triangle[706], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 707:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.883030f), fp_Flt2FP(-0.787615f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.787615f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.794426f), f);
    setUVTriangle(&triangle[707], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 708:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.794426f), f);
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.883030f), fp_Flt2FP(-0.794426f), f);
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883030f), fp_Flt2FP(-0.787615f), f);
    setUVTriangle(&triangle[708], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 709:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.787615f), f);
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.870502f), fp_Flt2FP(-0.787615f), f);
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.870502f), fp_Flt2FP(-0.794426f), f);
    setUVTriangle(&triangle[709], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 710:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.870502f), fp_Flt2FP(-0.794426f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.794426f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.787615f), f);
    setUVTriangle(&triangle[710], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 711:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.870502f), fp_Flt2FP(-0.787615f), f);
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.865917f), fp_Flt2FP(-0.787615f), f);
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.865917f), fp_Flt2FP(-0.794426f), f);
    setUVTriangle(&triangle[711], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 712:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.865917f), fp_Flt2FP(-0.794426f), f);
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.870502f), fp_Flt2FP(-0.794426f), f);
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.870502f), fp_Flt2FP(-0.787615f), f);
    setUVTriangle(&triangle[712], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 713:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.323902f), f);
    setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.323902f), f);
    setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.317091f), f);
    setUVTriangle(&triangle[713], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 714:

    setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.317091f), f);
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.317091f), f);
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.323902f), f);
    setUVTriangle(&triangle[714], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 715:

    setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.317091f), f);
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.228055f), fp_Flt2FP(-0.317091f), f);
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.227591f), fp_Flt2FP(-0.310280f), f);
    setUVTriangle(&triangle[715], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 716:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227591f), fp_Flt2FP(-0.310280f), f);
    setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.310280f), f);
    setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.317091f), f);
    setUVTriangle(&triangle[716], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 717:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.143023f), fp_Flt2FP(-0.330757f), f);
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.143023f), fp_Flt2FP(-0.337242f), f);
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149375f), fp_Flt2FP(-0.336998f), f);
    setUVTriangle(&triangle[717], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 718:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.149375f), fp_Flt2FP(-0.336998f), f);
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149375f), fp_Flt2FP(-0.331001f), f);
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.143023f), fp_Flt2FP(-0.330757f), f);
    setUVTriangle(&triangle[718], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 719:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.705092f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.698828f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.698828f), f);
    setUVTriangle(&triangle[719], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 720:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.698828f), f);
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.704626f), f);
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.705092f), f);
    setUVTriangle(&triangle[720], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 721:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.698828f), f);
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.692564f), f);
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.693031f), f);
    setUVTriangle(&triangle[721], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 722:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.693031f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.698828f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(-0.698828f), f);
    setUVTriangle(&triangle[722], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 723:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860320f), fp_Flt2FP(-0.926734f), f);
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853836f), fp_Flt2FP(-0.926733f), f);
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.854079f), fp_Flt2FP(-0.933086f), f);
    setUVTriangle(&triangle[723], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 724:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.854079f), fp_Flt2FP(-0.933086f), f);
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860077f), fp_Flt2FP(-0.933086f), f);
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860320f), fp_Flt2FP(-0.926734f), f);
    setUVTriangle(&triangle[724], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 725:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.172310f), f);
    setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.178574f), f);
    setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.178574f), f);
    setUVTriangle(&triangle[725], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 726:

    setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.178574f), f);
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.172775f), f);
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.172310f), f);
    setUVTriangle(&triangle[726], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 727:

    setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.178574f), f);
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.184838f), f);
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.184373f), f);
    setUVTriangle(&triangle[727], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 728:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.184373f), f);
    setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.178574f), f);
    setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235960f), fp_Flt2FP(-0.178574f), f);
    setUVTriangle(&triangle[728], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 729:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.863490f), fp_Flt2FP(-0.795573f), f);
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.857006f), fp_Flt2FP(-0.795574f), f);
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857250f), fp_Flt2FP(-0.801926f), f);
    setUVTriangle(&triangle[729], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 730:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857250f), fp_Flt2FP(-0.801926f), f);
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.863247f), fp_Flt2FP(-0.801926f), f);
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.863490f), fp_Flt2FP(-0.795573f), f);
    setUVTriangle(&triangle[730], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 731:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.883030f), fp_Flt2FP(-0.794426f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.794426f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.801236f), f);
    setUVTriangle(&triangle[731], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 732:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.801236f), f);
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.882563f), fp_Flt2FP(-0.801236f), f);
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883030f), fp_Flt2FP(-0.794426f), f);
    setUVTriangle(&triangle[732], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 733:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.794426f), f);
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.870502f), fp_Flt2FP(-0.794426f), f);
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.870969f), fp_Flt2FP(-0.801236f), f);
    setUVTriangle(&triangle[733], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 734:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.870969f), fp_Flt2FP(-0.801236f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.801236f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.794426f), f);
    setUVTriangle(&triangle[734], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 735:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867171f), fp_Flt2FP(-0.685553f), f);
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867172f), fp_Flt2FP(-0.679068f), f);
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860819f), fp_Flt2FP(-0.679312f), f);
    setUVTriangle(&triangle[735], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 736:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860819f), fp_Flt2FP(-0.679312f), f);
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860819f), fp_Flt2FP(-0.685309f), f);
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867171f), fp_Flt2FP(-0.685553f), f);
    setUVTriangle(&triangle[736], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 737:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.317091f), f);
    setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.317091f), f);
    setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.310280f), f);
    setUVTriangle(&triangle[737], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 738:

    setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.310280f), f);
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215992f), fp_Flt2FP(-0.310280f), f);
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.317091f), f);
    setUVTriangle(&triangle[738], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 739:

    setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.310280f), f);
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227591f), fp_Flt2FP(-0.310280f), f);
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.226654f), fp_Flt2FP(-0.303470f), f);
    setUVTriangle(&triangle[739], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 740:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226654f), fp_Flt2FP(-0.303470f), f);
    setVector(&v, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.303470f), f);
    setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.310280f), f);
    setUVTriangle(&triangle[740], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 741:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.149375f), fp_Flt2FP(-0.331001f), f);
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149375f), fp_Flt2FP(-0.336998f), f);
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.155496f), fp_Flt2FP(-0.336517f), f);
    setUVTriangle(&triangle[741], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 742:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.155496f), fp_Flt2FP(-0.336517f), f);
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.155496f), fp_Flt2FP(-0.331483f), f);
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149375f), fp_Flt2FP(-0.331001f), f);
    setUVTriangle(&triangle[742], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 743:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.704626f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.698828f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853562f), fp_Flt2FP(-0.698828f), f);
    setUVTriangle(&triangle[743], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 744:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853562f), fp_Flt2FP(-0.698828f), f);
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853562f), fp_Flt2FP(-0.703691f), f);
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.704626f), f);
    setUVTriangle(&triangle[744], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 745:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.698828f), f);
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.693031f), f);
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853562f), fp_Flt2FP(-0.693966f), f);
    setUVTriangle(&triangle[745], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 746:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853562f), fp_Flt2FP(-0.693966f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853562f), fp_Flt2FP(-0.698828f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860373f), fp_Flt2FP(-0.698828f), f);
    setUVTriangle(&triangle[746], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 747:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860077f), fp_Flt2FP(-0.933086f), f);
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854079f), fp_Flt2FP(-0.933086f), f);
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.854562f), fp_Flt2FP(-0.939207f), f);
    setUVTriangle(&triangle[747], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 748:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.854562f), fp_Flt2FP(-0.939207f), f);
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859596f), fp_Flt2FP(-0.939207f), f);
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860077f), fp_Flt2FP(-0.933086f), f);
    setUVTriangle(&triangle[748], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 749:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.172775f), f);
    setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.178574f), f);
    setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.249581f), fp_Flt2FP(-0.178574f), f);
    setUVTriangle(&triangle[749], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 750:

    setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.249581f), fp_Flt2FP(-0.178574f), f);
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.249581f), fp_Flt2FP(-0.173711f), f);
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.172775f), f);
    setUVTriangle(&triangle[750], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 751:

    setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.178574f), f);
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.184373f), f);
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.249581f), fp_Flt2FP(-0.183437f), f);
    setUVTriangle(&triangle[751], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 752:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.249581f), fp_Flt2FP(-0.183437f), f);
    setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.249581f), fp_Flt2FP(-0.178574f), f);
    setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242770f), fp_Flt2FP(-0.178574f), f);
    setUVTriangle(&triangle[752], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 753:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.863247f), fp_Flt2FP(-0.801926f), f);
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.857250f), fp_Flt2FP(-0.801926f), f);
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857731f), fp_Flt2FP(-0.808047f), f);
    setUVTriangle(&triangle[753], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 754:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857731f), fp_Flt2FP(-0.808047f), f);
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862764f), fp_Flt2FP(-0.808047f), f);
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.863247f), fp_Flt2FP(-0.801926f), f);
    setUVTriangle(&triangle[754], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 755:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.882563f), fp_Flt2FP(-0.801236f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.801236f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.808047f), f);
    setUVTriangle(&triangle[755], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 756:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.808047f), f);
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.881629f), fp_Flt2FP(-0.808047f), f);
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.882563f), fp_Flt2FP(-0.801236f), f);
    setUVTriangle(&triangle[756], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 757:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.801236f), f);
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.870969f), fp_Flt2FP(-0.801236f), f);
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.871903f), fp_Flt2FP(-0.808047f), f);
    setUVTriangle(&triangle[757], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 758:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.871903f), fp_Flt2FP(-0.808047f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.808047f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(-0.801236f), f);
    setUVTriangle(&triangle[758], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 759:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860819f), fp_Flt2FP(-0.685309f), f);
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860819f), fp_Flt2FP(-0.679312f), f);
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.854698f), fp_Flt2FP(-0.679794f), f);
    setUVTriangle(&triangle[759], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 760:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.854698f), fp_Flt2FP(-0.679794f), f);
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854698f), fp_Flt2FP(-0.684828f), f);
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860819f), fp_Flt2FP(-0.685309f), f);
    setUVTriangle(&triangle[760], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 761:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215992f), fp_Flt2FP(-0.310280f), f);
    setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.310280f), f);
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.303470f), f);
    setUVTriangle(&triangle[761], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 762:

    setVector(&u, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(-0.303470f), f);
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.216929f), fp_Flt2FP(-0.303470f), f);
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215992f), fp_Flt2FP(-0.310280f), f);
    setUVTriangle(&triangle[762], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 763:

    setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233345f), fp_Flt2FP(-0.193736f), f);
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230929f), fp_Flt2FP(-0.189617f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.226778f), fp_Flt2FP(-0.187264f), f);
    setUVTriangle(&triangle[763], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 764:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226778f), fp_Flt2FP(-0.187264f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222002f), fp_Flt2FP(-0.187293f), f);
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217887f), fp_Flt2FP(-0.189715f), f);
    setUVTriangle(&triangle[764], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 765:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217887f), fp_Flt2FP(-0.189715f), f);
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.193862f), f);
    setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215563f), fp_Flt2FP(-0.198637f), f);
    setUVTriangle(&triangle[765], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 766:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226778f), fp_Flt2FP(-0.187264f), f);
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217887f), fp_Flt2FP(-0.189715f), f);
    setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215563f), fp_Flt2FP(-0.198637f), f);
    setUVTriangle(&triangle[766], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 767:

    setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215563f), fp_Flt2FP(-0.198637f), f);
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217979f), fp_Flt2FP(-0.202756f), f);
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222130f), fp_Flt2FP(-0.205109f), f);
    setUVTriangle(&triangle[767], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 768:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222130f), fp_Flt2FP(-0.205109f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.226905f), fp_Flt2FP(-0.205081f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231021f), fp_Flt2FP(-0.202659f), f);
    setUVTriangle(&triangle[768], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 769:

    setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215563f), fp_Flt2FP(-0.198637f), f);
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222130f), fp_Flt2FP(-0.205109f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231021f), fp_Flt2FP(-0.202659f), f);
    setUVTriangle(&triangle[769], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 770:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226778f), fp_Flt2FP(-0.187264f), f);
    setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215563f), fp_Flt2FP(-0.198637f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231021f), fp_Flt2FP(-0.202659f), f);
    setUVTriangle(&triangle[770], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 771:

    setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233345f), fp_Flt2FP(-0.193736f), f);
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.226778f), fp_Flt2FP(-0.187264f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231021f), fp_Flt2FP(-0.202659f), f);
    setUVTriangle(&triangle[771], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 772:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233380f), fp_Flt2FP(-0.198511f), f);
    setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.233345f), fp_Flt2FP(-0.193736f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231021f), fp_Flt2FP(-0.202659f), f);
    setUVTriangle(&triangle[772], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 773:

    setVector(&u, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.249271f), fp_Flt2FP(-0.310296f), f);
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.246722f), fp_Flt2FP(-0.305954f), f);
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.246369f), fp_Flt2FP(-0.306311f), f);
    setUVTriangle(&triangle[773], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 774:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.246369f), fp_Flt2FP(-0.306311f), f);
    setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.248785f), fp_Flt2FP(-0.310430f), f);
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.249271f), fp_Flt2FP(-0.310296f), f);
    setUVTriangle(&triangle[774], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 775:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.246722f), fp_Flt2FP(-0.305954f), f);
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242344f), fp_Flt2FP(-0.303470f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242218f), fp_Flt2FP(-0.303958f), f);
    setUVTriangle(&triangle[775], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 776:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242218f), fp_Flt2FP(-0.303958f), f);
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.246369f), fp_Flt2FP(-0.306311f), f);
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.246722f), fp_Flt2FP(-0.305954f), f);
    setUVTriangle(&triangle[776], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 777:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242344f), fp_Flt2FP(-0.303470f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237310f), fp_Flt2FP(-0.303505f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237443f), fp_Flt2FP(-0.303986f), f);
    setUVTriangle(&triangle[777], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 778:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237443f), fp_Flt2FP(-0.303986f), f);
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242218f), fp_Flt2FP(-0.303958f), f);
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242344f), fp_Flt2FP(-0.303470f), f);
    setUVTriangle(&triangle[778], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 779:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237310f), fp_Flt2FP(-0.303505f), f);
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.232969f), fp_Flt2FP(-0.306054f), f);
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.233327f), fp_Flt2FP(-0.306408f), f);
    setUVTriangle(&triangle[779], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 780:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233327f), fp_Flt2FP(-0.306408f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237443f), fp_Flt2FP(-0.303986f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237310f), fp_Flt2FP(-0.303505f), f);
    setUVTriangle(&triangle[780], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 781:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.232969f), fp_Flt2FP(-0.306054f), f);
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230482f), fp_Flt2FP(-0.310431f), f);
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.230968f), fp_Flt2FP(-0.310556f), f);
    setUVTriangle(&triangle[781], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 782:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.230968f), fp_Flt2FP(-0.310556f), f);
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.233327f), fp_Flt2FP(-0.306408f), f);
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.232969f), fp_Flt2FP(-0.306054f), f);
    setUVTriangle(&triangle[782], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 783:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.230482f), fp_Flt2FP(-0.310431f), f);
    setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230517f), fp_Flt2FP(-0.315465f), f);
    setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231003f), fp_Flt2FP(-0.315331f), f);
    setUVTriangle(&triangle[783], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 784:

    setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.231003f), fp_Flt2FP(-0.315331f), f);
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230968f), fp_Flt2FP(-0.310556f), f);
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.230482f), fp_Flt2FP(-0.310431f), f);
    setUVTriangle(&triangle[784], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 785:

    setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.230517f), fp_Flt2FP(-0.315465f), f);
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.233066f), fp_Flt2FP(-0.319806f), f);
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.233419f), fp_Flt2FP(-0.319450f), f);
    setUVTriangle(&triangle[785], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 786:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233419f), fp_Flt2FP(-0.319450f), f);
    setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.231003f), fp_Flt2FP(-0.315331f), f);
    setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.230517f), fp_Flt2FP(-0.315465f), f);
    setUVTriangle(&triangle[786], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 787:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233066f), fp_Flt2FP(-0.319806f), f);
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237444f), fp_Flt2FP(-0.322291f), f);
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237570f), fp_Flt2FP(-0.321803f), f);
    setUVTriangle(&triangle[787], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 788:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237570f), fp_Flt2FP(-0.321803f), f);
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.233419f), fp_Flt2FP(-0.319450f), f);
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.233066f), fp_Flt2FP(-0.319806f), f);
    setUVTriangle(&triangle[788], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 789:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237444f), fp_Flt2FP(-0.322291f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242478f), fp_Flt2FP(-0.322256f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242346f), fp_Flt2FP(-0.321774f), f);
    setUVTriangle(&triangle[789], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 790:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242346f), fp_Flt2FP(-0.321774f), f);
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237570f), fp_Flt2FP(-0.321803f), f);
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237444f), fp_Flt2FP(-0.322291f), f);
    setUVTriangle(&triangle[790], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 791:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242478f), fp_Flt2FP(-0.322256f), f);
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.246820f), fp_Flt2FP(-0.319707f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.246461f), fp_Flt2FP(-0.319352f), f);
    setUVTriangle(&triangle[791], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 792:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.246461f), fp_Flt2FP(-0.319352f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242346f), fp_Flt2FP(-0.321774f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242478f), fp_Flt2FP(-0.322256f), f);
    setUVTriangle(&triangle[792], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 793:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.246820f), fp_Flt2FP(-0.319707f), f);
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.249306f), fp_Flt2FP(-0.315330f), f);
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.248820f), fp_Flt2FP(-0.315205f), f);
    setUVTriangle(&triangle[793], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 794:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.248820f), fp_Flt2FP(-0.315205f), f);
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.246461f), fp_Flt2FP(-0.319352f), f);
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.246820f), fp_Flt2FP(-0.319707f), f);
    setUVTriangle(&triangle[794], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 795:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.249306f), fp_Flt2FP(-0.315330f), f);
    setVector(&v, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.249271f), fp_Flt2FP(-0.310296f), f);
    setVector(&w, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.248785f), fp_Flt2FP(-0.310430f), f);
    setUVTriangle(&triangle[795], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 796:

    setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.248785f), fp_Flt2FP(-0.310430f), f);
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.248820f), fp_Flt2FP(-0.315205f), f);
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.249306f), fp_Flt2FP(-0.315330f), f);
    setUVTriangle(&triangle[796], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 797:

    setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240420f), fp_Flt2FP(-0.187264f), f);
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235807f), fp_Flt2FP(-0.187264f), f);
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235807f), fp_Flt2FP(-0.190102f), f);
    setUVTriangle(&triangle[797], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 798:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235807f), fp_Flt2FP(-0.190102f), f);
    setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240420f), fp_Flt2FP(-0.190102f), f);
    setVector(&w, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240420f), fp_Flt2FP(-0.187264f), f);
    setUVTriangle(&triangle[798], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 799:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.964967f), f);
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.961590f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.961590f), f);
    setUVTriangle(&triangle[799], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 800:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.961590f), f);
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.964967f), f);
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.964967f), f);
    setUVTriangle(&triangle[800], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 801:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.961590f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.956979f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.956979f), f);
    setUVTriangle(&triangle[801], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 802:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.956979f), f);
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.961590f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.961590f), f);
    setUVTriangle(&triangle[802], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 803:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.956979f), f);
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.952368f), f);
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.952368f), f);
    setUVTriangle(&triangle[803], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 804:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.952368f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.956979f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.956979f), f);
    setUVTriangle(&triangle[804], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 805:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.952368f), f);
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.948992f), f);
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.948992f), f);
    setUVTriangle(&triangle[805], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 806:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.948992f), f);
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948182f), fp_Flt2FP(-0.952368f), f);
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951020f), fp_Flt2FP(-0.952368f), f);
    setUVTriangle(&triangle[806], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 807:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.198029f), fp_Flt2FP(-0.260708f), f);
    setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.193416f), fp_Flt2FP(-0.260708f), f);
    setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193416f), fp_Flt2FP(-0.263546f), f);
    setUVTriangle(&triangle[807], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 808:

    setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.193416f), fp_Flt2FP(-0.263546f), f);
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.198029f), fp_Flt2FP(-0.263546f), f);
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.198029f), fp_Flt2FP(-0.260708f), f);
    setUVTriangle(&triangle[808], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 809:

    setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.193416f), fp_Flt2FP(-0.260708f), f);
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.188803f), fp_Flt2FP(-0.260708f), f);
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188803f), fp_Flt2FP(-0.263546f), f);
    setUVTriangle(&triangle[809], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 810:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.188803f), fp_Flt2FP(-0.263546f), f);
    setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.193416f), fp_Flt2FP(-0.263546f), f);
    setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193416f), fp_Flt2FP(-0.260708f), f);
    setUVTriangle(&triangle[810], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 811:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.871640f), fp_Flt2FP(-0.911919f), f);
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.875016f), fp_Flt2FP(-0.911919f), f);
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.875016f), fp_Flt2FP(-0.909081f), f);
    setUVTriangle(&triangle[811], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 812:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.875016f), fp_Flt2FP(-0.909081f), f);
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.871640f), fp_Flt2FP(-0.909081f), f);
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.871640f), fp_Flt2FP(-0.911919f), f);
    setUVTriangle(&triangle[812], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 813:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.875016f), fp_Flt2FP(-0.911919f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.879627f), fp_Flt2FP(-0.911919f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.879627f), fp_Flt2FP(-0.909081f), f);
    setUVTriangle(&triangle[813], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 814:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.879627f), fp_Flt2FP(-0.909081f), f);
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.875016f), fp_Flt2FP(-0.909081f), f);
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.875016f), fp_Flt2FP(-0.911919f), f);
    setUVTriangle(&triangle[814], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 815:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.879627f), fp_Flt2FP(-0.911919f), f);
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.884239f), fp_Flt2FP(-0.911919f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.884239f), fp_Flt2FP(-0.909081f), f);
    setUVTriangle(&triangle[815], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 816:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.884239f), fp_Flt2FP(-0.909081f), f);
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.879627f), fp_Flt2FP(-0.909081f), f);
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.879627f), fp_Flt2FP(-0.911919f), f);
    setUVTriangle(&triangle[816], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 817:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.884239f), fp_Flt2FP(-0.911919f), f);
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.911919f), f);
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.909081f), f);
    setUVTriangle(&triangle[817], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 818:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.909081f), f);
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.884239f), fp_Flt2FP(-0.909081f), f);
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.884239f), fp_Flt2FP(-0.911919f), f);
    setUVTriangle(&triangle[818], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 819:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.245033f), fp_Flt2FP(-0.187264f), f);
    setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240420f), fp_Flt2FP(-0.187264f), f);
    setVector(&w, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240420f), fp_Flt2FP(-0.190102f), f);
    setUVTriangle(&triangle[819], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 820:

    setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240420f), fp_Flt2FP(-0.190102f), f);
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.245033f), fp_Flt2FP(-0.190102f), f);
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.245033f), fp_Flt2FP(-0.187264f), f);
    setUVTriangle(&triangle[820], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 821:

    setVector(&u, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.879763f), fp_Flt2FP(-0.105812f), f);
    setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.879763f), fp_Flt2FP(-0.559881f), f);
    setVector(&w, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.881634f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[821], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 822:

    setVector(&u, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.881634f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.881635f), fp_Flt2FP(-0.105812f), f);
    setVector(&w, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.879763f), fp_Flt2FP(-0.105812f), f);
    setUVTriangle(&triangle[822], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 823:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862904f), fp_Flt2FP(-0.105812f), f);
    setVector(&v, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862905f), fp_Flt2FP(-0.559881f), f);
    setVector(&w, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.864775f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[823], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 824:

    setVector(&u, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864775f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864775f), fp_Flt2FP(-0.105812f), f);
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862904f), fp_Flt2FP(-0.105812f), f);
    setUVTriangle(&triangle[824], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 825:

    setVector(&u, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862905f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862904f), fp_Flt2FP(-0.105812f), f);
    setVector(&w, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.861032f), fp_Flt2FP(-0.105812f), f);
    setUVTriangle(&triangle[825], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 826:

    setVector(&u, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.861032f), fp_Flt2FP(-0.105812f), f);
    setVector(&v, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.861034f), fp_Flt2FP(-0.559881f), f);
    setVector(&w, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862905f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[826], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 827:

    setVector(&u, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873925f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873926f), fp_Flt2FP(-0.105812f), f);
    setVector(&w, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.872056f), fp_Flt2FP(-0.105812f), f);
    setUVTriangle(&triangle[827], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 828:

    setVector(&u, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.872056f), fp_Flt2FP(-0.105812f), f);
    setVector(&v, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.872055f), fp_Flt2FP(-0.559881f), f);
    setVector(&w, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873925f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[828], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 829:

    setVector(&u, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873925f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(0.088437f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498201f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.874909f), fp_Flt2FP(-0.559881f), f);
    setVector(&w, fp_Flt2FP(0.088359f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498185f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.874910f), fp_Flt2FP(-0.105812f), f);
    setUVTriangle(&triangle[829], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 830:

    setVector(&u, fp_Flt2FP(0.088359f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498185f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.874910f), fp_Flt2FP(-0.105812f), f);
    setVector(&v, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873926f), fp_Flt2FP(-0.105812f), f);
    setVector(&w, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873925f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[830], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 831:

    setVector(&u, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.881635f), fp_Flt2FP(-0.105812f), f);
    setVector(&v, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.881634f), fp_Flt2FP(-0.559881f), f);
    setVector(&w, fp_Flt2FP(-0.012461f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498191f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.882617f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[831], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 832:

    setVector(&u, fp_Flt2FP(-0.012461f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498191f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.882617f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(-0.012461f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.882617f), fp_Flt2FP(-0.105812f), f);
    setVector(&w, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.881635f), fp_Flt2FP(-0.105812f), f);
    setUVTriangle(&triangle[832], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 833:

    setVector(&u, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.845039f), fp_Flt2FP(-0.557852f), f);
    setVector(&v, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846911f), fp_Flt2FP(-0.557077f), f);
    setVector(&w, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847686f), fp_Flt2FP(-0.555206f), f);
    setUVTriangle(&triangle[833], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 834:

    setVector(&u, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847686f), fp_Flt2FP(-0.555206f), f);
    setVector(&v, fp_Flt2FP(0.088359f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498185f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847278f), fp_Flt2FP(-0.554223f), f);
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.845041f), fp_Flt2FP(-0.555206f), f);
    setUVTriangle(&triangle[834], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 835:

    setVector(&u, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.845039f), fp_Flt2FP(-0.557852f), f);
    setVector(&v, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847686f), fp_Flt2FP(-0.555206f), f);
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.845041f), fp_Flt2FP(-0.555206f), f);
    setUVTriangle(&triangle[835], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 836:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853753f), fp_Flt2FP(-0.530118f), f);
    setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.852977f), fp_Flt2FP(-0.528246f), f);
    setVector(&w, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851106f), fp_Flt2FP(-0.527473f), f);
    setUVTriangle(&triangle[836], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 837:

    setVector(&u, fp_Flt2FP(-0.012461f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498193f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.850123f), fp_Flt2FP(-0.527879f), f);
    setVector(&v, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.851106f), fp_Flt2FP(-0.530118f), f);
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520341f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851107f), fp_Flt2FP(-0.530118f), f);
    setUVTriangle(&triangle[837], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 838:

    setVector(&u, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.851106f), fp_Flt2FP(-0.527473f), f);
    setVector(&v, fp_Flt2FP(-0.012461f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.850123f), fp_Flt2FP(-0.527879f), f);
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520341f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851107f), fp_Flt2FP(-0.530118f), f);
    setUVTriangle(&triangle[838], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 839:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853753f), fp_Flt2FP(-0.530118f), f);
    setVector(&v, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.851106f), fp_Flt2FP(-0.527473f), f);
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520341f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851107f), fp_Flt2FP(-0.530118f), f);
    setUVTriangle(&triangle[839], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 840:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.845041f), fp_Flt2FP(-0.555206f), f);
    setVector(&v, fp_Flt2FP(-0.012461f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498191f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.842802f), fp_Flt2FP(-0.554223f), f);
    setVector(&w, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.842395f), fp_Flt2FP(-0.555206f), f);
    setUVTriangle(&triangle[840], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 841:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.845041f), fp_Flt2FP(-0.555206f), f);
    setVector(&v, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.842395f), fp_Flt2FP(-0.555206f), f);
    setVector(&w, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.843170f), fp_Flt2FP(-0.557077f), f);
    setUVTriangle(&triangle[841], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 842:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.845041f), fp_Flt2FP(-0.555206f), f);
    setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.843170f), fp_Flt2FP(-0.557077f), f);
    setVector(&w, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.845039f), fp_Flt2FP(-0.557852f), f);
    setUVTriangle(&triangle[842], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 843:

    setVector(&u, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.852978f), fp_Flt2FP(-0.531989f), f);
    setVector(&v, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853753f), fp_Flt2FP(-0.530118f), f);
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851106f), fp_Flt2FP(-0.530118f), f);
    setUVTriangle(&triangle[843], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 844:

    setVector(&u, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.851108f), fp_Flt2FP(-0.532764f), f);
    setVector(&v, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.852978f), fp_Flt2FP(-0.531989f), f);
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851106f), fp_Flt2FP(-0.530118f), f);
    setUVTriangle(&triangle[844], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 845:

    setVector(&u, fp_Flt2FP(0.088437f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498201f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.850124f), fp_Flt2FP(-0.532358f), f);
    setVector(&v, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.851108f), fp_Flt2FP(-0.532764f), f);
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851106f), fp_Flt2FP(-0.530118f), f);
    setUVTriangle(&triangle[845], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 846:

    setVector(&u, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.370744f), fp_Flt2FP(-0.098892f), f);
    setVector(&v, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.380266f), fp_Flt2FP(-0.098858f), f);
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.380260f), fp_Flt2FP(-0.097047f), f);
    setUVTriangle(&triangle[846], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 847:

    setVector(&u, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.380260f), fp_Flt2FP(-0.097047f), f);
    setVector(&v, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.370292f), fp_Flt2FP(-0.097075f), f);
    setVector(&w, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.370744f), fp_Flt2FP(-0.098892f), f);
    setUVTriangle(&triangle[847], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 848:

    setVector(&u, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.734284f), fp_Flt2FP(-0.037722f), f);
    setVector(&v, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.733557f), fp_Flt2FP(-0.027986f), f);
    setVector(&w, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.732275f), fp_Flt2FP(-0.028086f), f);
    setUVTriangle(&triangle[848], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 849:

    setVector(&u, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.732275f), fp_Flt2FP(-0.028086f), f);
    setVector(&v, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.732984f), fp_Flt2FP(-0.037588f), f);
    setVector(&w, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.734284f), fp_Flt2FP(-0.037722f), f);
    setUVTriangle(&triangle[849], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 850:

    setVector(&u, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.736153f), fp_Flt2FP(-0.038362f), f);
    setVector(&v, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.735367f), fp_Flt2FP(-0.027851f), f);
    setVector(&w, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.733557f), fp_Flt2FP(-0.027986f), f);
    setUVTriangle(&triangle[850], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 851:

    setVector(&u, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.733557f), fp_Flt2FP(-0.027986f), f);
    setVector(&v, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.734284f), fp_Flt2FP(-0.037722f), f);
    setVector(&w, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.736153f), fp_Flt2FP(-0.038362f), f);
    setUVTriangle(&triangle[851], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 852:

    setVector(&u, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847898f), fp_Flt2FP(-0.513648f), f);
    setVector(&v, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847863f), fp_Flt2FP(-0.525046f), f);
    setVector(&w, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.849147f), fp_Flt2FP(-0.525005f), f);
    setUVTriangle(&triangle[852], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 853:

    setVector(&u, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.849147f), fp_Flt2FP(-0.525005f), f);
    setVector(&v, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.849181f), fp_Flt2FP(-0.514472f), f);
    setVector(&w, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847898f), fp_Flt2FP(-0.513648f), f);
    setUVTriangle(&triangle[853], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 854:

    setVector(&u, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846088f), fp_Flt2FP(-0.513196f), f);
    setVector(&v, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846046f), fp_Flt2FP(-0.525040f), f);
    setVector(&w, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847863f), fp_Flt2FP(-0.525046f), f);
    setUVTriangle(&triangle[854], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 855:

    setVector(&u, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847863f), fp_Flt2FP(-0.525046f), f);
    setVector(&v, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847898f), fp_Flt2FP(-0.513648f), f);
    setVector(&w, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846088f), fp_Flt2FP(-0.513196f), f);
    setUVTriangle(&triangle[855], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 856:

    setVector(&u, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.527140f), fp_Flt2FP(-0.181427f), f);
    setVector(&v, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.526295f), fp_Flt2FP(-0.193014f), f);
    setVector(&w, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.527578f), fp_Flt2FP(-0.193111f), f);
    setUVTriangle(&triangle[856], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 857:

    setVector(&u, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.527578f), fp_Flt2FP(-0.193111f), f);
    setVector(&v, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.528439f), fp_Flt2FP(-0.181290f), f);
    setVector(&w, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.527140f), fp_Flt2FP(-0.181427f), f);
    setUVTriangle(&triangle[857], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 858:

    setVector(&u, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.525273f), fp_Flt2FP(-0.182071f), f);
    setVector(&v, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.524487f), fp_Flt2FP(-0.192882f), f);
    setVector(&w, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.526295f), fp_Flt2FP(-0.193014f), f);
    setUVTriangle(&triangle[858], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 859:

    setVector(&u, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.526295f), fp_Flt2FP(-0.193014f), f);
    setVector(&v, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.527140f), fp_Flt2FP(-0.181427f), f);
    setVector(&w, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.525273f), fp_Flt2FP(-0.182071f), f);
    setUVTriangle(&triangle[859], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 860:

    setVector(&u, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.370292f), fp_Flt2FP(-0.097075f), f);
    setVector(&v, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.380260f), fp_Flt2FP(-0.097047f), f);
    setVector(&w, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.380301f), fp_Flt2FP(-0.095757f), f);
    setUVTriangle(&triangle[860], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 861:

    setVector(&u, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.380301f), fp_Flt2FP(-0.095757f), f);
    setVector(&v, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.369468f), fp_Flt2FP(-0.095792f), f);
    setVector(&w, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.370292f), fp_Flt2FP(-0.097075f), f);
    setUVTriangle(&triangle[861], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 862:

    setVector(&u, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.361926f), fp_Flt2FP(-0.104469f), f);
    setVector(&v, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.370744f), fp_Flt2FP(-0.098892f), f);
    setVector(&w, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.370292f), fp_Flt2FP(-0.097075f), f);
    setUVTriangle(&triangle[862], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 863:

    setVector(&u, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.370292f), fp_Flt2FP(-0.097075f), f);
    setVector(&v, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.361475f), fp_Flt2FP(-0.102659f), f);
    setVector(&w, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.361926f), fp_Flt2FP(-0.104469f), f);
    setUVTriangle(&triangle[863], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 864:

    setVector(&u, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156136f), fp_Flt2FP(-0.196810f), f);
    setVector(&v, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156338f), fp_Flt2FP(-0.182814f), f);
    setVector(&w, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.154524f), fp_Flt2FP(-0.183024f), f);
    setUVTriangle(&triangle[864], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 865:

    setVector(&u, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.154524f), fp_Flt2FP(-0.183024f), f);
    setVector(&v, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.154316f), fp_Flt2FP(-0.197017f), f);
    setVector(&w, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156136f), fp_Flt2FP(-0.196810f), f);
    setUVTriangle(&triangle[865], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 866:

    setVector(&u, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.727179f), fp_Flt2FP(-0.047539f), f);
    setVector(&v, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.736153f), fp_Flt2FP(-0.038362f), f);
    setVector(&w, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.734284f), fp_Flt2FP(-0.037722f), f);
    setUVTriangle(&triangle[866], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 867:

    setVector(&u, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.734284f), fp_Flt2FP(-0.037722f), f);
    setVector(&v, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.725311f), fp_Flt2FP(-0.046898f), f);
    setVector(&w, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.727179f), fp_Flt2FP(-0.047539f), f);
    setUVTriangle(&triangle[867], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 868:

    setVector(&u, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.728521f), fp_Flt2FP(-0.048310f), f);
    setVector(&v, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.737495f), fp_Flt2FP(-0.039134f), f);
    setVector(&w, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.736153f), fp_Flt2FP(-0.038362f), f);
    setUVTriangle(&triangle[868], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 869:

    setVector(&u, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.736153f), fp_Flt2FP(-0.038362f), f);
    setVector(&v, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.727179f), fp_Flt2FP(-0.047539f), f);
    setVector(&w, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.728521f), fp_Flt2FP(-0.048310f), f);
    setUVTriangle(&triangle[869], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 870:

    setVector(&u, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.851665f), fp_Flt2FP(-0.504379f), f);
    setVector(&v, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846088f), fp_Flt2FP(-0.513196f), f);
    setVector(&w, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847898f), fp_Flt2FP(-0.513648f), f);
    setUVTriangle(&triangle[870], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 871:

    setVector(&u, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847898f), fp_Flt2FP(-0.513648f), f);
    setVector(&v, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853482f), fp_Flt2FP(-0.504830f), f);
    setVector(&w, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851665f), fp_Flt2FP(-0.504379f), f);
    setUVTriangle(&triangle[871], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 872:

    setVector(&u, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226775f), fp_Flt2FP(-0.423087f), f);
    setVector(&v, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215915f), fp_Flt2FP(-0.423482f), f);
    setVector(&w, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.425262f), f);
    setUVTriangle(&triangle[872], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 873:

    setVector(&u, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.425262f), f);
    setVector(&v, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.226387f), fp_Flt2FP(-0.424868f), f);
    setVector(&w, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.226775f), fp_Flt2FP(-0.423087f), f);
    setUVTriangle(&triangle[873], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 874:

    setVector(&u, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516282f), fp_Flt2FP(-0.172911f), f);
    setVector(&v, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.525273f), fp_Flt2FP(-0.182071f), f);
    setVector(&w, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.527140f), fp_Flt2FP(-0.181427f), f);
    setUVTriangle(&triangle[874], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 875:

    setVector(&u, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.527140f), fp_Flt2FP(-0.181427f), f);
    setVector(&v, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518149f), fp_Flt2FP(-0.172267f), f);
    setVector(&w, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516282f), fp_Flt2FP(-0.172911f), f);
    setUVTriangle(&triangle[875], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 876:

    setVector(&u, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.514941f), fp_Flt2FP(-0.173685f), f);
    setVector(&v, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.523932f), fp_Flt2FP(-0.182845f), f);
    setVector(&w, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.525273f), fp_Flt2FP(-0.182071f), f);
    setUVTriangle(&triangle[876], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 877:

    setVector(&u, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.525273f), fp_Flt2FP(-0.182071f), f);
    setVector(&v, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516282f), fp_Flt2FP(-0.172911f), f);
    setVector(&w, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.514941f), fp_Flt2FP(-0.173685f), f);
    setUVTriangle(&triangle[877], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 878:

    setVector(&u, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215419f), fp_Flt2FP(-0.104747f), f);
    setVector(&v, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.361926f), fp_Flt2FP(-0.104469f), f);
    setVector(&w, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.361475f), fp_Flt2FP(-0.102659f), f);
    setUVTriangle(&triangle[878], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 879:

    setVector(&u, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.361475f), fp_Flt2FP(-0.102659f), f);
    setVector(&v, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215414f), fp_Flt2FP(-0.102937f), f);
    setVector(&w, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215419f), fp_Flt2FP(-0.104747f), f);
    setUVTriangle(&triangle[879], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 880:

    setVector(&u, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.731858f), fp_Flt2FP(-0.193027f), f);
    setVector(&v, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.725311f), fp_Flt2FP(-0.046898f), f);
    setVector(&w, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.724011f), fp_Flt2FP(-0.046764f), f);
    setUVTriangle(&triangle[880], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 881:

    setVector(&u, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.724011f), fp_Flt2FP(-0.046764f), f);
    setVector(&v, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.730576f), fp_Flt2FP(-0.193127f), f);
    setVector(&w, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.731858f), fp_Flt2FP(-0.193027f), f);
    setUVTriangle(&triangle[881], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 882:

    setVector(&u, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.733668f), fp_Flt2FP(-0.192892f), f);
    setVector(&v, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.727179f), fp_Flt2FP(-0.047539f), f);
    setVector(&w, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.725311f), fp_Flt2FP(-0.046898f), f);
    setUVTriangle(&triangle[882], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 883:

    setVector(&u, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.725311f), fp_Flt2FP(-0.046898f), f);
    setVector(&v, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.731858f), fp_Flt2FP(-0.193027f), f);
    setVector(&w, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.733668f), fp_Flt2FP(-0.192892f), f);
    setUVTriangle(&triangle[883], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 884:

    setVector(&u, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.734945f), fp_Flt2FP(-0.192799f), f);
    setVector(&v, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.728521f), fp_Flt2FP(-0.048310f), f);
    setVector(&w, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.727179f), fp_Flt2FP(-0.047539f), f);
    setUVTriangle(&triangle[884], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 885:

    setVector(&u, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.727179f), fp_Flt2FP(-0.047539f), f);
    setVector(&v, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.733668f), fp_Flt2FP(-0.192892f), f);
    setVector(&w, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.734945f), fp_Flt2FP(-0.192799f), f);
    setUVTriangle(&triangle[885], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 886:

    setVector(&u, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.851942f), fp_Flt2FP(-0.360195f), f);
    setVector(&v, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.851665f), fp_Flt2FP(-0.504379f), f);
    setVector(&w, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853482f), fp_Flt2FP(-0.504830f), f);
    setUVTriangle(&triangle[886], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 887:

    setVector(&u, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853482f), fp_Flt2FP(-0.504830f), f);
    setVector(&v, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853753f), fp_Flt2FP(-0.360200f), f);
    setVector(&w, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851942f), fp_Flt2FP(-0.360195f), f);
    setUVTriangle(&triangle[887], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 888:

    setVector(&u, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.524291f), fp_Flt2FP(-0.027979f), f);
    setVector(&v, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518149f), fp_Flt2FP(-0.172267f), f);
    setVector(&w, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519449f), fp_Flt2FP(-0.172131f), f);
    setUVTriangle(&triangle[888], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 889:

    setVector(&u, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519449f), fp_Flt2FP(-0.172131f), f);
    setVector(&v, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.525573f), fp_Flt2FP(-0.028076f), f);
    setVector(&w, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.524291f), fp_Flt2FP(-0.027979f), f);
    setUVTriangle(&triangle[889], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 890:

    setVector(&u, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.522481f), fp_Flt2FP(-0.027847f), f);
    setVector(&v, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516282f), fp_Flt2FP(-0.172911f), f);
    setVector(&w, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518149f), fp_Flt2FP(-0.172267f), f);
    setUVTriangle(&triangle[890], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 891:

    setVector(&u, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518149f), fp_Flt2FP(-0.172267f), f);
    setVector(&v, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.524291f), fp_Flt2FP(-0.027979f), f);
    setVector(&w, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.522481f), fp_Flt2FP(-0.027847f), f);
    setUVTriangle(&triangle[891], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 892:

    setVector(&u, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.521203f), fp_Flt2FP(-0.027757f), f);
    setVector(&v, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.514941f), fp_Flt2FP(-0.173685f), f);
    setVector(&w, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516282f), fp_Flt2FP(-0.172911f), f);
    setUVTriangle(&triangle[892], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 893:

    setVector(&u, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516282f), fp_Flt2FP(-0.172911f), f);
    setVector(&v, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.522481f), fp_Flt2FP(-0.027847f), f);
    setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.521203f), fp_Flt2FP(-0.027757f), f);
    setUVTriangle(&triangle[893], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 894:

    setVector(&u, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.285882f), fp_Flt2FP(-0.271422f), f);
    setVector(&v, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.287694f), fp_Flt2FP(-0.271422f), f);
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(-0.270132f), f);
    setUVTriangle(&triangle[894], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 895:

    setVector(&u, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.284597f), fp_Flt2FP(-0.270146f), f);
    setVector(&v, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.285882f), fp_Flt2FP(-0.271422f), f);
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(-0.270132f), f);
    setUVTriangle(&triangle[895], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 896:

    setVector(&u, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.284593f), fp_Flt2FP(-0.268328f), f);
    setVector(&v, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.284597f), fp_Flt2FP(-0.270146f), f);
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(-0.270132f), f);
    setUVTriangle(&triangle[896], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 897:

    setVector(&u, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.285873f), fp_Flt2FP(-0.267045f), f);
    setVector(&v, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.284593f), fp_Flt2FP(-0.268328f), f);
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(-0.270132f), f);
    setUVTriangle(&triangle[897], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 898:

    setVector(&u, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.287687f), fp_Flt2FP(-0.267038f), f);
    setVector(&v, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.285873f), fp_Flt2FP(-0.267045f), f);
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(-0.270132f), f);
    setUVTriangle(&triangle[898], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 899:

    setVector(&u, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.288972f), fp_Flt2FP(-0.268321f), f);
    setVector(&v, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.287687f), fp_Flt2FP(-0.267038f), f);
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(-0.270132f), f);
    setUVTriangle(&triangle[899], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 900:

    setVector(&u, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.191897f), fp_Flt2FP(-0.270357f), f);
    setVector(&v, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.193182f), fp_Flt2FP(-0.269073f), f);
    setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193185f), fp_Flt2FP(-0.267263f), f);
    setUVTriangle(&triangle[900], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 901:

    setVector(&u, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.190083f), fp_Flt2FP(-0.270357f), f);
    setVector(&v, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.191897f), fp_Flt2FP(-0.270357f), f);
    setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193185f), fp_Flt2FP(-0.267263f), f);
    setUVTriangle(&triangle[901], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 902:

    setVector(&u, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.193185f), fp_Flt2FP(-0.267263f), f);
    setVector(&v, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.190092f), fp_Flt2FP(-0.265973f), f);
    setVector(&w, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188807f), fp_Flt2FP(-0.267256f), f);
    setUVTriangle(&triangle[902], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 903:

    setVector(&u, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.193185f), fp_Flt2FP(-0.267263f), f);
    setVector(&v, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.188807f), fp_Flt2FP(-0.267256f), f);
    setVector(&w, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188803f), fp_Flt2FP(-0.269067f), f);
    setUVTriangle(&triangle[903], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 904:

    setVector(&u, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.190083f), fp_Flt2FP(-0.270357f), f);
    setVector(&v, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.193185f), fp_Flt2FP(-0.267263f), f);
    setVector(&w, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188803f), fp_Flt2FP(-0.269067f), f);
    setUVTriangle(&triangle[904], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 905:

    setVector(&u, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.191906f), fp_Flt2FP(-0.265973f), f);
    setVector(&v, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.190092f), fp_Flt2FP(-0.265973f), f);
    setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193185f), fp_Flt2FP(-0.267263f), f);
    setUVTriangle(&triangle[905], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 906:

    setVector(&u, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.137275f), fp_Flt2FP(-0.200994f), f);
    setVector(&v, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.146799f), fp_Flt2FP(-0.201114f), f);
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.146845f), fp_Flt2FP(-0.199721f), f);
    setUVTriangle(&triangle[906], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 907:

    setVector(&u, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.146845f), fp_Flt2FP(-0.199721f), f);
    setVector(&v, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.136875f), fp_Flt2FP(-0.199598f), f);
    setVector(&w, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.137275f), fp_Flt2FP(-0.200994f), f);
    setUVTriangle(&triangle[907], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 908:

    setVector(&u, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.137023f), fp_Flt2FP(-0.202803f), f);
    setVector(&v, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.146781f), fp_Flt2FP(-0.202918f), f);
    setVector(&w, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.146799f), fp_Flt2FP(-0.201114f), f);
    setUVTriangle(&triangle[908], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 909:

    setVector(&u, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.146799f), fp_Flt2FP(-0.201114f), f);
    setVector(&v, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.137275f), fp_Flt2FP(-0.200994f), f);
    setVector(&w, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.137023f), fp_Flt2FP(-0.202803f), f);
    setUVTriangle(&triangle[909], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 910:

    setVector(&u, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.945108f), fp_Flt2FP(-0.986925f), f);
    setVector(&v, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.945372f), fp_Flt2FP(-0.997459f), f);
    setVector(&w, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.946764f), fp_Flt2FP(-0.997395f), f);
    setUVTriangle(&triangle[910], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 911:

    setVector(&u, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.946764f), fp_Flt2FP(-0.997395f), f);
    setVector(&v, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.946520f), fp_Flt2FP(-0.987639f), f);
    setVector(&w, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.945108f), fp_Flt2FP(-0.986925f), f);
    setUVTriangle(&triangle[911], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 912:

    setVector(&u, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.943280f), fp_Flt2FP(-0.986101f), f);
    setVector(&v, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943565f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.945372f), fp_Flt2FP(-0.997459f), f);
    setUVTriangle(&triangle[912], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 913:

    setVector(&u, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.945372f), fp_Flt2FP(-0.997459f), f);
    setVector(&v, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.945108f), fp_Flt2FP(-0.986925f), f);
    setVector(&w, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.943280f), fp_Flt2FP(-0.986101f), f);
    setUVTriangle(&triangle[913], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 914:

    setVector(&u, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.201151f), f);
    setVector(&v, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.134427f), fp_Flt2FP(-0.200984f), f);
    setVector(&w, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.134379f), fp_Flt2FP(-0.199598f), f);
    setUVTriangle(&triangle[914], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 915:

    setVector(&u, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.134379f), fp_Flt2FP(-0.199598f), f);
    setVector(&v, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122977f), fp_Flt2FP(-0.199754f), f);
    setVector(&w, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.201151f), f);
    setUVTriangle(&triangle[915], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 916:

    setVector(&u, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122835f), fp_Flt2FP(-0.202959f), f);
    setVector(&v, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.134448f), fp_Flt2FP(-0.202795f), f);
    setVector(&w, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.134427f), fp_Flt2FP(-0.200984f), f);
    setUVTriangle(&triangle[916], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 917:

    setVector(&u, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.134427f), fp_Flt2FP(-0.200984f), f);
    setVector(&v, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.201151f), f);
    setVector(&w, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122835f), fp_Flt2FP(-0.202959f), f);
    setUVTriangle(&triangle[917], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 918:

    setVector(&u, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.852343f), fp_Flt2FP(-0.548984f), f);
    setVector(&v, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.852072f), fp_Flt2FP(-0.559817f), f);
    setVector(&w, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853463f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[918], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 919:

    setVector(&u, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853463f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853753f), fp_Flt2FP(-0.548270f), f);
    setVector(&w, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.852343f), fp_Flt2FP(-0.548984f), f);
    setUVTriangle(&triangle[919], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 920:

    setVector(&u, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.850513f), fp_Flt2FP(-0.549808f), f);
    setVector(&v, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.850265f), fp_Flt2FP(-0.559776f), f);
    setVector(&w, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.852072f), fp_Flt2FP(-0.559817f), f);
    setUVTriangle(&triangle[920], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 921:

    setVector(&u, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.852072f), fp_Flt2FP(-0.559817f), f);
    setVector(&v, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.852343f), fp_Flt2FP(-0.548984f), f);
    setVector(&w, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.850513f), fp_Flt2FP(-0.549808f), f);
    setUVTriangle(&triangle[921], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 922:

    setVector(&u, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.943447f), fp_Flt2FP(-0.948992f), f);
    setVector(&v, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943928f), fp_Flt2FP(-0.962980f), f);
    setVector(&w, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.945756f), fp_Flt2FP(-0.963363f), f);
    setUVTriangle(&triangle[922], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 923:

    setVector(&u, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.945756f), fp_Flt2FP(-0.963363f), f);
    setVector(&v, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.945275f), fp_Flt2FP(-0.949376f), f);
    setVector(&w, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.943447f), fp_Flt2FP(-0.948992f), f);
    setUVTriangle(&triangle[923], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 924:

    setVector(&u, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.232590f), fp_Flt2FP(-0.335581f), f);
    setVector(&v, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.232234f), fp_Flt2FP(-0.324717f), f);
    setVector(&w, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.230482f), fp_Flt2FP(-0.325228f), f);
    setUVTriangle(&triangle[924], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 925:

    setVector(&u, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.230482f), fp_Flt2FP(-0.325228f), f);
    setVector(&v, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230845f), fp_Flt2FP(-0.336092f), f);
    setVector(&w, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.232590f), fp_Flt2FP(-0.335581f), f);
    setUVTriangle(&triangle[925], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 926:

    setVector(&u, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955839f), fp_Flt2FP(-0.978107f), f);
    setVector(&v, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.945108f), fp_Flt2FP(-0.986925f), f);
    setVector(&w, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.946520f), fp_Flt2FP(-0.987639f), f);
    setUVTriangle(&triangle[926], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 927:

    setVector(&u, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.946520f), fp_Flt2FP(-0.987639f), f);
    setVector(&v, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.957251f), fp_Flt2FP(-0.978821f), f);
    setVector(&w, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955839f), fp_Flt2FP(-0.978107f), f);
    setUVTriangle(&triangle[927], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 928:

    setVector(&u, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954011f), fp_Flt2FP(-0.977284f), f);
    setVector(&v, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943280f), fp_Flt2FP(-0.986101f), f);
    setVector(&w, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.945108f), fp_Flt2FP(-0.986925f), f);
    setUVTriangle(&triangle[928], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 929:

    setVector(&u, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.945108f), fp_Flt2FP(-0.986925f), f);
    setVector(&v, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955839f), fp_Flt2FP(-0.978107f), f);
    setVector(&w, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954011f), fp_Flt2FP(-0.977284f), f);
    setUVTriangle(&triangle[929], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 930:

    setVector(&u, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.186376f), fp_Flt2FP(-0.270101f), f);
    setVector(&v, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.186311f), fp_Flt2FP(-0.256107f), f);
    setVector(&w, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.184498f), fp_Flt2FP(-0.256562f), f);
    setUVTriangle(&triangle[930], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 931:

    setVector(&u, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.184498f), fp_Flt2FP(-0.256562f), f);
    setVector(&v, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.184564f), fp_Flt2FP(-0.270557f), f);
    setVector(&w, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.186376f), fp_Flt2FP(-0.270101f), f);
    setUVTriangle(&triangle[931], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 932:

    setVector(&u, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226837f), fp_Flt2FP(-0.427689f), f);
    setVector(&v, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215971f), fp_Flt2FP(-0.427752f), f);
    setVector(&w, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.429523f), f);
    setUVTriangle(&triangle[932], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 933:

    setVector(&u, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(-0.429523f), f);
    setVector(&v, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.226396f), fp_Flt2FP(-0.429460f), f);
    setVector(&w, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.226837f), fp_Flt2FP(-0.427689f), f);
    setUVTriangle(&triangle[933], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 934:

    setVector(&u, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.841612f), fp_Flt2FP(-0.540167f), f);
    setVector(&v, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.852343f), fp_Flt2FP(-0.548984f), f);
    setVector(&w, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853753f), fp_Flt2FP(-0.548270f), f);
    setUVTriangle(&triangle[934], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 935:

    setVector(&u, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853753f), fp_Flt2FP(-0.548270f), f);
    setVector(&v, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.843023f), fp_Flt2FP(-0.539454f), f);
    setVector(&w, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.841612f), fp_Flt2FP(-0.540167f), f);
    setUVTriangle(&triangle[935], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 936:

    setVector(&u, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839782f), fp_Flt2FP(-0.540990f), f);
    setVector(&v, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.850513f), fp_Flt2FP(-0.549808f), f);
    setVector(&w, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.852343f), fp_Flt2FP(-0.548984f), f);
    setUVTriangle(&triangle[936], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 937:

    setVector(&u, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.852343f), fp_Flt2FP(-0.548984f), f);
    setVector(&v, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.841612f), fp_Flt2FP(-0.540167f), f);
    setVector(&w, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839782f), fp_Flt2FP(-0.540990f), f);
    setUVTriangle(&triangle[937], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 938:

    setVector(&u, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.031746f), fp_Flt2FP(-0.097880f), f);
    setVector(&v, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212988f), fp_Flt2FP(-0.097137f), f);
    setVector(&w, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212536f), fp_Flt2FP(-0.095757f), f);
    setUVTriangle(&triangle[938], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 939:

    setVector(&u, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212536f), fp_Flt2FP(-0.095757f), f);
    setVector(&v, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.031741f), fp_Flt2FP(-0.096485f), f);
    setVector(&w, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.031746f), fp_Flt2FP(-0.097880f), f);
    setUVTriangle(&triangle[939], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 940:

    setVector(&u, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.031795f), fp_Flt2FP(-0.099690f), f);
    setVector(&v, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212803f), fp_Flt2FP(-0.098948f), f);
    setVector(&w, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212988f), fp_Flt2FP(-0.097137f), f);
    setUVTriangle(&triangle[940], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 941:

    setVector(&u, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212988f), fp_Flt2FP(-0.097137f), f);
    setVector(&v, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.031746f), fp_Flt2FP(-0.097880f), f);
    setVector(&w, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.031795f), fp_Flt2FP(-0.099690f), f);
    setUVTriangle(&triangle[941], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 942:

    setVector(&u, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955416f), fp_Flt2FP(-0.797878f), f);
    setVector(&v, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955839f), fp_Flt2FP(-0.978107f), f);
    setVector(&w, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.957251f), fp_Flt2FP(-0.978821f), f);
    setUVTriangle(&triangle[942], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 943:

    setVector(&u, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.957251f), fp_Flt2FP(-0.978821f), f);
    setVector(&v, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956807f), fp_Flt2FP(-0.797813f), f);
    setVector(&w, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955416f), fp_Flt2FP(-0.797878f), f);
    setUVTriangle(&triangle[943], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 944:

    setVector(&u, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953609f), fp_Flt2FP(-0.797920f), f);
    setVector(&v, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954011f), fp_Flt2FP(-0.977284f), f);
    setVector(&w, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955839f), fp_Flt2FP(-0.978107f), f);
    setUVTriangle(&triangle[944], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 945:

    setVector(&u, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955839f), fp_Flt2FP(-0.978107f), f);
    setVector(&v, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955416f), fp_Flt2FP(-0.797878f), f);
    setVector(&w, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953609f), fp_Flt2FP(-0.797920f), f);
    setUVTriangle(&triangle[945], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 946:

    setVector(&u, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.033618f), fp_Flt2FP(-0.103511f), f);
    setVector(&v, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212536f), fp_Flt2FP(-0.104191f), f);
    setVector(&w, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212988f), fp_Flt2FP(-0.102810f), f);
    setUVTriangle(&triangle[946], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 947:

    setVector(&u, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212988f), fp_Flt2FP(-0.102810f), f);
    setVector(&v, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.033623f), fp_Flt2FP(-0.102117f), f);
    setVector(&w, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.033618f), fp_Flt2FP(-0.103511f), f);
    setUVTriangle(&triangle[947], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 948:

    setVector(&u, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.033569f), fp_Flt2FP(-0.105315f), f);
    setVector(&v, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212721f), fp_Flt2FP(-0.106008f), f);
    setVector(&w, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212536f), fp_Flt2FP(-0.104191f), f);
    setUVTriangle(&triangle[948], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 949:

    setVector(&u, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212536f), fp_Flt2FP(-0.104191f), f);
    setVector(&v, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.033618f), fp_Flt2FP(-0.103511f), f);
    setVector(&w, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.033569f), fp_Flt2FP(-0.105315f), f);
    setUVTriangle(&triangle[949], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 950:

    setVector(&u, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.842028f), fp_Flt2FP(-0.360237f), f);
    setVector(&v, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.841612f), fp_Flt2FP(-0.540167f), f);
    setVector(&w, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.843023f), fp_Flt2FP(-0.539454f), f);
    setUVTriangle(&triangle[950], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 951:

    setVector(&u, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.843023f), fp_Flt2FP(-0.539454f), f);
    setVector(&v, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.843420f), fp_Flt2FP(-0.360302f), f);
    setVector(&w, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.842028f), fp_Flt2FP(-0.360237f), f);
    setUVTriangle(&triangle[951], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 952:

    setVector(&u, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.840221f), fp_Flt2FP(-0.360195f), f);
    setVector(&v, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839782f), fp_Flt2FP(-0.540990f), f);
    setVector(&w, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.841612f), fp_Flt2FP(-0.540167f), f);
    setUVTriangle(&triangle[952], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 953:

    setVector(&u, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.841612f), fp_Flt2FP(-0.540167f), f);
    setVector(&v, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.842028f), fp_Flt2FP(-0.360237f), f);
    setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.840221f), fp_Flt2FP(-0.360195f), f);
    setUVTriangle(&triangle[953], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 954:

    setVector(&u, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.236285f), fp_Flt2FP(-0.324740f), f);
    setVector(&v, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235017f), fp_Flt2FP(-0.326037f), f);
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(-0.327852f), f);
    setUVTriangle(&triangle[954], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 955:

    setVector(&u, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238103f), fp_Flt2FP(-0.324717f), f);
    setVector(&v, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.236285f), fp_Flt2FP(-0.324740f), f);
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(-0.327852f), f);
    setUVTriangle(&triangle[955], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 956:

    setVector(&u, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239397f), fp_Flt2FP(-0.325984f), f);
    setVector(&v, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238103f), fp_Flt2FP(-0.324717f), f);
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(-0.327852f), f);
    setUVTriangle(&triangle[956], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 957:

    setVector(&u, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239425f), fp_Flt2FP(-0.327798f), f);
    setVector(&v, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239397f), fp_Flt2FP(-0.325984f), f);
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(-0.327852f), f);
    setUVTriangle(&triangle[957], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 958:

    setVector(&u, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238156f), fp_Flt2FP(-0.329098f), f);
    setVector(&v, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239425f), fp_Flt2FP(-0.327798f), f);
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(-0.327852f), f);
    setUVTriangle(&triangle[958], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 959:

    setVector(&u, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.236346f), fp_Flt2FP(-0.329120f), f);
    setVector(&v, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238156f), fp_Flt2FP(-0.329098f), f);
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(-0.327852f), f);
    setUVTriangle(&triangle[959], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 960:

    setVector(&u, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235816f), fp_Flt2FP(-0.195643f), f);
    setVector(&v, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237111f), fp_Flt2FP(-0.196919f), f);
    setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238927f), fp_Flt2FP(-0.196908f), f);
    setUVTriangle(&triangle[960], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 961:

    setVector(&u, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235807f), fp_Flt2FP(-0.193833f), f);
    setVector(&v, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235816f), fp_Flt2FP(-0.195643f), f);
    setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238927f), fp_Flt2FP(-0.196908f), f);
    setUVTriangle(&triangle[961], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 962:

    setVector(&u, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238927f), fp_Flt2FP(-0.196908f), f);
    setVector(&v, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240185f), fp_Flt2FP(-0.193799f), f);
    setVector(&w, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238895f), fp_Flt2FP(-0.192529f), f);
    setUVTriangle(&triangle[962], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 963:

    setVector(&u, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238927f), fp_Flt2FP(-0.196908f), f);
    setVector(&v, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238895f), fp_Flt2FP(-0.192529f), f);
    setVector(&w, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237079f), fp_Flt2FP(-0.192540f), f);
    setUVTriangle(&triangle[963], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 964:

    setVector(&u, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235807f), fp_Flt2FP(-0.193833f), f);
    setVector(&v, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238927f), fp_Flt2FP(-0.196908f), f);
    setVector(&w, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237079f), fp_Flt2FP(-0.192540f), f);
    setUVTriangle(&triangle[964], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 965:

    setVector(&u, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240199f), fp_Flt2FP(-0.195615f), f);
    setVector(&v, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240185f), fp_Flt2FP(-0.193799f), f);
    setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238927f), fp_Flt2FP(-0.196908f), f);
    setUVTriangle(&triangle[965], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 966:

    setVector(&u, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.292550f), fp_Flt2FP(-0.496741f), f);
    setVector(&v, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.283134f), fp_Flt2FP(-0.495323f), f);
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.282864f), fp_Flt2FP(-0.497113f), f);
    setUVTriangle(&triangle[966], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 967:

    setVector(&u, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.282864f), fp_Flt2FP(-0.497113f), f);
    setVector(&v, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.292719f), fp_Flt2FP(-0.498606f), f);
    setVector(&w, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.292550f), fp_Flt2FP(-0.496741f), f);
    setUVTriangle(&triangle[967], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 968:

    setVector(&u, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.266304f), fp_Flt2FP(-0.486294f), f);
    setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.275617f), fp_Flt2FP(-0.483369f), f);
    setVector(&w, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.275228f), fp_Flt2FP(-0.482143f), f);
    setUVTriangle(&triangle[968], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 969:

    setVector(&u, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.275228f), fp_Flt2FP(-0.482143f), f);
    setVector(&v, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.266138f), fp_Flt2FP(-0.484997f), f);
    setVector(&w, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.266304f), fp_Flt2FP(-0.486294f), f);
    setUVTriangle(&triangle[969], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 970:

    setVector(&u, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.266105f), fp_Flt2FP(-0.488259f), f);
    setVector(&v, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276161f), fp_Flt2FP(-0.485100f), f);
    setVector(&w, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.275617f), fp_Flt2FP(-0.483369f), f);
    setUVTriangle(&triangle[970], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 971:

    setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.275617f), fp_Flt2FP(-0.483369f), f);
    setVector(&v, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.266304f), fp_Flt2FP(-0.486294f), f);
    setVector(&w, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.266105f), fp_Flt2FP(-0.488259f), f);
    setUVTriangle(&triangle[971], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 972:

    setVector(&u, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.992288f), fp_Flt2FP(-0.442027f), f);
    setVector(&v, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.994433f), fp_Flt2FP(-0.453222f), f);
    setVector(&w, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.995685f), fp_Flt2FP(-0.452936f), f);
    setUVTriangle(&triangle[972], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 973:

    setVector(&u, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.995685f), fp_Flt2FP(-0.452936f), f);
    setVector(&v, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.993705f), fp_Flt2FP(-0.442590f), f);
    setVector(&w, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.992288f), fp_Flt2FP(-0.442027f), f);
    setUVTriangle(&triangle[973], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 974:

    setVector(&u, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.990424f), fp_Flt2FP(-0.441929f), f);
    setVector(&v, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.992648f), fp_Flt2FP(-0.453564f), f);
    setVector(&w, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.994433f), fp_Flt2FP(-0.453222f), f);
    setUVTriangle(&triangle[974], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 975:

    setVector(&u, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.994433f), fp_Flt2FP(-0.453222f), f);
    setVector(&v, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.992288f), fp_Flt2FP(-0.442027f), f);
    setVector(&w, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.990424f), fp_Flt2FP(-0.441929f), f);
    setUVTriangle(&triangle[975], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 976:

    setVector(&u, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.344260f), fp_Flt2FP(-0.488846f), f);
    setVector(&v, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.333048f), fp_Flt2FP(-0.485802f), f);
    setVector(&w, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.332707f), fp_Flt2FP(-0.487042f), f);
    setUVTriangle(&triangle[976], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 977:

    setVector(&u, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.332707f), fp_Flt2FP(-0.487042f), f);
    setVector(&v, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.344145f), fp_Flt2FP(-0.490148f), f);
    setVector(&w, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.344260f), fp_Flt2FP(-0.488846f), f);
    setUVTriangle(&triangle[977], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 978:

    setVector(&u, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.343985f), fp_Flt2FP(-0.486891f), f);
    setVector(&v, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.333523f), fp_Flt2FP(-0.484052f), f);
    setVector(&w, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.333048f), fp_Flt2FP(-0.485802f), f);
    setUVTriangle(&triangle[978], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 979:

    setVector(&u, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.333048f), fp_Flt2FP(-0.485802f), f);
    setVector(&v, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.344260f), fp_Flt2FP(-0.488846f), f);
    setVector(&w, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.343985f), fp_Flt2FP(-0.486891f), f);
    setUVTriangle(&triangle[979], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 980:

    setVector(&u, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.292719f), fp_Flt2FP(-0.498606f), f);
    setVector(&v, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.282864f), fp_Flt2FP(-0.497113f), f);
    setVector(&w, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.282627f), fp_Flt2FP(-0.498382f), f);
    setUVTriangle(&triangle[980], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 981:

    setVector(&u, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.282627f), fp_Flt2FP(-0.498382f), f);
    setVector(&v, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.293338f), fp_Flt2FP(-0.500000f), f);
    setVector(&w, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.292719f), fp_Flt2FP(-0.498606f), f);
    setUVTriangle(&triangle[981], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 982:

    setVector(&u, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.302115f), fp_Flt2FP(-0.492575f), f);
    setVector(&v, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.292550f), fp_Flt2FP(-0.496741f), f);
    setVector(&w, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.292719f), fp_Flt2FP(-0.498606f), f);
    setUVTriangle(&triangle[982], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 983:

    setVector(&u, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.292719f), fp_Flt2FP(-0.498606f), f);
    setVector(&v, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.302286f), fp_Flt2FP(-0.494433f), f);
    setVector(&w, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.302115f), fp_Flt2FP(-0.492575f), f);
    setUVTriangle(&triangle[983], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 984:

    setVector(&u, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.151687f), fp_Flt2FP(-0.196810f), f);
    setVector(&v, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.151889f), fp_Flt2FP(-0.182814f), f);
    setVector(&w, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.150075f), fp_Flt2FP(-0.183024f), f);
    setUVTriangle(&triangle[984], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 985:

    setVector(&u, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150075f), fp_Flt2FP(-0.183024f), f);
    setVector(&v, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149867f), fp_Flt2FP(-0.197017f), f);
    setVector(&w, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.151687f), fp_Flt2FP(-0.196810f), f);
    setUVTriangle(&triangle[985], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 986:

    setVector(&u, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255126f), fp_Flt2FP(-0.481611f), f);
    setVector(&v, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.266105f), fp_Flt2FP(-0.488259f), f);
    setVector(&w, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.266304f), fp_Flt2FP(-0.486294f), f);
    setUVTriangle(&triangle[986], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 987:

    setVector(&u, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.266304f), fp_Flt2FP(-0.486294f), f);
    setVector(&v, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255324f), fp_Flt2FP(-0.479646f), f);
    setVector(&w, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255126f), fp_Flt2FP(-0.481611f), f);
    setUVTriangle(&triangle[987], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 988:

    setVector(&u, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.254680f), fp_Flt2FP(-0.483094f), f);
    setVector(&v, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.265659f), fp_Flt2FP(-0.489742f), f);
    setVector(&w, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.266105f), fp_Flt2FP(-0.488259f), f);
    setUVTriangle(&triangle[988], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 989:

    setVector(&u, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.266105f), fp_Flt2FP(-0.488259f), f);
    setVector(&v, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255126f), fp_Flt2FP(-0.481611f), f);
    setVector(&w, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.254680f), fp_Flt2FP(-0.483094f), f);
    setUVTriangle(&triangle[989], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 990:

    setVector(&u, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.994213f), fp_Flt2FP(-0.432209f), f);
    setVector(&v, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.990424f), fp_Flt2FP(-0.441929f), f);
    setVector(&w, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.992288f), fp_Flt2FP(-0.442027f), f);
    setUVTriangle(&triangle[990], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 991:

    setVector(&u, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.992288f), fp_Flt2FP(-0.442027f), f);
    setVector(&v, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.996083f), fp_Flt2FP(-0.432305f), f);
    setVector(&w, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.994213f), fp_Flt2FP(-0.432209f), f);
    setUVTriangle(&triangle[991], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 992:

    setVector(&u, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.200050f), fp_Flt2FP(-0.256107f), f);
    setVector(&v, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.189190f), fp_Flt2FP(-0.256501f), f);
    setVector(&w, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188803f), fp_Flt2FP(-0.258282f), f);
    setUVTriangle(&triangle[992], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 993:

    setVector(&u, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.188803f), fp_Flt2FP(-0.258282f), f);
    setVector(&v, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.199663f), fp_Flt2FP(-0.257887f), f);
    setVector(&w, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.200050f), fp_Flt2FP(-0.256107f), f);
    setUVTriangle(&triangle[993], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 994:

    setVector(&u, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.354694f), fp_Flt2FP(-0.479817f), f);
    setVector(&v, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.343985f), fp_Flt2FP(-0.486891f), f);
    setVector(&w, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.344260f), fp_Flt2FP(-0.488846f), f);
    setUVTriangle(&triangle[994], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 995:

    setVector(&u, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.344260f), fp_Flt2FP(-0.488846f), f);
    setVector(&v, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.354969f), fp_Flt2FP(-0.481773f), f);
    setVector(&w, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.354694f), fp_Flt2FP(-0.479817f), f);
    setUVTriangle(&triangle[995], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 996:

    setVector(&u, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.354190f), fp_Flt2FP(-0.478353f), f);
    setVector(&v, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.343481f), fp_Flt2FP(-0.485426f), f);
    setVector(&w, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.343985f), fp_Flt2FP(-0.486891f), f);
    setUVTriangle(&triangle[996], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 997:

    setVector(&u, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.343985f), fp_Flt2FP(-0.486891f), f);
    setVector(&v, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.354694f), fp_Flt2FP(-0.479817f), f);
    setVector(&w, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.354190f), fp_Flt2FP(-0.478353f), f);
    setUVTriangle(&triangle[997], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 998:

    setVector(&u, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.325519f), fp_Flt2FP(-0.495907f), f);
    setVector(&v, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.302115f), fp_Flt2FP(-0.492575f), f);
    setVector(&w, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.302286f), fp_Flt2FP(-0.494433f), f);
    setUVTriangle(&triangle[998], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 999:

    setVector(&u, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.302286f), fp_Flt2FP(-0.494433f), f);
    setVector(&v, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.325248f), fp_Flt2FP(-0.497697f), f);
    setVector(&w, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.325519f), fp_Flt2FP(-0.495907f), f);
    setUVTriangle(&triangle[999], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1000:

    setVector(&u, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.232978f), fp_Flt2FP(-0.486649f), f);
    setVector(&v, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255324f), fp_Flt2FP(-0.479646f), f);
    setVector(&w, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255159f), fp_Flt2FP(-0.478349f), f);
    setUVTriangle(&triangle[1000], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1001:

    setVector(&u, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255159f), fp_Flt2FP(-0.478349f), f);
    setVector(&v, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.232589f), fp_Flt2FP(-0.485423f), f);
    setVector(&w, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.232978f), fp_Flt2FP(-0.486649f), f);
    setUVTriangle(&triangle[1001], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1002:

    setVector(&u, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233522f), fp_Flt2FP(-0.488380f), f);
    setVector(&v, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255126f), fp_Flt2FP(-0.481611f), f);
    setVector(&w, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255324f), fp_Flt2FP(-0.479646f), f);
    setUVTriangle(&triangle[1002], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1003:

    setVector(&u, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255324f), fp_Flt2FP(-0.479646f), f);
    setVector(&v, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.232978f), fp_Flt2FP(-0.486649f), f);
    setVector(&w, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.233522f), fp_Flt2FP(-0.488380f), f);
    setUVTriangle(&triangle[1003], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1004:

    setVector(&u, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.992188f), fp_Flt2FP(-0.410894f), f);
    setVector(&v, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.996083f), fp_Flt2FP(-0.432305f), f);
    setVector(&w, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.997500f), fp_Flt2FP(-0.432868f), f);
    setUVTriangle(&triangle[1004], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1005:

    setVector(&u, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.997500f), fp_Flt2FP(-0.432868f), f);
    setVector(&v, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.993446f), fp_Flt2FP(-0.410606f), f);
    setVector(&w, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.992188f), fp_Flt2FP(-0.410894f), f);
    setUVTriangle(&triangle[1005], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1006:

    setVector(&u, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.990410f), fp_Flt2FP(-0.411235f), f);
    setVector(&v, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.994213f), fp_Flt2FP(-0.432209f), f);
    setVector(&w, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.996083f), fp_Flt2FP(-0.432305f), f);
    setUVTriangle(&triangle[1006], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1007:

    setVector(&u, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.996083f), fp_Flt2FP(-0.432305f), f);
    setVector(&v, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.992188f), fp_Flt2FP(-0.410894f), f);
    setVector(&w, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.990410f), fp_Flt2FP(-0.411235f), f);
    setUVTriangle(&triangle[1007], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1008:

    setVector(&u, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.375780f), fp_Flt2FP(-0.487408f), f);
    setVector(&v, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.354969f), fp_Flt2FP(-0.481773f), f);
    setVector(&w, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.354854f), fp_Flt2FP(-0.483075f), f);
    setUVTriangle(&triangle[1008], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1009:

    setVector(&u, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.354854f), fp_Flt2FP(-0.483075f), f);
    setVector(&v, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.375440f), fp_Flt2FP(-0.488648f), f);
    setVector(&w, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.375780f), fp_Flt2FP(-0.487408f), f);
    setUVTriangle(&triangle[1009], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1010:

    setVector(&u, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.485656f), f);
    setVector(&v, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.354694f), fp_Flt2FP(-0.479817f), f);
    setVector(&w, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.354969f), fp_Flt2FP(-0.481773f), f);
    setUVTriangle(&triangle[1010], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1011:

    setVector(&u, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.354969f), fp_Flt2FP(-0.481773f), f);
    setVector(&v, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.375780f), fp_Flt2FP(-0.487408f), f);
    setVector(&w, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376256f), fp_Flt2FP(-0.485656f), f);
    setUVTriangle(&triangle[1011], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1012:

    setVector(&u, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.325248f), fp_Flt2FP(-0.497697f), f);
    setVector(&v, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.302286f), fp_Flt2FP(-0.494433f), f);
    setVector(&w, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.302904f), fp_Flt2FP(-0.495827f), f);
    setUVTriangle(&triangle[1012], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1013:

    setVector(&u, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.302904f), fp_Flt2FP(-0.495827f), f);
    setVector(&v, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.325009f), fp_Flt2FP(-0.498965f), f);
    setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.325248f), fp_Flt2FP(-0.497697f), f);
    setUVTriangle(&triangle[1013], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1014:

    setVector(&u, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.316911f), fp_Flt2FP(-0.406226f), f);
    setVector(&v, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.318724f), fp_Flt2FP(-0.406226f), f);
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.404936f), f);
    setUVTriangle(&triangle[1014], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1015:

    setVector(&u, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.315626f), fp_Flt2FP(-0.404950f), f);
    setVector(&v, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316911f), fp_Flt2FP(-0.406226f), f);
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.404936f), f);
    setUVTriangle(&triangle[1015], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1016:

    setVector(&u, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.315623f), fp_Flt2FP(-0.403133f), f);
    setVector(&v, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.315626f), fp_Flt2FP(-0.404950f), f);
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.404936f), f);
    setUVTriangle(&triangle[1016], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1017:

    setVector(&u, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.316903f), fp_Flt2FP(-0.401849f), f);
    setVector(&v, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.315623f), fp_Flt2FP(-0.403133f), f);
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.404936f), f);
    setUVTriangle(&triangle[1017], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1018:

    setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.318717f), fp_Flt2FP(-0.401842f), f);
    setVector(&v, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316903f), fp_Flt2FP(-0.401849f), f);
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.404936f), f);
    setUVTriangle(&triangle[1018], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1019:

    setVector(&u, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320002f), fp_Flt2FP(-0.403126f), f);
    setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.318717f), fp_Flt2FP(-0.401842f), f);
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.404936f), f);
    setUVTriangle(&triangle[1019], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1020:

    setVector(&u, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.318717f), fp_Flt2FP(-0.176695f), f);
    setVector(&v, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320002f), fp_Flt2FP(-0.175411f), f);
    setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.173601f), f);
    setUVTriangle(&triangle[1020], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1021:

    setVector(&u, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.316903f), fp_Flt2FP(-0.176695f), f);
    setVector(&v, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.318717f), fp_Flt2FP(-0.176695f), f);
    setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.173601f), f);
    setUVTriangle(&triangle[1021], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1022:

    setVector(&u, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.173601f), f);
    setVector(&v, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316911f), fp_Flt2FP(-0.172311f), f);
    setVector(&w, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.315626f), fp_Flt2FP(-0.173594f), f);
    setUVTriangle(&triangle[1022], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1023:

    setVector(&u, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.173601f), f);
    setVector(&v, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.315626f), fp_Flt2FP(-0.173594f), f);
    setVector(&w, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.315623f), fp_Flt2FP(-0.175404f), f);
    setUVTriangle(&triangle[1023], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1024:

    setVector(&u, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.316903f), fp_Flt2FP(-0.176695f), f);
    setVector(&v, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.173601f), f);
    setVector(&w, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.315623f), fp_Flt2FP(-0.175404f), f);
    setUVTriangle(&triangle[1024], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1025:

    setVector(&u, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.318725f), fp_Flt2FP(-0.172311f), f);
    setVector(&v, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316911f), fp_Flt2FP(-0.172311f), f);
    setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(-0.173601f), f);
    setUVTriangle(&triangle[1025], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1026:

    setVector(&u, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825188f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825189f), fp_Flt2FP(-0.105819f), f);
    setVector(&w, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.820255f), fp_Flt2FP(-0.105805f), f);
    setUVTriangle(&triangle[1026], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1027:

    setVector(&u, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.820255f), fp_Flt2FP(-0.105805f), f);
    setVector(&v, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.820255f), fp_Flt2FP(-0.559881f), f);
    setVector(&w, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.825188f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[1027], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1028:

    setVector(&u, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.714271f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.719158f), fp_Flt2FP(-0.557753f), f);
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.630876f), fp_Flt2FP(-0.356653f), f);
    setUVTriangle(&triangle[1028], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1029:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.630876f), fp_Flt2FP(-0.356653f), f);
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.356651f), f);
    setVector(&w, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.714271f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[1029], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1030:

    setVector(&u, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.714158f), fp_Flt2FP(-0.153679f), f);
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.356651f), f);
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.630876f), fp_Flt2FP(-0.356653f), f);
    setUVTriangle(&triangle[1030], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1031:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.630876f), fp_Flt2FP(-0.356653f), f);
    setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.719091f), fp_Flt2FP(-0.155696f), f);
    setVector(&w, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.714158f), fp_Flt2FP(-0.153679f), f);
    setUVTriangle(&triangle[1031], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1032:

    setVector(&u, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.830042f), fp_Flt2FP(-0.105805f), f);
    setVector(&v, fp_Flt2FP(-4.539766f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.510809f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.830042f), fp_Flt2FP(-0.559881f), f);
    setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834929f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[1032], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1033:

    setVector(&u, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.834929f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.834929f), fp_Flt2FP(-0.105812f), f);
    setVector(&w, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.830042f), fp_Flt2FP(-0.105805f), f);
    setUVTriangle(&triangle[1033], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1034:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.356894f), f);
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.421807f), fp_Flt2FP(-0.356896f), f);
    setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.510088f), fp_Flt2FP(-0.155782f), f);
    setUVTriangle(&triangle[1034], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1035:

    setVector(&u, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.510088f), fp_Flt2FP(-0.155782f), f);
    setVector(&v, fp_Flt2FP(-4.539766f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.510809f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.505201f), fp_Flt2FP(-0.153665f), f);
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.356894f), f);
    setUVTriangle(&triangle[1035], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1036:

    setVector(&u, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.510022f), fp_Flt2FP(-0.557854f), f);
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.421807f), fp_Flt2FP(-0.356896f), f);
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.356894f), f);
    setUVTriangle(&triangle[1036], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1037:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.356894f), f);
    setVector(&v, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.505089f), fp_Flt2FP(-0.559874f), f);
    setVector(&w, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.510022f), fp_Flt2FP(-0.557854f), f);
    setUVTriangle(&triangle[1037], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1038:

    setVector(&u, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384415f), fp_Flt2FP(-0.092009f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.384410f), fp_Flt2FP(-0.092717f), f);
    setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.404571f), fp_Flt2FP(-0.082062f), f);
    setUVTriangle(&triangle[1038], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1039:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384410f), fp_Flt2FP(-0.092717f), f);
    setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.404559f), fp_Flt2FP(-0.536131f), f);
    setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.404571f), fp_Flt2FP(-0.082062f), f);
    setUVTriangle(&triangle[1039], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1040:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384404f), fp_Flt2FP(-0.525483f), f);
    setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.404559f), fp_Flt2FP(-0.536131f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.384410f), fp_Flt2FP(-0.092717f), f);
    setUVTriangle(&triangle[1040], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1041:

    setVector(&u, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384399f), fp_Flt2FP(-0.526190f), f);
    setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.404559f), fp_Flt2FP(-0.536131f), f);
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.384408f), fp_Flt2FP(-0.525483f), f);
    setUVTriangle(&triangle[1041], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1042:

    setVector(&u, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.404571f), fp_Flt2FP(-0.082062f), f);
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.203458f), fp_Flt2FP(-0.082062f), f);
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203458f), fp_Flt2FP(-0.092717f), f);
    setUVTriangle(&triangle[1042], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1043:

    setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.203458f), fp_Flt2FP(-0.092717f), f);
    setVector(&v, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.384415f), fp_Flt2FP(-0.092009f), f);
    setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.404571f), fp_Flt2FP(-0.082062f), f);
    setUVTriangle(&triangle[1043], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1044:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384410f), fp_Flt2FP(-0.092717f), f);
    setVector(&v, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.384415f), fp_Flt2FP(-0.092009f), f);
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203458f), fp_Flt2FP(-0.092717f), f);
    setUVTriangle(&triangle[1044], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1045:

    setVector(&u, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.404559f), fp_Flt2FP(-0.536131f), f);
    setVector(&v, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.384399f), fp_Flt2FP(-0.526190f), f);
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203459f), fp_Flt2FP(-0.536131f), f);
    setUVTriangle(&triangle[1045], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1046:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384404f), fp_Flt2FP(-0.525483f), f);
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.203456f), fp_Flt2FP(-0.525469f), f);
    setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.384399f), fp_Flt2FP(-0.526190f), f);
    setUVTriangle(&triangle[1046], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1047:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.203459f), fp_Flt2FP(-0.536131f), f);
    setVector(&v, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.384399f), fp_Flt2FP(-0.526190f), f);
    setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203456f), fp_Flt2FP(-0.525469f), f);
    setUVTriangle(&triangle[1047], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1048:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022504f), fp_Flt2FP(-0.525483f), f);
    setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002502f), fp_Flt2FP(-0.536124f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022504f), fp_Flt2FP(-0.526190f), f);
    setUVTriangle(&triangle[1048], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1049:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022504f), fp_Flt2FP(-0.525483f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.022500f), fp_Flt2FP(-0.092717f), f);
    setVector(&w, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.002500f), fp_Flt2FP(-0.082062f), f);
    setUVTriangle(&triangle[1049], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1050:

    setVector(&u, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.002500f), fp_Flt2FP(-0.082062f), f);
    setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002502f), fp_Flt2FP(-0.536124f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022504f), fp_Flt2FP(-0.525483f), f);
    setUVTriangle(&triangle[1050], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1051:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022505f), fp_Flt2FP(-0.091996f), f);
    setVector(&v, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002500f), fp_Flt2FP(-0.082062f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022500f), fp_Flt2FP(-0.092717f), f);
    setUVTriangle(&triangle[1051], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1052:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022504f), fp_Flt2FP(-0.526190f), f);
    setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002502f), fp_Flt2FP(-0.536124f), f);
    setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203456f), fp_Flt2FP(-0.525469f), f);
    setUVTriangle(&triangle[1052], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1053:

    setVector(&u, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.203456f), fp_Flt2FP(-0.525469f), f);
    setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002502f), fp_Flt2FP(-0.536124f), f);
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203459f), fp_Flt2FP(-0.536131f), f);
    setUVTriangle(&triangle[1053], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1054:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022504f), fp_Flt2FP(-0.526190f), f);
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.203456f), fp_Flt2FP(-0.525469f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022498f), fp_Flt2FP(-0.525483f), f);
    setUVTriangle(&triangle[1054], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1055:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022500f), fp_Flt2FP(-0.092717f), f);
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.203458f), fp_Flt2FP(-0.092717f), f);
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022505f), fp_Flt2FP(-0.091996f), f);
    setUVTriangle(&triangle[1055], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1056:

    setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.203458f), fp_Flt2FP(-0.082062f), f);
    setVector(&v, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002500f), fp_Flt2FP(-0.082062f), f);
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022505f), fp_Flt2FP(-0.091996f), f);
    setUVTriangle(&triangle[1056], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1057:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022505f), fp_Flt2FP(-0.091996f), f);
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.203458f), fp_Flt2FP(-0.092717f), f);
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203458f), fp_Flt2FP(-0.082062f), f);
    setUVTriangle(&triangle[1057], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1058:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867366f), fp_Flt2FP(-0.781097f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.868074f), fp_Flt2FP(-0.781097f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867366f), fp_Flt2FP(-0.773994f), f);
    setUVTriangle(&triangle[1058], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1059:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867366f), fp_Flt2FP(-0.773994f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.868074f), fp_Flt2FP(-0.781097f), f);
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.868074f), fp_Flt2FP(-0.773994f), f);
    setUVTriangle(&triangle[1059], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1060:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880512f), fp_Flt2FP(-0.770867f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880512f), fp_Flt2FP(-0.771567f), f);
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.770867f), f);
    setUVTriangle(&triangle[1060], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1061:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.770867f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880512f), fp_Flt2FP(-0.771567f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.771567f), f);
    setUVTriangle(&triangle[1061], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1062:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864633f), fp_Flt2FP(-0.690136f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864633f), fp_Flt2FP(-0.689422f), f);
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857530f), fp_Flt2FP(-0.690129f), f);
    setUVTriangle(&triangle[1062], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1063:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857530f), fp_Flt2FP(-0.690129f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864633f), fp_Flt2FP(-0.689422f), f);
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857530f), fp_Flt2FP(-0.689429f), f);
    setUVTriangle(&triangle[1063], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1064:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.773994f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.886907f), fp_Flt2FP(-0.773994f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.781097f), f);
    setUVTriangle(&triangle[1064], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1065:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.781097f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.886907f), fp_Flt2FP(-0.773994f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.886907f), fp_Flt2FP(-0.781097f), f);
    setUVTriangle(&triangle[1065], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1066:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.808299f), fp_Flt2FP(-0.197978f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.808299f), fp_Flt2FP(-0.559881f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.815402f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[1066], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1067:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.815402f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.815402f), fp_Flt2FP(-0.197978f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.808299f), fp_Flt2FP(-0.197978f), f);
    setUVTriangle(&triangle[1067], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1068:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.898599f), fp_Flt2FP(-0.400408f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.899306f), fp_Flt2FP(-0.400412f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.898606f), fp_Flt2FP(-0.038506f), f);
    setUVTriangle(&triangle[1068], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1069:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.898606f), fp_Flt2FP(-0.038506f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.899306f), fp_Flt2FP(-0.400412f), f);
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.899306f), fp_Flt2FP(-0.038511f), f);
    setUVTriangle(&triangle[1069], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1070:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.893739f), fp_Flt2FP(-0.038503f), f);
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.893038f), fp_Flt2FP(-0.038508f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.893746f), fp_Flt2FP(-0.400405f), f);
    setUVTriangle(&triangle[1070], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1071:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.893746f), fp_Flt2FP(-0.400405f), f);
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.893038f), fp_Flt2FP(-0.038508f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.893038f), fp_Flt2FP(-0.400412f), f);
    setUVTriangle(&triangle[1071], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1072:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.617461f), fp_Flt2FP(-0.197964f), f);
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616760f), fp_Flt2FP(-0.197970f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.617468f), fp_Flt2FP(-0.559869f), f);
    setUVTriangle(&triangle[1072], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1073:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.617468f), fp_Flt2FP(-0.559869f), f);
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616760f), fp_Flt2FP(-0.197970f), f);
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616760f), fp_Flt2FP(-0.559874f), f);
    setUVTriangle(&triangle[1073], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1074:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.970106f), fp_Flt2FP(-0.997498f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.970813f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.970106f), fp_Flt2FP(-0.635589f), f);
    setUVTriangle(&triangle[1074], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1075:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.970106f), fp_Flt2FP(-0.635589f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.970813f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.970820f), fp_Flt2FP(-0.635592f), f);
    setUVTriangle(&triangle[1075], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1076:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.599229f), fp_Flt2FP(-0.197966f), f);
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.599229f), fp_Flt2FP(-0.559870f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.606332f), fp_Flt2FP(-0.559874f), f);
    setUVTriangle(&triangle[1076], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1077:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.606332f), fp_Flt2FP(-0.559874f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.606332f), fp_Flt2FP(-0.197966f), f);
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.599229f), fp_Flt2FP(-0.197966f), f);
    setUVTriangle(&triangle[1077], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1078:

    setVector(&u, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862752f), fp_Flt2FP(-0.905947f), f);
    setVector(&v, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862750f), fp_Flt2FP(-0.906641f), f);
    setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.905940f), f);
    setUVTriangle(&triangle[1078], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1079:

    setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.905940f), f);
    setVector(&v, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862750f), fp_Flt2FP(-0.906641f), f);
    setVector(&w, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887611f), fp_Flt2FP(-0.906655f), f);
    setUVTriangle(&triangle[1079], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1080:

    setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240620f), fp_Flt2FP(-0.401845f), f);
    setVector(&v, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239913f), fp_Flt2FP(-0.401840f), f);
    setVector(&w, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240620f), fp_Flt2FP(-0.426708f), f);
    setUVTriangle(&triangle[1080], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1081:

    setVector(&u, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240620f), fp_Flt2FP(-0.426708f), f);
    setVector(&v, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239913f), fp_Flt2FP(-0.401840f), f);
    setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239913f), fp_Flt2FP(-0.426706f), f);
    setUVTriangle(&triangle[1081], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1082:

    setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.243755f), fp_Flt2FP(-0.401840f), f);
    setVector(&v, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.243047f), fp_Flt2FP(-0.401840f), f);
    setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.243755f), fp_Flt2FP(-0.426701f), f);
    setUVTriangle(&triangle[1082], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1083:

    setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.243755f), fp_Flt2FP(-0.426701f), f);
    setVector(&v, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.243047f), fp_Flt2FP(-0.401840f), f);
    setVector(&w, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.243047f), fp_Flt2FP(-0.426701f), f);
    setUVTriangle(&triangle[1083], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1084:

    setVector(&u, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.153020f), fp_Flt2FP(-0.328331f), f);
    setVector(&v, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153728f), fp_Flt2FP(-0.328331f), f);
    setVector(&w, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.153013f), fp_Flt2FP(-0.303470f), f);
    setUVTriangle(&triangle[1084], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1085:

    setVector(&u, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.153013f), fp_Flt2FP(-0.303470f), f);
    setVector(&v, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153728f), fp_Flt2FP(-0.328331f), f);
    setVector(&w, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.153728f), fp_Flt2FP(-0.303470f), f);
    setUVTriangle(&triangle[1085], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1086:

    setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.328331f), f);
    setVector(&v, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.147446f), fp_Flt2FP(-0.328331f), f);
    setVector(&w, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147442f), fp_Flt2FP(-0.303470f), f);
    setUVTriangle(&triangle[1086], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1087:

    setVector(&u, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147442f), fp_Flt2FP(-0.303470f), f);
    setVector(&v, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.303470f), f);
    setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.328331f), f);
    setUVTriangle(&triangle[1087], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1088:

    setVector(&u, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.429127f), f);
    setVector(&v, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122583f), fp_Flt2FP(-0.429842f), f);
    setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147442f), fp_Flt2FP(-0.429134f), f);
    setUVTriangle(&triangle[1088], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1089:

    setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147442f), fp_Flt2FP(-0.429134f), f);
    setVector(&v, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122583f), fp_Flt2FP(-0.429842f), f);
    setVector(&w, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(-0.429842f), f);
    setUVTriangle(&triangle[1089], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1090:

    setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156862f), fp_Flt2FP(-0.401840f), f);
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156155f), fp_Flt2FP(-0.401847f), f);
    setVector(&w, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156859f), fp_Flt2FP(-0.426708f), f);
    setUVTriangle(&triangle[1090], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1091:

    setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156859f), fp_Flt2FP(-0.426708f), f);
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156155f), fp_Flt2FP(-0.401847f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156153f), fp_Flt2FP(-0.426708f), f);
    setUVTriangle(&triangle[1091], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1092:

    setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156862f), fp_Flt2FP(-0.303470f), f);
    setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156158f), fp_Flt2FP(-0.303470f), f);
    setVector(&w, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156862f), fp_Flt2FP(-0.328331f), f);
    setUVTriangle(&triangle[1092], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1093:

    setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156862f), fp_Flt2FP(-0.328331f), f);
    setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156158f), fp_Flt2FP(-0.303470f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156155f), fp_Flt2FP(-0.328331f), f);
    setUVTriangle(&triangle[1093], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1094:

    setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237483f), fp_Flt2FP(-0.401840f), f);
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.236779f), fp_Flt2FP(-0.401840f), f);
    setVector(&w, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237486f), fp_Flt2FP(-0.426708f), f);
    setUVTriangle(&triangle[1094], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1095:

    setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237486f), fp_Flt2FP(-0.426708f), f);
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.236779f), fp_Flt2FP(-0.401840f), f);
    setVector(&w, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.236782f), fp_Flt2FP(-0.426701f), f);
    setUVTriangle(&triangle[1095], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1096:

    setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.315623f), fp_Flt2FP(-0.328333f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316329f), fp_Flt2FP(-0.328333f), f);
    setVector(&w, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.315623f), fp_Flt2FP(-0.303472f), f);
    setUVTriangle(&triangle[1096], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1097:

    setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.315623f), fp_Flt2FP(-0.303472f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316329f), fp_Flt2FP(-0.328333f), f);
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.316327f), fp_Flt2FP(-0.303472f), f);
    setUVTriangle(&triangle[1097], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1098:

    setVector(&u, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150580f), fp_Flt2FP(-0.303470f), f);
    setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149872f), fp_Flt2FP(-0.303470f), f);
    setVector(&w, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.150587f), fp_Flt2FP(-0.328331f), f);
    setUVTriangle(&triangle[1098], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1099:

    setVector(&u, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150587f), fp_Flt2FP(-0.328331f), f);
    setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149872f), fp_Flt2FP(-0.303470f), f);
    setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149872f), fp_Flt2FP(-0.328331f), f);
    setUVTriangle(&triangle[1099], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1100:

    setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150578f), fp_Flt2FP(-0.401840f), f);
    setVector(&v, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149871f), fp_Flt2FP(-0.401841f), f);
    setVector(&w, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.150585f), fp_Flt2FP(-0.426708f), f);
    setUVTriangle(&triangle[1100], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1101:

    setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150585f), fp_Flt2FP(-0.426708f), f);
    setVector(&v, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149871f), fp_Flt2FP(-0.401841f), f);
    setVector(&w, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149871f), fp_Flt2FP(-0.426706f), f);
    setUVTriangle(&triangle[1101], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1102:

    setVector(&u, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.401840f), f);
    setVector(&v, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122581f), fp_Flt2FP(-0.426701f), f);
    setVector(&w, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147442f), fp_Flt2FP(-0.426701f), f);
    setUVTriangle(&triangle[1102], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1103:

    setVector(&u, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147442f), fp_Flt2FP(-0.426701f), f);
    setVector(&v, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.147444f), fp_Flt2FP(-0.401840f), f);
    setVector(&w, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.401840f), f);
    setUVTriangle(&triangle[1103], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1104:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147441f), fp_Flt2FP(-0.172310f), f);
    setVector(&v, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.172310f), f);
    setVector(&w, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.197171f), f);
    setUVTriangle(&triangle[1104], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1105:

    setVector(&u, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.197171f), f);
    setVector(&v, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.147441f), fp_Flt2FP(-0.197171f), f);
    setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(-0.172310f), f);
    setUVTriangle(&triangle[1105], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1106:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853863f), fp_Flt2FP(-0.808047f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854579f), fp_Flt2FP(-0.808047f), f);
    setVector(&w, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853867f), fp_Flt2FP(-0.783186f), f);
    setUVTriangle(&triangle[1106], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1107:

    setVector(&u, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853867f), fp_Flt2FP(-0.783186f), f);
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854579f), fp_Flt2FP(-0.808047f), f);
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.854578f), fp_Flt2FP(-0.783186f), f);
    setUVTriangle(&triangle[1107], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1108:

    setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862747f), fp_Flt2FP(-0.914346f), f);
    setVector(&v, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862747f), fp_Flt2FP(-0.939207f), f);
    setVector(&w, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.939207f), f);
    setUVTriangle(&triangle[1108], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1109:

    setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.939207f), f);
    setVector(&v, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.914346f), f);
    setVector(&w, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862747f), fp_Flt2FP(-0.914346f), f);
    setUVTriangle(&triangle[1109], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1110:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.676642f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.675931f), f);
    setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862754f), fp_Flt2FP(-0.676642f), f);
    setUVTriangle(&triangle[1110], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1111:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862754f), fp_Flt2FP(-0.676642f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.675931f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862754f), fp_Flt2FP(-0.675925f), f);
    setUVTriangle(&triangle[1111], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1112:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.339668f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.340379f), f);
    setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(-0.339668f), f);
    setUVTriangle(&triangle[1112], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1113:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147441f), fp_Flt2FP(-0.339668f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.340379f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(-0.340379f), f);
    setUVTriangle(&triangle[1113], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1114:

    setVector(&u, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.432272f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.432983f), f);
    setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(-0.432268f), f);
    setUVTriangle(&triangle[1114], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1115:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147441f), fp_Flt2FP(-0.432268f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(-0.432983f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(-0.432979f), f);
    setUVTriangle(&triangle[1115], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1116:

    setVector(&u, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.153019f), fp_Flt2FP(-0.426701f), f);
    setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153712f), fp_Flt2FP(-0.426701f), f);
    setVector(&w, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.153012f), fp_Flt2FP(-0.401840f), f);
    setUVTriangle(&triangle[1116], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1117:

    setVector(&u, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.153012f), fp_Flt2FP(-0.401840f), f);
    setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153712f), fp_Flt2FP(-0.426701f), f);
    setVector(&w, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.153726f), fp_Flt2FP(-0.401840f), f);
    setUVTriangle(&triangle[1117], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1118:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.930444f), fp_Flt2FP(-0.405265f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.405265f), f);
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.453564f), f);
    setUVTriangle(&triangle[1118], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1119:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.453564f), f);
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.930444f), fp_Flt2FP(-0.453564f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.930444f), fp_Flt2FP(-0.405265f), f);
    setUVTriangle(&triangle[1119], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1120:

    setVector(&u, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.050327f), fp_Flt2FP(-0.074780f), f);
    setVector(&v, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.093302f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.093302f), fp_Flt2FP(-0.026475f), f);
    setUVTriangle(&triangle[1120], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1121:

    setVector(&u, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.093302f), fp_Flt2FP(-0.026475f), f);
    setVector(&v, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.050327f), fp_Flt2FP(-0.026477f), f);
    setVector(&w, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.050327f), fp_Flt2FP(-0.074780f), f);
    setUVTriangle(&triangle[1121], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1122:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.002500f), fp_Flt2FP(-0.026473f), f);
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002500f), fp_Flt2FP(-0.074780f), f);
    setVector(&w, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.045474f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[1122], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1123:

    setVector(&u, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.045474f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.045474f), fp_Flt2FP(-0.026473f), f);
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.002500f), fp_Flt2FP(-0.026473f), f);
    setUVTriangle(&triangle[1123], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1124:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.785322f), fp_Flt2FP(-0.193127f), f);
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.785322f), fp_Flt2FP(-0.144820f), f);
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.742348f), fp_Flt2FP(-0.144820f), f);
    setUVTriangle(&triangle[1124], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1125:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.742348f), fp_Flt2FP(-0.144820f), f);
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.742348f), fp_Flt2FP(-0.193127f), f);
    setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.785322f), fp_Flt2FP(-0.193127f), f);
    setUVTriangle(&triangle[1125], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1126:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.672886f), fp_Flt2FP(-0.100522f), f);
    setVector(&v, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.672886f), fp_Flt2FP(-0.148824f), f);
    setVector(&w, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.715860f), fp_Flt2FP(-0.148826f), f);
    setUVTriangle(&triangle[1126], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1127:

    setVector(&u, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.715860f), fp_Flt2FP(-0.148826f), f);
    setVector(&v, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.715860f), fp_Flt2FP(-0.100519f), f);
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.672886f), fp_Flt2FP(-0.100522f), f);
    setUVTriangle(&triangle[1127], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1128:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.978272f), fp_Flt2FP(-0.511579f), f);
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.935298f), fp_Flt2FP(-0.511579f), f);
    setVector(&w, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.935298f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[1128], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1129:

    setVector(&u, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.935298f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.978272f), fp_Flt2FP(-0.559879f), f);
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.978272f), fp_Flt2FP(-0.511579f), f);
    setUVTriangle(&triangle[1129], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1130:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.742348f), fp_Flt2FP(-0.091663f), f);
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.742348f), fp_Flt2FP(-0.139966f), f);
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.785322f), fp_Flt2FP(-0.139966f), f);
    setUVTriangle(&triangle[1130], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1131:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.785322f), fp_Flt2FP(-0.139966f), f);
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.785322f), fp_Flt2FP(-0.091666f), f);
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.742348f), fp_Flt2FP(-0.091663f), f);
    setUVTriangle(&triangle[1131], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1132:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.458417f), f);
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.506720f), f);
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.930444f), fp_Flt2FP(-0.506720f), f);
    setUVTriangle(&triangle[1132], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1133:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.930444f), fp_Flt2FP(-0.506720f), f);
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.930444f), fp_Flt2FP(-0.458420f), f);
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.458417f), f);
    setUVTriangle(&triangle[1133], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1134:

    setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.978272f), fp_Flt2FP(-0.458422f), f);
    setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.935298f), fp_Flt2FP(-0.458422f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.935298f), fp_Flt2FP(-0.506720f), f);
    setUVTriangle(&triangle[1134], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1135:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.935298f), fp_Flt2FP(-0.506720f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.978272f), fp_Flt2FP(-0.506720f), f);
    setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.978272f), fp_Flt2FP(-0.458422f), f);
    setUVTriangle(&triangle[1135], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1136:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.503895f), fp_Flt2FP(-0.095652f), f);
    setVector(&v, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.503895f), fp_Flt2FP(-0.047346f), f);
    setVector(&w, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.460921f), fp_Flt2FP(-0.047346f), f);
    setUVTriangle(&triangle[1136], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1137:

    setVector(&u, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.460921f), fp_Flt2FP(-0.047346f), f);
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.460921f), fp_Flt2FP(-0.095648f), f);
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.503895f), fp_Flt2FP(-0.095652f), f);
    setUVTriangle(&triangle[1137], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1138:

    setVector(&u, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.535719f), fp_Flt2FP(-0.139951f), f);
    setVector(&v, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.578693f), fp_Flt2FP(-0.139951f), f);
    setVector(&w, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.578693f), fp_Flt2FP(-0.091645f), f);
    setUVTriangle(&triangle[1138], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1139:

    setVector(&u, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.578693f), fp_Flt2FP(-0.091645f), f);
    setVector(&v, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.535719f), fp_Flt2FP(-0.091645f), f);
    setVector(&w, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.535719f), fp_Flt2FP(-0.139951f), f);
    setUVTriangle(&triangle[1139], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1140:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.141129f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.141129f), fp_Flt2FP(-0.026480f), f);
    setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.098155f), fp_Flt2FP(-0.026484f), f);
    setUVTriangle(&triangle[1140], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1141:

    setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.098155f), fp_Flt2FP(-0.026484f), f);
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.098155f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.141129f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[1141], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1142:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.785322f), fp_Flt2FP(-0.086810f), f);
    setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.785322f), fp_Flt2FP(-0.038509f), f);
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.742348f), fp_Flt2FP(-0.038516f), f);
    setUVTriangle(&triangle[1142], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1143:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.742348f), fp_Flt2FP(-0.038516f), f);
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.742348f), fp_Flt2FP(-0.086810f), f);
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.785322f), fp_Flt2FP(-0.086810f), f);
    setUVTriangle(&triangle[1143], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1144:

    setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.578693f), fp_Flt2FP(-0.038492f), f);
    setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.535719f), fp_Flt2FP(-0.038492f), f);
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.535719f), fp_Flt2FP(-0.086792f), f);
    setUVTriangle(&triangle[1144], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1145:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.535719f), fp_Flt2FP(-0.086792f), f);
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.578693f), fp_Flt2FP(-0.086792f), f);
    setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.578693f), fp_Flt2FP(-0.038492f), f);
    setUVTriangle(&triangle[1145], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1146:

    setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.672886f), fp_Flt2FP(-0.095665f), f);
    setVector(&v, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.715860f), fp_Flt2FP(-0.095665f), f);
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.715860f), fp_Flt2FP(-0.047365f), f);
    setUVTriangle(&triangle[1146], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1147:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.715860f), fp_Flt2FP(-0.047365f), f);
    setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.672886f), fp_Flt2FP(-0.047372f), f);
    setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.672886f), fp_Flt2FP(-0.095665f), f);
    setUVTriangle(&triangle[1147], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1148:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.578693f), fp_Flt2FP(-0.193111f), f);
    setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.578693f), fp_Flt2FP(-0.144804f), f);
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.535719f), fp_Flt2FP(-0.144804f), f);
    setUVTriangle(&triangle[1148], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1149:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.535719f), fp_Flt2FP(-0.144804f), f);
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.535719f), fp_Flt2FP(-0.193111f), f);
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.578693f), fp_Flt2FP(-0.193111f), f);
    setUVTriangle(&triangle[1149], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1150:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.924930f), fp_Flt2FP(-0.630741f), f);
    setVector(&v, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.924930f), fp_Flt2FP(-0.582434f), f);
    setVector(&w, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.881956f), fp_Flt2FP(-0.582434f), f);
    setUVTriangle(&triangle[1150], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1151:

    setVector(&u, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.881956f), fp_Flt2FP(-0.582434f), f);
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.881956f), fp_Flt2FP(-0.630741f), f);
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.924930f), fp_Flt2FP(-0.630741f), f);
    setUVTriangle(&triangle[1151], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1152:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.834128f), fp_Flt2FP(-0.582434f), f);
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.834128f), fp_Flt2FP(-0.630741f), f);
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.877103f), fp_Flt2FP(-0.630741f), f);
    setUVTriangle(&triangle[1152], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1153:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.877103f), fp_Flt2FP(-0.630741f), f);
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.877103f), fp_Flt2FP(-0.582434f), f);
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834128f), fp_Flt2FP(-0.582434f), f);
    setUVTriangle(&triangle[1153], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1154:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.460921f), fp_Flt2FP(-0.100505f), f);
    setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.460921f), fp_Flt2FP(-0.148812f), f);
    setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.503895f), fp_Flt2FP(-0.148812f), f);
    setUVTriangle(&triangle[1154], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1155:

    setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.503895f), fp_Flt2FP(-0.148812f), f);
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.503895f), fp_Flt2FP(-0.100505f), f);
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.460921f), fp_Flt2FP(-0.100505f), f);
    setUVTriangle(&triangle[1155], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1156:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.930444f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.930444f), fp_Flt2FP(-0.511581f), f);
    setVector(&w, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.511574f), f);
    setUVTriangle(&triangle[1156], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1157:

    setVector(&u, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.511574f), f);
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.559881f), f);
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.930444f), fp_Flt2FP(-0.559881f), f);
    setUVTriangle(&triangle[1157], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1158:

    setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.668032f), fp_Flt2FP(-0.148826f), f);
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.668032f), fp_Flt2FP(-0.100519f), f);
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.100519f), f);
    setUVTriangle(&triangle[1158], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1159:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.100519f), f);
    setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.148826f), f);
    setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.668032f), fp_Flt2FP(-0.148826f), f);
    setUVTriangle(&triangle[1159], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1160:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.668032f), fp_Flt2FP(-0.047358f), f);
    setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.047365f), f);
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.095665f), f);
    setUVTriangle(&triangle[1160], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1161:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625058f), fp_Flt2FP(-0.095665f), f);
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.668032f), fp_Flt2FP(-0.095665f), f);
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.668032f), fp_Flt2FP(-0.047358f), f);
    setUVTriangle(&triangle[1161], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1162:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.188956f), fp_Flt2FP(-0.074782f), f);
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.188956f), fp_Flt2FP(-0.026489f), f);
    setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.145982f), fp_Flt2FP(-0.026489f), f);
    setUVTriangle(&triangle[1162], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1163:

    setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.145982f), fp_Flt2FP(-0.026489f), f);
    setVector(&v, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.145982f), fp_Flt2FP(-0.074782f), f);
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188956f), fp_Flt2FP(-0.074782f), f);
    setUVTriangle(&triangle[1163], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1164:

    setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.453641f), fp_Flt2FP(-0.148812f), f);
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.453641f), fp_Flt2FP(-0.075649f), f);
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.075649f), f);
    setUVTriangle(&triangle[1164], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1165:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.075649f), f);
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.415989f), fp_Flt2FP(-0.148812f), f);
    setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.453641f), fp_Flt2FP(-0.148812f), f);
    setUVTriangle(&triangle[1165], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1166:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.205480f), fp_Flt2FP(-0.997493f), f);
    setVector(&v, fp_Flt2FP(-4.539766f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.510809f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.408709f), fp_Flt2FP(-0.997486f), f);
    setVector(&w, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.408707f), fp_Flt2FP(-0.543411f), f);
    setUVTriangle(&triangle[1166], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1167:

    setVector(&u, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.408707f), fp_Flt2FP(-0.543411f), f);
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.205478f), fp_Flt2FP(-0.543418f), f);
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.205480f), fp_Flt2FP(-0.997493f), f);
    setUVTriangle(&triangle[1167], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1168:

    setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.205478f), fp_Flt2FP(-0.543418f), f);
    setVector(&v, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002505f), fp_Flt2FP(-0.543424f), f);
    setVector(&w, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.002500f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[1168], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1169:

    setVector(&u, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.002500f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.205480f), fp_Flt2FP(-0.997493f), f);
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.205478f), fp_Flt2FP(-0.543418f), f);
    setUVTriangle(&triangle[1169], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1170:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.868074f), fp_Flt2FP(-0.796976f), f);
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867366f), fp_Flt2FP(-0.796976f), f);
    setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867366f), fp_Flt2FP(-0.804080f), f);
    setUVTriangle(&triangle[1170], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1171:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864633f), fp_Flt2FP(-0.709677f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864633f), fp_Flt2FP(-0.708970f), f);
    setVector(&w, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857529f), fp_Flt2FP(-0.709677f), f);
    setUVTriangle(&triangle[1171], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1172:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880511f), fp_Flt2FP(-0.690136f), f);
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.689429f), f);
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880511f), fp_Flt2FP(-0.689429f), f);
    setUVTriangle(&triangle[1172], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1173:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.709677f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.708963f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880512f), fp_Flt2FP(-0.709677f), f);
    setUVTriangle(&triangle[1173], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1174:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880512f), fp_Flt2FP(-0.709677f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.708963f), f);
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880512f), fp_Flt2FP(-0.708970f), f);
    setUVTriangle(&triangle[1174], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1175:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.804079f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.886907f), fp_Flt2FP(-0.796976f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.886907f), fp_Flt2FP(-0.804079f), f);
    setUVTriangle(&triangle[1175], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1176:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887608f), fp_Flt2FP(-0.796976f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.886907f), fp_Flt2FP(-0.796976f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(-0.804079f), f);
    setUVTriangle(&triangle[1176], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1177:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.808299f), fp_Flt2FP(-0.012175f), f);
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.809006f), fp_Flt2FP(-0.193125f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.809006f), fp_Flt2FP(-0.012168f), f);
    setUVTriangle(&triangle[1177], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1178:

    setVector(&u, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.611199f), fp_Flt2FP(-0.559874f), f);
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.611907f), fp_Flt2FP(-0.378917f), f);
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.611186f), fp_Flt2FP(-0.197964f), f);
    setUVTriangle(&triangle[1178], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1179:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.943280f), fp_Flt2FP(-0.790533f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943988f), fp_Flt2FP(-0.790532f), f);
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.943988f), fp_Flt2FP(-0.609579f), f);
    setUVTriangle(&triangle[1179], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1180:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.081297f), fp_Flt2FP(-0.114019f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.074194f), fp_Flt2FP(-0.114017f), f);
    setVector(&w, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.081298f), fp_Flt2FP(-0.475928f), f);
    setUVTriangle(&triangle[1180], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1181:

    setVector(&u, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.081298f), fp_Flt2FP(-0.475928f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.074194f), fp_Flt2FP(-0.114017f), f);
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.074194f), fp_Flt2FP(-0.475925f), f);
    setUVTriangle(&triangle[1181], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1182:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.400407f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.888178f), fp_Flt2FP(-0.400412f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.038501f), f);
    setUVTriangle(&triangle[1182], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1183:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887470f), fp_Flt2FP(-0.038501f), f);
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.888178f), fp_Flt2FP(-0.400412f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.888185f), fp_Flt2FP(-0.038504f), f);
    setUVTriangle(&triangle[1183], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1184:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.938427f), fp_Flt2FP(-0.635597f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.931324f), fp_Flt2FP(-0.635601f), f);
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.938427f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[1184], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1185:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.938427f), fp_Flt2FP(-0.997500f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.931324f), fp_Flt2FP(-0.635601f), f);
    setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.931323f), fp_Flt2FP(-0.997497f), f);
    setUVTriangle(&triangle[1185], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1186:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.965252f), fp_Flt2FP(-0.635599f), f);
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.964531f), fp_Flt2FP(-0.816551f), f);
    setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.965252f), fp_Flt2FP(-0.997495f), f);
    setUVTriangle(&triangle[1186], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1187:

    setVector(&u, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.965252f), fp_Flt2FP(-0.997495f), f);
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.964531f), fp_Flt2FP(-0.816551f), f);
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.964545f), fp_Flt2FP(-0.997500f), f);
    setUVTriangle(&triangle[1187], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1188:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.964545f), fp_Flt2FP(-0.635594f), f);
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.964531f), fp_Flt2FP(-0.816551f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.965252f), fp_Flt2FP(-0.635599f), f);
    setUVTriangle(&triangle[1188], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1189:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.975673f), fp_Flt2FP(-0.997493f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976381f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.975680f), fp_Flt2FP(-0.635591f), f);
    setUVTriangle(&triangle[1189], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1190:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.975680f), fp_Flt2FP(-0.635591f), f);
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976381f), fp_Flt2FP(-0.997500f), f);
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.976381f), fp_Flt2FP(-0.635594f), f);
    setUVTriangle(&triangle[1190], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1191:

    setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.514941f), fp_Flt2FP(-0.378917f), f);
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.594376f), fp_Flt2FP(-0.559874f), f);
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.594376f), fp_Flt2FP(-0.378917f), f);
    setUVTriangle(&triangle[1191], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1192:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.594375f), fp_Flt2FP(-0.197964f), f);
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.514941f), fp_Flt2FP(-0.378917f), f);
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.594376f), fp_Flt2FP(-0.378917f), f);
    setUVTriangle(&triangle[1192], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1193:

    setVector(&u, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.803446f), fp_Flt2FP(-0.378932f), f);
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.803445f), fp_Flt2FP(-0.197980f), f);
    setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.724011f), fp_Flt2FP(-0.378932f), f);
    setUVTriangle(&triangle[1193], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1194:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.803445f), fp_Flt2FP(-0.559881f), f);
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.803446f), fp_Flt2FP(-0.378932f), f);
    setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.724011f), fp_Flt2FP(-0.378932f), f);
    setUVTriangle(&triangle[1194], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1195:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.868074f), fp_Flt2FP(-0.796976f), f);
    setVector(&v, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867366f), fp_Flt2FP(-0.804080f), f);
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.868074f), fp_Flt2FP(-0.804080f), f);
    setUVTriangle(&triangle[1195], u, v, w, uUV, vUV, wUV, m, f);

    setObject(&myObj, myMat, 1196, triangle, f);
    transformObject(&myObj, matMult(genTransMatrix(fp_Flt2FP(1.), fp_Flt2FP(-5.), -fp_Flt2FP(15.), m, f), matMult(genYRotateMat(fp_Flt2FP(160.), m, f), genXRotateMat(fp_Flt2FP(-90.), m, f), m, f), m, f), m, f);
    initialiseScene(scene, 1, f);
    addObject(scene, myObj, f);
}

Vector draw(Ray ray, Scene scene, Light light, int recursion, MathStat *m, FuncStat *f)
{
    Hit hit;
    Vector outputColour, reflectiveColour, refractiveColour;
    fixedp reflection, refraction;
    
    (*f).draw++;
    
    // Default is black. We can add to this (if there's a hit) 
    // or just return it (if there's no object)
    setVector(&outputColour, 0, 0, 0, f);
    
    hit = sceneIntersection(ray, scene, m, f);
    
    // Determine whether there was a hit. Otherwise default.
    if (hit.objectIndex >= 0)
    {
        // There was a hit.
        Vector lightDirection = vecNormalised(vecSub(light.location, hit.location, m, f), m, f);
        // outputColour = vecAdd(ambiance(hit, scene, light, m, f), diffusion(hit, scene, light, m, f), m, f);
        outputColour = vecAdd(ambiance(hit, scene, light, m, f), vecAdd(diffusion(hit, scene, light, lightDirection, m, f), specular(hit, scene, light, lightDirection, m, f), m, f), m, f);
        
        // Should we go deeper?
        if (recursion > 0)
        {
            // Yes, we should
            // Get the reflection
            reflectiveColour = draw(reflectRay(hit, m, f), scene, light, recursion - 1, m, f);
            statSubtractInt(m, 1);
            reflection = scene.object[hit.objectIndex].material.reflectivity;
            outputColour = vecAdd(outputColour, scalarVecMult(reflection, reflectiveColour, m, f), m, f);
            
            // Get the refraction
            refractiveColour = draw(refractRay(hit, scene.object[hit.objectIndex].material.inverserefractivity, scene.object[hit.objectIndex].material.squareinverserefractivity, m, f), scene, light, recursion - 1, m, f);
            statSubtractInt(m, 1);
            refraction = scene.object[hit.objectIndex].material.opacity;
            outputColour = vecAdd(outputColour, scalarVecMult(refraction, refractiveColour, m, f), m, f);
        }
        
        // We've got what we needed after the hit, so return
        statSubtractFlt(m, 1);
        return scalarVecMult(fp_fp1 - traceShadow(hit, scene, light, lightDirection, m, f), outputColour, m, f);
    }
    
    // No hit, return black.
    
    return outputColour;
}

#endif
