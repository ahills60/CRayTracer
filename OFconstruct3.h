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

Texture Textures[1];

// Put the object(s) on the scene
void populateScene(Scene *scene, Light lightSrc, MathStat *m, FuncStat *f)
{
    //fixedp normal[3];	// Storage for calculated surface normal
    
    Object myObj;
    Material myMat;
    Vector red = int2Vector(RED);
    Vector lgrey = int2Vector(LIGHT_GREY);
    Vector u, v, w;

    UVCoord uUV, vUV, wUV;

    ReadTexture(&Textures[0],"texture.tga", f);
    // setMaterial(&myMat, lightSrc, red, fp_Flt2FP(0.0), fp_Flt2FP(0.5), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(0.8), fp_Flt2FP(1.4), 0, m, f);
    setMaterial(&myMat, lightSrc, lgrey, fp_Flt2FP(1.0), fp_Flt2FP(0.0), fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.2), fp_Flt2FP(0.0), fp_Flt2FP(1.4), 0, m, f);
    Triangle *triangle;
    triangle = (Triangle *)malloc(sizeof(Triangle) * 1196);
    // Now begin object writing

    // Triangle 0:

    setVector(&u, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.182044f), fp_Flt2FP(1.278460f));
    setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(1.253597f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.178492f), fp_Flt2FP(1.114017f));
    setUVTriangle(&triangle[0], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1:

    setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.282139f), fp_Flt2FP(1.289111f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.278588f), fp_Flt2FP(1.114017f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.278588f), fp_Flt2FP(1.475919f));
    setUVTriangle(&triangle[1], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 2:

    setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.282139f), fp_Flt2FP(1.289111f));
    setVector(&v, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.282139f), fp_Flt2FP(1.264248f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.278588f), fp_Flt2FP(1.114017f));
    setUVTriangle(&triangle[2], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 3:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.829275f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.960208f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.985069f));
    setUVTriangle(&triangle[3], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 4:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.784766f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.829275f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.829275f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[4], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 5:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.784766f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.960208f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.829275f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[5], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 6:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.747113f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.784766f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.829275f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[6], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 7:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.725790f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.620205f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.620205f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[7], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 8:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.725790f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.763442f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.620205f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[8], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 9:

    setVector(&u, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.705629f), fp_Flt2FP(1.564734f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.619256f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.724503f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[9], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 10:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739397f), fp_Flt2FP(1.682928f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.619256f));
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.705629f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[10], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 11:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739397f), fp_Flt2FP(1.682928f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.667563f));
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.619256f));
    setUVTriangle(&triangle[11], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 12:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.619263f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.619256f));
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[12], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 13:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739397f), fp_Flt2FP(1.682928f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.741793f));
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.741786f));
    setUVTriangle(&triangle[13], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 14:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.667557f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.741793f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739397f), fp_Flt2FP(1.682928f));
    setUVTriangle(&triangle[14], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 15:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.667557f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.667563f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.741793f));
    setUVTriangle(&triangle[15], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 16:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.632162f), fp_Flt2FP(1.564734f));
    setVector(&v, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.619256f));
    setUVTriangle(&triangle[16], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 17:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.619256f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.739397f), fp_Flt2FP(1.682928f));
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.705629f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[17], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 18:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.619256f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.667557f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739397f), fp_Flt2FP(1.682928f));
    setUVTriangle(&triangle[18], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 19:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.619256f));
    setVector(&v, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.705629f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.632162f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[19], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 20:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646014f), fp_Flt2FP(1.896280f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.790086f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[20], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 21:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.800863f), fp_Flt2FP(1.985069f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.944587f));
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.944587f));
    setUVTriangle(&triangle[21], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 22:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.724504f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.944587f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646014f), fp_Flt2FP(1.944587f));
    setUVTriangle(&triangle[22], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 23:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.731607f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.829275f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.800863f), fp_Flt2FP(1.985069f));
    setUVTriangle(&triangle[23], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 24:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.800863f), fp_Flt2FP(1.985069f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.829275f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.985069f));
    setUVTriangle(&triangle[24], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 25:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.724504f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.800863f), fp_Flt2FP(1.985069f));
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.944587f));
    setUVTriangle(&triangle[25], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 26:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.724504f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.731607f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.800863f), fp_Flt2FP(1.985069f));
    setUVTriangle(&triangle[26], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 27:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.632162f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.724504f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646014f), fp_Flt2FP(1.944587f));
    setUVTriangle(&triangle[27], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 28:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.667563f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.619263f));
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[28], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 29:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.790086f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625059f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[29], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 30:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.632162f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646014f), fp_Flt2FP(1.896280f));
    setUVTriangle(&triangle[30], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 31:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625059f), fp_Flt2FP(1.564734f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.790086f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.741793f));
    setUVTriangle(&triangle[31], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 32:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.667563f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625059f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.741793f));
    setUVTriangle(&triangle[32], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 33:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646014f), fp_Flt2FP(1.944587f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.646014f), fp_Flt2FP(1.896280f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.632162f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[33], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 34:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.896280f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.944587f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.896280f));
    setUVTriangle(&triangle[34], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 35:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.896280f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.944587f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.944587f));
    setUVTriangle(&triangle[35], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 36:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.646014f), fp_Flt2FP(1.896280f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.790079f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646013f), fp_Flt2FP(1.790086f));
    setUVTriangle(&triangle[36], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 37:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.896280f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.790079f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.646014f), fp_Flt2FP(1.896280f));
    setUVTriangle(&triangle[37], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 38:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.896280f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.896280f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.790079f));
    setUVTriangle(&triangle[38], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 39:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.083725f), fp_Flt2FP(1.475923f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.444316f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.444316f));
    setUVTriangle(&triangle[39], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 40:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.083725f), fp_Flt2FP(1.475923f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.176066f), fp_Flt2FP(1.475923f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.444316f));
    setUVTriangle(&triangle[40], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 41:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.083725f), fp_Flt2FP(1.475923f));
    setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.396014f));
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.348427f));
    setUVTriangle(&triangle[41], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 42:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.444316f));
    setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.396014f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.083725f), fp_Flt2FP(1.475923f));
    setUVTriangle(&triangle[42], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 43:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.083725f), fp_Flt2FP(1.114019f));
    setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119241f), fp_Flt2FP(1.215242f));
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119241f), fp_Flt2FP(1.166935f));
    setUVTriangle(&triangle[43], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 44:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176066f), fp_Flt2FP(1.114017f));
    setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119241f), fp_Flt2FP(1.166935f));
    setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.166937f));
    setUVTriangle(&triangle[44], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 45:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176066f), fp_Flt2FP(1.114017f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.083725f), fp_Flt2FP(1.114019f));
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119241f), fp_Flt2FP(1.166935f));
    setUVTriangle(&triangle[45], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 46:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176066f), fp_Flt2FP(1.475923f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.396017f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.444316f));
    setUVTriangle(&triangle[46], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 47:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176066f), fp_Flt2FP(1.475923f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.176066f), fp_Flt2FP(1.114017f));
    setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.300119f));
    setUVTriangle(&triangle[47], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 48:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176066f), fp_Flt2FP(1.475923f));
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.300119f));
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.348427f));
    setUVTriangle(&triangle[48], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 49:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.396017f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.176066f), fp_Flt2FP(1.475923f));
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.348427f));
    setUVTriangle(&triangle[49], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 50:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.300119f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.176066f), fp_Flt2FP(1.114017f));
    setVector(&w, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.215239f));
    setUVTriangle(&triangle[50], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 51:

    setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.166937f));
    setVector(&v, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.215239f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.176066f), fp_Flt2FP(1.114017f));
    setUVTriangle(&triangle[51], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 52:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.300119f));
    setVector(&v, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.215239f));
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119241f), fp_Flt2FP(1.215242f));
    setUVTriangle(&triangle[52], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 53:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.300119f));
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.300119f));
    setVector(&w, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.215239f));
    setUVTriangle(&triangle[53], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 54:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.348427f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.083725f), fp_Flt2FP(1.114019f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.083725f), fp_Flt2FP(1.475923f));
    setUVTriangle(&triangle[54], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 55:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.300119f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.083725f), fp_Flt2FP(1.114019f));
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.348427f));
    setUVTriangle(&triangle[55], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 56:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.300119f));
    setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119241f), fp_Flt2FP(1.215242f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.083725f), fp_Flt2FP(1.114019f));
    setUVTriangle(&triangle[56], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 57:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.348427f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.396017f));
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.348427f));
    setUVTriangle(&triangle[57], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 58:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.348427f));
    setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.119240f), fp_Flt2FP(1.396014f));
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.162215f), fp_Flt2FP(1.396017f));
    setUVTriangle(&triangle[58], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 59:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.215242f));
    setVector(&v, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.282139f), fp_Flt2FP(1.264248f));
    setVector(&w, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.307000f), fp_Flt2FP(1.264252f));
    setUVTriangle(&triangle[59], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 60:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.215242f));
    setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.166935f));
    setVector(&w, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.282139f), fp_Flt2FP(1.264248f));
    setUVTriangle(&triangle[60], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 61:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.300118f));
    setVector(&v, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.282139f), fp_Flt2FP(1.289111f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.278588f), fp_Flt2FP(1.475919f));
    setUVTriangle(&triangle[61], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 62:

    setVector(&u, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.307000f), fp_Flt2FP(1.289109f));
    setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.215240f));
    setVector(&w, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.307000f), fp_Flt2FP(1.264252f));
    setUVTriangle(&triangle[62], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 63:

    setVector(&u, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.307000f), fp_Flt2FP(1.264252f));
    setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.215240f));
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.215242f));
    setUVTriangle(&triangle[63], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 64:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.300118f));
    setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.215240f));
    setVector(&w, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.307000f), fp_Flt2FP(1.289109f));
    setUVTriangle(&triangle[64], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 65:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.300118f));
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.300119f));
    setVector(&w, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.215240f));
    setUVTriangle(&triangle[65], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 66:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.475926f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.396017f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.444316f));
    setUVTriangle(&triangle[66], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 67:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.278588f), fp_Flt2FP(1.475919f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.444316f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.444316f));
    setUVTriangle(&triangle[67], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 68:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.278588f), fp_Flt2FP(1.475919f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.475926f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.444316f));
    setUVTriangle(&triangle[68], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 69:

    setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.282139f), fp_Flt2FP(1.289111f));
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.300118f));
    setVector(&w, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.307000f), fp_Flt2FP(1.289109f));
    setUVTriangle(&triangle[69], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 70:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.300118f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.278588f), fp_Flt2FP(1.475919f));
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.348427f));
    setUVTriangle(&triangle[70], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 71:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.348427f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.278588f), fp_Flt2FP(1.475919f));
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.396017f));
    setUVTriangle(&triangle[71], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 72:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.444316f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.396017f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.278588f), fp_Flt2FP(1.475919f));
    setUVTriangle(&triangle[72], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 73:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.348427f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.396017f));
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.396017f));
    setUVTriangle(&triangle[73], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 74:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.348427f));
    setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.348427f));
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.396017f));
    setUVTriangle(&triangle[74], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 75:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.278588f), fp_Flt2FP(1.114017f));
    setVector(&v, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.282139f), fp_Flt2FP(1.264248f));
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.166935f));
    setUVTriangle(&triangle[75], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 76:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.114017f));
    setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.166935f));
    setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.166937f));
    setUVTriangle(&triangle[76], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 77:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.114017f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.278588f), fp_Flt2FP(1.114017f));
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.312328f), fp_Flt2FP(1.166935f));
    setUVTriangle(&triangle[77], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 78:

    setVector(&u, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.215240f));
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.300119f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.114017f));
    setUVTriangle(&triangle[78], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 79:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.300119f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.475926f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.114017f));
    setUVTriangle(&triangle[79], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 80:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.348427f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.475926f));
    setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.300119f));
    setUVTriangle(&triangle[80], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 81:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.348427f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.396017f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.475926f));
    setUVTriangle(&triangle[81], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 82:

    setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.166937f));
    setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.355302f), fp_Flt2FP(1.215240f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.114017f));
    setUVTriangle(&triangle[82], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 83:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.178492f), fp_Flt2FP(1.114017f));
    setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(1.253597f));
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.166939f));
    setUVTriangle(&triangle[83], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 84:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.114020f));
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.166939f));
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.166939f));
    setUVTriangle(&triangle[84], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 85:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.114020f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.178492f), fp_Flt2FP(1.114017f));
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.166939f));
    setUVTriangle(&triangle[85], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 86:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.348432f));
    setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(1.278460f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.396017f));
    setUVTriangle(&triangle[86], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 87:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.215244f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.114020f));
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.166939f));
    setUVTriangle(&triangle[87], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 88:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.475921f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.114020f));
    setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.300126f));
    setUVTriangle(&triangle[88], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 89:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.215244f));
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.300126f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.114020f));
    setUVTriangle(&triangle[89], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 90:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.348432f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.396017f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.396017f));
    setUVTriangle(&triangle[90], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 91:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.348432f));
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.348432f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.396017f));
    setUVTriangle(&triangle[91], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 92:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.348432f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.396017f));
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.475921f));
    setUVTriangle(&triangle[92], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 93:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.348432f));
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.475921f));
    setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.300126f));
    setUVTriangle(&triangle[93], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 94:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.215240f));
    setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(1.253597f));
    setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.206905f), fp_Flt2FP(1.253597f));
    setUVTriangle(&triangle[94], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 95:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.215240f));
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.166939f));
    setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.182044f), fp_Flt2FP(1.253597f));
    setUVTriangle(&triangle[95], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 96:

    setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(1.278465f));
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.348432f));
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.300123f));
    setUVTriangle(&triangle[96], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 97:

    setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(1.278465f));
    setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(1.278460f));
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.348432f));
    setUVTriangle(&triangle[97], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 98:

    setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(1.253597f));
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.215244f));
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.215240f));
    setUVTriangle(&triangle[98], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 99:

    setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(1.253597f));
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.300126f));
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.215244f));
    setUVTriangle(&triangle[99], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 100:

    setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(1.278465f));
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.300126f));
    setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.206905f), fp_Flt2FP(1.253597f));
    setUVTriangle(&triangle[100], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 101:

    setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.206905f), fp_Flt2FP(1.278465f));
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.300123f));
    setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.300126f));
    setUVTriangle(&triangle[101], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 102:

    setVector(&u, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.182044f), fp_Flt2FP(1.278460f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.178492f), fp_Flt2FP(1.114017f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.178493f), fp_Flt2FP(1.475923f));
    setUVTriangle(&triangle[102], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 103:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.475921f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.396017f));
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.444318f));
    setUVTriangle(&triangle[103], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 104:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.444318f));
    setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.182044f), fp_Flt2FP(1.278460f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.178493f), fp_Flt2FP(1.475923f));
    setUVTriangle(&triangle[104], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 105:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.444318f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.396017f));
    setVector(&w, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.182044f), fp_Flt2FP(1.278460f));
    setUVTriangle(&triangle[105], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 106:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.444318f));
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.475921f));
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255207f), fp_Flt2FP(1.444318f));
    setUVTriangle(&triangle[106], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 107:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212233f), fp_Flt2FP(1.444318f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.178493f), fp_Flt2FP(1.475923f));
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.475921f));
    setUVTriangle(&triangle[107], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 108:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.725790f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.620205f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.667550f));
    setUVTriangle(&triangle[108], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 109:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.667550f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.515433f), fp_Flt2FP(1.564727f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.619249f));
    setUVTriangle(&triangle[109], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 110:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.667550f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.515433f), fp_Flt2FP(1.564727f));
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.667550f));
    setUVTriangle(&triangle[110], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 111:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.667550f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.619249f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515433f), fp_Flt2FP(1.564727f));
    setUVTriangle(&triangle[111], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 112:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.564734f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.619249f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.423092f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[112], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 113:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.896280f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.843353f));
    setUVTriangle(&triangle[113], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 114:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.843353f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.896280f));
    setUVTriangle(&triangle[114], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 115:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.843353f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.795046f));
    setUVTriangle(&triangle[115], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 116:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.843353f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.960194f));
    setUVTriangle(&triangle[116], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 117:

    setVector(&u, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.591792f), fp_Flt2FP(1.985056f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.944573f));
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.522536f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[117], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 118:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.725790f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.667550f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.667550f));
    setUVTriangle(&triangle[118], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 119:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.725790f));
    setVector(&v, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.725790f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.667550f));
    setUVTriangle(&triangle[119], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 120:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.667550f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.619249f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[120], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 121:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.667550f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[121], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 122:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.985056f));
    setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.591792f), fp_Flt2FP(1.985056f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.620205f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[122], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 123:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.620205f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.591792f), fp_Flt2FP(1.985056f));
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.522536f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[123], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 124:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.620205f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.960194f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.985056f));
    setUVTriangle(&triangle[124], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 125:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.763442f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.960194f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.620205f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[125], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 126:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.960194f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.763442f));
    setUVTriangle(&triangle[126], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 127:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.763442f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.763442f));
    setUVTriangle(&triangle[127], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 128:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.795046f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.763442f));
    setUVTriangle(&triangle[128], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 129:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.667550f));
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.795046f));
    setUVTriangle(&triangle[129], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 130:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.667550f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.667550f));
    setUVTriangle(&triangle[130], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 131:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.667550f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.795046f));
    setUVTriangle(&triangle[131], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 132:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.763442f));
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.667550f));
    setUVTriangle(&triangle[132], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 133:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.667550f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.763442f));
    setVector(&w, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.725790f));
    setUVTriangle(&triangle[133], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 134:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.667550f));
    setVector(&v, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.725790f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.667550f));
    setUVTriangle(&triangle[134], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 135:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.896273f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.843353f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[135], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 136:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[136], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 137:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.944573f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.896273f));
    setUVTriangle(&triangle[137], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 138:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.795046f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.843353f));
    setUVTriangle(&triangle[138], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 139:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.896273f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.944573f));
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515433f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[139], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 140:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.843353f));
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.896273f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.896273f));
    setUVTriangle(&triangle[140], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 141:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.843353f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.843353f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.896273f));
    setUVTriangle(&triangle[141], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 142:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.896273f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.896280f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.843353f));
    setUVTriangle(&triangle[142], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 143:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.896273f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.944573f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.896280f));
    setUVTriangle(&triangle[143], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 144:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.515433f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.944573f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.896273f));
    setUVTriangle(&triangle[144], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 145:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.515433f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.522536f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.944573f));
    setUVTriangle(&triangle[145], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 146:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.944573f));
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.944573f));
    setUVTriangle(&triangle[146], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 147:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.515433f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.944573f));
    setUVTriangle(&triangle[147], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 148:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.944573f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[148], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 149:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.843353f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.896280f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.896273f));
    setUVTriangle(&triangle[149], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 150:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.843353f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.843353f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.896280f));
    setUVTriangle(&triangle[150], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 151:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.944573f));
    setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.591792f), fp_Flt2FP(1.985056f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.591792f), fp_Flt2FP(1.960194f));
    setUVTriangle(&triangle[151], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 152:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.944573f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.944573f));
    setVector(&w, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.591792f), fp_Flt2FP(1.985056f));
    setUVTriangle(&triangle[152], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 153:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.896273f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.960194f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.843353f));
    setUVTriangle(&triangle[153], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 154:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.944573f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.960194f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.896273f));
    setUVTriangle(&triangle[154], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 155:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.944573f));
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.591792f), fp_Flt2FP(1.960194f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.960194f));
    setUVTriangle(&triangle[155], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 156:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.619249f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.667550f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.620205f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[156], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 157:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.619249f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.522536f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515433f), fp_Flt2FP(1.564727f));
    setUVTriangle(&triangle[157], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 158:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.619249f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.522536f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.619249f));
    setUVTriangle(&triangle[158], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 159:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.586465f), fp_Flt2FP(1.619249f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.620205f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.522536f), fp_Flt2FP(1.564734f));
    setUVTriangle(&triangle[159], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 160:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(1.564734f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.619249f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515433f), fp_Flt2FP(1.564727f));
    setUVTriangle(&triangle[160], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 161:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(1.564734f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.436943f), fp_Flt2FP(1.619249f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.479917f), fp_Flt2FP(1.619249f));
    setUVTriangle(&triangle[161], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 162:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.731607f), fp_Flt2FP(1.564734f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.619256f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.619256f));
    setUVTriangle(&triangle[162], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 163:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.731607f), fp_Flt2FP(1.564734f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.724503f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.619256f));
    setUVTriangle(&triangle[163], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 164:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.829275f), fp_Flt2FP(1.564734f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.731607f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.619256f));
    setUVTriangle(&triangle[164], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 165:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.667563f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.667563f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739397f), fp_Flt2FP(1.682928f));
    setUVTriangle(&triangle[165], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 166:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.667563f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.741786f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.790079f));
    setUVTriangle(&triangle[166], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 167:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.667563f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.739397f), fp_Flt2FP(1.682928f));
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.741786f));
    setUVTriangle(&triangle[167], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 168:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.747113f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.829275f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.667563f));
    setUVTriangle(&triangle[168], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 169:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.667563f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.829275f), fp_Flt2FP(1.564734f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.619256f));
    setUVTriangle(&triangle[169], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 170:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.790079f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.896280f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.896280f));
    setUVTriangle(&triangle[170], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 171:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.944587f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.800863f), fp_Flt2FP(1.985069f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.800863f), fp_Flt2FP(1.960208f));
    setUVTriangle(&triangle[171], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 172:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.944587f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.944587f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.800863f), fp_Flt2FP(1.985069f));
    setUVTriangle(&triangle[172], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 173:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.896280f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.784766f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.784759f));
    setUVTriangle(&triangle[173], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 174:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.747113f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.747113f));
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.667563f));
    setUVTriangle(&triangle[174], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 175:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.747113f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.667563f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.790079f));
    setUVTriangle(&triangle[175], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 176:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.896280f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.944587f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.960208f));
    setUVTriangle(&triangle[176], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 177:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.960208f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.944587f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.800863f), fp_Flt2FP(1.960208f));
    setUVTriangle(&triangle[177], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 178:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.896280f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.960208f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.825724f), fp_Flt2FP(1.784766f));
    setUVTriangle(&triangle[178], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 179:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.784759f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.747113f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.790079f));
    setUVTriangle(&triangle[179], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 180:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.752561f), fp_Flt2FP(1.784759f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.688988f), fp_Flt2FP(1.790079f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.795535f), fp_Flt2FP(1.896280f));
    setUVTriangle(&triangle[180], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 181:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.944578f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.834129f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.907596f), fp_Flt2FP(1.997498f));
    setUVTriangle(&triangle[181], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 182:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.944578f));
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.944578f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834129f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[182], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 183:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.896276f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.926470f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.811394f));
    setUVTriangle(&triangle[183], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 184:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.944578f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.926470f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.896276f));
    setUVTriangle(&triangle[184], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 185:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.944578f));
    setVector(&v, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.907596f), fp_Flt2FP(1.997498f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.926470f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[185], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 186:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.763085f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.715499f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.715499f));
    setUVTriangle(&triangle[186], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 187:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.763085f));
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.763085f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.715499f));
    setUVTriangle(&triangle[187], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 188:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.715499f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.834129f), fp_Flt2FP(1.635594f));
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.763085f));
    setUVTriangle(&triangle[188], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 189:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.896273f));
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.763085f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834129f), fp_Flt2FP(1.635594f));
    setUVTriangle(&triangle[189], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 190:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.944578f));
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.896273f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834129f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[190], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 191:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.834129f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.896273f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834129f), fp_Flt2FP(1.635594f));
    setUVTriangle(&triangle[191], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 192:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.834129f), fp_Flt2FP(1.635594f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.715499f));
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.667199f));
    setUVTriangle(&triangle[192], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 193:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.926470f), fp_Flt2FP(1.635596f));
    setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.667199f));
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.667199f));
    setUVTriangle(&triangle[193], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 194:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.926470f), fp_Flt2FP(1.635596f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.834129f), fp_Flt2FP(1.635594f));
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.667199f));
    setUVTriangle(&triangle[194], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 195:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.926470f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.926470f), fp_Flt2FP(1.635596f));
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.811394f));
    setUVTriangle(&triangle[195], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 196:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.811394f));
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.926470f), fp_Flt2FP(1.635596f));
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.763085f));
    setUVTriangle(&triangle[196], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 197:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.926470f), fp_Flt2FP(1.635596f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.715499f));
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.763085f));
    setUVTriangle(&triangle[197], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 198:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.667199f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.715499f));
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.926470f), fp_Flt2FP(1.635596f));
    setUVTriangle(&triangle[198], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 199:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.811394f));
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.896273f));
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.896276f));
    setUVTriangle(&triangle[199], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 200:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890954f), fp_Flt2FP(1.811394f));
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.811394f));
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847980f), fp_Flt2FP(1.896273f));
    setUVTriangle(&triangle[200], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 201:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.763442f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.763442f));
    setVector(&w, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.725790f));
    setUVTriangle(&triangle[201], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 202:

    setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.616653f), fp_Flt2FP(1.725790f));
    setVector(&v, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.725790f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.543491f), fp_Flt2FP(1.763442f));
    setUVTriangle(&triangle[202], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 203:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.595503f), fp_Flt2FP(1.091652f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.595503f), fp_Flt2FP(1.139951f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.602606f), fp_Flt2FP(1.139951f));
    setUVTriangle(&triangle[203], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 204:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.602606f), fp_Flt2FP(1.139951f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.602606f), fp_Flt2FP(1.091652f));
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.595503f), fp_Flt2FP(1.091652f));
    setUVTriangle(&triangle[204], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 205:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.145776f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.188751f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940027f), fp_Flt2FP(1.188751f));
    setUVTriangle(&triangle[205], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 206:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940027f), fp_Flt2FP(1.188751f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940027f), fp_Flt2FP(1.145776f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.145776f));
    setUVTriangle(&triangle[206], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 207:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.942401f), fp_Flt2FP(1.453564f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.942401f), fp_Flt2FP(1.405265f));
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.935298f), fp_Flt2FP(1.405265f));
    setUVTriangle(&triangle[207], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 208:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.935298f), fp_Flt2FP(1.405265f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.935298f), fp_Flt2FP(1.453564f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.942401f), fp_Flt2FP(1.453564f));
    setUVTriangle(&triangle[208], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 209:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.980756f), fp_Flt2FP(1.400412f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.980756f), fp_Flt2FP(1.357438f));
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.973653f), fp_Flt2FP(1.357438f));
    setUVTriangle(&triangle[209], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 210:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.973653f), fp_Flt2FP(1.357438f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.973653f), fp_Flt2FP(1.400412f));
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.980756f), fp_Flt2FP(1.400412f));
    setUVTriangle(&triangle[210], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 211:

    setVector(&u, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.208207f), fp_Flt2FP(1.026472f));
    setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.208200f), fp_Flt2FP(1.074779f));
    setVector(&w, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215303f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[211], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 212:

    setVector(&u, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215303f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215303f), fp_Flt2FP(1.026475f));
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.208207f), fp_Flt2FP(1.026472f));
    setUVTriangle(&triangle[212], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 213:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947261f), fp_Flt2FP(1.410589f));
    setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947254f), fp_Flt2FP(1.453564f));
    setVector(&w, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954357f), fp_Flt2FP(1.453564f));
    setUVTriangle(&triangle[213], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 214:

    setVector(&u, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954357f), fp_Flt2FP(1.453564f));
    setVector(&v, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954364f), fp_Flt2FP(1.410589f));
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947261f), fp_Flt2FP(1.410589f));
    setUVTriangle(&triangle[214], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 215:

    setVector(&u, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.330277f), fp_Flt2FP(1.478353f));
    setVector(&v, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.281973f), fp_Flt2FP(1.478367f));
    setVector(&w, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.281977f), fp_Flt2FP(1.485470f));
    setUVTriangle(&triangle[215], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 216:

    setVector(&u, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.281977f), fp_Flt2FP(1.485470f));
    setVector(&v, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.330280f), fp_Flt2FP(1.485456f));
    setVector(&w, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.330277f), fp_Flt2FP(1.478353f));
    setUVTriangle(&triangle[216], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 217:

    setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954414f), fp_Flt2FP(1.289259f));
    setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954414f), fp_Flt2FP(1.246285f));
    setVector(&w, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947317f), fp_Flt2FP(1.246285f));
    setUVTriangle(&triangle[217], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 218:

    setVector(&u, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947317f), fp_Flt2FP(1.246285f));
    setVector(&v, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947310f), fp_Flt2FP(1.289259f));
    setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954414f), fp_Flt2FP(1.289259f));
    setUVTriangle(&triangle[218], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 219:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.614576f), fp_Flt2FP(1.193111f));
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.614583f), fp_Flt2FP(1.150137f));
    setVector(&w, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.607480f), fp_Flt2FP(1.150137f));
    setUVTriangle(&triangle[219], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 220:

    setVector(&u, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.607480f), fp_Flt2FP(1.150137f));
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.607466f), fp_Flt2FP(1.193111f));
    setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.614576f), fp_Flt2FP(1.193111f));
    setUVTriangle(&triangle[220], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 221:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.327947f), fp_Flt2FP(1.499692f));
    setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.499678f));
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376255f), fp_Flt2FP(1.492575f));
    setUVTriangle(&triangle[221], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 222:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.376255f), fp_Flt2FP(1.492575f));
    setVector(&v, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.327946f), fp_Flt2FP(1.492589f));
    setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.327947f), fp_Flt2FP(1.499692f));
    setUVTriangle(&triangle[222], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 223:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.961644f), fp_Flt2FP(1.410589f));
    setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.961644f), fp_Flt2FP(1.453564f));
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.968747f), fp_Flt2FP(1.453563f));
    setUVTriangle(&triangle[223], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 224:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.968747f), fp_Flt2FP(1.453563f));
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.968747f), fp_Flt2FP(1.410589f));
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.961644f), fp_Flt2FP(1.410589f));
    setUVTriangle(&triangle[224], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 225:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.230162f), fp_Flt2FP(1.478356f));
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.181855f), fp_Flt2FP(1.478349f));
    setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.181854f), fp_Flt2FP(1.485460f));
    setUVTriangle(&triangle[225], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 226:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.181854f), fp_Flt2FP(1.485460f));
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230161f), fp_Flt2FP(1.485460f));
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.230162f), fp_Flt2FP(1.478356f));
    setUVTriangle(&triangle[226], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 227:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.423092f), fp_Flt2FP(1.068369f));
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.423099f), fp_Flt2FP(1.020062f));
    setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.020060f));
    setUVTriangle(&triangle[227], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 228:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.020060f));
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.068368f));
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.423092f), fp_Flt2FP(1.068369f));
    setUVTriangle(&triangle[228], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 229:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.614570f), fp_Flt2FP(1.139951f));
    setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.614570f), fp_Flt2FP(1.096977f));
    setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.607459f), fp_Flt2FP(1.096977f));
    setUVTriangle(&triangle[229], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 230:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.607459f), fp_Flt2FP(1.096977f));
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.607459f), fp_Flt2FP(1.139951f));
    setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.614570f), fp_Flt2FP(1.139951f));
    setUVTriangle(&triangle[230], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 231:

    setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839782f), fp_Flt2FP(1.304608f));
    setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839789f), fp_Flt2FP(1.352915f));
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846892f), fp_Flt2FP(1.352914f));
    setUVTriangle(&triangle[231], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 232:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846892f), fp_Flt2FP(1.352914f));
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846892f), fp_Flt2FP(1.304607f));
    setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839782f), fp_Flt2FP(1.304608f));
    setUVTriangle(&triangle[232], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 233:

    setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.976076f), fp_Flt2FP(1.301865f));
    setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976076f), fp_Flt2FP(1.344839f));
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983180f), fp_Flt2FP(1.344839f));
    setUVTriangle(&triangle[233], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 234:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983180f), fp_Flt2FP(1.344839f));
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983180f), fp_Flt2FP(1.301865f));
    setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.976076f), fp_Flt2FP(1.301865f));
    setUVTriangle(&triangle[234], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 235:

    setVector(&u, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.931330f), fp_Flt2FP(1.582434f));
    setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.931323f), fp_Flt2FP(1.630741f));
    setVector(&w, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.938426f), fp_Flt2FP(1.630744f));
    setUVTriangle(&triangle[235], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 236:

    setVector(&u, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.938426f), fp_Flt2FP(1.630744f));
    setVector(&v, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.938426f), fp_Flt2FP(1.582437f));
    setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.931330f), fp_Flt2FP(1.582434f));
    setUVTriangle(&triangle[236], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 237:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.196031f));
    setVector(&v, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.239005f));
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940027f), fp_Flt2FP(1.239005f));
    setUVTriangle(&triangle[237], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 238:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940027f), fp_Flt2FP(1.239005f));
    setVector(&v, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940027f), fp_Flt2FP(1.196030f));
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.196031f));
    setUVTriangle(&triangle[238], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 239:

    setVector(&u, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.590657f), fp_Flt2FP(1.193108f));
    setVector(&v, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.590650f), fp_Flt2FP(1.144806f));
    setVector(&w, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.583547f), fp_Flt2FP(1.144809f));
    setUVTriangle(&triangle[239], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 240:

    setVector(&u, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.583547f), fp_Flt2FP(1.144809f));
    setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.583554f), fp_Flt2FP(1.193111f));
    setVector(&w, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.590657f), fp_Flt2FP(1.193108f));
    setUVTriangle(&triangle[240], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 241:

    setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.968797f), fp_Flt2FP(1.344839f));
    setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.968797f), fp_Flt2FP(1.301865f));
    setVector(&w, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.961700f), fp_Flt2FP(1.301865f));
    setUVTriangle(&triangle[241], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 242:

    setVector(&u, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.961700f), fp_Flt2FP(1.301865f));
    setVector(&v, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.961693f), fp_Flt2FP(1.344839f));
    setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.968797f), fp_Flt2FP(1.344839f));
    setUVTriangle(&triangle[242], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 243:

    setVector(&u, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.442337f), fp_Flt2FP(1.020067f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.442337f), fp_Flt2FP(1.068369f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.449440f), fp_Flt2FP(1.068369f));
    setUVTriangle(&triangle[243], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 244:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.449440f), fp_Flt2FP(1.068369f));
    setVector(&v, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.449440f), fp_Flt2FP(1.020069f));
    setVector(&w, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.442337f), fp_Flt2FP(1.020067f));
    setUVTriangle(&triangle[244], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 245:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.684355f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.727329f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988337f), fp_Flt2FP(1.727330f));
    setUVTriangle(&triangle[245], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 246:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988337f), fp_Flt2FP(1.727330f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988337f), fp_Flt2FP(1.684356f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.684355f));
    setUVTriangle(&triangle[246], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 247:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925651f), fp_Flt2FP(1.400412f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925651f), fp_Flt2FP(1.352114f));
    setVector(&w, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918548f), fp_Flt2FP(1.352110f));
    setUVTriangle(&triangle[247], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 248:

    setVector(&u, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918548f), fp_Flt2FP(1.352110f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918548f), fp_Flt2FP(1.400412f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925651f), fp_Flt2FP(1.400412f));
    setUVTriangle(&triangle[248], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 249:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911263f), fp_Flt2FP(1.178085f));
    setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911263f), fp_Flt2FP(1.135111f));
    setVector(&w, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.135111f));
    setUVTriangle(&triangle[249], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 250:

    setVector(&u, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.135111f));
    setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.178085f));
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911263f), fp_Flt2FP(1.178085f));
    setUVTriangle(&triangle[250], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 251:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.990228f), fp_Flt2FP(1.506720f));
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.990221f), fp_Flt2FP(1.458419f));
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983125f), fp_Flt2FP(1.458419f));
    setUVTriangle(&triangle[251], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 252:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983125f), fp_Flt2FP(1.458419f));
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983125f), fp_Flt2FP(1.506719f));
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.990228f), fp_Flt2FP(1.506720f));
    setUVTriangle(&triangle[252], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 253:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918543f), fp_Flt2FP(1.090189f));
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918550f), fp_Flt2FP(1.133164f));
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925639f), fp_Flt2FP(1.133163f));
    setUVTriangle(&triangle[253], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 254:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925639f), fp_Flt2FP(1.133163f));
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925639f), fp_Flt2FP(1.090189f));
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918543f), fp_Flt2FP(1.090189f));
    setUVTriangle(&triangle[254], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 255:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983139f), fp_Flt2FP(1.511575f));
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983125f), fp_Flt2FP(1.559881f));
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.990228f), fp_Flt2FP(1.559879f));
    setUVTriangle(&triangle[255], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 256:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.990228f), fp_Flt2FP(1.559879f));
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.990228f), fp_Flt2FP(1.511575f));
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983139f), fp_Flt2FP(1.511575f));
    setUVTriangle(&triangle[256], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 257:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.284800f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.284800f), fp_Flt2FP(1.031808f));
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.277697f), fp_Flt2FP(1.031808f));
    setUVTriangle(&triangle[257], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 258:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.277697f), fp_Flt2FP(1.031808f));
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.277697f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.284800f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[258], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 259:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911263f), fp_Flt2FP(1.127831f));
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911263f), fp_Flt2FP(1.084857f));
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.084856f));
    setUVTriangle(&triangle[259], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 260:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.084856f));
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.127831f));
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911263f), fp_Flt2FP(1.127831f));
    setUVTriangle(&triangle[260], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 261:

    setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.602613f), fp_Flt2FP(1.193111f));
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.602606f), fp_Flt2FP(1.144809f));
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.595510f), fp_Flt2FP(1.144809f));
    setUVTriangle(&triangle[261], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 262:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.595510f), fp_Flt2FP(1.144809f));
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.595510f), fp_Flt2FP(1.193109f));
    setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.602613f), fp_Flt2FP(1.193111f));
    setUVTriangle(&triangle[262], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 263:

    setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.961688f), fp_Flt2FP(1.145777f));
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.961695f), fp_Flt2FP(1.188751f));
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.968784f), fp_Flt2FP(1.188751f));
    setUVTriangle(&triangle[263], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 264:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.968784f), fp_Flt2FP(1.188751f));
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.968784f), fp_Flt2FP(1.145777f));
    setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.961688f), fp_Flt2FP(1.145777f));
    setUVTriangle(&triangle[264], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 265:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.790189f), fp_Flt2FP(1.144821f));
    setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.790175f), fp_Flt2FP(1.193127f));
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.797279f), fp_Flt2FP(1.193125f));
    setUVTriangle(&triangle[265], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 266:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.797279f), fp_Flt2FP(1.193125f));
    setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.797279f), fp_Flt2FP(1.144821f));
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.790189f), fp_Flt2FP(1.144821f));
    setUVTriangle(&triangle[266], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 267:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.196031f));
    setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.239005f));
    setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954410f), fp_Flt2FP(1.239005f));
    setUVTriangle(&triangle[267], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 268:

    setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954410f), fp_Flt2FP(1.239005f));
    setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954410f), fp_Flt2FP(1.196031f));
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.196031f));
    setUVTriangle(&triangle[268], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 269:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.790175f), fp_Flt2FP(1.038509f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.790182f), fp_Flt2FP(1.086810f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.797279f), fp_Flt2FP(1.086810f));
    setUVTriangle(&triangle[269], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 270:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.797279f), fp_Flt2FP(1.086810f));
    setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.797279f), fp_Flt2FP(1.038511f));
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.790175f), fp_Flt2FP(1.038509f));
    setUVTriangle(&triangle[270], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 271:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983171f), fp_Flt2FP(1.289259f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983171f), fp_Flt2FP(1.246285f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.976075f), fp_Flt2FP(1.246285f));
    setUVTriangle(&triangle[271], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 272:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.976075f), fp_Flt2FP(1.246285f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976075f), fp_Flt2FP(1.289259f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983171f), fp_Flt2FP(1.289259f));
    setUVTriangle(&triangle[272], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 273:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955938f), fp_Flt2FP(1.679359f));
    setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955944f), fp_Flt2FP(1.631059f));
    setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948841f), fp_Flt2FP(1.631061f));
    setUVTriangle(&triangle[273], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 274:

    setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948841f), fp_Flt2FP(1.631061f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948841f), fp_Flt2FP(1.679359f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955938f), fp_Flt2FP(1.679359f));
    setUVTriangle(&triangle[274], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 275:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.583547f), fp_Flt2FP(1.091645f));
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.583547f), fp_Flt2FP(1.139951f));
    setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.590643f), fp_Flt2FP(1.139951f));
    setUVTriangle(&triangle[275], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 276:

    setVector(&u, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.590643f), fp_Flt2FP(1.139951f));
    setVector(&v, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.590650f), fp_Flt2FP(1.091649f));
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.583547f), fp_Flt2FP(1.091645f));
    setUVTriangle(&triangle[276], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 277:

    setVector(&u, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.327939f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.327939f), fp_Flt2FP(1.031808f));
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320842f), fp_Flt2FP(1.031808f));
    setUVTriangle(&triangle[277], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 278:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320842f), fp_Flt2FP(1.031808f));
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320842f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.327939f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[278], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 279:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988337f), fp_Flt2FP(1.941913f));
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988337f), fp_Flt2FP(1.893604f));
    setVector(&w, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.893608f));
    setUVTriangle(&triangle[279], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 280:

    setVector(&u, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.893608f));
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981241f), fp_Flt2FP(1.941913f));
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988337f), fp_Flt2FP(1.941913f));
    setUVTriangle(&triangle[280], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 281:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.959270f), fp_Flt2FP(1.357438f));
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.959270f), fp_Flt2FP(1.400412f));
    setVector(&w, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.966373f), fp_Flt2FP(1.400412f));
    setUVTriangle(&triangle[281], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 282:

    setVector(&u, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.966373f), fp_Flt2FP(1.400412f));
    setVector(&v, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.966373f), fp_Flt2FP(1.357438f));
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.959270f), fp_Flt2FP(1.357438f));
    setUVTriangle(&triangle[282], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 283:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983167f), fp_Flt2FP(1.239005f));
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983167f), fp_Flt2FP(1.196031f));
    setVector(&w, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.976071f), fp_Flt2FP(1.196031f));
    setUVTriangle(&triangle[283], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 284:

    setVector(&u, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.976071f), fp_Flt2FP(1.196031f));
    setVector(&v, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976071f), fp_Flt2FP(1.239005f));
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983167f), fp_Flt2FP(1.239005f));
    setUVTriangle(&triangle[284], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 285:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.176064f), fp_Flt2FP(1.478349f));
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.127755f), fp_Flt2FP(1.478349f));
    setVector(&w, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.127760f), fp_Flt2FP(1.485460f));
    setUVTriangle(&triangle[285], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 286:

    setVector(&u, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.127760f), fp_Flt2FP(1.485460f));
    setVector(&v, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.176066f), fp_Flt2FP(1.485446f));
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.176064f), fp_Flt2FP(1.478349f));
    setUVTriangle(&triangle[286], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 287:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.248922f), fp_Flt2FP(1.031808f));
    setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.248922f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.256032f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[287], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 288:

    setVector(&u, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.256032f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.256032f), fp_Flt2FP(1.031808f));
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.248922f), fp_Flt2FP(1.031808f));
    setUVTriangle(&triangle[288], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 289:

    setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227851f), fp_Flt2FP(1.499278f));
    setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276159f), fp_Flt2FP(1.499278f));
    setVector(&w, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.492182f));
    setUVTriangle(&triangle[289], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 290:

    setVector(&u, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.492182f));
    setVector(&v, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227856f), fp_Flt2FP(1.492168f));
    setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.227851f), fp_Flt2FP(1.499278f));
    setUVTriangle(&triangle[290], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 291:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839789f), fp_Flt2FP(1.090025f));
    setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839782f), fp_Flt2FP(1.132999f));
    setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846885f), fp_Flt2FP(1.133000f));
    setUVTriangle(&triangle[291], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 292:

    setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846885f), fp_Flt2FP(1.133000f));
    setVector(&v, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846892f), fp_Flt2FP(1.090025f));
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839789f), fp_Flt2FP(1.090025f));
    setUVTriangle(&triangle[292], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 293:

    setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.612321f), fp_Flt2FP(1.038492f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.612328f), fp_Flt2FP(1.086792f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.619425f), fp_Flt2FP(1.086792f));
    setUVTriangle(&triangle[293], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 294:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.619425f), fp_Flt2FP(1.086792f));
    setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.619425f), fp_Flt2FP(1.038494f));
    setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.612321f), fp_Flt2FP(1.038492f));
    setUVTriangle(&triangle[294], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 295:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954403f), fp_Flt2FP(1.088242f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954403f), fp_Flt2FP(1.045268f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.045268f));
    setUVTriangle(&triangle[295], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 296:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.045268f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.088243f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954403f), fp_Flt2FP(1.088242f));
    setUVTriangle(&triangle[296], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 297:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.797279f), fp_Flt2FP(1.139966f));
    setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.797279f), fp_Flt2FP(1.091666f));
    setVector(&w, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.790175f), fp_Flt2FP(1.091665f));
    setUVTriangle(&triangle[297], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 298:

    setVector(&u, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.790175f), fp_Flt2FP(1.091665f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.790182f), fp_Flt2FP(1.139966f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.797279f), fp_Flt2FP(1.139966f));
    setUVTriangle(&triangle[298], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 299:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.930508f), fp_Flt2FP(1.352119f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.930504f), fp_Flt2FP(1.400412f));
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.937606f), fp_Flt2FP(1.400412f));
    setUVTriangle(&triangle[299], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 300:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.937606f), fp_Flt2FP(1.400412f));
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.937606f), fp_Flt2FP(1.352119f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.930508f), fp_Flt2FP(1.352119f));
    setUVTriangle(&triangle[300], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 301:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925644f), fp_Flt2FP(1.183418f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925644f), fp_Flt2FP(1.140443f));
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918543f), fp_Flt2FP(1.140443f));
    setUVTriangle(&triangle[301], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 302:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918543f), fp_Flt2FP(1.140443f));
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918543f), fp_Flt2FP(1.183418f));
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925644f), fp_Flt2FP(1.183418f));
    setUVTriangle(&triangle[302], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 303:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.234539f), fp_Flt2FP(1.026482f));
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.234541f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241642f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[303], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 304:

    setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241642f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241640f), fp_Flt2FP(1.026482f));
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234539f), fp_Flt2FP(1.026482f));
    setUVTriangle(&triangle[304], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 305:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988036f), fp_Flt2FP(1.357438f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988038f), fp_Flt2FP(1.400412f));
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.995136f), fp_Flt2FP(1.400412f));
    setUVTriangle(&triangle[305], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 306:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.995136f), fp_Flt2FP(1.400412f));
    setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.995138f), fp_Flt2FP(1.357438f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988036f), fp_Flt2FP(1.357438f));
    setUVTriangle(&triangle[306], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 307:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839784f), fp_Flt2FP(1.140279f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839782f), fp_Flt2FP(1.188580f));
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846884f), fp_Flt2FP(1.188580f));
    setUVTriangle(&triangle[307], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 308:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846884f), fp_Flt2FP(1.188580f));
    setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846885f), fp_Flt2FP(1.140279f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839784f), fp_Flt2FP(1.140279f));
    setUVTriangle(&triangle[308], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 309:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.968795f), fp_Flt2FP(1.289259f));
    setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.968795f), fp_Flt2FP(1.246285f));
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.961693f), fp_Flt2FP(1.246285f));
    setUVTriangle(&triangle[309], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 310:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.961693f), fp_Flt2FP(1.246285f));
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.961693f), fp_Flt2FP(1.289259f));
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.968795f), fp_Flt2FP(1.289259f));
    setUVTriangle(&triangle[310], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 311:

    setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.840451f));
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981236f), fp_Flt2FP(1.888751f));
    setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988337f), fp_Flt2FP(1.888751f));
    setUVTriangle(&triangle[311], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 312:

    setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988337f), fp_Flt2FP(1.888751f));
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988336f), fp_Flt2FP(1.840451f));
    setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.840451f));
    setUVTriangle(&triangle[312], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 313:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.961690f), fp_Flt2FP(1.196031f));
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.961690f), fp_Flt2FP(1.239005f));
    setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.968791f), fp_Flt2FP(1.239005f));
    setUVTriangle(&triangle[313], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 314:

    setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.968791f), fp_Flt2FP(1.239005f));
    setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.968791f), fp_Flt2FP(1.196031f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.961690f), fp_Flt2FP(1.196031f));
    setUVTriangle(&triangle[314], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 315:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940031f), fp_Flt2FP(1.289259f));
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940027f), fp_Flt2FP(1.246285f));
    setVector(&w, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.246285f));
    setUVTriangle(&triangle[315], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 316:

    setVector(&u, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.246285f));
    setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932927f), fp_Flt2FP(1.289259f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940031f), fp_Flt2FP(1.289259f));
    setUVTriangle(&triangle[316], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 317:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.583554f), fp_Flt2FP(1.038485f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.583547f), fp_Flt2FP(1.086785f));
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.590650f), fp_Flt2FP(1.086792f));
    setUVTriangle(&triangle[317], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 318:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.590650f), fp_Flt2FP(1.086792f));
    setVector(&v, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.590657f), fp_Flt2FP(1.038492f));
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.583554f), fp_Flt2FP(1.038485f));
    setUVTriangle(&triangle[318], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 319:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.301865f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947310f), fp_Flt2FP(1.344839f));
    setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954414f), fp_Flt2FP(1.344839f));
    setUVTriangle(&triangle[319], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 320:

    setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954414f), fp_Flt2FP(1.344839f));
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954410f), fp_Flt2FP(1.301865f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.301865f));
    setUVTriangle(&triangle[320], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 321:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.240952f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.289252f));
    setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911263f), fp_Flt2FP(1.289245f));
    setUVTriangle(&triangle[321], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 322:

    setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911263f), fp_Flt2FP(1.289245f));
    setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911263f), fp_Flt2FP(1.240952f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.240952f));
    setUVTriangle(&triangle[322], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 323:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839784f), fp_Flt2FP(1.195859f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839782f), fp_Flt2FP(1.244166f));
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846884f), fp_Flt2FP(1.244166f));
    setUVTriangle(&triangle[323], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 324:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846884f), fp_Flt2FP(1.244166f));
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846885f), fp_Flt2FP(1.195859f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839784f), fp_Flt2FP(1.195859f));
    setUVTriangle(&triangle[324], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 325:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.313563f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.313563f), fp_Flt2FP(1.031808f));
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.306461f), fp_Flt2FP(1.031808f));
    setUVTriangle(&triangle[325], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 326:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.306461f), fp_Flt2FP(1.031808f));
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.306461f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.313563f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[326], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 327:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948841f), fp_Flt2FP(1.742226f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948843f), fp_Flt2FP(1.790533f));
    setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955946f), fp_Flt2FP(1.790533f));
    setUVTriangle(&triangle[327], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 328:

    setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955946f), fp_Flt2FP(1.790533f));
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955943f), fp_Flt2FP(1.742226f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948841f), fp_Flt2FP(1.742226f));
    setUVTriangle(&triangle[328], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 329:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.976027f), fp_Flt2FP(1.410589f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976027f), fp_Flt2FP(1.453564f));
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.983128f), fp_Flt2FP(1.453564f));
    setUVTriangle(&triangle[329], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 330:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.983128f), fp_Flt2FP(1.453564f));
    setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.983130f), fp_Flt2FP(1.410589f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.976027f), fp_Flt2FP(1.410589f));
    setUVTriangle(&triangle[330], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 331:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911261f), fp_Flt2FP(1.077576f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911261f), fp_Flt2FP(1.034602f));
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.034602f));
    setUVTriangle(&triangle[331], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 332:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.034602f));
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.077576f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911261f), fp_Flt2FP(1.077576f));
    setUVTriangle(&triangle[332], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 333:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.949193f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981236f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988341f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[333], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 334:

    setVector(&u, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988341f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988336f), fp_Flt2FP(1.949193f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.949193f));
    setUVTriangle(&triangle[334], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 335:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.734610f));
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981238f), fp_Flt2FP(1.777584f));
    setVector(&w, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988342f), fp_Flt2FP(1.777584f));
    setUVTriangle(&triangle[335], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 336:

    setVector(&u, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988342f), fp_Flt2FP(1.777584f));
    setVector(&v, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988339f), fp_Flt2FP(1.734610f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.734610f));
    setUVTriangle(&triangle[336], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 337:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.193815f), fp_Flt2FP(1.026475f));
    setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.193810f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.200911f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[337], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 338:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.200911f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.200920f), fp_Flt2FP(1.026475f));
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193815f), fp_Flt2FP(1.026475f));
    setUVTriangle(&triangle[338], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 339:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.299181f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.299181f), fp_Flt2FP(1.031808f));
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.292080f), fp_Flt2FP(1.031808f));
    setUVTriangle(&triangle[339], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 340:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.292080f), fp_Flt2FP(1.031808f));
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.292080f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.299181f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[340], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 341:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.435053f), fp_Flt2FP(1.068369f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.435057f), fp_Flt2FP(1.020062f));
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.427956f), fp_Flt2FP(1.020062f));
    setUVTriangle(&triangle[341], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 342:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.427956f), fp_Flt2FP(1.020062f));
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.427952f), fp_Flt2FP(1.068369f));
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.435053f), fp_Flt2FP(1.068369f));
    setUVTriangle(&triangle[342], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 343:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.944885f), fp_Flt2FP(1.357438f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.944889f), fp_Flt2FP(1.400412f));
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951990f), fp_Flt2FP(1.400412f));
    setUVTriangle(&triangle[343], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 344:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951990f), fp_Flt2FP(1.400412f));
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951987f), fp_Flt2FP(1.357438f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.944885f), fp_Flt2FP(1.357438f));
    setUVTriangle(&triangle[344], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 345:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911261f), fp_Flt2FP(1.233672f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911261f), fp_Flt2FP(1.185365f));
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.185365f));
    setUVTriangle(&triangle[345], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 346:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.185365f));
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.233672f));
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911261f), fp_Flt2FP(1.233672f));
    setUVTriangle(&triangle[346], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 347:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955944f), fp_Flt2FP(1.734946f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955943f), fp_Flt2FP(1.686639f));
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948841f), fp_Flt2FP(1.686639f));
    setUVTriangle(&triangle[347], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 348:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948841f), fp_Flt2FP(1.686639f));
    setVector(&v, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948847f), fp_Flt2FP(1.734946f));
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955944f), fp_Flt2FP(1.734946f));
    setUVTriangle(&triangle[348], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 349:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.145777f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.188751f));
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954408f), fp_Flt2FP(1.188751f));
    setUVTriangle(&triangle[349], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 350:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954408f), fp_Flt2FP(1.188751f));
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954408f), fp_Flt2FP(1.145777f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.145777f));
    setUVTriangle(&triangle[350], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 351:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988336f), fp_Flt2FP(1.833171f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988336f), fp_Flt2FP(1.784864f));
    setVector(&w, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981238f), fp_Flt2FP(1.784864f));
    setUVTriangle(&triangle[351], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 352:

    setVector(&u, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981238f), fp_Flt2FP(1.784864f));
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.833171f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988336f), fp_Flt2FP(1.833171f));
    setUVTriangle(&triangle[352], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 353:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940022f), fp_Flt2FP(1.088242f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940024f), fp_Flt2FP(1.045268f));
    setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932926f), fp_Flt2FP(1.045268f));
    setUVTriangle(&triangle[353], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 354:

    setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932926f), fp_Flt2FP(1.045268f));
    setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.088242f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940022f), fp_Flt2FP(1.088242f));
    setUVTriangle(&triangle[354], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 355:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839782f), fp_Flt2FP(1.251453f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839786f), fp_Flt2FP(1.299753f));
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846887f), fp_Flt2FP(1.299753f));
    setUVTriangle(&triangle[355], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 356:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846887f), fp_Flt2FP(1.299753f));
    setVector(&v, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846884f), fp_Flt2FP(1.251446f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839782f), fp_Flt2FP(1.251453f));
    setUVTriangle(&triangle[356], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 357:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988336f), fp_Flt2FP(1.626821f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988336f), fp_Flt2FP(1.583847f));
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.583847f));
    setUVTriangle(&triangle[357], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 358:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.583847f));
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.626821f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988336f), fp_Flt2FP(1.626821f));
    setUVTriangle(&triangle[358], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 359:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932926f), fp_Flt2FP(1.296539f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932926f), fp_Flt2FP(1.344839f));
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940027f), fp_Flt2FP(1.344839f));
    setUVTriangle(&triangle[359], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 360:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940027f), fp_Flt2FP(1.344839f));
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940027f), fp_Flt2FP(1.296539f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932926f), fp_Flt2FP(1.296539f));
    setUVTriangle(&triangle[360], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 361:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839786f), fp_Flt2FP(1.039771f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839782f), fp_Flt2FP(1.082745f));
    setVector(&w, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846884f), fp_Flt2FP(1.082745f));
    setUVTriangle(&triangle[361], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 362:

    setVector(&u, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846884f), fp_Flt2FP(1.082745f));
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846887f), fp_Flt2FP(1.039771f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839786f), fp_Flt2FP(1.039771f));
    setUVTriangle(&triangle[362], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 363:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925644f), fp_Flt2FP(1.289259f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925644f), fp_Flt2FP(1.240952f));
    setVector(&w, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918546f), fp_Flt2FP(1.240952f));
    setUVTriangle(&triangle[363], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 364:

    setVector(&u, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918546f), fp_Flt2FP(1.240952f));
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918543f), fp_Flt2FP(1.289259f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925644f), fp_Flt2FP(1.289259f));
    setUVTriangle(&triangle[364], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 365:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954405f), fp_Flt2FP(1.138497f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954407f), fp_Flt2FP(1.095523f));
    setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.947309f), fp_Flt2FP(1.095522f));
    setUVTriangle(&triangle[365], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 366:

    setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.947309f), fp_Flt2FP(1.095522f));
    setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.947307f), fp_Flt2FP(1.138497f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954405f), fp_Flt2FP(1.138497f));
    setUVTriangle(&triangle[366], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 367:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911263f), fp_Flt2FP(1.344839f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911261f), fp_Flt2FP(1.296532f));
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.296532f));
    setUVTriangle(&triangle[367], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 368:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.296532f));
    setVector(&v, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904165f), fp_Flt2FP(1.344839f));
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911263f), fp_Flt2FP(1.344839f));
    setUVTriangle(&triangle[368], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 369:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.095523f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.138497f));
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.940025f), fp_Flt2FP(1.138496f));
    setUVTriangle(&triangle[369], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 370:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.940025f), fp_Flt2FP(1.138496f));
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.940025f), fp_Flt2FP(1.095522f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932924f), fp_Flt2FP(1.095523f));
    setUVTriangle(&triangle[370], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 371:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.270413f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.270417f), fp_Flt2FP(1.031808f));
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.263316f), fp_Flt2FP(1.031808f));
    setUVTriangle(&triangle[371], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 372:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.263316f), fp_Flt2FP(1.031808f));
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.263312f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.270413f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[372], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 373:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.605041f), fp_Flt2FP(1.086785f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.605038f), fp_Flt2FP(1.038485f));
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.597937f), fp_Flt2FP(1.038485f));
    setUVTriangle(&triangle[373], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 374:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.597937f), fp_Flt2FP(1.038485f));
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.597940f), fp_Flt2FP(1.086792f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.605041f), fp_Flt2FP(1.086785f));
    setUVTriangle(&triangle[374], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 375:

    setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.981236f), fp_Flt2FP(1.634101f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.981234f), fp_Flt2FP(1.677075f));
    setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.988336f), fp_Flt2FP(1.677075f));
    setUVTriangle(&triangle[375], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 376:

    setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.988336f), fp_Flt2FP(1.677075f));
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.988337f), fp_Flt2FP(1.634101f));
    setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.981236f), fp_Flt2FP(1.634101f));
    setUVTriangle(&triangle[376], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 377:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925646f), fp_Flt2FP(1.344839f));
    setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925644f), fp_Flt2FP(1.296539f));
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918543f), fp_Flt2FP(1.296539f));
    setUVTriangle(&triangle[377], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 378:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918543f), fp_Flt2FP(1.296539f));
    setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918544f), fp_Flt2FP(1.344839f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925646f), fp_Flt2FP(1.344839f));
    setUVTriangle(&triangle[378], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 379:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.925644f), fp_Flt2FP(1.233672f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.925642f), fp_Flt2FP(1.190698f));
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.918543f), fp_Flt2FP(1.190698f));
    setUVTriangle(&triangle[379], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 380:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.918543f), fp_Flt2FP(1.190698f));
    setVector(&v, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.918544f), fp_Flt2FP(1.233672f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.925644f), fp_Flt2FP(1.233672f));
    setUVTriangle(&triangle[380], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 381:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.911259f), fp_Flt2FP(1.400412f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.911268f), fp_Flt2FP(1.352119f));
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.904165f), fp_Flt2FP(1.352119f));
    setUVTriangle(&triangle[381], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 382:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.904165f), fp_Flt2FP(1.352119f));
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.904160f), fp_Flt2FP(1.400412f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.911259f), fp_Flt2FP(1.400412f));
    setUVTriangle(&triangle[382], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 383:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948841f), fp_Flt2FP(1.583232f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948848f), fp_Flt2FP(1.626206f));
    setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955951f), fp_Flt2FP(1.626206f));
    setUVTriangle(&triangle[383], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 384:

    setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955951f), fp_Flt2FP(1.626206f));
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955944f), fp_Flt2FP(1.583232f));
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948841f), fp_Flt2FP(1.583232f));
    setUVTriangle(&triangle[384], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 385:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227259f), fp_Flt2FP(1.074775f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227259f), fp_Flt2FP(1.026482f));
    setVector(&w, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.220160f), fp_Flt2FP(1.026489f));
    setUVTriangle(&triangle[385], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 386:

    setVector(&u, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.220160f), fp_Flt2FP(1.026489f));
    setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.220156f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.227259f), fp_Flt2FP(1.074775f));
    setUVTriangle(&triangle[386], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 387:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951017f), fp_Flt2FP(1.870976f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.797813f));
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.943913f), fp_Flt2FP(1.797813f));
    setUVTriangle(&triangle[387], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 388:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.943913f), fp_Flt2FP(1.797813f));
    setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943912f), fp_Flt2FP(1.870976f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951017f), fp_Flt2FP(1.870976f));
    setUVTriangle(&triangle[388], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 389:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.632168f), fp_Flt2FP(1.042505f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.632163f), fp_Flt2FP(1.004853f));
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.004853f));
    setUVTriangle(&triangle[389], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 390:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.004853f));
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625062f), fp_Flt2FP(1.042505f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.632168f), fp_Flt2FP(1.042505f));
    setUVTriangle(&triangle[390], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 391:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.943915f), fp_Flt2FP(1.873402f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943915f), fp_Flt2FP(1.946565f));
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951017f), fp_Flt2FP(1.946565f));
    setUVTriangle(&triangle[391], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 392:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951017f), fp_Flt2FP(1.946565f));
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.873402f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.943915f), fp_Flt2FP(1.873402f));
    setUVTriangle(&triangle[392], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 393:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.468024f), fp_Flt2FP(1.042493f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.468026f), fp_Flt2FP(1.004847f));
    setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.460921f), fp_Flt2FP(1.004840f));
    setUVTriangle(&triangle[393], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 394:

    setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.460921f), fp_Flt2FP(1.004840f));
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.460923f), fp_Flt2FP(1.042493f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.468024f), fp_Flt2FP(1.042493f));
    setUVTriangle(&triangle[394], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 395:

    setVector(&u, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150673f), fp_Flt2FP(1.178829f));
    setVector(&v, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.151424f), fp_Flt2FP(1.179581f));
    setVector(&w, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.152347f), fp_Flt2FP(1.180114f));
    setUVTriangle(&triangle[395], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 396:

    setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.152347f), fp_Flt2FP(1.180114f));
    setVector(&v, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153372f), fp_Flt2FP(1.180387f));
    setVector(&w, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.154441f), fp_Flt2FP(1.180387f));
    setUVTriangle(&triangle[396], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 397:

    setVector(&u, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.154441f), fp_Flt2FP(1.180387f));
    setVector(&v, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.155464f), fp_Flt2FP(1.180113f));
    setVector(&w, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156388f), fp_Flt2FP(1.179580f));
    setUVTriangle(&triangle[397], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 398:

    setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.152347f), fp_Flt2FP(1.180114f));
    setVector(&v, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.154441f), fp_Flt2FP(1.180387f));
    setVector(&w, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156388f), fp_Flt2FP(1.179580f));
    setUVTriangle(&triangle[398], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 399:

    setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156388f), fp_Flt2FP(1.179580f));
    setVector(&v, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157143f), fp_Flt2FP(1.178829f));
    setVector(&w, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.157676f), fp_Flt2FP(1.177907f));
    setUVTriangle(&triangle[399], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 400:

    setVector(&u, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.157676f), fp_Flt2FP(1.177907f));
    setVector(&v, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157948f), fp_Flt2FP(1.176881f));
    setVector(&w, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.157948f), fp_Flt2FP(1.175817f));
    setUVTriangle(&triangle[400], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 401:

    setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156388f), fp_Flt2FP(1.179580f));
    setVector(&v, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157676f), fp_Flt2FP(1.177907f));
    setVector(&w, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.157948f), fp_Flt2FP(1.175817f));
    setUVTriangle(&triangle[401], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 402:

    setVector(&u, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.157948f), fp_Flt2FP(1.175817f));
    setVector(&v, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157671f), fp_Flt2FP(1.174790f));
    setVector(&w, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.157142f), fp_Flt2FP(1.173868f));
    setUVTriangle(&triangle[402], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 403:

    setVector(&u, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.157142f), fp_Flt2FP(1.173868f));
    setVector(&v, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156391f), fp_Flt2FP(1.173117f));
    setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.155468f), fp_Flt2FP(1.172584f));
    setUVTriangle(&triangle[403], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 404:

    setVector(&u, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.157948f), fp_Flt2FP(1.175817f));
    setVector(&v, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157142f), fp_Flt2FP(1.173868f));
    setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.155468f), fp_Flt2FP(1.172584f));
    setUVTriangle(&triangle[404], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 405:

    setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156388f), fp_Flt2FP(1.179580f));
    setVector(&v, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.157948f), fp_Flt2FP(1.175817f));
    setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.155468f), fp_Flt2FP(1.172584f));
    setUVTriangle(&triangle[405], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 406:

    setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.155468f), fp_Flt2FP(1.172584f));
    setVector(&v, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.154443f), fp_Flt2FP(1.172310f));
    setVector(&w, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.153374f), fp_Flt2FP(1.172310f));
    setUVTriangle(&triangle[406], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 407:

    setVector(&u, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.153374f), fp_Flt2FP(1.172310f));
    setVector(&v, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.152351f), fp_Flt2FP(1.172585f));
    setVector(&w, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.151427f), fp_Flt2FP(1.173117f));
    setUVTriangle(&triangle[407], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 408:

    setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.155468f), fp_Flt2FP(1.172584f));
    setVector(&v, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153374f), fp_Flt2FP(1.172310f));
    setVector(&w, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.151427f), fp_Flt2FP(1.173117f));
    setUVTriangle(&triangle[408], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 409:

    setVector(&u, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.151427f), fp_Flt2FP(1.173117f));
    setVector(&v, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.150672f), fp_Flt2FP(1.173869f));
    setVector(&w, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.150139f), fp_Flt2FP(1.174791f));
    setUVTriangle(&triangle[409], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 410:

    setVector(&u, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150139f), fp_Flt2FP(1.174791f));
    setVector(&v, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149867f), fp_Flt2FP(1.175817f));
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(1.176880f));
    setUVTriangle(&triangle[410], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 411:

    setVector(&u, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.151427f), fp_Flt2FP(1.173117f));
    setVector(&v, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.150139f), fp_Flt2FP(1.174791f));
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(1.176880f));
    setUVTriangle(&triangle[411], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 412:

    setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.155468f), fp_Flt2FP(1.172584f));
    setVector(&v, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.151427f), fp_Flt2FP(1.173117f));
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(1.176880f));
    setUVTriangle(&triangle[412], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 413:

    setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156388f), fp_Flt2FP(1.179580f));
    setVector(&v, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.155468f), fp_Flt2FP(1.172584f));
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(1.176880f));
    setUVTriangle(&triangle[413], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 414:

    setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.152347f), fp_Flt2FP(1.180114f));
    setVector(&v, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156388f), fp_Flt2FP(1.179580f));
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(1.176880f));
    setUVTriangle(&triangle[414], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 415:

    setVector(&u, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150673f), fp_Flt2FP(1.178829f));
    setVector(&v, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.152347f), fp_Flt2FP(1.180114f));
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(1.176880f));
    setUVTriangle(&triangle[415], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 416:

    setVector(&u, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150144f), fp_Flt2FP(1.177907f));
    setVector(&v, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.150673f), fp_Flt2FP(1.178829f));
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149867f), fp_Flt2FP(1.176880f));
    setUVTriangle(&triangle[416], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 417:

    setVector(&u, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319793f), fp_Flt2FP(1.308232f));
    setVector(&v, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320857f), fp_Flt2FP(1.308234f));
    setVector(&w, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320721f), fp_Flt2FP(1.307281f));
    setUVTriangle(&triangle[417], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 418:

    setVector(&u, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320721f), fp_Flt2FP(1.307281f));
    setVector(&v, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319869f), fp_Flt2FP(1.307280f));
    setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319793f), fp_Flt2FP(1.308232f));
    setUVTriangle(&triangle[418], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 419:

    setVector(&u, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320857f), fp_Flt2FP(1.308234f));
    setVector(&v, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.321872f), fp_Flt2FP(1.308237f));
    setVector(&w, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.321533f), fp_Flt2FP(1.307284f));
    setUVTriangle(&triangle[419], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 420:

    setVector(&u, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.321533f), fp_Flt2FP(1.307284f));
    setVector(&v, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320721f), fp_Flt2FP(1.307281f));
    setVector(&w, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320857f), fp_Flt2FP(1.308234f));
    setUVTriangle(&triangle[420], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 421:

    setVector(&u, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242490f), fp_Flt2FP(1.313268f));
    setVector(&v, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242451f), fp_Flt2FP(1.312203f));
    setVector(&w, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241204f), fp_Flt2FP(1.312355f));
    setUVTriangle(&triangle[421], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 422:

    setVector(&u, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241204f), fp_Flt2FP(1.312355f));
    setVector(&v, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241237f), fp_Flt2FP(1.313207f));
    setVector(&w, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242490f), fp_Flt2FP(1.313268f));
    setUVTriangle(&triangle[422], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 423:

    setVector(&u, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242451f), fp_Flt2FP(1.312203f));
    setVector(&v, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242234f), fp_Flt2FP(1.311181f));
    setVector(&w, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241032f), fp_Flt2FP(1.311538f));
    setUVTriangle(&triangle[423], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 424:

    setVector(&u, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241032f), fp_Flt2FP(1.311538f));
    setVector(&v, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241204f), fp_Flt2FP(1.312355f));
    setVector(&w, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242451f), fp_Flt2FP(1.312203f));
    setUVTriangle(&triangle[424], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 425:

    setVector(&u, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242234f), fp_Flt2FP(1.311181f));
    setVector(&v, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241856f), fp_Flt2FP(1.310271f));
    setVector(&w, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240729f), fp_Flt2FP(1.310809f));
    setUVTriangle(&triangle[425], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 426:

    setVector(&u, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240729f), fp_Flt2FP(1.310809f));
    setVector(&v, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241032f), fp_Flt2FP(1.311538f));
    setVector(&w, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242234f), fp_Flt2FP(1.311181f));
    setUVTriangle(&triangle[426], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 427:

    setVector(&u, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.863490f), fp_Flt2FP(1.772704f));
    setVector(&v, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.863485f), fp_Flt2FP(1.771670f));
    setVector(&w, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862560f), fp_Flt2FP(1.771594f));
    setUVTriangle(&triangle[427], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 428:

    setVector(&u, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862560f), fp_Flt2FP(1.771594f));
    setVector(&v, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862564f), fp_Flt2FP(1.772419f));
    setVector(&w, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.863490f), fp_Flt2FP(1.772704f));
    setUVTriangle(&triangle[428], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 429:

    setVector(&u, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.863485f), fp_Flt2FP(1.771670f));
    setVector(&v, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.863490f), fp_Flt2FP(1.770602f));
    setVector(&w, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862564f), fp_Flt2FP(1.770741f));
    setUVTriangle(&triangle[429], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 430:

    setVector(&u, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862564f), fp_Flt2FP(1.770741f));
    setVector(&v, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862560f), fp_Flt2FP(1.771594f));
    setVector(&w, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.863485f), fp_Flt2FP(1.771670f));
    setUVTriangle(&triangle[430], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 431:

    setVector(&u, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.515665f), fp_Flt2FP(1.185471f));
    setVector(&v, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.515646f), fp_Flt2FP(1.186531f));
    setVector(&w, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516899f), fp_Flt2FP(1.186446f));
    setUVTriangle(&triangle[431], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 432:

    setVector(&u, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516899f), fp_Flt2FP(1.186446f));
    setVector(&v, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516915f), fp_Flt2FP(1.185596f));
    setVector(&w, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515665f), fp_Flt2FP(1.185471f));
    setUVTriangle(&triangle[432], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 433:

    setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.515646f), fp_Flt2FP(1.186531f));
    setVector(&v, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.515806f), fp_Flt2FP(1.187564f));
    setVector(&w, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.517026f), fp_Flt2FP(1.187272f));
    setUVTriangle(&triangle[433], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 434:

    setVector(&u, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.517026f), fp_Flt2FP(1.187272f));
    setVector(&v, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516899f), fp_Flt2FP(1.186446f));
    setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515646f), fp_Flt2FP(1.186531f));
    setUVTriangle(&triangle[434], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 435:

    setVector(&u, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.515806f), fp_Flt2FP(1.187564f));
    setVector(&v, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516133f), fp_Flt2FP(1.188491f));
    setVector(&w, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.517289f), fp_Flt2FP(1.188012f));
    setUVTriangle(&triangle[435], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 436:

    setVector(&u, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.517289f), fp_Flt2FP(1.188012f));
    setVector(&v, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.517026f), fp_Flt2FP(1.187272f));
    setVector(&w, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.515806f), fp_Flt2FP(1.187564f));
    setUVTriangle(&triangle[436], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 437:

    setVector(&u, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516133f), fp_Flt2FP(1.188491f));
    setVector(&v, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516606f), fp_Flt2FP(1.189249f));
    setVector(&w, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.517666f), fp_Flt2FP(1.188627f));
    setUVTriangle(&triangle[437], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 438:

    setVector(&u, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.517666f), fp_Flt2FP(1.188627f));
    setVector(&v, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.517289f), fp_Flt2FP(1.188012f));
    setVector(&w, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516133f), fp_Flt2FP(1.188491f));
    setUVTriangle(&triangle[438], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 439:

    setVector(&u, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216572f), fp_Flt2FP(1.431949f));
    setVector(&v, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.216223f), fp_Flt2FP(1.432927f));
    setVector(&w, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217100f), fp_Flt2FP(1.433317f));
    setUVTriangle(&triangle[439], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 440:

    setVector(&u, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217100f), fp_Flt2FP(1.433317f));
    setVector(&v, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217379f), fp_Flt2FP(1.432536f));
    setVector(&w, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216572f), fp_Flt2FP(1.431949f));
    setUVTriangle(&triangle[440], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 441:

    setVector(&u, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216223f), fp_Flt2FP(1.432927f));
    setVector(&v, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215867f), fp_Flt2FP(1.433929f));
    setVector(&w, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216815f), fp_Flt2FP(1.434120f));
    setUVTriangle(&triangle[441], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 442:

    setVector(&u, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216815f), fp_Flt2FP(1.434120f));
    setVector(&v, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217100f), fp_Flt2FP(1.433317f));
    setVector(&w, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216223f), fp_Flt2FP(1.432927f));
    setUVTriangle(&triangle[442], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 443:

    setVector(&u, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215867f), fp_Flt2FP(1.433929f));
    setVector(&v, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.434886f));
    setVector(&w, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216544f), fp_Flt2FP(1.434885f));
    setUVTriangle(&triangle[443], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 444:

    setVector(&u, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216544f), fp_Flt2FP(1.434885f));
    setVector(&v, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.216815f), fp_Flt2FP(1.434120f));
    setVector(&w, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215867f), fp_Flt2FP(1.433929f));
    setUVTriangle(&triangle[444], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 445:

    setVector(&u, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.334621f), fp_Flt2FP(1.478353f));
    setVector(&v, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.334583f), fp_Flt2FP(1.479417f));
    setVector(&w, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335838f), fp_Flt2FP(1.479356f));
    setUVTriangle(&triangle[445], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 446:

    setVector(&u, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.335838f), fp_Flt2FP(1.479356f));
    setVector(&v, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335870f), fp_Flt2FP(1.478507f));
    setVector(&w, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.334621f), fp_Flt2FP(1.478353f));
    setUVTriangle(&triangle[446], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 447:

    setVector(&u, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.334583f), fp_Flt2FP(1.479417f));
    setVector(&v, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.334726f), fp_Flt2FP(1.480452f));
    setVector(&w, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335950f), fp_Flt2FP(1.480182f));
    setUVTriangle(&triangle[447], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 448:

    setVector(&u, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.335950f), fp_Flt2FP(1.480182f));
    setVector(&v, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335838f), fp_Flt2FP(1.479356f));
    setVector(&w, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.334583f), fp_Flt2FP(1.479417f));
    setUVTriangle(&triangle[448], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 449:

    setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.334726f), fp_Flt2FP(1.480452f));
    setVector(&v, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335039f), fp_Flt2FP(1.481386f));
    setVector(&w, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.336201f), fp_Flt2FP(1.480930f));
    setUVTriangle(&triangle[449], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 450:

    setVector(&u, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.336201f), fp_Flt2FP(1.480930f));
    setVector(&v, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335950f), fp_Flt2FP(1.480182f));
    setVector(&w, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.334726f), fp_Flt2FP(1.480452f));
    setUVTriangle(&triangle[450], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 451:

    setVector(&u, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.952340f), fp_Flt2FP(1.991842f));
    setVector(&v, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.952335f), fp_Flt2FP(1.992876f));
    setVector(&w, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953319f), fp_Flt2FP(1.992952f));
    setUVTriangle(&triangle[451], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 452:

    setVector(&u, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953319f), fp_Flt2FP(1.992952f));
    setVector(&v, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953322f), fp_Flt2FP(1.992120f));
    setVector(&w, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.952340f), fp_Flt2FP(1.991842f));
    setUVTriangle(&triangle[452], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 453:

    setVector(&u, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.952335f), fp_Flt2FP(1.992876f));
    setVector(&v, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.952340f), fp_Flt2FP(1.993944f));
    setVector(&w, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953322f), fp_Flt2FP(1.993798f));
    setUVTriangle(&triangle[453], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 454:

    setVector(&u, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953322f), fp_Flt2FP(1.993798f));
    setVector(&v, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953319f), fp_Flt2FP(1.992952f));
    setVector(&w, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.952335f), fp_Flt2FP(1.992876f));
    setUVTriangle(&triangle[454], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 455:

    setVector(&u, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.952340f), fp_Flt2FP(1.993944f));
    setVector(&v, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.952355f), fp_Flt2FP(1.994957f));
    setVector(&w, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953334f), fp_Flt2FP(1.994610f));
    setUVTriangle(&triangle[455], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 456:

    setVector(&u, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953334f), fp_Flt2FP(1.994610f));
    setVector(&v, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953322f), fp_Flt2FP(1.993798f));
    setVector(&w, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.952340f), fp_Flt2FP(1.993944f));
    setUVTriangle(&triangle[456], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 457:

    setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.869213f), fp_Flt2FP(1.911919f));
    setVector(&v, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.869183f), fp_Flt2FP(1.910853f));
    setVector(&w, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867935f), fp_Flt2FP(1.910998f));
    setUVTriangle(&triangle[457], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 458:

    setVector(&u, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867935f), fp_Flt2FP(1.910998f));
    setVector(&v, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867958f), fp_Flt2FP(1.911849f));
    setVector(&w, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.869213f), fp_Flt2FP(1.911919f));
    setUVTriangle(&triangle[458], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 459:

    setVector(&u, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.869183f), fp_Flt2FP(1.910853f));
    setVector(&v, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.868976f), fp_Flt2FP(1.909832f));
    setVector(&w, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867771f), fp_Flt2FP(1.910175f));
    setUVTriangle(&triangle[459], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 460:

    setVector(&u, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867771f), fp_Flt2FP(1.910175f));
    setVector(&v, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867935f), fp_Flt2FP(1.910998f));
    setVector(&w, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.869183f), fp_Flt2FP(1.910853f));
    setUVTriangle(&triangle[460], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 461:

    setVector(&u, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241004f), fp_Flt2FP(1.316554f));
    setVector(&v, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241579f), fp_Flt2FP(1.316000f));
    setVector(&w, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240509f), fp_Flt2FP(1.315394f));
    setUVTriangle(&triangle[461], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 462:

    setVector(&u, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240509f), fp_Flt2FP(1.315394f));
    setVector(&v, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240049f), fp_Flt2FP(1.315837f));
    setVector(&w, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241004f), fp_Flt2FP(1.316554f));
    setUVTriangle(&triangle[462], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 463:

    setVector(&u, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.318755f), fp_Flt2FP(1.308230f));
    setVector(&v, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319793f), fp_Flt2FP(1.308232f));
    setVector(&w, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319869f), fp_Flt2FP(1.307280f));
    setUVTriangle(&triangle[463], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 464:

    setVector(&u, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319869f), fp_Flt2FP(1.307280f));
    setVector(&v, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319039f), fp_Flt2FP(1.307278f));
    setVector(&w, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.318755f), fp_Flt2FP(1.308230f));
    setUVTriangle(&triangle[464], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 465:

    setVector(&u, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319869f), fp_Flt2FP(1.307280f));
    setVector(&v, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320721f), fp_Flt2FP(1.307281f));
    setVector(&w, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320584f), fp_Flt2FP(1.306329f));
    setUVTriangle(&triangle[465], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 466:

    setVector(&u, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320584f), fp_Flt2FP(1.306329f));
    setVector(&v, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319946f), fp_Flt2FP(1.306328f));
    setVector(&w, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319869f), fp_Flt2FP(1.307280f));
    setUVTriangle(&triangle[466], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 467:

    setVector(&u, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320721f), fp_Flt2FP(1.307281f));
    setVector(&v, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.321533f), fp_Flt2FP(1.307284f));
    setVector(&w, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.321193f), fp_Flt2FP(1.306331f));
    setUVTriangle(&triangle[467], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 468:

    setVector(&u, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.321193f), fp_Flt2FP(1.306331f));
    setVector(&v, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320584f), fp_Flt2FP(1.306329f));
    setVector(&w, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320721f), fp_Flt2FP(1.307281f));
    setUVTriangle(&triangle[468], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 469:

    setVector(&u, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241237f), fp_Flt2FP(1.313207f));
    setVector(&v, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241204f), fp_Flt2FP(1.312355f));
    setVector(&w, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239957f), fp_Flt2FP(1.312506f));
    setUVTriangle(&triangle[469], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 470:

    setVector(&u, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239957f), fp_Flt2FP(1.312506f));
    setVector(&v, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239980f), fp_Flt2FP(1.313143f));
    setVector(&w, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241237f), fp_Flt2FP(1.313207f));
    setUVTriangle(&triangle[470], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 471:

    setVector(&u, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241204f), fp_Flt2FP(1.312355f));
    setVector(&v, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.241032f), fp_Flt2FP(1.311538f));
    setVector(&w, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239830f), fp_Flt2FP(1.311895f));
    setUVTriangle(&triangle[471], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 472:

    setVector(&u, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239830f), fp_Flt2FP(1.311895f));
    setVector(&v, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239957f), fp_Flt2FP(1.312506f));
    setVector(&w, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241204f), fp_Flt2FP(1.312355f));
    setUVTriangle(&triangle[472], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 473:

    setVector(&u, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.241032f), fp_Flt2FP(1.311538f));
    setVector(&v, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240729f), fp_Flt2FP(1.310809f));
    setVector(&w, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239602f), fp_Flt2FP(1.311347f));
    setUVTriangle(&triangle[473], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 474:

    setVector(&u, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239602f), fp_Flt2FP(1.311347f));
    setVector(&v, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239830f), fp_Flt2FP(1.311895f));
    setVector(&w, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.241032f), fp_Flt2FP(1.311538f));
    setUVTriangle(&triangle[474], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 475:

    setVector(&u, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862564f), fp_Flt2FP(1.772419f));
    setVector(&v, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862560f), fp_Flt2FP(1.771594f));
    setVector(&w, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.861635f), fp_Flt2FP(1.771511f));
    setUVTriangle(&triangle[475], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 476:

    setVector(&u, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.861635f), fp_Flt2FP(1.771511f));
    setVector(&v, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.861638f), fp_Flt2FP(1.772135f));
    setVector(&w, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862564f), fp_Flt2FP(1.772419f));
    setUVTriangle(&triangle[476], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 477:

    setVector(&u, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862560f), fp_Flt2FP(1.771594f));
    setVector(&v, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862564f), fp_Flt2FP(1.770741f));
    setVector(&w, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.861638f), fp_Flt2FP(1.770872f));
    setUVTriangle(&triangle[477], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 478:

    setVector(&u, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.861638f), fp_Flt2FP(1.770872f));
    setVector(&v, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.861635f), fp_Flt2FP(1.771511f));
    setVector(&w, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862560f), fp_Flt2FP(1.771594f));
    setUVTriangle(&triangle[478], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 479:

    setVector(&u, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516915f), fp_Flt2FP(1.185596f));
    setVector(&v, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516899f), fp_Flt2FP(1.186446f));
    setVector(&w, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518152f), fp_Flt2FP(1.186368f));
    setUVTriangle(&triangle[479], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 480:

    setVector(&u, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518152f), fp_Flt2FP(1.186368f));
    setVector(&v, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518163f), fp_Flt2FP(1.185728f));
    setVector(&w, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516915f), fp_Flt2FP(1.185596f));
    setUVTriangle(&triangle[480], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 481:

    setVector(&u, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516899f), fp_Flt2FP(1.186446f));
    setVector(&v, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.517026f), fp_Flt2FP(1.187272f));
    setVector(&w, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518248f), fp_Flt2FP(1.186980f));
    setUVTriangle(&triangle[481], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 482:

    setVector(&u, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518248f), fp_Flt2FP(1.186980f));
    setVector(&v, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518152f), fp_Flt2FP(1.186368f));
    setVector(&w, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516899f), fp_Flt2FP(1.186446f));
    setUVTriangle(&triangle[482], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 483:

    setVector(&u, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.517026f), fp_Flt2FP(1.187272f));
    setVector(&v, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.517289f), fp_Flt2FP(1.188012f));
    setVector(&w, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518443f), fp_Flt2FP(1.187540f));
    setUVTriangle(&triangle[483], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 484:

    setVector(&u, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518443f), fp_Flt2FP(1.187540f));
    setVector(&v, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518248f), fp_Flt2FP(1.186980f));
    setVector(&w, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.517026f), fp_Flt2FP(1.187272f));
    setUVTriangle(&triangle[484], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 485:

    setVector(&u, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.517289f), fp_Flt2FP(1.188012f));
    setVector(&v, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.517666f), fp_Flt2FP(1.188627f));
    setVector(&w, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518727f), fp_Flt2FP(1.187998f));
    setUVTriangle(&triangle[485], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 486:

    setVector(&u, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518727f), fp_Flt2FP(1.187998f));
    setVector(&v, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518443f), fp_Flt2FP(1.187540f));
    setVector(&w, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.517289f), fp_Flt2FP(1.188012f));
    setUVTriangle(&triangle[486], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 487:

    setVector(&u, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217379f), fp_Flt2FP(1.432536f));
    setVector(&v, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217100f), fp_Flt2FP(1.433317f));
    setVector(&w, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217977f), fp_Flt2FP(1.433709f));
    setUVTriangle(&triangle[487], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 488:

    setVector(&u, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217977f), fp_Flt2FP(1.433709f));
    setVector(&v, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218186f), fp_Flt2FP(1.433122f));
    setVector(&w, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217379f), fp_Flt2FP(1.432536f));
    setUVTriangle(&triangle[488], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 489:

    setVector(&u, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217100f), fp_Flt2FP(1.433317f));
    setVector(&v, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.216815f), fp_Flt2FP(1.434120f));
    setVector(&w, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217764f), fp_Flt2FP(1.434309f));
    setUVTriangle(&triangle[489], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 490:

    setVector(&u, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217764f), fp_Flt2FP(1.434309f));
    setVector(&v, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217977f), fp_Flt2FP(1.433709f));
    setVector(&w, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217100f), fp_Flt2FP(1.433317f));
    setUVTriangle(&triangle[490], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 491:

    setVector(&u, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216815f), fp_Flt2FP(1.434120f));
    setVector(&v, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.216544f), fp_Flt2FP(1.434885f));
    setVector(&w, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217560f), fp_Flt2FP(1.434885f));
    setUVTriangle(&triangle[491], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 492:

    setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217560f), fp_Flt2FP(1.434885f));
    setVector(&v, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217764f), fp_Flt2FP(1.434309f));
    setVector(&w, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216815f), fp_Flt2FP(1.434120f));
    setUVTriangle(&triangle[492], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 493:

    setVector(&u, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.335870f), fp_Flt2FP(1.478507f));
    setVector(&v, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335838f), fp_Flt2FP(1.479356f));
    setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337092f), fp_Flt2FP(1.479294f));
    setUVTriangle(&triangle[493], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 494:

    setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337092f), fp_Flt2FP(1.479294f));
    setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337115f), fp_Flt2FP(1.478657f));
    setVector(&w, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335870f), fp_Flt2FP(1.478507f));
    setUVTriangle(&triangle[494], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 495:

    setVector(&u, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.335838f), fp_Flt2FP(1.479356f));
    setVector(&v, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335950f), fp_Flt2FP(1.480182f));
    setVector(&w, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337178f), fp_Flt2FP(1.479916f));
    setUVTriangle(&triangle[495], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 496:

    setVector(&u, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337178f), fp_Flt2FP(1.479916f));
    setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337092f), fp_Flt2FP(1.479294f));
    setVector(&w, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335838f), fp_Flt2FP(1.479356f));
    setUVTriangle(&triangle[496], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 497:

    setVector(&u, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.335950f), fp_Flt2FP(1.480182f));
    setVector(&v, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.336201f), fp_Flt2FP(1.480930f));
    setVector(&w, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337364f), fp_Flt2FP(1.480473f));
    setUVTriangle(&triangle[497], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 498:

    setVector(&u, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337364f), fp_Flt2FP(1.480473f));
    setVector(&v, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337178f), fp_Flt2FP(1.479916f));
    setVector(&w, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335950f), fp_Flt2FP(1.480182f));
    setUVTriangle(&triangle[498], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 499:

    setVector(&u, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953322f), fp_Flt2FP(1.992120f));
    setVector(&v, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953319f), fp_Flt2FP(1.992952f));
    setVector(&w, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954302f), fp_Flt2FP(1.993021f));
    setUVTriangle(&triangle[499], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 500:

    setVector(&u, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954302f), fp_Flt2FP(1.993021f));
    setVector(&v, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954305f), fp_Flt2FP(1.992397f));
    setVector(&w, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953322f), fp_Flt2FP(1.992120f));
    setUVTriangle(&triangle[500], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 501:

    setVector(&u, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953319f), fp_Flt2FP(1.992952f));
    setVector(&v, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953322f), fp_Flt2FP(1.993798f));
    setVector(&w, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954305f), fp_Flt2FP(1.993659f));
    setUVTriangle(&triangle[501], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 502:

    setVector(&u, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954305f), fp_Flt2FP(1.993659f));
    setVector(&v, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954302f), fp_Flt2FP(1.993021f));
    setVector(&w, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953319f), fp_Flt2FP(1.992952f));
    setUVTriangle(&triangle[502], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 503:

    setVector(&u, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953322f), fp_Flt2FP(1.993798f));
    setVector(&v, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.953334f), fp_Flt2FP(1.994610f));
    setVector(&w, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954313f), fp_Flt2FP(1.994270f));
    setUVTriangle(&triangle[503], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 504:

    setVector(&u, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954313f), fp_Flt2FP(1.994270f));
    setVector(&v, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954305f), fp_Flt2FP(1.993659f));
    setVector(&w, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953322f), fp_Flt2FP(1.993798f));
    setUVTriangle(&triangle[504], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 505:

    setVector(&u, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867958f), fp_Flt2FP(1.911849f));
    setVector(&v, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867935f), fp_Flt2FP(1.910998f));
    setVector(&w, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.866689f), fp_Flt2FP(1.911136f));
    setUVTriangle(&triangle[505], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 506:

    setVector(&u, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.866689f), fp_Flt2FP(1.911136f));
    setVector(&v, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.866706f), fp_Flt2FP(1.911775f));
    setVector(&w, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867958f), fp_Flt2FP(1.911849f));
    setUVTriangle(&triangle[506], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 507:

    setVector(&u, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867935f), fp_Flt2FP(1.910998f));
    setVector(&v, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867771f), fp_Flt2FP(1.910175f));
    setVector(&w, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.866564f), fp_Flt2FP(1.910525f));
    setUVTriangle(&triangle[507], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 508:

    setVector(&u, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.866564f), fp_Flt2FP(1.910525f));
    setVector(&v, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.866689f), fp_Flt2FP(1.911136f));
    setVector(&w, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867935f), fp_Flt2FP(1.910998f));
    setUVTriangle(&triangle[508], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 509:

    setVector(&u, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240049f), fp_Flt2FP(1.315837f));
    setVector(&v, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240509f), fp_Flt2FP(1.315394f));
    setVector(&w, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239436f), fp_Flt2FP(1.314786f));
    setUVTriangle(&triangle[509], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 510:

    setVector(&u, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239436f), fp_Flt2FP(1.314786f));
    setVector(&v, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239089f), fp_Flt2FP(1.315117f));
    setVector(&w, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240049f), fp_Flt2FP(1.315837f));
    setUVTriangle(&triangle[510], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 511:

    setVector(&u, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319039f), fp_Flt2FP(1.307278f));
    setVector(&v, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319869f), fp_Flt2FP(1.307280f));
    setVector(&w, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319946f), fp_Flt2FP(1.306328f));
    setUVTriangle(&triangle[511], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 512:

    setVector(&u, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319946f), fp_Flt2FP(1.306328f));
    setVector(&v, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319323f), fp_Flt2FP(1.306327f));
    setVector(&w, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319039f), fp_Flt2FP(1.307278f));
    setUVTriangle(&triangle[512], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 513:

    setVector(&u, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319946f), fp_Flt2FP(1.306328f));
    setVector(&v, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320584f), fp_Flt2FP(1.306329f));
    setVector(&w, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320448f), fp_Flt2FP(1.305376f));
    setUVTriangle(&triangle[513], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 514:

    setVector(&u, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320448f), fp_Flt2FP(1.305376f));
    setVector(&v, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320023f), fp_Flt2FP(1.305376f));
    setVector(&w, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319946f), fp_Flt2FP(1.306328f));
    setUVTriangle(&triangle[514], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 515:

    setVector(&u, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320584f), fp_Flt2FP(1.306329f));
    setVector(&v, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.321193f), fp_Flt2FP(1.306331f));
    setVector(&w, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320854f), fp_Flt2FP(1.305378f));
    setUVTriangle(&triangle[515], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 516:

    setVector(&u, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320854f), fp_Flt2FP(1.305378f));
    setVector(&v, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320448f), fp_Flt2FP(1.305376f));
    setVector(&w, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320584f), fp_Flt2FP(1.306329f));
    setUVTriangle(&triangle[516], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 517:

    setVector(&u, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239980f), fp_Flt2FP(1.313143f));
    setVector(&v, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239957f), fp_Flt2FP(1.312506f));
    setVector(&w, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238710f), fp_Flt2FP(1.312656f));
    setUVTriangle(&triangle[517], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 518:

    setVector(&u, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238710f), fp_Flt2FP(1.312656f));
    setVector(&v, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238726f), fp_Flt2FP(1.313083f));
    setVector(&w, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239980f), fp_Flt2FP(1.313143f));
    setUVTriangle(&triangle[518], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 519:

    setVector(&u, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239957f), fp_Flt2FP(1.312506f));
    setVector(&v, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239830f), fp_Flt2FP(1.311895f));
    setVector(&w, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238624f), fp_Flt2FP(1.312248f));
    setUVTriangle(&triangle[519], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 520:

    setVector(&u, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238624f), fp_Flt2FP(1.312248f));
    setVector(&v, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238710f), fp_Flt2FP(1.312656f));
    setVector(&w, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239957f), fp_Flt2FP(1.312506f));
    setUVTriangle(&triangle[520], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 521:

    setVector(&u, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239830f), fp_Flt2FP(1.311895f));
    setVector(&v, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239602f), fp_Flt2FP(1.311347f));
    setVector(&w, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238474f), fp_Flt2FP(1.311886f));
    setUVTriangle(&triangle[521], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 522:

    setVector(&u, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238474f), fp_Flt2FP(1.311886f));
    setVector(&v, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238624f), fp_Flt2FP(1.312248f));
    setVector(&w, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239830f), fp_Flt2FP(1.311895f));
    setUVTriangle(&triangle[522], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 523:

    setVector(&u, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.861638f), fp_Flt2FP(1.772135f));
    setVector(&v, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.861635f), fp_Flt2FP(1.771511f));
    setVector(&w, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860710f), fp_Flt2FP(1.771434f));
    setUVTriangle(&triangle[523], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 524:

    setVector(&u, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860710f), fp_Flt2FP(1.771434f));
    setVector(&v, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860712f), fp_Flt2FP(1.771850f));
    setVector(&w, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.861638f), fp_Flt2FP(1.772135f));
    setUVTriangle(&triangle[524], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 525:

    setVector(&u, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.861635f), fp_Flt2FP(1.771511f));
    setVector(&v, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.861638f), fp_Flt2FP(1.770872f));
    setVector(&w, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860712f), fp_Flt2FP(1.771011f));
    setUVTriangle(&triangle[525], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 526:

    setVector(&u, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860712f), fp_Flt2FP(1.771011f));
    setVector(&v, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860710f), fp_Flt2FP(1.771434f));
    setVector(&w, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.861635f), fp_Flt2FP(1.771511f));
    setUVTriangle(&triangle[526], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 527:

    setVector(&u, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518163f), fp_Flt2FP(1.185728f));
    setVector(&v, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518152f), fp_Flt2FP(1.186368f));
    setVector(&w, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519404f), fp_Flt2FP(1.186282f));
    setUVTriangle(&triangle[527], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 528:

    setVector(&u, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519404f), fp_Flt2FP(1.186282f));
    setVector(&v, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519412f), fp_Flt2FP(1.185854f));
    setVector(&w, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518163f), fp_Flt2FP(1.185728f));
    setUVTriangle(&triangle[528], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 529:

    setVector(&u, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518152f), fp_Flt2FP(1.186368f));
    setVector(&v, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518248f), fp_Flt2FP(1.186980f));
    setVector(&w, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519468f), fp_Flt2FP(1.186695f));
    setUVTriangle(&triangle[529], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 530:

    setVector(&u, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519468f), fp_Flt2FP(1.186695f));
    setVector(&v, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519404f), fp_Flt2FP(1.186282f));
    setVector(&w, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518152f), fp_Flt2FP(1.186368f));
    setUVTriangle(&triangle[530], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 531:

    setVector(&u, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518248f), fp_Flt2FP(1.186980f));
    setVector(&v, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518443f), fp_Flt2FP(1.187540f));
    setVector(&w, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519600f), fp_Flt2FP(1.187062f));
    setUVTriangle(&triangle[531], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 532:

    setVector(&u, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519600f), fp_Flt2FP(1.187062f));
    setVector(&v, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519468f), fp_Flt2FP(1.186695f));
    setVector(&w, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518248f), fp_Flt2FP(1.186980f));
    setUVTriangle(&triangle[532], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 533:

    setVector(&u, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518443f), fp_Flt2FP(1.187540f));
    setVector(&v, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518727f), fp_Flt2FP(1.187998f));
    setVector(&w, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519788f), fp_Flt2FP(1.187369f));
    setUVTriangle(&triangle[533], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 534:

    setVector(&u, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519788f), fp_Flt2FP(1.187369f));
    setVector(&v, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519600f), fp_Flt2FP(1.187062f));
    setVector(&w, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518443f), fp_Flt2FP(1.187540f));
    setUVTriangle(&triangle[534], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 535:

    setVector(&u, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218186f), fp_Flt2FP(1.433122f));
    setVector(&v, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217977f), fp_Flt2FP(1.433709f));
    setVector(&w, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218855f), fp_Flt2FP(1.434099f));
    setUVTriangle(&triangle[535], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 536:

    setVector(&u, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218855f), fp_Flt2FP(1.434099f));
    setVector(&v, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218994f), fp_Flt2FP(1.433709f));
    setVector(&w, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218186f), fp_Flt2FP(1.433122f));
    setUVTriangle(&triangle[536], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 537:

    setVector(&u, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217977f), fp_Flt2FP(1.433709f));
    setVector(&v, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217764f), fp_Flt2FP(1.434309f));
    setVector(&w, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218712f), fp_Flt2FP(1.434500f));
    setUVTriangle(&triangle[537], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 538:

    setVector(&u, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218712f), fp_Flt2FP(1.434500f));
    setVector(&v, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218855f), fp_Flt2FP(1.434099f));
    setVector(&w, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217977f), fp_Flt2FP(1.433709f));
    setUVTriangle(&triangle[538], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 539:

    setVector(&u, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217764f), fp_Flt2FP(1.434309f));
    setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217560f), fp_Flt2FP(1.434885f));
    setVector(&w, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218576f), fp_Flt2FP(1.434884f));
    setUVTriangle(&triangle[539], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 540:

    setVector(&u, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218576f), fp_Flt2FP(1.434884f));
    setVector(&v, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218712f), fp_Flt2FP(1.434500f));
    setVector(&w, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217764f), fp_Flt2FP(1.434309f));
    setUVTriangle(&triangle[540], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 541:

    setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337115f), fp_Flt2FP(1.478657f));
    setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337092f), fp_Flt2FP(1.479294f));
    setVector(&w, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338346f), fp_Flt2FP(1.479232f));
    setUVTriangle(&triangle[541], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 542:

    setVector(&u, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338346f), fp_Flt2FP(1.479232f));
    setVector(&v, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338360f), fp_Flt2FP(1.478806f));
    setVector(&w, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337115f), fp_Flt2FP(1.478657f));
    setUVTriangle(&triangle[542], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 543:

    setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337092f), fp_Flt2FP(1.479294f));
    setVector(&v, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337178f), fp_Flt2FP(1.479916f));
    setVector(&w, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338402f), fp_Flt2FP(1.479646f));
    setUVTriangle(&triangle[543], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 544:

    setVector(&u, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338402f), fp_Flt2FP(1.479646f));
    setVector(&v, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338346f), fp_Flt2FP(1.479232f));
    setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337092f), fp_Flt2FP(1.479294f));
    setUVTriangle(&triangle[544], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 545:

    setVector(&u, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.337178f), fp_Flt2FP(1.479916f));
    setVector(&v, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.337364f), fp_Flt2FP(1.480473f));
    setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338526f), fp_Flt2FP(1.480018f));
    setUVTriangle(&triangle[545], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 546:

    setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338526f), fp_Flt2FP(1.480018f));
    setVector(&v, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338402f), fp_Flt2FP(1.479646f));
    setVector(&w, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.337178f), fp_Flt2FP(1.479916f));
    setUVTriangle(&triangle[546], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 547:

    setVector(&u, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954305f), fp_Flt2FP(1.992397f));
    setVector(&v, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954302f), fp_Flt2FP(1.993021f));
    setVector(&w, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955285f), fp_Flt2FP(1.993091f));
    setUVTriangle(&triangle[547], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 548:

    setVector(&u, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955285f), fp_Flt2FP(1.993091f));
    setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955287f), fp_Flt2FP(1.992674f));
    setVector(&w, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954305f), fp_Flt2FP(1.992397f));
    setUVTriangle(&triangle[548], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 549:

    setVector(&u, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954302f), fp_Flt2FP(1.993021f));
    setVector(&v, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954305f), fp_Flt2FP(1.993659f));
    setVector(&w, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955287f), fp_Flt2FP(1.993514f));
    setUVTriangle(&triangle[549], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 550:

    setVector(&u, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955287f), fp_Flt2FP(1.993514f));
    setVector(&v, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955285f), fp_Flt2FP(1.993091f));
    setVector(&w, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954302f), fp_Flt2FP(1.993021f));
    setUVTriangle(&triangle[550], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 551:

    setVector(&u, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954305f), fp_Flt2FP(1.993659f));
    setVector(&v, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954313f), fp_Flt2FP(1.994270f));
    setVector(&w, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955293f), fp_Flt2FP(1.993923f));
    setUVTriangle(&triangle[551], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 552:

    setVector(&u, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955293f), fp_Flt2FP(1.993923f));
    setVector(&v, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955287f), fp_Flt2FP(1.993514f));
    setVector(&w, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954305f), fp_Flt2FP(1.993659f));
    setUVTriangle(&triangle[552], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 553:

    setVector(&u, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.866706f), fp_Flt2FP(1.911775f));
    setVector(&v, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.866689f), fp_Flt2FP(1.911136f));
    setVector(&w, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.865440f), fp_Flt2FP(1.911279f));
    setUVTriangle(&triangle[553], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 554:

    setVector(&u, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.865440f), fp_Flt2FP(1.911279f));
    setVector(&v, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.865452f), fp_Flt2FP(1.911706f));
    setVector(&w, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.866706f), fp_Flt2FP(1.911775f));
    setUVTriangle(&triangle[554], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 555:

    setVector(&u, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.866689f), fp_Flt2FP(1.911136f));
    setVector(&v, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.866564f), fp_Flt2FP(1.910525f));
    setVector(&w, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.865359f), fp_Flt2FP(1.910869f));
    setUVTriangle(&triangle[555], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 556:

    setVector(&u, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.865359f), fp_Flt2FP(1.910869f));
    setVector(&v, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.865440f), fp_Flt2FP(1.911279f));
    setVector(&w, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.866689f), fp_Flt2FP(1.911136f));
    setUVTriangle(&triangle[556], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 557:

    setVector(&u, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239089f), fp_Flt2FP(1.315117f));
    setVector(&v, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239436f), fp_Flt2FP(1.314786f));
    setVector(&w, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238362f), fp_Flt2FP(1.314177f));
    setUVTriangle(&triangle[557], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 558:

    setVector(&u, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238362f), fp_Flt2FP(1.314177f));
    setVector(&v, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238134f), fp_Flt2FP(1.314400f));
    setVector(&w, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239089f), fp_Flt2FP(1.315117f));
    setUVTriangle(&triangle[558], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 559:

    setVector(&u, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319323f), fp_Flt2FP(1.306327f));
    setVector(&v, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319946f), fp_Flt2FP(1.306328f));
    setVector(&w, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320023f), fp_Flt2FP(1.305376f));
    setUVTriangle(&triangle[559], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 560:

    setVector(&u, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320023f), fp_Flt2FP(1.305376f));
    setVector(&v, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319607f), fp_Flt2FP(1.305375f));
    setVector(&w, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319323f), fp_Flt2FP(1.306327f));
    setUVTriangle(&triangle[560], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 561:

    setVector(&u, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320023f), fp_Flt2FP(1.305376f));
    setVector(&v, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320448f), fp_Flt2FP(1.305376f));
    setVector(&w, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320312f), fp_Flt2FP(1.304424f));
    setUVTriangle(&triangle[561], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 562:

    setVector(&u, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320312f), fp_Flt2FP(1.304424f));
    setVector(&v, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320099f), fp_Flt2FP(1.304424f));
    setVector(&w, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320023f), fp_Flt2FP(1.305376f));
    setUVTriangle(&triangle[562], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 563:

    setVector(&u, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320448f), fp_Flt2FP(1.305376f));
    setVector(&v, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320854f), fp_Flt2FP(1.305378f));
    setVector(&w, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320515f), fp_Flt2FP(1.304425f));
    setUVTriangle(&triangle[563], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 564:

    setVector(&u, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320515f), fp_Flt2FP(1.304425f));
    setVector(&v, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320312f), fp_Flt2FP(1.304424f));
    setVector(&w, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320448f), fp_Flt2FP(1.305376f));
    setUVTriangle(&triangle[564], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 565:

    setVector(&u, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238726f), fp_Flt2FP(1.313083f));
    setVector(&v, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238710f), fp_Flt2FP(1.312656f));
    setVector(&w, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237467f), fp_Flt2FP(1.312811f));
    setUVTriangle(&triangle[565], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 566:

    setVector(&u, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237467f), fp_Flt2FP(1.312811f));
    setVector(&v, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237473f), fp_Flt2FP(1.313022f));
    setVector(&w, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238726f), fp_Flt2FP(1.313083f));
    setUVTriangle(&triangle[566], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 567:

    setVector(&u, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238710f), fp_Flt2FP(1.312656f));
    setVector(&v, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238624f), fp_Flt2FP(1.312248f));
    setVector(&w, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237422f), fp_Flt2FP(1.312605f));
    setUVTriangle(&triangle[567], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 568:

    setVector(&u, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237422f), fp_Flt2FP(1.312605f));
    setVector(&v, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237467f), fp_Flt2FP(1.312811f));
    setVector(&w, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238710f), fp_Flt2FP(1.312656f));
    setUVTriangle(&triangle[568], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 569:

    setVector(&u, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238624f), fp_Flt2FP(1.312248f));
    setVector(&v, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238474f), fp_Flt2FP(1.311886f));
    setVector(&w, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237347f), fp_Flt2FP(1.312424f));
    setUVTriangle(&triangle[569], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 570:

    setVector(&u, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237347f), fp_Flt2FP(1.312424f));
    setVector(&v, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237422f), fp_Flt2FP(1.312605f));
    setVector(&w, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238624f), fp_Flt2FP(1.312248f));
    setUVTriangle(&triangle[570], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 571:

    setVector(&u, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860712f), fp_Flt2FP(1.771850f));
    setVector(&v, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860710f), fp_Flt2FP(1.771434f));
    setVector(&w, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.859784f), fp_Flt2FP(1.771358f));
    setUVTriangle(&triangle[571], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 572:

    setVector(&u, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.859784f), fp_Flt2FP(1.771358f));
    setVector(&v, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859785f), fp_Flt2FP(1.771566f));
    setVector(&w, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860712f), fp_Flt2FP(1.771850f));
    setUVTriangle(&triangle[572], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 573:

    setVector(&u, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860710f), fp_Flt2FP(1.771434f));
    setVector(&v, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860712f), fp_Flt2FP(1.771011f));
    setVector(&w, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.859785f), fp_Flt2FP(1.771143f));
    setUVTriangle(&triangle[573], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 574:

    setVector(&u, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.859785f), fp_Flt2FP(1.771143f));
    setVector(&v, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859784f), fp_Flt2FP(1.771358f));
    setVector(&w, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860710f), fp_Flt2FP(1.771434f));
    setUVTriangle(&triangle[574], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 575:

    setVector(&u, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519412f), fp_Flt2FP(1.185854f));
    setVector(&v, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519404f), fp_Flt2FP(1.186282f));
    setVector(&w, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.520657f), fp_Flt2FP(1.186197f));
    setUVTriangle(&triangle[575], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 576:

    setVector(&u, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520657f), fp_Flt2FP(1.186197f));
    setVector(&v, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520661f), fp_Flt2FP(1.185986f));
    setVector(&w, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519412f), fp_Flt2FP(1.185854f));
    setUVTriangle(&triangle[576], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 577:

    setVector(&u, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519404f), fp_Flt2FP(1.186282f));
    setVector(&v, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519468f), fp_Flt2FP(1.186695f));
    setVector(&w, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.520689f), fp_Flt2FP(1.186403f));
    setUVTriangle(&triangle[577], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 578:

    setVector(&u, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520689f), fp_Flt2FP(1.186403f));
    setVector(&v, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520657f), fp_Flt2FP(1.186197f));
    setVector(&w, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519404f), fp_Flt2FP(1.186282f));
    setUVTriangle(&triangle[578], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 579:

    setVector(&u, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519468f), fp_Flt2FP(1.186695f));
    setVector(&v, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519600f), fp_Flt2FP(1.187062f));
    setVector(&w, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.520755f), fp_Flt2FP(1.186590f));
    setUVTriangle(&triangle[579], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 580:

    setVector(&u, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520755f), fp_Flt2FP(1.186590f));
    setVector(&v, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520689f), fp_Flt2FP(1.186403f));
    setVector(&w, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519468f), fp_Flt2FP(1.186695f));
    setUVTriangle(&triangle[580], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 581:

    setVector(&u, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519600f), fp_Flt2FP(1.187062f));
    setVector(&v, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.519788f), fp_Flt2FP(1.187369f));
    setVector(&w, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.520849f), fp_Flt2FP(1.186740f));
    setUVTriangle(&triangle[581], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 582:

    setVector(&u, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520849f), fp_Flt2FP(1.186740f));
    setVector(&v, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520755f), fp_Flt2FP(1.186590f));
    setVector(&w, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519600f), fp_Flt2FP(1.187062f));
    setUVTriangle(&triangle[582], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 583:

    setVector(&u, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218994f), fp_Flt2FP(1.433709f));
    setVector(&v, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218855f), fp_Flt2FP(1.434099f));
    setVector(&w, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.219731f), fp_Flt2FP(1.434491f));
    setUVTriangle(&triangle[583], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 584:

    setVector(&u, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219731f), fp_Flt2FP(1.434491f));
    setVector(&v, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219801f), fp_Flt2FP(1.434295f));
    setVector(&w, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218994f), fp_Flt2FP(1.433709f));
    setUVTriangle(&triangle[584], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 585:

    setVector(&u, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218855f), fp_Flt2FP(1.434099f));
    setVector(&v, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218712f), fp_Flt2FP(1.434500f));
    setVector(&w, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.219661f), fp_Flt2FP(1.434691f));
    setUVTriangle(&triangle[585], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 586:

    setVector(&u, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219661f), fp_Flt2FP(1.434691f));
    setVector(&v, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219731f), fp_Flt2FP(1.434491f));
    setVector(&w, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218855f), fp_Flt2FP(1.434099f));
    setUVTriangle(&triangle[586], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 587:

    setVector(&u, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218712f), fp_Flt2FP(1.434500f));
    setVector(&v, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218576f), fp_Flt2FP(1.434884f));
    setVector(&w, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.219593f), fp_Flt2FP(1.434882f));
    setUVTriangle(&triangle[587], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 588:

    setVector(&u, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219593f), fp_Flt2FP(1.434882f));
    setVector(&v, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219661f), fp_Flt2FP(1.434691f));
    setVector(&w, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218712f), fp_Flt2FP(1.434500f));
    setUVTriangle(&triangle[588], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 589:

    setVector(&u, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338360f), fp_Flt2FP(1.478806f));
    setVector(&v, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338346f), fp_Flt2FP(1.479232f));
    setVector(&w, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.339600f), fp_Flt2FP(1.479170f));
    setUVTriangle(&triangle[589], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 590:

    setVector(&u, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339600f), fp_Flt2FP(1.479170f));
    setVector(&v, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339606f), fp_Flt2FP(1.478955f));
    setVector(&w, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338360f), fp_Flt2FP(1.478806f));
    setUVTriangle(&triangle[590], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 591:

    setVector(&u, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338346f), fp_Flt2FP(1.479232f));
    setVector(&v, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338402f), fp_Flt2FP(1.479646f));
    setVector(&w, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.339627f), fp_Flt2FP(1.479375f));
    setUVTriangle(&triangle[591], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 592:

    setVector(&u, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339627f), fp_Flt2FP(1.479375f));
    setVector(&v, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339600f), fp_Flt2FP(1.479170f));
    setVector(&w, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338346f), fp_Flt2FP(1.479232f));
    setUVTriangle(&triangle[592], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 593:

    setVector(&u, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.338402f), fp_Flt2FP(1.479646f));
    setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.338526f), fp_Flt2FP(1.480018f));
    setVector(&w, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.339692f), fp_Flt2FP(1.479566f));
    setUVTriangle(&triangle[593], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 594:

    setVector(&u, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339692f), fp_Flt2FP(1.479566f));
    setVector(&v, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339627f), fp_Flt2FP(1.479375f));
    setVector(&w, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.338402f), fp_Flt2FP(1.479646f));
    setUVTriangle(&triangle[594], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 595:

    setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955287f), fp_Flt2FP(1.992674f));
    setVector(&v, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955285f), fp_Flt2FP(1.993091f));
    setVector(&w, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.956268f), fp_Flt2FP(1.993160f));
    setUVTriangle(&triangle[595], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 596:

    setVector(&u, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956268f), fp_Flt2FP(1.993160f));
    setVector(&v, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956269f), fp_Flt2FP(1.992959f));
    setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955287f), fp_Flt2FP(1.992674f));
    setUVTriangle(&triangle[596], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 597:

    setVector(&u, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955285f), fp_Flt2FP(1.993091f));
    setVector(&v, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955287f), fp_Flt2FP(1.993514f));
    setVector(&w, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.956269f), fp_Flt2FP(1.993375f));
    setUVTriangle(&triangle[597], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 598:

    setVector(&u, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956269f), fp_Flt2FP(1.993375f));
    setVector(&v, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956268f), fp_Flt2FP(1.993160f));
    setVector(&w, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955285f), fp_Flt2FP(1.993091f));
    setUVTriangle(&triangle[598], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 599:

    setVector(&u, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955287f), fp_Flt2FP(1.993514f));
    setVector(&v, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955293f), fp_Flt2FP(1.993923f));
    setVector(&w, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.956272f), fp_Flt2FP(1.993576f));
    setUVTriangle(&triangle[599], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 600:

    setVector(&u, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956272f), fp_Flt2FP(1.993576f));
    setVector(&v, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956269f), fp_Flt2FP(1.993375f));
    setVector(&w, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955287f), fp_Flt2FP(1.993514f));
    setUVTriangle(&triangle[600], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 601:

    setVector(&u, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.865452f), fp_Flt2FP(1.911706f));
    setVector(&v, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.865440f), fp_Flt2FP(1.911279f));
    setVector(&w, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.864192f), fp_Flt2FP(1.911423f));
    setUVTriangle(&triangle[601], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 602:

    setVector(&u, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864192f), fp_Flt2FP(1.911423f));
    setVector(&v, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864197f), fp_Flt2FP(1.911636f));
    setVector(&w, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.865452f), fp_Flt2FP(1.911706f));
    setUVTriangle(&triangle[602], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 603:

    setVector(&u, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.865440f), fp_Flt2FP(1.911279f));
    setVector(&v, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.865359f), fp_Flt2FP(1.910869f));
    setVector(&w, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.864151f), fp_Flt2FP(1.911218f));
    setUVTriangle(&triangle[603], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 604:

    setVector(&u, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864151f), fp_Flt2FP(1.911218f));
    setVector(&v, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864192f), fp_Flt2FP(1.911423f));
    setVector(&w, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.865440f), fp_Flt2FP(1.911279f));
    setUVTriangle(&triangle[604], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 605:

    setVector(&u, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238134f), fp_Flt2FP(1.314400f));
    setVector(&v, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238362f), fp_Flt2FP(1.314177f));
    setVector(&w, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237289f), fp_Flt2FP(1.313567f));
    setUVTriangle(&triangle[605], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 606:

    setVector(&u, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237289f), fp_Flt2FP(1.313567f));
    setVector(&v, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237175f), fp_Flt2FP(1.313679f));
    setVector(&w, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238134f), fp_Flt2FP(1.314400f));
    setUVTriangle(&triangle[606], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 607:

    setVector(&u, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319607f), fp_Flt2FP(1.305375f));
    setVector(&v, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320023f), fp_Flt2FP(1.305376f));
    setVector(&w, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320099f), fp_Flt2FP(1.304424f));
    setUVTriangle(&triangle[607], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 608:

    setVector(&u, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320099f), fp_Flt2FP(1.304424f));
    setVector(&v, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.319892f), fp_Flt2FP(1.304423f));
    setVector(&w, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.319607f), fp_Flt2FP(1.305375f));
    setUVTriangle(&triangle[608], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 609:

    setVector(&u, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320099f), fp_Flt2FP(1.304424f));
    setVector(&v, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320312f), fp_Flt2FP(1.304424f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320176f), fp_Flt2FP(1.303472f));
    setUVTriangle(&triangle[609], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 610:

    setVector(&u, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320312f), fp_Flt2FP(1.304424f));
    setVector(&v, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320515f), fp_Flt2FP(1.304425f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320176f), fp_Flt2FP(1.303472f));
    setUVTriangle(&triangle[610], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 611:

    setVector(&u, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237473f), fp_Flt2FP(1.313022f));
    setVector(&v, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237467f), fp_Flt2FP(1.312811f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.236220f), fp_Flt2FP(1.312962f));
    setUVTriangle(&triangle[611], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 612:

    setVector(&u, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237467f), fp_Flt2FP(1.312811f));
    setVector(&v, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237422f), fp_Flt2FP(1.312605f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.236220f), fp_Flt2FP(1.312962f));
    setUVTriangle(&triangle[612], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 613:

    setVector(&u, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237422f), fp_Flt2FP(1.312605f));
    setVector(&v, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237347f), fp_Flt2FP(1.312424f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.236220f), fp_Flt2FP(1.312962f));
    setUVTriangle(&triangle[613], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 614:

    setVector(&u, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.859785f), fp_Flt2FP(1.771566f));
    setVector(&v, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859784f), fp_Flt2FP(1.771358f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.858859f), fp_Flt2FP(1.771282f));
    setUVTriangle(&triangle[614], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 615:

    setVector(&u, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.859784f), fp_Flt2FP(1.771358f));
    setVector(&v, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859785f), fp_Flt2FP(1.771143f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.858859f), fp_Flt2FP(1.771282f));
    setUVTriangle(&triangle[615], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 616:

    setVector(&u, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520661f), fp_Flt2FP(1.185986f));
    setVector(&v, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520657f), fp_Flt2FP(1.186197f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.521910f), fp_Flt2FP(1.186111f));
    setUVTriangle(&triangle[616], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 617:

    setVector(&u, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520657f), fp_Flt2FP(1.186197f));
    setVector(&v, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520689f), fp_Flt2FP(1.186403f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.521910f), fp_Flt2FP(1.186111f));
    setUVTriangle(&triangle[617], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 618:

    setVector(&u, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520689f), fp_Flt2FP(1.186403f));
    setVector(&v, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520755f), fp_Flt2FP(1.186590f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.521910f), fp_Flt2FP(1.186111f));
    setUVTriangle(&triangle[618], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 619:

    setVector(&u, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.520755f), fp_Flt2FP(1.186590f));
    setVector(&v, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.520849f), fp_Flt2FP(1.186740f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.521910f), fp_Flt2FP(1.186111f));
    setUVTriangle(&triangle[619], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 620:

    setVector(&u, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219801f), fp_Flt2FP(1.434295f));
    setVector(&v, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219731f), fp_Flt2FP(1.434491f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.220609f), fp_Flt2FP(1.434882f));
    setUVTriangle(&triangle[620], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 621:

    setVector(&u, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219731f), fp_Flt2FP(1.434491f));
    setVector(&v, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219661f), fp_Flt2FP(1.434691f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.220609f), fp_Flt2FP(1.434882f));
    setUVTriangle(&triangle[621], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 622:

    setVector(&u, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.219661f), fp_Flt2FP(1.434691f));
    setVector(&v, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.219593f), fp_Flt2FP(1.434882f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.220609f), fp_Flt2FP(1.434882f));
    setUVTriangle(&triangle[622], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 623:

    setVector(&u, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339606f), fp_Flt2FP(1.478955f));
    setVector(&v, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339600f), fp_Flt2FP(1.479170f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.340855f), fp_Flt2FP(1.479109f));
    setUVTriangle(&triangle[623], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 624:

    setVector(&u, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339600f), fp_Flt2FP(1.479170f));
    setVector(&v, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339627f), fp_Flt2FP(1.479375f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.340855f), fp_Flt2FP(1.479109f));
    setUVTriangle(&triangle[624], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 625:

    setVector(&u, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.339627f), fp_Flt2FP(1.479375f));
    setVector(&v, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.339692f), fp_Flt2FP(1.479566f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.340855f), fp_Flt2FP(1.479109f));
    setUVTriangle(&triangle[625], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 626:

    setVector(&u, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956269f), fp_Flt2FP(1.992959f));
    setVector(&v, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956268f), fp_Flt2FP(1.993160f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.957251f), fp_Flt2FP(1.993236f));
    setUVTriangle(&triangle[626], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 627:

    setVector(&u, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956268f), fp_Flt2FP(1.993160f));
    setVector(&v, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956269f), fp_Flt2FP(1.993375f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.957251f), fp_Flt2FP(1.993236f));
    setUVTriangle(&triangle[627], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 628:

    setVector(&u, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.956269f), fp_Flt2FP(1.993375f));
    setVector(&v, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956272f), fp_Flt2FP(1.993576f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.957251f), fp_Flt2FP(1.993236f));
    setUVTriangle(&triangle[628], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 629:

    setVector(&u, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864197f), fp_Flt2FP(1.911636f));
    setVector(&v, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864192f), fp_Flt2FP(1.911423f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862946f), fp_Flt2FP(1.911561f));
    setUVTriangle(&triangle[629], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 630:

    setVector(&u, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864192f), fp_Flt2FP(1.911423f));
    setVector(&v, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864151f), fp_Flt2FP(1.911218f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862946f), fp_Flt2FP(1.911561f));
    setUVTriangle(&triangle[630], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 631:

    setVector(&u, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237175f), fp_Flt2FP(1.313679f));
    setVector(&v, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237289f), fp_Flt2FP(1.313567f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.236220f), fp_Flt2FP(1.312962f));
    setUVTriangle(&triangle[631], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 632:

    setVector(&u, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.319892f), fp_Flt2FP(1.304423f));
    setVector(&v, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320099f), fp_Flt2FP(1.304424f));
    setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320176f), fp_Flt2FP(1.303472f));
    setUVTriangle(&triangle[632], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 633:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227390f), fp_Flt2FP(1.401840f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222356f), fp_Flt2FP(1.401874f));
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.218014f), fp_Flt2FP(1.404424f));
    setUVTriangle(&triangle[633], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 634:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218014f), fp_Flt2FP(1.404424f));
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.408800f));
    setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215563f), fp_Flt2FP(1.413835f));
    setUVTriangle(&triangle[634], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 635:

    setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215563f), fp_Flt2FP(1.413835f));
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218112f), fp_Flt2FP(1.418176f));
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222490f), fp_Flt2FP(1.420661f));
    setUVTriangle(&triangle[635], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 636:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218014f), fp_Flt2FP(1.404424f));
    setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215563f), fp_Flt2FP(1.413835f));
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222490f), fp_Flt2FP(1.420661f));
    setUVTriangle(&triangle[636], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 637:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222490f), fp_Flt2FP(1.420661f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227524f), fp_Flt2FP(1.420626f));
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231865f), fp_Flt2FP(1.418076f));
    setUVTriangle(&triangle[637], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 638:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.231865f), fp_Flt2FP(1.418076f));
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.234352f), fp_Flt2FP(1.413700f));
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234317f), fp_Flt2FP(1.408665f));
    setUVTriangle(&triangle[638], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 639:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222490f), fp_Flt2FP(1.420661f));
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.231865f), fp_Flt2FP(1.418076f));
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234317f), fp_Flt2FP(1.408665f));
    setUVTriangle(&triangle[639], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 640:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.218014f), fp_Flt2FP(1.404424f));
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222490f), fp_Flt2FP(1.420661f));
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234317f), fp_Flt2FP(1.408665f));
    setUVTriangle(&triangle[640], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 641:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227390f), fp_Flt2FP(1.401840f));
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.218014f), fp_Flt2FP(1.404424f));
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234317f), fp_Flt2FP(1.408665f));
    setUVTriangle(&triangle[641], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 642:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.231768f), fp_Flt2FP(1.404324f));
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227390f), fp_Flt2FP(1.401840f));
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.234317f), fp_Flt2FP(1.408665f));
    setUVTriangle(&triangle[642], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 643:

    setVector(&u, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.337523f));
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.226654f), fp_Flt2FP(1.337523f));
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.227591f), fp_Flt2FP(1.330712f));
    setUVTriangle(&triangle[643], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 644:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227591f), fp_Flt2FP(1.330712f));
    setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.330712f));
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.337523f));
    setUVTriangle(&triangle[644], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 645:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.331483f));
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122580f), fp_Flt2FP(1.336517f));
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.129625f), fp_Flt2FP(1.336998f));
    setUVTriangle(&triangle[645], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 646:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.129625f), fp_Flt2FP(1.336998f));
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.129625f), fp_Flt2FP(1.331001f));
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.331483f));
    setUVTriangle(&triangle[646], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 647:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.703691f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.698828f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.698828f));
    setUVTriangle(&triangle[647], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 648:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.698828f));
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.704626f));
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.703691f));
    setUVTriangle(&triangle[648], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 649:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.698828f));
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.693966f));
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.693031f));
    setUVTriangle(&triangle[649], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 650:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.693031f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.698828f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.698828f));
    setUVTriangle(&triangle[650], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 651:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.859596f), fp_Flt2FP(1.906290f));
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854562f), fp_Flt2FP(1.906290f));
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.854079f), fp_Flt2FP(1.913336f));
    setUVTriangle(&triangle[651], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 652:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.854079f), fp_Flt2FP(1.913336f));
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860077f), fp_Flt2FP(1.913336f));
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.859596f), fp_Flt2FP(1.906290f));
    setUVTriangle(&triangle[652], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 653:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.173711f));
    setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.178574f));
    setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.178574f));
    setUVTriangle(&triangle[653], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 654:

    setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.178574f));
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.172775f));
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.173711f));
    setUVTriangle(&triangle[654], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 655:

    setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.178574f));
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.183437f));
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.184373f));
    setUVTriangle(&triangle[655], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 656:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.184373f));
    setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.178574f));
    setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.178574f));
    setUVTriangle(&triangle[656], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 657:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862764f), fp_Flt2FP(1.775130f));
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.857731f), fp_Flt2FP(1.775131f));
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857250f), fp_Flt2FP(1.782176f));
    setUVTriangle(&triangle[657], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 658:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857250f), fp_Flt2FP(1.782176f));
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.863247f), fp_Flt2FP(1.782176f));
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862764f), fp_Flt2FP(1.775130f));
    setUVTriangle(&triangle[658], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 659:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.881629f), fp_Flt2FP(1.773994f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.773994f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.780805f));
    setUVTriangle(&triangle[659], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 660:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.780805f));
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.882563f), fp_Flt2FP(1.780805f));
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.881629f), fp_Flt2FP(1.773994f));
    setUVTriangle(&triangle[660], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 661:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.773994f));
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.871903f), fp_Flt2FP(1.773994f));
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.870969f), fp_Flt2FP(1.780805f));
    setUVTriangle(&triangle[661], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 662:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.870969f), fp_Flt2FP(1.780805f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.780805f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.773994f));
    setUVTriangle(&triangle[662], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 663:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.684828f));
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.679794f));
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880569f), fp_Flt2FP(1.679312f));
    setUVTriangle(&triangle[663], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 664:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880569f), fp_Flt2FP(1.679312f));
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880569f), fp_Flt2FP(1.685309f));
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.684828f));
    setUVTriangle(&triangle[664], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 665:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.216929f), fp_Flt2FP(1.337523f));
    setVector(&v, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.337523f));
    setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.330712f));
    setUVTriangle(&triangle[665], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 666:

    setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.330712f));
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215992f), fp_Flt2FP(1.330712f));
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.216929f), fp_Flt2FP(1.337523f));
    setUVTriangle(&triangle[666], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 667:

    setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.330712f));
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227591f), fp_Flt2FP(1.330712f));
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.228055f), fp_Flt2FP(1.323902f));
    setUVTriangle(&triangle[667], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 668:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.228055f), fp_Flt2FP(1.323902f));
    setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.323902f));
    setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.330712f));
    setUVTriangle(&triangle[668], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 669:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.129625f), fp_Flt2FP(1.331001f));
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.129625f), fp_Flt2FP(1.336998f));
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.136440f), fp_Flt2FP(1.337242f));
    setUVTriangle(&triangle[669], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 670:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.136440f), fp_Flt2FP(1.337242f));
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.136439f), fp_Flt2FP(1.330757f));
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.129625f), fp_Flt2FP(1.331001f));
    setUVTriangle(&triangle[670], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 671:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.704626f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.698828f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.698828f));
    setUVTriangle(&triangle[671], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 672:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.698828f));
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.705092f));
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.704626f));
    setUVTriangle(&triangle[672], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 673:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.698828f));
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.693031f));
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.692564f));
    setUVTriangle(&triangle[673], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 674:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.692564f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.698828f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880804f), fp_Flt2FP(1.698828f));
    setUVTriangle(&triangle[674], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 675:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860077f), fp_Flt2FP(1.913336f));
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854079f), fp_Flt2FP(1.913336f));
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853836f), fp_Flt2FP(1.920150f));
    setUVTriangle(&triangle[675], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 676:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853836f), fp_Flt2FP(1.920150f));
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860320f), fp_Flt2FP(1.920151f));
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860077f), fp_Flt2FP(1.913336f));
    setUVTriangle(&triangle[676], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 677:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.172775f));
    setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.178574f));
    setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.178574f));
    setUVTriangle(&triangle[677], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 678:

    setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.178574f));
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.172310f));
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.172775f));
    setUVTriangle(&triangle[678], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 679:

    setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.178574f));
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.184373f));
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.184838f));
    setUVTriangle(&triangle[679], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 680:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.184838f));
    setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.178574f));
    setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222338f), fp_Flt2FP(1.178574f));
    setUVTriangle(&triangle[680], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 681:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.863247f), fp_Flt2FP(1.782176f));
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.857250f), fp_Flt2FP(1.782176f));
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857006f), fp_Flt2FP(1.788991f));
    setUVTriangle(&triangle[681], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 682:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857006f), fp_Flt2FP(1.788991f));
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.863490f), fp_Flt2FP(1.788990f));
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.863247f), fp_Flt2FP(1.782176f));
    setUVTriangle(&triangle[682], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 683:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.882563f), fp_Flt2FP(1.780805f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.780805f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.787615f));
    setUVTriangle(&triangle[683], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 684:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.787615f));
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.883030f), fp_Flt2FP(1.787615f));
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.882563f), fp_Flt2FP(1.780805f));
    setUVTriangle(&triangle[684], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 685:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.780805f));
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.870969f), fp_Flt2FP(1.780805f));
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.870502f), fp_Flt2FP(1.787615f));
    setUVTriangle(&triangle[685], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 686:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.870502f), fp_Flt2FP(1.787615f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.787615f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.780805f));
    setUVTriangle(&triangle[686], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 687:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880569f), fp_Flt2FP(1.685309f));
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880569f), fp_Flt2FP(1.679312f));
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873755f), fp_Flt2FP(1.679068f));
    setUVTriangle(&triangle[687], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 688:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873755f), fp_Flt2FP(1.679068f));
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873754f), fp_Flt2FP(1.685553f));
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880569f), fp_Flt2FP(1.685309f));
    setUVTriangle(&triangle[688], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 689:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215992f), fp_Flt2FP(1.330712f));
    setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.330712f));
    setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.323902f));
    setUVTriangle(&triangle[689], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 690:

    setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.323902f));
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.323902f));
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215992f), fp_Flt2FP(1.330712f));
    setUVTriangle(&triangle[690], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 691:

    setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.323902f));
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.228055f), fp_Flt2FP(1.323902f));
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.228055f), fp_Flt2FP(1.317091f));
    setUVTriangle(&triangle[691], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 692:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.228055f), fp_Flt2FP(1.317091f));
    setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.317091f));
    setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.323902f));
    setUVTriangle(&triangle[692], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 693:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.709677f));
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.705092f));
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.705092f));
    setUVTriangle(&triangle[693], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 694:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.705092f));
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.709677f));
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.709677f));
    setUVTriangle(&triangle[694], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 695:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.705092f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.698828f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.698828f));
    setUVTriangle(&triangle[695], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 696:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.698828f));
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.705092f));
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.705092f));
    setUVTriangle(&triangle[696], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 697:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.698828f));
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.692564f));
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.692564f));
    setUVTriangle(&triangle[697], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 698:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.692564f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.698828f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.698828f));
    setUVTriangle(&triangle[698], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 699:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.692564f));
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.687979f));
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.687979f));
    setUVTriangle(&triangle[699], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 700:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.687979f));
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.692564f));
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873994f), fp_Flt2FP(1.692564f));
    setUVTriangle(&triangle[700], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 701:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.172310f));
    setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.178574f));
    setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.178574f));
    setUVTriangle(&triangle[701], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 702:

    setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.178574f));
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.172310f));
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.172310f));
    setUVTriangle(&triangle[702], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 703:

    setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.178574f));
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.184838f));
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.184838f));
    setUVTriangle(&triangle[703], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 704:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.184838f));
    setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.178574f));
    setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.229149f), fp_Flt2FP(1.178574f));
    setUVTriangle(&triangle[704], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 705:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.787615f));
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.883030f), fp_Flt2FP(1.787615f));
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883030f), fp_Flt2FP(1.794426f));
    setUVTriangle(&triangle[705], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 706:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.883030f), fp_Flt2FP(1.794426f));
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.794426f));
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.787615f));
    setUVTriangle(&triangle[706], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 707:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.883030f), fp_Flt2FP(1.787615f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.787615f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.794426f));
    setUVTriangle(&triangle[707], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 708:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.794426f));
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.883030f), fp_Flt2FP(1.794426f));
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883030f), fp_Flt2FP(1.787615f));
    setUVTriangle(&triangle[708], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 709:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.787615f));
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.870502f), fp_Flt2FP(1.787615f));
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.870502f), fp_Flt2FP(1.794426f));
    setUVTriangle(&triangle[709], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 710:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.870502f), fp_Flt2FP(1.794426f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.794426f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.787615f));
    setUVTriangle(&triangle[710], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 711:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.870502f), fp_Flt2FP(1.787615f));
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.865917f), fp_Flt2FP(1.787615f));
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.865917f), fp_Flt2FP(1.794426f));
    setUVTriangle(&triangle[711], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 712:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.865917f), fp_Flt2FP(1.794426f));
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.870502f), fp_Flt2FP(1.794426f));
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.870502f), fp_Flt2FP(1.787615f));
    setUVTriangle(&triangle[712], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 713:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.323902f));
    setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.323902f));
    setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.317091f));
    setUVTriangle(&triangle[713], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 714:

    setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.317091f));
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.317091f));
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.323902f));
    setUVTriangle(&triangle[714], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 715:

    setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.317091f));
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.228055f), fp_Flt2FP(1.317091f));
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.227591f), fp_Flt2FP(1.310280f));
    setUVTriangle(&triangle[715], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 716:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.227591f), fp_Flt2FP(1.310280f));
    setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.310280f));
    setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.317091f));
    setUVTriangle(&triangle[716], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 717:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.143023f), fp_Flt2FP(1.330757f));
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.143023f), fp_Flt2FP(1.337242f));
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149375f), fp_Flt2FP(1.336998f));
    setUVTriangle(&triangle[717], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 718:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.149375f), fp_Flt2FP(1.336998f));
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149375f), fp_Flt2FP(1.331001f));
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.143023f), fp_Flt2FP(1.330757f));
    setUVTriangle(&triangle[718], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 719:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.705092f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.698828f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.698828f));
    setUVTriangle(&triangle[719], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 720:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.698828f));
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.704626f));
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.705092f));
    setUVTriangle(&triangle[720], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 721:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.698828f));
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.692564f));
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.693031f));
    setUVTriangle(&triangle[721], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 722:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.693031f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.698828f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867183f), fp_Flt2FP(1.698828f));
    setUVTriangle(&triangle[722], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 723:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860320f), fp_Flt2FP(1.926734f));
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853836f), fp_Flt2FP(1.926733f));
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.854079f), fp_Flt2FP(1.933086f));
    setUVTriangle(&triangle[723], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 724:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.854079f), fp_Flt2FP(1.933086f));
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860077f), fp_Flt2FP(1.933086f));
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860320f), fp_Flt2FP(1.926734f));
    setUVTriangle(&triangle[724], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 725:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.172310f));
    setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.178574f));
    setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.178574f));
    setUVTriangle(&triangle[725], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 726:

    setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.178574f));
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.172775f));
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.172310f));
    setUVTriangle(&triangle[726], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 727:

    setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.178574f));
    setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.184838f));
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.184373f));
    setUVTriangle(&triangle[727], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 728:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.184373f));
    setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.178574f));
    setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235960f), fp_Flt2FP(1.178574f));
    setUVTriangle(&triangle[728], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 729:

    setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.863490f), fp_Flt2FP(1.795573f));
    setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.857006f), fp_Flt2FP(1.795574f));
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857250f), fp_Flt2FP(1.801926f));
    setUVTriangle(&triangle[729], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 730:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857250f), fp_Flt2FP(1.801926f));
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.863247f), fp_Flt2FP(1.801926f));
    setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.863490f), fp_Flt2FP(1.795573f));
    setUVTriangle(&triangle[730], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 731:

    setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.883030f), fp_Flt2FP(1.794426f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.794426f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.801236f));
    setUVTriangle(&triangle[731], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 732:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.801236f));
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.882563f), fp_Flt2FP(1.801236f));
    setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883030f), fp_Flt2FP(1.794426f));
    setUVTriangle(&triangle[732], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 733:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.794426f));
    setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.870502f), fp_Flt2FP(1.794426f));
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.870969f), fp_Flt2FP(1.801236f));
    setUVTriangle(&triangle[733], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 734:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.870969f), fp_Flt2FP(1.801236f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.801236f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.794426f));
    setUVTriangle(&triangle[734], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 735:

    setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867171f), fp_Flt2FP(1.685553f));
    setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867172f), fp_Flt2FP(1.679068f));
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860819f), fp_Flt2FP(1.679312f));
    setUVTriangle(&triangle[735], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 736:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860819f), fp_Flt2FP(1.679312f));
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860819f), fp_Flt2FP(1.685309f));
    setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867171f), fp_Flt2FP(1.685553f));
    setUVTriangle(&triangle[736], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 737:

    setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.317091f));
    setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.317091f));
    setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.310280f));
    setUVTriangle(&triangle[737], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 738:

    setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.310280f));
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215992f), fp_Flt2FP(1.310280f));
    setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.317091f));
    setUVTriangle(&triangle[738], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 739:

    setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.310280f));
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.227591f), fp_Flt2FP(1.310280f));
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.226654f), fp_Flt2FP(1.303470f));
    setUVTriangle(&triangle[739], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 740:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226654f), fp_Flt2FP(1.303470f));
    setVector(&v, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.303470f));
    setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.310280f));
    setUVTriangle(&triangle[740], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 741:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.149375f), fp_Flt2FP(1.331001f));
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149375f), fp_Flt2FP(1.336998f));
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.155496f), fp_Flt2FP(1.336517f));
    setUVTriangle(&triangle[741], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 742:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.155496f), fp_Flt2FP(1.336517f));
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.155496f), fp_Flt2FP(1.331483f));
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149375f), fp_Flt2FP(1.331001f));
    setUVTriangle(&triangle[742], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 743:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.704626f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.698828f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853562f), fp_Flt2FP(1.698828f));
    setUVTriangle(&triangle[743], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 744:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853562f), fp_Flt2FP(1.698828f));
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853562f), fp_Flt2FP(1.703691f));
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.704626f));
    setUVTriangle(&triangle[744], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 745:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.698828f));
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.693031f));
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853562f), fp_Flt2FP(1.693966f));
    setUVTriangle(&triangle[745], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 746:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853562f), fp_Flt2FP(1.693966f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853562f), fp_Flt2FP(1.698828f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860373f), fp_Flt2FP(1.698828f));
    setUVTriangle(&triangle[746], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 747:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860077f), fp_Flt2FP(1.933086f));
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854079f), fp_Flt2FP(1.933086f));
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.854562f), fp_Flt2FP(1.939207f));
    setUVTriangle(&triangle[747], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 748:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.854562f), fp_Flt2FP(1.939207f));
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859596f), fp_Flt2FP(1.939207f));
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860077f), fp_Flt2FP(1.933086f));
    setUVTriangle(&triangle[748], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 749:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.172775f));
    setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.178574f));
    setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.249581f), fp_Flt2FP(1.178574f));
    setUVTriangle(&triangle[749], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 750:

    setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.249581f), fp_Flt2FP(1.178574f));
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.249581f), fp_Flt2FP(1.173711f));
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.172775f));
    setUVTriangle(&triangle[750], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 751:

    setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.178574f));
    setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.184373f));
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.249581f), fp_Flt2FP(1.183437f));
    setUVTriangle(&triangle[751], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 752:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.249581f), fp_Flt2FP(1.183437f));
    setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.249581f), fp_Flt2FP(1.178574f));
    setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242770f), fp_Flt2FP(1.178574f));
    setUVTriangle(&triangle[752], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 753:

    setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.863247f), fp_Flt2FP(1.801926f));
    setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.857250f), fp_Flt2FP(1.801926f));
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857731f), fp_Flt2FP(1.808047f));
    setUVTriangle(&triangle[753], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 754:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857731f), fp_Flt2FP(1.808047f));
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862764f), fp_Flt2FP(1.808047f));
    setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.863247f), fp_Flt2FP(1.801926f));
    setUVTriangle(&triangle[754], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 755:

    setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.882563f), fp_Flt2FP(1.801236f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.801236f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.808047f));
    setUVTriangle(&triangle[755], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 756:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.808047f));
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.881629f), fp_Flt2FP(1.808047f));
    setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.882563f), fp_Flt2FP(1.801236f));
    setUVTriangle(&triangle[756], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 757:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.801236f));
    setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.870969f), fp_Flt2FP(1.801236f));
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.871903f), fp_Flt2FP(1.808047f));
    setUVTriangle(&triangle[757], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 758:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.871903f), fp_Flt2FP(1.808047f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.808047f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.876766f), fp_Flt2FP(1.801236f));
    setUVTriangle(&triangle[758], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 759:

    setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.860819f), fp_Flt2FP(1.685309f));
    setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.860819f), fp_Flt2FP(1.679312f));
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.854698f), fp_Flt2FP(1.679794f));
    setUVTriangle(&triangle[759], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 760:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.854698f), fp_Flt2FP(1.679794f));
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854698f), fp_Flt2FP(1.684828f));
    setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.860819f), fp_Flt2FP(1.685309f));
    setUVTriangle(&triangle[760], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 761:

    setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215992f), fp_Flt2FP(1.310280f));
    setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.310280f));
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.303470f));
    setUVTriangle(&triangle[761], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 762:

    setVector(&u, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.221792f), fp_Flt2FP(1.303470f));
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.216929f), fp_Flt2FP(1.303470f));
    setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215992f), fp_Flt2FP(1.310280f));
    setUVTriangle(&triangle[762], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 763:

    setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233345f), fp_Flt2FP(1.193736f));
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230929f), fp_Flt2FP(1.189617f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.226778f), fp_Flt2FP(1.187264f));
    setUVTriangle(&triangle[763], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 764:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226778f), fp_Flt2FP(1.187264f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222002f), fp_Flt2FP(1.187293f));
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.217887f), fp_Flt2FP(1.189715f));
    setUVTriangle(&triangle[764], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 765:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.217887f), fp_Flt2FP(1.189715f));
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.193862f));
    setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215563f), fp_Flt2FP(1.198637f));
    setUVTriangle(&triangle[765], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 766:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226778f), fp_Flt2FP(1.187264f));
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217887f), fp_Flt2FP(1.189715f));
    setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215563f), fp_Flt2FP(1.198637f));
    setUVTriangle(&triangle[766], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 767:

    setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215563f), fp_Flt2FP(1.198637f));
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.217979f), fp_Flt2FP(1.202756f));
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.222130f), fp_Flt2FP(1.205109f));
    setUVTriangle(&triangle[767], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 768:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.222130f), fp_Flt2FP(1.205109f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.226905f), fp_Flt2FP(1.205081f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231021f), fp_Flt2FP(1.202659f));
    setUVTriangle(&triangle[768], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 769:

    setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215563f), fp_Flt2FP(1.198637f));
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.222130f), fp_Flt2FP(1.205109f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231021f), fp_Flt2FP(1.202659f));
    setUVTriangle(&triangle[769], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 770:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226778f), fp_Flt2FP(1.187264f));
    setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215563f), fp_Flt2FP(1.198637f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231021f), fp_Flt2FP(1.202659f));
    setUVTriangle(&triangle[770], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 771:

    setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233345f), fp_Flt2FP(1.193736f));
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.226778f), fp_Flt2FP(1.187264f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231021f), fp_Flt2FP(1.202659f));
    setUVTriangle(&triangle[771], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 772:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233380f), fp_Flt2FP(1.198511f));
    setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.233345f), fp_Flt2FP(1.193736f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231021f), fp_Flt2FP(1.202659f));
    setUVTriangle(&triangle[772], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 773:

    setVector(&u, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.249271f), fp_Flt2FP(1.310296f));
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.246722f), fp_Flt2FP(1.305954f));
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.246369f), fp_Flt2FP(1.306311f));
    setUVTriangle(&triangle[773], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 774:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.246369f), fp_Flt2FP(1.306311f));
    setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.248785f), fp_Flt2FP(1.310430f));
    setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.249271f), fp_Flt2FP(1.310296f));
    setUVTriangle(&triangle[774], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 775:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.246722f), fp_Flt2FP(1.305954f));
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242344f), fp_Flt2FP(1.303470f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242218f), fp_Flt2FP(1.303958f));
    setUVTriangle(&triangle[775], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 776:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242218f), fp_Flt2FP(1.303958f));
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.246369f), fp_Flt2FP(1.306311f));
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.246722f), fp_Flt2FP(1.305954f));
    setUVTriangle(&triangle[776], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 777:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242344f), fp_Flt2FP(1.303470f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237310f), fp_Flt2FP(1.303505f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237443f), fp_Flt2FP(1.303986f));
    setUVTriangle(&triangle[777], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 778:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237443f), fp_Flt2FP(1.303986f));
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242218f), fp_Flt2FP(1.303958f));
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242344f), fp_Flt2FP(1.303470f));
    setUVTriangle(&triangle[778], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 779:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237310f), fp_Flt2FP(1.303505f));
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.232969f), fp_Flt2FP(1.306054f));
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.233327f), fp_Flt2FP(1.306408f));
    setUVTriangle(&triangle[779], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 780:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233327f), fp_Flt2FP(1.306408f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237443f), fp_Flt2FP(1.303986f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237310f), fp_Flt2FP(1.303505f));
    setUVTriangle(&triangle[780], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 781:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.232969f), fp_Flt2FP(1.306054f));
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230482f), fp_Flt2FP(1.310431f));
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.230968f), fp_Flt2FP(1.310556f));
    setUVTriangle(&triangle[781], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 782:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.230968f), fp_Flt2FP(1.310556f));
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.233327f), fp_Flt2FP(1.306408f));
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.232969f), fp_Flt2FP(1.306054f));
    setUVTriangle(&triangle[782], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 783:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.230482f), fp_Flt2FP(1.310431f));
    setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230517f), fp_Flt2FP(1.315465f));
    setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.231003f), fp_Flt2FP(1.315331f));
    setUVTriangle(&triangle[783], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 784:

    setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.231003f), fp_Flt2FP(1.315331f));
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230968f), fp_Flt2FP(1.310556f));
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.230482f), fp_Flt2FP(1.310431f));
    setUVTriangle(&triangle[784], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 785:

    setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.230517f), fp_Flt2FP(1.315465f));
    setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.233066f), fp_Flt2FP(1.319806f));
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.233419f), fp_Flt2FP(1.319450f));
    setUVTriangle(&triangle[785], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 786:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233419f), fp_Flt2FP(1.319450f));
    setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.231003f), fp_Flt2FP(1.315331f));
    setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.230517f), fp_Flt2FP(1.315465f));
    setUVTriangle(&triangle[786], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 787:

    setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233066f), fp_Flt2FP(1.319806f));
    setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237444f), fp_Flt2FP(1.322291f));
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237570f), fp_Flt2FP(1.321803f));
    setUVTriangle(&triangle[787], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 788:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237570f), fp_Flt2FP(1.321803f));
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.233419f), fp_Flt2FP(1.319450f));
    setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.233066f), fp_Flt2FP(1.319806f));
    setUVTriangle(&triangle[788], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 789:

    setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237444f), fp_Flt2FP(1.322291f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242478f), fp_Flt2FP(1.322256f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242346f), fp_Flt2FP(1.321774f));
    setUVTriangle(&triangle[789], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 790:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242346f), fp_Flt2FP(1.321774f));
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237570f), fp_Flt2FP(1.321803f));
    setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237444f), fp_Flt2FP(1.322291f));
    setUVTriangle(&triangle[790], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 791:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.242478f), fp_Flt2FP(1.322256f));
    setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.246820f), fp_Flt2FP(1.319707f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.246461f), fp_Flt2FP(1.319352f));
    setUVTriangle(&triangle[791], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 792:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.246461f), fp_Flt2FP(1.319352f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.242346f), fp_Flt2FP(1.321774f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.242478f), fp_Flt2FP(1.322256f));
    setUVTriangle(&triangle[792], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 793:

    setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.246820f), fp_Flt2FP(1.319707f));
    setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.249306f), fp_Flt2FP(1.315330f));
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.248820f), fp_Flt2FP(1.315205f));
    setUVTriangle(&triangle[793], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 794:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.248820f), fp_Flt2FP(1.315205f));
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.246461f), fp_Flt2FP(1.319352f));
    setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.246820f), fp_Flt2FP(1.319707f));
    setUVTriangle(&triangle[794], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 795:

    setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.249306f), fp_Flt2FP(1.315330f));
    setVector(&v, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.249271f), fp_Flt2FP(1.310296f));
    setVector(&w, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.248785f), fp_Flt2FP(1.310430f));
    setUVTriangle(&triangle[795], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 796:

    setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.248785f), fp_Flt2FP(1.310430f));
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.248820f), fp_Flt2FP(1.315205f));
    setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.249306f), fp_Flt2FP(1.315330f));
    setUVTriangle(&triangle[796], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 797:

    setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240420f), fp_Flt2FP(1.187264f));
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235807f), fp_Flt2FP(1.187264f));
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235807f), fp_Flt2FP(1.190102f));
    setUVTriangle(&triangle[797], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 798:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235807f), fp_Flt2FP(1.190102f));
    setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240420f), fp_Flt2FP(1.190102f));
    setVector(&w, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240420f), fp_Flt2FP(1.187264f));
    setUVTriangle(&triangle[798], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 799:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.964967f));
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.961590f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.961590f));
    setUVTriangle(&triangle[799], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 800:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.961590f));
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.964967f));
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.964967f));
    setUVTriangle(&triangle[800], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 801:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.961590f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.956979f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.956979f));
    setUVTriangle(&triangle[801], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 802:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.956979f));
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.961590f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.961590f));
    setUVTriangle(&triangle[802], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 803:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.956979f));
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.952368f));
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.952368f));
    setUVTriangle(&triangle[803], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 804:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.952368f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.956979f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.956979f));
    setUVTriangle(&triangle[804], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 805:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.952368f));
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.948992f));
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.948992f));
    setUVTriangle(&triangle[805], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 806:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.948992f));
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.948182f), fp_Flt2FP(1.952368f));
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951020f), fp_Flt2FP(1.952368f));
    setUVTriangle(&triangle[806], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 807:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.198029f), fp_Flt2FP(1.260708f));
    setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.193416f), fp_Flt2FP(1.260708f));
    setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193416f), fp_Flt2FP(1.263546f));
    setUVTriangle(&triangle[807], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 808:

    setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.193416f), fp_Flt2FP(1.263546f));
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.198029f), fp_Flt2FP(1.263546f));
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.198029f), fp_Flt2FP(1.260708f));
    setUVTriangle(&triangle[808], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 809:

    setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.193416f), fp_Flt2FP(1.260708f));
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.188803f), fp_Flt2FP(1.260708f));
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188803f), fp_Flt2FP(1.263546f));
    setUVTriangle(&triangle[809], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 810:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.188803f), fp_Flt2FP(1.263546f));
    setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.193416f), fp_Flt2FP(1.263546f));
    setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193416f), fp_Flt2FP(1.260708f));
    setUVTriangle(&triangle[810], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 811:

    setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.871640f), fp_Flt2FP(1.911919f));
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.875016f), fp_Flt2FP(1.911919f));
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.875016f), fp_Flt2FP(1.909081f));
    setUVTriangle(&triangle[811], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 812:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.875016f), fp_Flt2FP(1.909081f));
    setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.871640f), fp_Flt2FP(1.909081f));
    setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.871640f), fp_Flt2FP(1.911919f));
    setUVTriangle(&triangle[812], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 813:

    setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.875016f), fp_Flt2FP(1.911919f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.879627f), fp_Flt2FP(1.911919f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.879627f), fp_Flt2FP(1.909081f));
    setUVTriangle(&triangle[813], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 814:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.879627f), fp_Flt2FP(1.909081f));
    setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.875016f), fp_Flt2FP(1.909081f));
    setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.875016f), fp_Flt2FP(1.911919f));
    setUVTriangle(&triangle[814], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 815:

    setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.879627f), fp_Flt2FP(1.911919f));
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.884239f), fp_Flt2FP(1.911919f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.884239f), fp_Flt2FP(1.909081f));
    setUVTriangle(&triangle[815], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 816:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.884239f), fp_Flt2FP(1.909081f));
    setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.879627f), fp_Flt2FP(1.909081f));
    setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.879627f), fp_Flt2FP(1.911919f));
    setUVTriangle(&triangle[816], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 817:

    setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.884239f), fp_Flt2FP(1.911919f));
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.911919f));
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.909081f));
    setUVTriangle(&triangle[817], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 818:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.909081f));
    setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.884239f), fp_Flt2FP(1.909081f));
    setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.884239f), fp_Flt2FP(1.911919f));
    setUVTriangle(&triangle[818], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 819:

    setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.245033f), fp_Flt2FP(1.187264f));
    setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240420f), fp_Flt2FP(1.187264f));
    setVector(&w, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240420f), fp_Flt2FP(1.190102f));
    setUVTriangle(&triangle[819], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 820:

    setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240420f), fp_Flt2FP(1.190102f));
    setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.245033f), fp_Flt2FP(1.190102f));
    setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.245033f), fp_Flt2FP(1.187264f));
    setUVTriangle(&triangle[820], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 821:

    setVector(&u, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.879763f), fp_Flt2FP(1.105812f));
    setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.879763f), fp_Flt2FP(1.559881f));
    setVector(&w, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.881634f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[821], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 822:

    setVector(&u, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.881634f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.881635f), fp_Flt2FP(1.105812f));
    setVector(&w, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.879763f), fp_Flt2FP(1.105812f));
    setUVTriangle(&triangle[822], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 823:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862904f), fp_Flt2FP(1.105812f));
    setVector(&v, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862905f), fp_Flt2FP(1.559881f));
    setVector(&w, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.864775f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[823], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 824:

    setVector(&u, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864775f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864775f), fp_Flt2FP(1.105812f));
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862904f), fp_Flt2FP(1.105812f));
    setUVTriangle(&triangle[824], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 825:

    setVector(&u, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862905f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862904f), fp_Flt2FP(1.105812f));
    setVector(&w, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.861032f), fp_Flt2FP(1.105812f));
    setUVTriangle(&triangle[825], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 826:

    setVector(&u, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.861032f), fp_Flt2FP(1.105812f));
    setVector(&v, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.861034f), fp_Flt2FP(1.559881f));
    setVector(&w, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862905f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[826], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 827:

    setVector(&u, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873925f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873926f), fp_Flt2FP(1.105812f));
    setVector(&w, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.872056f), fp_Flt2FP(1.105812f));
    setUVTriangle(&triangle[827], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 828:

    setVector(&u, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.872056f), fp_Flt2FP(1.105812f));
    setVector(&v, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.872055f), fp_Flt2FP(1.559881f));
    setVector(&w, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873925f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[828], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 829:

    setVector(&u, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.873925f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(0.088437f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498201f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.874909f), fp_Flt2FP(1.559881f));
    setVector(&w, fp_Flt2FP(0.088359f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498185f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.874910f), fp_Flt2FP(1.105812f));
    setUVTriangle(&triangle[829], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 830:

    setVector(&u, fp_Flt2FP(0.088359f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498185f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.874910f), fp_Flt2FP(1.105812f));
    setVector(&v, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.873926f), fp_Flt2FP(1.105812f));
    setVector(&w, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.873925f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[830], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 831:

    setVector(&u, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.881635f), fp_Flt2FP(1.105812f));
    setVector(&v, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.881634f), fp_Flt2FP(1.559881f));
    setVector(&w, fp_Flt2FP(-0.012461f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498191f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.882617f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[831], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 832:

    setVector(&u, fp_Flt2FP(-0.012461f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498191f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.882617f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(-0.012461f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.882617f), fp_Flt2FP(1.105812f));
    setVector(&w, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.881635f), fp_Flt2FP(1.105812f));
    setUVTriangle(&triangle[832], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 833:

    setVector(&u, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.845039f), fp_Flt2FP(1.557852f));
    setVector(&v, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846911f), fp_Flt2FP(1.557077f));
    setVector(&w, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847686f), fp_Flt2FP(1.555206f));
    setUVTriangle(&triangle[833], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 834:

    setVector(&u, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847686f), fp_Flt2FP(1.555206f));
    setVector(&v, fp_Flt2FP(0.088359f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498185f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847278f), fp_Flt2FP(1.554223f));
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.845041f), fp_Flt2FP(1.555206f));
    setUVTriangle(&triangle[834], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 835:

    setVector(&u, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.845039f), fp_Flt2FP(1.557852f));
    setVector(&v, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847686f), fp_Flt2FP(1.555206f));
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.845041f), fp_Flt2FP(1.555206f));
    setUVTriangle(&triangle[835], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 836:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853753f), fp_Flt2FP(1.530118f));
    setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.852977f), fp_Flt2FP(1.528246f));
    setVector(&w, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851106f), fp_Flt2FP(1.527473f));
    setUVTriangle(&triangle[836], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 837:

    setVector(&u, fp_Flt2FP(-0.012461f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498193f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.850123f), fp_Flt2FP(1.527879f));
    setVector(&v, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.851106f), fp_Flt2FP(1.530118f));
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520341f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851107f), fp_Flt2FP(1.530118f));
    setUVTriangle(&triangle[837], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 838:

    setVector(&u, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.851106f), fp_Flt2FP(1.527473f));
    setVector(&v, fp_Flt2FP(-0.012461f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498193f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.850123f), fp_Flt2FP(1.527879f));
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520341f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851107f), fp_Flt2FP(1.530118f));
    setUVTriangle(&triangle[838], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 839:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853753f), fp_Flt2FP(1.530118f));
    setVector(&v, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.851106f), fp_Flt2FP(1.527473f));
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520341f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851107f), fp_Flt2FP(1.530118f));
    setUVTriangle(&triangle[839], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 840:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.845041f), fp_Flt2FP(1.555206f));
    setVector(&v, fp_Flt2FP(-0.012461f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498191f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.842802f), fp_Flt2FP(1.554223f));
    setVector(&w, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.842395f), fp_Flt2FP(1.555206f));
    setUVTriangle(&triangle[840], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 841:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.845041f), fp_Flt2FP(1.555206f));
    setVector(&v, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.842395f), fp_Flt2FP(1.555206f));
    setVector(&w, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.843170f), fp_Flt2FP(1.557077f));
    setUVTriangle(&triangle[841], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 842:

    setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.845041f), fp_Flt2FP(1.555206f));
    setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.843170f), fp_Flt2FP(1.557077f));
    setVector(&w, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.845039f), fp_Flt2FP(1.557852f));
    setUVTriangle(&triangle[842], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 843:

    setVector(&u, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.852978f), fp_Flt2FP(1.531989f));
    setVector(&v, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853753f), fp_Flt2FP(1.530118f));
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851106f), fp_Flt2FP(1.530118f));
    setUVTriangle(&triangle[843], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 844:

    setVector(&u, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.851108f), fp_Flt2FP(1.532764f));
    setVector(&v, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.852978f), fp_Flt2FP(1.531989f));
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851106f), fp_Flt2FP(1.530118f));
    setUVTriangle(&triangle[844], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 845:

    setVector(&u, fp_Flt2FP(0.088437f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498201f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.850124f), fp_Flt2FP(1.532358f));
    setVector(&v, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.851108f), fp_Flt2FP(1.532764f));
    setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851106f), fp_Flt2FP(1.530118f));
    setUVTriangle(&triangle[845], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 846:

    setVector(&u, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.370744f), fp_Flt2FP(1.098892f));
    setVector(&v, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.380266f), fp_Flt2FP(1.098858f));
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.380260f), fp_Flt2FP(1.097047f));
    setUVTriangle(&triangle[846], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 847:

    setVector(&u, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.380260f), fp_Flt2FP(1.097047f));
    setVector(&v, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.370292f), fp_Flt2FP(1.097075f));
    setVector(&w, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.370744f), fp_Flt2FP(1.098892f));
    setUVTriangle(&triangle[847], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 848:

    setVector(&u, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.734284f), fp_Flt2FP(1.037722f));
    setVector(&v, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.733557f), fp_Flt2FP(1.027986f));
    setVector(&w, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.732275f), fp_Flt2FP(1.028086f));
    setUVTriangle(&triangle[848], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 849:

    setVector(&u, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.732275f), fp_Flt2FP(1.028086f));
    setVector(&v, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.732984f), fp_Flt2FP(1.037588f));
    setVector(&w, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.734284f), fp_Flt2FP(1.037722f));
    setUVTriangle(&triangle[849], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 850:

    setVector(&u, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.736153f), fp_Flt2FP(1.038362f));
    setVector(&v, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.735367f), fp_Flt2FP(1.027851f));
    setVector(&w, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.733557f), fp_Flt2FP(1.027986f));
    setUVTriangle(&triangle[850], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 851:

    setVector(&u, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.733557f), fp_Flt2FP(1.027986f));
    setVector(&v, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.734284f), fp_Flt2FP(1.037722f));
    setVector(&w, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.736153f), fp_Flt2FP(1.038362f));
    setUVTriangle(&triangle[851], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 852:

    setVector(&u, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847898f), fp_Flt2FP(1.513648f));
    setVector(&v, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847863f), fp_Flt2FP(1.525046f));
    setVector(&w, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.849147f), fp_Flt2FP(1.525005f));
    setUVTriangle(&triangle[852], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 853:

    setVector(&u, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.849147f), fp_Flt2FP(1.525005f));
    setVector(&v, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.849181f), fp_Flt2FP(1.514472f));
    setVector(&w, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847898f), fp_Flt2FP(1.513648f));
    setUVTriangle(&triangle[853], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 854:

    setVector(&u, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.846088f), fp_Flt2FP(1.513196f));
    setVector(&v, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846046f), fp_Flt2FP(1.525040f));
    setVector(&w, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847863f), fp_Flt2FP(1.525046f));
    setUVTriangle(&triangle[854], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 855:

    setVector(&u, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847863f), fp_Flt2FP(1.525046f));
    setVector(&v, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.847898f), fp_Flt2FP(1.513648f));
    setVector(&w, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.846088f), fp_Flt2FP(1.513196f));
    setUVTriangle(&triangle[855], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 856:

    setVector(&u, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.527140f), fp_Flt2FP(1.181427f));
    setVector(&v, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.526295f), fp_Flt2FP(1.193014f));
    setVector(&w, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.527578f), fp_Flt2FP(1.193111f));
    setUVTriangle(&triangle[856], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 857:

    setVector(&u, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.527578f), fp_Flt2FP(1.193111f));
    setVector(&v, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.528439f), fp_Flt2FP(1.181290f));
    setVector(&w, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.527140f), fp_Flt2FP(1.181427f));
    setUVTriangle(&triangle[857], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 858:

    setVector(&u, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.525273f), fp_Flt2FP(1.182071f));
    setVector(&v, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.524487f), fp_Flt2FP(1.192882f));
    setVector(&w, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.526295f), fp_Flt2FP(1.193014f));
    setUVTriangle(&triangle[858], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 859:

    setVector(&u, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.526295f), fp_Flt2FP(1.193014f));
    setVector(&v, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.527140f), fp_Flt2FP(1.181427f));
    setVector(&w, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.525273f), fp_Flt2FP(1.182071f));
    setUVTriangle(&triangle[859], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 860:

    setVector(&u, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.370292f), fp_Flt2FP(1.097075f));
    setVector(&v, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.380260f), fp_Flt2FP(1.097047f));
    setVector(&w, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.380301f), fp_Flt2FP(1.095757f));
    setUVTriangle(&triangle[860], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 861:

    setVector(&u, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.380301f), fp_Flt2FP(1.095757f));
    setVector(&v, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.369468f), fp_Flt2FP(1.095792f));
    setVector(&w, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.370292f), fp_Flt2FP(1.097075f));
    setUVTriangle(&triangle[861], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 862:

    setVector(&u, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.361926f), fp_Flt2FP(1.104469f));
    setVector(&v, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.370744f), fp_Flt2FP(1.098892f));
    setVector(&w, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.370292f), fp_Flt2FP(1.097075f));
    setUVTriangle(&triangle[862], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 863:

    setVector(&u, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.370292f), fp_Flt2FP(1.097075f));
    setVector(&v, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.361475f), fp_Flt2FP(1.102659f));
    setVector(&w, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.361926f), fp_Flt2FP(1.104469f));
    setUVTriangle(&triangle[863], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 864:

    setVector(&u, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156136f), fp_Flt2FP(1.196810f));
    setVector(&v, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156338f), fp_Flt2FP(1.182814f));
    setVector(&w, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.154524f), fp_Flt2FP(1.183024f));
    setUVTriangle(&triangle[864], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 865:

    setVector(&u, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.154524f), fp_Flt2FP(1.183024f));
    setVector(&v, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.154316f), fp_Flt2FP(1.197017f));
    setVector(&w, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156136f), fp_Flt2FP(1.196810f));
    setUVTriangle(&triangle[865], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 866:

    setVector(&u, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.727179f), fp_Flt2FP(1.047539f));
    setVector(&v, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.736153f), fp_Flt2FP(1.038362f));
    setVector(&w, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.734284f), fp_Flt2FP(1.037722f));
    setUVTriangle(&triangle[866], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 867:

    setVector(&u, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.734284f), fp_Flt2FP(1.037722f));
    setVector(&v, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.725311f), fp_Flt2FP(1.046898f));
    setVector(&w, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.727179f), fp_Flt2FP(1.047539f));
    setUVTriangle(&triangle[867], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 868:

    setVector(&u, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.728521f), fp_Flt2FP(1.048310f));
    setVector(&v, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.737495f), fp_Flt2FP(1.039134f));
    setVector(&w, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.736153f), fp_Flt2FP(1.038362f));
    setUVTriangle(&triangle[868], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 869:

    setVector(&u, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.736153f), fp_Flt2FP(1.038362f));
    setVector(&v, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.727179f), fp_Flt2FP(1.047539f));
    setVector(&w, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.728521f), fp_Flt2FP(1.048310f));
    setUVTriangle(&triangle[869], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 870:

    setVector(&u, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.851665f), fp_Flt2FP(1.504379f));
    setVector(&v, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.846088f), fp_Flt2FP(1.513196f));
    setVector(&w, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.847898f), fp_Flt2FP(1.513648f));
    setUVTriangle(&triangle[870], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 871:

    setVector(&u, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.847898f), fp_Flt2FP(1.513648f));
    setVector(&v, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853482f), fp_Flt2FP(1.504830f));
    setVector(&w, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851665f), fp_Flt2FP(1.504379f));
    setUVTriangle(&triangle[871], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 872:

    setVector(&u, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226775f), fp_Flt2FP(1.423087f));
    setVector(&v, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215915f), fp_Flt2FP(1.423482f));
    setVector(&w, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.425262f));
    setUVTriangle(&triangle[872], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 873:

    setVector(&u, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.425262f));
    setVector(&v, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.226387f), fp_Flt2FP(1.424868f));
    setVector(&w, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.226775f), fp_Flt2FP(1.423087f));
    setUVTriangle(&triangle[873], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 874:

    setVector(&u, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516282f), fp_Flt2FP(1.172911f));
    setVector(&v, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.525273f), fp_Flt2FP(1.182071f));
    setVector(&w, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.527140f), fp_Flt2FP(1.181427f));
    setUVTriangle(&triangle[874], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 875:

    setVector(&u, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.527140f), fp_Flt2FP(1.181427f));
    setVector(&v, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518149f), fp_Flt2FP(1.172267f));
    setVector(&w, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516282f), fp_Flt2FP(1.172911f));
    setUVTriangle(&triangle[875], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 876:

    setVector(&u, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.514941f), fp_Flt2FP(1.173685f));
    setVector(&v, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.523932f), fp_Flt2FP(1.182845f));
    setVector(&w, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.525273f), fp_Flt2FP(1.182071f));
    setUVTriangle(&triangle[876], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 877:

    setVector(&u, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.525273f), fp_Flt2FP(1.182071f));
    setVector(&v, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516282f), fp_Flt2FP(1.172911f));
    setVector(&w, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.514941f), fp_Flt2FP(1.173685f));
    setUVTriangle(&triangle[877], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 878:

    setVector(&u, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215419f), fp_Flt2FP(1.104747f));
    setVector(&v, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.361926f), fp_Flt2FP(1.104469f));
    setVector(&w, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.361475f), fp_Flt2FP(1.102659f));
    setUVTriangle(&triangle[878], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 879:

    setVector(&u, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.361475f), fp_Flt2FP(1.102659f));
    setVector(&v, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215414f), fp_Flt2FP(1.102937f));
    setVector(&w, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215419f), fp_Flt2FP(1.104747f));
    setUVTriangle(&triangle[879], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 880:

    setVector(&u, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.731858f), fp_Flt2FP(1.193027f));
    setVector(&v, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.725311f), fp_Flt2FP(1.046898f));
    setVector(&w, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.724011f), fp_Flt2FP(1.046764f));
    setUVTriangle(&triangle[880], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 881:

    setVector(&u, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.724011f), fp_Flt2FP(1.046764f));
    setVector(&v, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.730576f), fp_Flt2FP(1.193127f));
    setVector(&w, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.731858f), fp_Flt2FP(1.193027f));
    setUVTriangle(&triangle[881], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 882:

    setVector(&u, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.733668f), fp_Flt2FP(1.192892f));
    setVector(&v, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.727179f), fp_Flt2FP(1.047539f));
    setVector(&w, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.725311f), fp_Flt2FP(1.046898f));
    setUVTriangle(&triangle[882], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 883:

    setVector(&u, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.725311f), fp_Flt2FP(1.046898f));
    setVector(&v, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.731858f), fp_Flt2FP(1.193027f));
    setVector(&w, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.733668f), fp_Flt2FP(1.192892f));
    setUVTriangle(&triangle[883], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 884:

    setVector(&u, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.734945f), fp_Flt2FP(1.192799f));
    setVector(&v, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.728521f), fp_Flt2FP(1.048310f));
    setVector(&w, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.727179f), fp_Flt2FP(1.047539f));
    setUVTriangle(&triangle[884], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 885:

    setVector(&u, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.727179f), fp_Flt2FP(1.047539f));
    setVector(&v, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.733668f), fp_Flt2FP(1.192892f));
    setVector(&w, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.734945f), fp_Flt2FP(1.192799f));
    setUVTriangle(&triangle[885], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 886:

    setVector(&u, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.851942f), fp_Flt2FP(1.360195f));
    setVector(&v, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.851665f), fp_Flt2FP(1.504379f));
    setVector(&w, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853482f), fp_Flt2FP(1.504830f));
    setUVTriangle(&triangle[886], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 887:

    setVector(&u, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853482f), fp_Flt2FP(1.504830f));
    setVector(&v, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853753f), fp_Flt2FP(1.360200f));
    setVector(&w, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.851942f), fp_Flt2FP(1.360195f));
    setUVTriangle(&triangle[887], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 888:

    setVector(&u, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.524291f), fp_Flt2FP(1.027979f));
    setVector(&v, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.518149f), fp_Flt2FP(1.172267f));
    setVector(&w, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.519449f), fp_Flt2FP(1.172131f));
    setUVTriangle(&triangle[888], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 889:

    setVector(&u, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.519449f), fp_Flt2FP(1.172131f));
    setVector(&v, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.525573f), fp_Flt2FP(1.028076f));
    setVector(&w, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.524291f), fp_Flt2FP(1.027979f));
    setUVTriangle(&triangle[889], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 890:

    setVector(&u, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.522481f), fp_Flt2FP(1.027847f));
    setVector(&v, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.516282f), fp_Flt2FP(1.172911f));
    setVector(&w, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.518149f), fp_Flt2FP(1.172267f));
    setUVTriangle(&triangle[890], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 891:

    setVector(&u, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.518149f), fp_Flt2FP(1.172267f));
    setVector(&v, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.524291f), fp_Flt2FP(1.027979f));
    setVector(&w, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.522481f), fp_Flt2FP(1.027847f));
    setUVTriangle(&triangle[891], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 892:

    setVector(&u, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.521203f), fp_Flt2FP(1.027757f));
    setVector(&v, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.514941f), fp_Flt2FP(1.173685f));
    setVector(&w, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.516282f), fp_Flt2FP(1.172911f));
    setUVTriangle(&triangle[892], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 893:

    setVector(&u, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.516282f), fp_Flt2FP(1.172911f));
    setVector(&v, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.522481f), fp_Flt2FP(1.027847f));
    setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.521203f), fp_Flt2FP(1.027757f));
    setUVTriangle(&triangle[893], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 894:

    setVector(&u, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.285882f), fp_Flt2FP(1.271422f));
    setVector(&v, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.287694f), fp_Flt2FP(1.271422f));
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(1.270132f));
    setUVTriangle(&triangle[894], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 895:

    setVector(&u, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.284597f), fp_Flt2FP(1.270146f));
    setVector(&v, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.285882f), fp_Flt2FP(1.271422f));
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(1.270132f));
    setUVTriangle(&triangle[895], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 896:

    setVector(&u, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.284593f), fp_Flt2FP(1.268328f));
    setVector(&v, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.284597f), fp_Flt2FP(1.270146f));
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(1.270132f));
    setUVTriangle(&triangle[896], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 897:

    setVector(&u, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.285873f), fp_Flt2FP(1.267045f));
    setVector(&v, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.284593f), fp_Flt2FP(1.268328f));
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(1.270132f));
    setUVTriangle(&triangle[897], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 898:

    setVector(&u, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.287687f), fp_Flt2FP(1.267038f));
    setVector(&v, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.285873f), fp_Flt2FP(1.267045f));
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(1.270132f));
    setUVTriangle(&triangle[898], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 899:

    setVector(&u, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.288972f), fp_Flt2FP(1.268321f));
    setVector(&v, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.287687f), fp_Flt2FP(1.267038f));
    setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.288976f), fp_Flt2FP(1.270132f));
    setUVTriangle(&triangle[899], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 900:

    setVector(&u, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.191897f), fp_Flt2FP(1.270357f));
    setVector(&v, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.193182f), fp_Flt2FP(1.269073f));
    setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193185f), fp_Flt2FP(1.267263f));
    setUVTriangle(&triangle[900], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 901:

    setVector(&u, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.190083f), fp_Flt2FP(1.270357f));
    setVector(&v, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.191897f), fp_Flt2FP(1.270357f));
    setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193185f), fp_Flt2FP(1.267263f));
    setUVTriangle(&triangle[901], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 902:

    setVector(&u, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.193185f), fp_Flt2FP(1.267263f));
    setVector(&v, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.190092f), fp_Flt2FP(1.265973f));
    setVector(&w, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188807f), fp_Flt2FP(1.267256f));
    setUVTriangle(&triangle[902], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 903:

    setVector(&u, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.193185f), fp_Flt2FP(1.267263f));
    setVector(&v, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.188807f), fp_Flt2FP(1.267256f));
    setVector(&w, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188803f), fp_Flt2FP(1.269067f));
    setUVTriangle(&triangle[903], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 904:

    setVector(&u, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.190083f), fp_Flt2FP(1.270357f));
    setVector(&v, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.193185f), fp_Flt2FP(1.267263f));
    setVector(&w, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188803f), fp_Flt2FP(1.269067f));
    setUVTriangle(&triangle[904], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 905:

    setVector(&u, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.191906f), fp_Flt2FP(1.265973f));
    setVector(&v, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.190092f), fp_Flt2FP(1.265973f));
    setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.193185f), fp_Flt2FP(1.267263f));
    setUVTriangle(&triangle[905], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 906:

    setVector(&u, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.137275f), fp_Flt2FP(1.200994f));
    setVector(&v, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.146799f), fp_Flt2FP(1.201114f));
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.146845f), fp_Flt2FP(1.199721f));
    setUVTriangle(&triangle[906], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 907:

    setVector(&u, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.146845f), fp_Flt2FP(1.199721f));
    setVector(&v, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.136875f), fp_Flt2FP(1.199598f));
    setVector(&w, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.137275f), fp_Flt2FP(1.200994f));
    setUVTriangle(&triangle[907], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 908:

    setVector(&u, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.137023f), fp_Flt2FP(1.202803f));
    setVector(&v, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.146781f), fp_Flt2FP(1.202918f));
    setVector(&w, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.146799f), fp_Flt2FP(1.201114f));
    setUVTriangle(&triangle[908], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 909:

    setVector(&u, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.146799f), fp_Flt2FP(1.201114f));
    setVector(&v, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.137275f), fp_Flt2FP(1.200994f));
    setVector(&w, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.137023f), fp_Flt2FP(1.202803f));
    setUVTriangle(&triangle[909], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 910:

    setVector(&u, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.945108f), fp_Flt2FP(1.986925f));
    setVector(&v, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.945372f), fp_Flt2FP(1.997459f));
    setVector(&w, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.946764f), fp_Flt2FP(1.997395f));
    setUVTriangle(&triangle[910], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 911:

    setVector(&u, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.946764f), fp_Flt2FP(1.997395f));
    setVector(&v, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.946520f), fp_Flt2FP(1.987639f));
    setVector(&w, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.945108f), fp_Flt2FP(1.986925f));
    setUVTriangle(&triangle[911], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 912:

    setVector(&u, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.943280f), fp_Flt2FP(1.986101f));
    setVector(&v, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943565f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.945372f), fp_Flt2FP(1.997459f));
    setUVTriangle(&triangle[912], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 913:

    setVector(&u, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.945372f), fp_Flt2FP(1.997459f));
    setVector(&v, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.945108f), fp_Flt2FP(1.986925f));
    setVector(&w, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.943280f), fp_Flt2FP(1.986101f));
    setUVTriangle(&triangle[913], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 914:

    setVector(&u, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.201151f));
    setVector(&v, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.134427f), fp_Flt2FP(1.200984f));
    setVector(&w, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.134379f), fp_Flt2FP(1.199598f));
    setUVTriangle(&triangle[914], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 915:

    setVector(&u, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.134379f), fp_Flt2FP(1.199598f));
    setVector(&v, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122977f), fp_Flt2FP(1.199754f));
    setVector(&w, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.201151f));
    setUVTriangle(&triangle[915], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 916:

    setVector(&u, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122835f), fp_Flt2FP(1.202959f));
    setVector(&v, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.134448f), fp_Flt2FP(1.202795f));
    setVector(&w, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.134427f), fp_Flt2FP(1.200984f));
    setUVTriangle(&triangle[916], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 917:

    setVector(&u, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.134427f), fp_Flt2FP(1.200984f));
    setVector(&v, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.201151f));
    setVector(&w, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122835f), fp_Flt2FP(1.202959f));
    setUVTriangle(&triangle[917], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 918:

    setVector(&u, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.852343f), fp_Flt2FP(1.548984f));
    setVector(&v, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.852072f), fp_Flt2FP(1.559817f));
    setVector(&w, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853463f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[918], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 919:

    setVector(&u, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853463f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.853753f), fp_Flt2FP(1.548270f));
    setVector(&w, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.852343f), fp_Flt2FP(1.548984f));
    setUVTriangle(&triangle[919], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 920:

    setVector(&u, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.850513f), fp_Flt2FP(1.549808f));
    setVector(&v, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.850265f), fp_Flt2FP(1.559776f));
    setVector(&w, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.852072f), fp_Flt2FP(1.559817f));
    setUVTriangle(&triangle[920], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 921:

    setVector(&u, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.852072f), fp_Flt2FP(1.559817f));
    setVector(&v, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.852343f), fp_Flt2FP(1.548984f));
    setVector(&w, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.850513f), fp_Flt2FP(1.549808f));
    setUVTriangle(&triangle[921], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 922:

    setVector(&u, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.943447f), fp_Flt2FP(1.948992f));
    setVector(&v, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943928f), fp_Flt2FP(1.962980f));
    setVector(&w, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.945756f), fp_Flt2FP(1.963363f));
    setUVTriangle(&triangle[922], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 923:

    setVector(&u, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.945756f), fp_Flt2FP(1.963363f));
    setVector(&v, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.945275f), fp_Flt2FP(1.949376f));
    setVector(&w, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.943447f), fp_Flt2FP(1.948992f));
    setUVTriangle(&triangle[923], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 924:

    setVector(&u, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.232590f), fp_Flt2FP(1.335581f));
    setVector(&v, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.232234f), fp_Flt2FP(1.324717f));
    setVector(&w, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.230482f), fp_Flt2FP(1.325228f));
    setUVTriangle(&triangle[924], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 925:

    setVector(&u, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.230482f), fp_Flt2FP(1.325228f));
    setVector(&v, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.230845f), fp_Flt2FP(1.336092f));
    setVector(&w, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.232590f), fp_Flt2FP(1.335581f));
    setUVTriangle(&triangle[925], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 926:

    setVector(&u, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955839f), fp_Flt2FP(1.978107f));
    setVector(&v, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.945108f), fp_Flt2FP(1.986925f));
    setVector(&w, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.946520f), fp_Flt2FP(1.987639f));
    setUVTriangle(&triangle[926], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 927:

    setVector(&u, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.946520f), fp_Flt2FP(1.987639f));
    setVector(&v, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.957251f), fp_Flt2FP(1.978821f));
    setVector(&w, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955839f), fp_Flt2FP(1.978107f));
    setUVTriangle(&triangle[927], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 928:

    setVector(&u, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.954011f), fp_Flt2FP(1.977284f));
    setVector(&v, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943280f), fp_Flt2FP(1.986101f));
    setVector(&w, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.945108f), fp_Flt2FP(1.986925f));
    setUVTriangle(&triangle[928], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 929:

    setVector(&u, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.945108f), fp_Flt2FP(1.986925f));
    setVector(&v, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955839f), fp_Flt2FP(1.978107f));
    setVector(&w, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.954011f), fp_Flt2FP(1.977284f));
    setUVTriangle(&triangle[929], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 930:

    setVector(&u, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.186376f), fp_Flt2FP(1.270101f));
    setVector(&v, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.186311f), fp_Flt2FP(1.256107f));
    setVector(&w, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.184498f), fp_Flt2FP(1.256562f));
    setUVTriangle(&triangle[930], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 931:

    setVector(&u, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.184498f), fp_Flt2FP(1.256562f));
    setVector(&v, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.184564f), fp_Flt2FP(1.270557f));
    setVector(&w, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.186376f), fp_Flt2FP(1.270101f));
    setUVTriangle(&triangle[931], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 932:

    setVector(&u, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.226837f), fp_Flt2FP(1.427689f));
    setVector(&v, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.215971f), fp_Flt2FP(1.427752f));
    setVector(&w, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.429523f));
    setUVTriangle(&triangle[932], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 933:

    setVector(&u, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.215528f), fp_Flt2FP(1.429523f));
    setVector(&v, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.226396f), fp_Flt2FP(1.429460f));
    setVector(&w, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.226837f), fp_Flt2FP(1.427689f));
    setUVTriangle(&triangle[933], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 934:

    setVector(&u, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.841612f), fp_Flt2FP(1.540167f));
    setVector(&v, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.852343f), fp_Flt2FP(1.548984f));
    setVector(&w, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853753f), fp_Flt2FP(1.548270f));
    setUVTriangle(&triangle[934], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 935:

    setVector(&u, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853753f), fp_Flt2FP(1.548270f));
    setVector(&v, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.843023f), fp_Flt2FP(1.539454f));
    setVector(&w, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.841612f), fp_Flt2FP(1.540167f));
    setUVTriangle(&triangle[935], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 936:

    setVector(&u, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.839782f), fp_Flt2FP(1.540990f));
    setVector(&v, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.850513f), fp_Flt2FP(1.549808f));
    setVector(&w, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.852343f), fp_Flt2FP(1.548984f));
    setUVTriangle(&triangle[936], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 937:

    setVector(&u, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.852343f), fp_Flt2FP(1.548984f));
    setVector(&v, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.841612f), fp_Flt2FP(1.540167f));
    setVector(&w, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.839782f), fp_Flt2FP(1.540990f));
    setUVTriangle(&triangle[937], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 938:

    setVector(&u, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.031746f), fp_Flt2FP(1.097880f));
    setVector(&v, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212988f), fp_Flt2FP(1.097137f));
    setVector(&w, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212536f), fp_Flt2FP(1.095757f));
    setUVTriangle(&triangle[938], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 939:

    setVector(&u, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212536f), fp_Flt2FP(1.095757f));
    setVector(&v, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.031741f), fp_Flt2FP(1.096485f));
    setVector(&w, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.031746f), fp_Flt2FP(1.097880f));
    setUVTriangle(&triangle[939], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 940:

    setVector(&u, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.031795f), fp_Flt2FP(1.099690f));
    setVector(&v, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212803f), fp_Flt2FP(1.098948f));
    setVector(&w, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212988f), fp_Flt2FP(1.097137f));
    setUVTriangle(&triangle[940], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 941:

    setVector(&u, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212988f), fp_Flt2FP(1.097137f));
    setVector(&v, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.031746f), fp_Flt2FP(1.097880f));
    setVector(&w, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.031795f), fp_Flt2FP(1.099690f));
    setUVTriangle(&triangle[941], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 942:

    setVector(&u, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955416f), fp_Flt2FP(1.797878f));
    setVector(&v, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955839f), fp_Flt2FP(1.978107f));
    setVector(&w, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.957251f), fp_Flt2FP(1.978821f));
    setUVTriangle(&triangle[942], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 943:

    setVector(&u, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.957251f), fp_Flt2FP(1.978821f));
    setVector(&v, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.956807f), fp_Flt2FP(1.797813f));
    setVector(&w, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955416f), fp_Flt2FP(1.797878f));
    setUVTriangle(&triangle[943], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 944:

    setVector(&u, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.953609f), fp_Flt2FP(1.797920f));
    setVector(&v, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.954011f), fp_Flt2FP(1.977284f));
    setVector(&w, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.955839f), fp_Flt2FP(1.978107f));
    setUVTriangle(&triangle[944], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 945:

    setVector(&u, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.955839f), fp_Flt2FP(1.978107f));
    setVector(&v, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.955416f), fp_Flt2FP(1.797878f));
    setVector(&w, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.953609f), fp_Flt2FP(1.797920f));
    setUVTriangle(&triangle[945], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 946:

    setVector(&u, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.033618f), fp_Flt2FP(1.103511f));
    setVector(&v, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212536f), fp_Flt2FP(1.104191f));
    setVector(&w, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212988f), fp_Flt2FP(1.102810f));
    setUVTriangle(&triangle[946], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 947:

    setVector(&u, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212988f), fp_Flt2FP(1.102810f));
    setVector(&v, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.033623f), fp_Flt2FP(1.102117f));
    setVector(&w, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.033618f), fp_Flt2FP(1.103511f));
    setUVTriangle(&triangle[947], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 948:

    setVector(&u, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.033569f), fp_Flt2FP(1.105315f));
    setVector(&v, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.212721f), fp_Flt2FP(1.106008f));
    setVector(&w, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.212536f), fp_Flt2FP(1.104191f));
    setUVTriangle(&triangle[948], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 949:

    setVector(&u, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.212536f), fp_Flt2FP(1.104191f));
    setVector(&v, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.033618f), fp_Flt2FP(1.103511f));
    setVector(&w, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.033569f), fp_Flt2FP(1.105315f));
    setUVTriangle(&triangle[949], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 950:

    setVector(&u, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.842028f), fp_Flt2FP(1.360237f));
    setVector(&v, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.841612f), fp_Flt2FP(1.540167f));
    setVector(&w, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.843023f), fp_Flt2FP(1.539454f));
    setUVTriangle(&triangle[950], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 951:

    setVector(&u, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.843023f), fp_Flt2FP(1.539454f));
    setVector(&v, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.843420f), fp_Flt2FP(1.360302f));
    setVector(&w, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.842028f), fp_Flt2FP(1.360237f));
    setUVTriangle(&triangle[951], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 952:

    setVector(&u, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.840221f), fp_Flt2FP(1.360195f));
    setVector(&v, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.839782f), fp_Flt2FP(1.540990f));
    setVector(&w, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.841612f), fp_Flt2FP(1.540167f));
    setUVTriangle(&triangle[952], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 953:

    setVector(&u, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.841612f), fp_Flt2FP(1.540167f));
    setVector(&v, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.842028f), fp_Flt2FP(1.360237f));
    setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.840221f), fp_Flt2FP(1.360195f));
    setUVTriangle(&triangle[953], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 954:

    setVector(&u, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.236285f), fp_Flt2FP(1.324740f));
    setVector(&v, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235017f), fp_Flt2FP(1.326037f));
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(1.327852f));
    setUVTriangle(&triangle[954], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 955:

    setVector(&u, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238103f), fp_Flt2FP(1.324717f));
    setVector(&v, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.236285f), fp_Flt2FP(1.324740f));
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(1.327852f));
    setUVTriangle(&triangle[955], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 956:

    setVector(&u, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239397f), fp_Flt2FP(1.325984f));
    setVector(&v, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238103f), fp_Flt2FP(1.324717f));
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(1.327852f));
    setUVTriangle(&triangle[956], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 957:

    setVector(&u, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.239425f), fp_Flt2FP(1.327798f));
    setVector(&v, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239397f), fp_Flt2FP(1.325984f));
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(1.327852f));
    setUVTriangle(&triangle[957], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 958:

    setVector(&u, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238156f), fp_Flt2FP(1.329098f));
    setVector(&v, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239425f), fp_Flt2FP(1.327798f));
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(1.327852f));
    setUVTriangle(&triangle[958], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 959:

    setVector(&u, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.236346f), fp_Flt2FP(1.329120f));
    setVector(&v, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238156f), fp_Flt2FP(1.329098f));
    setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.235045f), fp_Flt2FP(1.327852f));
    setUVTriangle(&triangle[959], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 960:

    setVector(&u, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235816f), fp_Flt2FP(1.195643f));
    setVector(&v, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.237111f), fp_Flt2FP(1.196919f));
    setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238927f), fp_Flt2FP(1.196908f));
    setUVTriangle(&triangle[960], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 961:

    setVector(&u, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235807f), fp_Flt2FP(1.193833f));
    setVector(&v, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.235816f), fp_Flt2FP(1.195643f));
    setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238927f), fp_Flt2FP(1.196908f));
    setUVTriangle(&triangle[961], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 962:

    setVector(&u, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238927f), fp_Flt2FP(1.196908f));
    setVector(&v, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240185f), fp_Flt2FP(1.193799f));
    setVector(&w, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238895f), fp_Flt2FP(1.192529f));
    setUVTriangle(&triangle[962], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 963:

    setVector(&u, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238927f), fp_Flt2FP(1.196908f));
    setVector(&v, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238895f), fp_Flt2FP(1.192529f));
    setVector(&w, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237079f), fp_Flt2FP(1.192540f));
    setUVTriangle(&triangle[963], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 964:

    setVector(&u, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.235807f), fp_Flt2FP(1.193833f));
    setVector(&v, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238927f), fp_Flt2FP(1.196908f));
    setVector(&w, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237079f), fp_Flt2FP(1.192540f));
    setUVTriangle(&triangle[964], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 965:

    setVector(&u, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240199f), fp_Flt2FP(1.195615f));
    setVector(&v, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.240185f), fp_Flt2FP(1.193799f));
    setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238927f), fp_Flt2FP(1.196908f));
    setUVTriangle(&triangle[965], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 966:

    setVector(&u, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.292550f), fp_Flt2FP(1.496741f));
    setVector(&v, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.283134f), fp_Flt2FP(1.495323f));
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.282864f), fp_Flt2FP(1.497113f));
    setUVTriangle(&triangle[966], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 967:

    setVector(&u, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.282864f), fp_Flt2FP(1.497113f));
    setVector(&v, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.292719f), fp_Flt2FP(1.498606f));
    setVector(&w, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.292550f), fp_Flt2FP(1.496741f));
    setUVTriangle(&triangle[967], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 968:

    setVector(&u, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.266304f), fp_Flt2FP(1.486294f));
    setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.275617f), fp_Flt2FP(1.483369f));
    setVector(&w, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.275228f), fp_Flt2FP(1.482143f));
    setUVTriangle(&triangle[968], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 969:

    setVector(&u, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.275228f), fp_Flt2FP(1.482143f));
    setVector(&v, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.266138f), fp_Flt2FP(1.484997f));
    setVector(&w, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.266304f), fp_Flt2FP(1.486294f));
    setUVTriangle(&triangle[969], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 970:

    setVector(&u, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.266105f), fp_Flt2FP(1.488259f));
    setVector(&v, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.276161f), fp_Flt2FP(1.485100f));
    setVector(&w, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.275617f), fp_Flt2FP(1.483369f));
    setUVTriangle(&triangle[970], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 971:

    setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.275617f), fp_Flt2FP(1.483369f));
    setVector(&v, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.266304f), fp_Flt2FP(1.486294f));
    setVector(&w, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.266105f), fp_Flt2FP(1.488259f));
    setUVTriangle(&triangle[971], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 972:

    setVector(&u, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.992288f), fp_Flt2FP(1.442027f));
    setVector(&v, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.994433f), fp_Flt2FP(1.453222f));
    setVector(&w, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.995685f), fp_Flt2FP(1.452936f));
    setUVTriangle(&triangle[972], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 973:

    setVector(&u, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.995685f), fp_Flt2FP(1.452936f));
    setVector(&v, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.993705f), fp_Flt2FP(1.442590f));
    setVector(&w, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.992288f), fp_Flt2FP(1.442027f));
    setUVTriangle(&triangle[973], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 974:

    setVector(&u, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.990424f), fp_Flt2FP(1.441929f));
    setVector(&v, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.992648f), fp_Flt2FP(1.453564f));
    setVector(&w, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.994433f), fp_Flt2FP(1.453222f));
    setUVTriangle(&triangle[974], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 975:

    setVector(&u, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.994433f), fp_Flt2FP(1.453222f));
    setVector(&v, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.992288f), fp_Flt2FP(1.442027f));
    setVector(&w, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.990424f), fp_Flt2FP(1.441929f));
    setUVTriangle(&triangle[975], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 976:

    setVector(&u, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.344260f), fp_Flt2FP(1.488846f));
    setVector(&v, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.333048f), fp_Flt2FP(1.485802f));
    setVector(&w, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.332707f), fp_Flt2FP(1.487042f));
    setUVTriangle(&triangle[976], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 977:

    setVector(&u, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.332707f), fp_Flt2FP(1.487042f));
    setVector(&v, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.344145f), fp_Flt2FP(1.490148f));
    setVector(&w, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.344260f), fp_Flt2FP(1.488846f));
    setUVTriangle(&triangle[977], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 978:

    setVector(&u, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.343985f), fp_Flt2FP(1.486891f));
    setVector(&v, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.333523f), fp_Flt2FP(1.484052f));
    setVector(&w, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.333048f), fp_Flt2FP(1.485802f));
    setUVTriangle(&triangle[978], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 979:

    setVector(&u, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.333048f), fp_Flt2FP(1.485802f));
    setVector(&v, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.344260f), fp_Flt2FP(1.488846f));
    setVector(&w, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.343985f), fp_Flt2FP(1.486891f));
    setUVTriangle(&triangle[979], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 980:

    setVector(&u, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.292719f), fp_Flt2FP(1.498606f));
    setVector(&v, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.282864f), fp_Flt2FP(1.497113f));
    setVector(&w, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.282627f), fp_Flt2FP(1.498382f));
    setUVTriangle(&triangle[980], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 981:

    setVector(&u, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.282627f), fp_Flt2FP(1.498382f));
    setVector(&v, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.293338f), fp_Flt2FP(1.500000f));
    setVector(&w, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.292719f), fp_Flt2FP(1.498606f));
    setUVTriangle(&triangle[981], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 982:

    setVector(&u, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.302115f), fp_Flt2FP(1.492575f));
    setVector(&v, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.292550f), fp_Flt2FP(1.496741f));
    setVector(&w, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.292719f), fp_Flt2FP(1.498606f));
    setUVTriangle(&triangle[982], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 983:

    setVector(&u, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.292719f), fp_Flt2FP(1.498606f));
    setVector(&v, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.302286f), fp_Flt2FP(1.494433f));
    setVector(&w, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.302115f), fp_Flt2FP(1.492575f));
    setUVTriangle(&triangle[983], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 984:

    setVector(&u, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.151687f), fp_Flt2FP(1.196810f));
    setVector(&v, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.151889f), fp_Flt2FP(1.182814f));
    setVector(&w, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.150075f), fp_Flt2FP(1.183024f));
    setUVTriangle(&triangle[984], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 985:

    setVector(&u, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150075f), fp_Flt2FP(1.183024f));
    setVector(&v, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149867f), fp_Flt2FP(1.197017f));
    setVector(&w, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.151687f), fp_Flt2FP(1.196810f));
    setUVTriangle(&triangle[985], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 986:

    setVector(&u, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255126f), fp_Flt2FP(1.481611f));
    setVector(&v, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.266105f), fp_Flt2FP(1.488259f));
    setVector(&w, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.266304f), fp_Flt2FP(1.486294f));
    setUVTriangle(&triangle[986], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 987:

    setVector(&u, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.266304f), fp_Flt2FP(1.486294f));
    setVector(&v, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255324f), fp_Flt2FP(1.479646f));
    setVector(&w, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255126f), fp_Flt2FP(1.481611f));
    setUVTriangle(&triangle[987], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 988:

    setVector(&u, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.254680f), fp_Flt2FP(1.483094f));
    setVector(&v, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.265659f), fp_Flt2FP(1.489742f));
    setVector(&w, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.266105f), fp_Flt2FP(1.488259f));
    setUVTriangle(&triangle[988], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 989:

    setVector(&u, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.266105f), fp_Flt2FP(1.488259f));
    setVector(&v, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255126f), fp_Flt2FP(1.481611f));
    setVector(&w, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.254680f), fp_Flt2FP(1.483094f));
    setUVTriangle(&triangle[989], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 990:

    setVector(&u, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.994213f), fp_Flt2FP(1.432209f));
    setVector(&v, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.990424f), fp_Flt2FP(1.441929f));
    setVector(&w, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.992288f), fp_Flt2FP(1.442027f));
    setUVTriangle(&triangle[990], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 991:

    setVector(&u, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.992288f), fp_Flt2FP(1.442027f));
    setVector(&v, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.996083f), fp_Flt2FP(1.432305f));
    setVector(&w, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.994213f), fp_Flt2FP(1.432209f));
    setUVTriangle(&triangle[991], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 992:

    setVector(&u, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.200050f), fp_Flt2FP(1.256107f));
    setVector(&v, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.189190f), fp_Flt2FP(1.256501f));
    setVector(&w, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188803f), fp_Flt2FP(1.258282f));
    setUVTriangle(&triangle[992], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 993:

    setVector(&u, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.188803f), fp_Flt2FP(1.258282f));
    setVector(&v, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.199663f), fp_Flt2FP(1.257887f));
    setVector(&w, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.200050f), fp_Flt2FP(1.256107f));
    setUVTriangle(&triangle[993], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 994:

    setVector(&u, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.354694f), fp_Flt2FP(1.479817f));
    setVector(&v, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.343985f), fp_Flt2FP(1.486891f));
    setVector(&w, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.344260f), fp_Flt2FP(1.488846f));
    setUVTriangle(&triangle[994], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 995:

    setVector(&u, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.344260f), fp_Flt2FP(1.488846f));
    setVector(&v, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.354969f), fp_Flt2FP(1.481773f));
    setVector(&w, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.354694f), fp_Flt2FP(1.479817f));
    setUVTriangle(&triangle[995], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 996:

    setVector(&u, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.354190f), fp_Flt2FP(1.478353f));
    setVector(&v, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.343481f), fp_Flt2FP(1.485426f));
    setVector(&w, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.343985f), fp_Flt2FP(1.486891f));
    setUVTriangle(&triangle[996], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 997:

    setVector(&u, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.343985f), fp_Flt2FP(1.486891f));
    setVector(&v, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.354694f), fp_Flt2FP(1.479817f));
    setVector(&w, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.354190f), fp_Flt2FP(1.478353f));
    setUVTriangle(&triangle[997], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 998:

    setVector(&u, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.325519f), fp_Flt2FP(1.495907f));
    setVector(&v, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.302115f), fp_Flt2FP(1.492575f));
    setVector(&w, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.302286f), fp_Flt2FP(1.494433f));
    setUVTriangle(&triangle[998], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 999:

    setVector(&u, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.302286f), fp_Flt2FP(1.494433f));
    setVector(&v, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.325248f), fp_Flt2FP(1.497697f));
    setVector(&w, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.325519f), fp_Flt2FP(1.495907f));
    setUVTriangle(&triangle[999], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1000:

    setVector(&u, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.232978f), fp_Flt2FP(1.486649f));
    setVector(&v, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255324f), fp_Flt2FP(1.479646f));
    setVector(&w, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255159f), fp_Flt2FP(1.478349f));
    setUVTriangle(&triangle[1000], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1001:

    setVector(&u, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255159f), fp_Flt2FP(1.478349f));
    setVector(&v, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.232589f), fp_Flt2FP(1.485423f));
    setVector(&w, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.232978f), fp_Flt2FP(1.486649f));
    setUVTriangle(&triangle[1001], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1002:

    setVector(&u, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.233522f), fp_Flt2FP(1.488380f));
    setVector(&v, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.255126f), fp_Flt2FP(1.481611f));
    setVector(&w, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.255324f), fp_Flt2FP(1.479646f));
    setUVTriangle(&triangle[1002], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1003:

    setVector(&u, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.255324f), fp_Flt2FP(1.479646f));
    setVector(&v, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.232978f), fp_Flt2FP(1.486649f));
    setVector(&w, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.233522f), fp_Flt2FP(1.488380f));
    setUVTriangle(&triangle[1003], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1004:

    setVector(&u, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.992188f), fp_Flt2FP(1.410894f));
    setVector(&v, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.996083f), fp_Flt2FP(1.432305f));
    setVector(&w, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.997500f), fp_Flt2FP(1.432868f));
    setUVTriangle(&triangle[1004], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1005:

    setVector(&u, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.997500f), fp_Flt2FP(1.432868f));
    setVector(&v, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.993446f), fp_Flt2FP(1.410606f));
    setVector(&w, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.992188f), fp_Flt2FP(1.410894f));
    setUVTriangle(&triangle[1005], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1006:

    setVector(&u, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.990410f), fp_Flt2FP(1.411235f));
    setVector(&v, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.994213f), fp_Flt2FP(1.432209f));
    setVector(&w, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.996083f), fp_Flt2FP(1.432305f));
    setUVTriangle(&triangle[1006], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1007:

    setVector(&u, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.996083f), fp_Flt2FP(1.432305f));
    setVector(&v, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.992188f), fp_Flt2FP(1.410894f));
    setVector(&w, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.990410f), fp_Flt2FP(1.411235f));
    setUVTriangle(&triangle[1007], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1008:

    setVector(&u, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.375780f), fp_Flt2FP(1.487408f));
    setVector(&v, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.354969f), fp_Flt2FP(1.481773f));
    setVector(&w, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.354854f), fp_Flt2FP(1.483075f));
    setUVTriangle(&triangle[1008], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1009:

    setVector(&u, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.354854f), fp_Flt2FP(1.483075f));
    setVector(&v, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.375440f), fp_Flt2FP(1.488648f));
    setVector(&w, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.375780f), fp_Flt2FP(1.487408f));
    setUVTriangle(&triangle[1009], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1010:

    setVector(&u, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.485656f));
    setVector(&v, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.354694f), fp_Flt2FP(1.479817f));
    setVector(&w, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.354969f), fp_Flt2FP(1.481773f));
    setUVTriangle(&triangle[1010], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1011:

    setVector(&u, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.354969f), fp_Flt2FP(1.481773f));
    setVector(&v, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.375780f), fp_Flt2FP(1.487408f));
    setVector(&w, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.376256f), fp_Flt2FP(1.485656f));
    setUVTriangle(&triangle[1011], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1012:

    setVector(&u, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.325248f), fp_Flt2FP(1.497697f));
    setVector(&v, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.302286f), fp_Flt2FP(1.494433f));
    setVector(&w, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.302904f), fp_Flt2FP(1.495827f));
    setUVTriangle(&triangle[1012], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1013:

    setVector(&u, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.302904f), fp_Flt2FP(1.495827f));
    setVector(&v, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.325009f), fp_Flt2FP(1.498965f));
    setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.325248f), fp_Flt2FP(1.497697f));
    setUVTriangle(&triangle[1013], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1014:

    setVector(&u, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.316911f), fp_Flt2FP(1.406226f));
    setVector(&v, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.318724f), fp_Flt2FP(1.406226f));
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.404936f));
    setUVTriangle(&triangle[1014], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1015:

    setVector(&u, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.315626f), fp_Flt2FP(1.404950f));
    setVector(&v, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316911f), fp_Flt2FP(1.406226f));
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.404936f));
    setUVTriangle(&triangle[1015], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1016:

    setVector(&u, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.315623f), fp_Flt2FP(1.403133f));
    setVector(&v, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.315626f), fp_Flt2FP(1.404950f));
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.404936f));
    setUVTriangle(&triangle[1016], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1017:

    setVector(&u, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.316903f), fp_Flt2FP(1.401849f));
    setVector(&v, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.315623f), fp_Flt2FP(1.403133f));
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.404936f));
    setUVTriangle(&triangle[1017], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1018:

    setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.318717f), fp_Flt2FP(1.401842f));
    setVector(&v, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316903f), fp_Flt2FP(1.401849f));
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.404936f));
    setUVTriangle(&triangle[1018], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1019:

    setVector(&u, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320002f), fp_Flt2FP(1.403126f));
    setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.318717f), fp_Flt2FP(1.401842f));
    setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.404936f));
    setUVTriangle(&triangle[1019], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1020:

    setVector(&u, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.318717f), fp_Flt2FP(1.176695f));
    setVector(&v, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320002f), fp_Flt2FP(1.175411f));
    setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.173601f));
    setUVTriangle(&triangle[1020], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1021:

    setVector(&u, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.316903f), fp_Flt2FP(1.176695f));
    setVector(&v, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.318717f), fp_Flt2FP(1.176695f));
    setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.173601f));
    setUVTriangle(&triangle[1021], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1022:

    setVector(&u, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.173601f));
    setVector(&v, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316911f), fp_Flt2FP(1.172311f));
    setVector(&w, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.315626f), fp_Flt2FP(1.173594f));
    setUVTriangle(&triangle[1022], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1023:

    setVector(&u, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.173601f));
    setVector(&v, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.315626f), fp_Flt2FP(1.173594f));
    setVector(&w, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.315623f), fp_Flt2FP(1.175404f));
    setUVTriangle(&triangle[1023], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1024:

    setVector(&u, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.316903f), fp_Flt2FP(1.176695f));
    setVector(&v, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.173601f));
    setVector(&w, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.315623f), fp_Flt2FP(1.175404f));
    setUVTriangle(&triangle[1024], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1025:

    setVector(&u, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.318725f), fp_Flt2FP(1.172311f));
    setVector(&v, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316911f), fp_Flt2FP(1.172311f));
    setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.320005f), fp_Flt2FP(1.173601f));
    setUVTriangle(&triangle[1025], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1026:

    setVector(&u, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.825188f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.825189f), fp_Flt2FP(1.105819f));
    setVector(&w, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.820255f), fp_Flt2FP(1.105805f));
    setUVTriangle(&triangle[1026], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1027:

    setVector(&u, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.820255f), fp_Flt2FP(1.105805f));
    setVector(&v, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.820255f), fp_Flt2FP(1.559881f));
    setVector(&w, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.825188f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[1027], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1028:

    setVector(&u, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.714271f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.719158f), fp_Flt2FP(1.557753f));
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.630876f), fp_Flt2FP(1.356653f));
    setUVTriangle(&triangle[1028], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1029:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.630876f), fp_Flt2FP(1.356653f));
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.356651f));
    setVector(&w, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.714271f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[1029], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1030:

    setVector(&u, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.714158f), fp_Flt2FP(1.153679f));
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.356651f));
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.630876f), fp_Flt2FP(1.356653f));
    setUVTriangle(&triangle[1030], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1031:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.630876f), fp_Flt2FP(1.356653f));
    setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.719091f), fp_Flt2FP(1.155696f));
    setVector(&w, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.714158f), fp_Flt2FP(1.153679f));
    setUVTriangle(&triangle[1031], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1032:

    setVector(&u, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.830042f), fp_Flt2FP(1.105805f));
    setVector(&v, fp_Flt2FP(-4.539766f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.510809f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.830042f), fp_Flt2FP(1.559881f));
    setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834929f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[1032], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1033:

    setVector(&u, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.834929f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.834929f), fp_Flt2FP(1.105812f));
    setVector(&w, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.830042f), fp_Flt2FP(1.105805f));
    setUVTriangle(&triangle[1033], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1034:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.356894f));
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.421807f), fp_Flt2FP(1.356896f));
    setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.510088f), fp_Flt2FP(1.155782f));
    setUVTriangle(&triangle[1034], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1035:

    setVector(&u, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.510088f), fp_Flt2FP(1.155782f));
    setVector(&v, fp_Flt2FP(-4.539766f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.510809f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.505201f), fp_Flt2FP(1.153665f));
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.356894f));
    setUVTriangle(&triangle[1035], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1036:

    setVector(&u, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.510022f), fp_Flt2FP(1.557854f));
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.421807f), fp_Flt2FP(1.356896f));
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.356894f));
    setUVTriangle(&triangle[1036], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1037:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.356894f));
    setVector(&v, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.505089f), fp_Flt2FP(1.559874f));
    setVector(&w, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.510022f), fp_Flt2FP(1.557854f));
    setUVTriangle(&triangle[1037], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1038:

    setVector(&u, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384415f), fp_Flt2FP(1.092009f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.384410f), fp_Flt2FP(1.092717f));
    setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.404571f), fp_Flt2FP(1.082062f));
    setUVTriangle(&triangle[1038], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1039:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384410f), fp_Flt2FP(1.092717f));
    setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.404559f), fp_Flt2FP(1.536131f));
    setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.404571f), fp_Flt2FP(1.082062f));
    setUVTriangle(&triangle[1039], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1040:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384404f), fp_Flt2FP(1.525483f));
    setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.404559f), fp_Flt2FP(1.536131f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.384410f), fp_Flt2FP(1.092717f));
    setUVTriangle(&triangle[1040], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1041:

    setVector(&u, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384399f), fp_Flt2FP(1.526190f));
    setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.404559f), fp_Flt2FP(1.536131f));
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.384408f), fp_Flt2FP(1.525483f));
    setUVTriangle(&triangle[1041], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1042:

    setVector(&u, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.404571f), fp_Flt2FP(1.082062f));
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.203458f), fp_Flt2FP(1.082062f));
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203458f), fp_Flt2FP(1.092717f));
    setUVTriangle(&triangle[1042], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1043:

    setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.203458f), fp_Flt2FP(1.092717f));
    setVector(&v, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.384415f), fp_Flt2FP(1.092009f));
    setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.404571f), fp_Flt2FP(1.082062f));
    setUVTriangle(&triangle[1043], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1044:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384410f), fp_Flt2FP(1.092717f));
    setVector(&v, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.384415f), fp_Flt2FP(1.092009f));
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203458f), fp_Flt2FP(1.092717f));
    setUVTriangle(&triangle[1044], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1045:

    setVector(&u, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.404559f), fp_Flt2FP(1.536131f));
    setVector(&v, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.384399f), fp_Flt2FP(1.526190f));
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203459f), fp_Flt2FP(1.536131f));
    setUVTriangle(&triangle[1045], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1046:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.384404f), fp_Flt2FP(1.525483f));
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.203456f), fp_Flt2FP(1.525469f));
    setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.384399f), fp_Flt2FP(1.526190f));
    setUVTriangle(&triangle[1046], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1047:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.203459f), fp_Flt2FP(1.536131f));
    setVector(&v, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.384399f), fp_Flt2FP(1.526190f));
    setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203456f), fp_Flt2FP(1.525469f));
    setUVTriangle(&triangle[1047], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1048:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022504f), fp_Flt2FP(1.525483f));
    setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002502f), fp_Flt2FP(1.536124f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022504f), fp_Flt2FP(1.526190f));
    setUVTriangle(&triangle[1048], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1049:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022504f), fp_Flt2FP(1.525483f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.022500f), fp_Flt2FP(1.092717f));
    setVector(&w, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.002500f), fp_Flt2FP(1.082062f));
    setUVTriangle(&triangle[1049], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1050:

    setVector(&u, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.002500f), fp_Flt2FP(1.082062f));
    setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002502f), fp_Flt2FP(1.536124f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022504f), fp_Flt2FP(1.525483f));
    setUVTriangle(&triangle[1050], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1051:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022505f), fp_Flt2FP(1.091996f));
    setVector(&v, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002500f), fp_Flt2FP(1.082062f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022500f), fp_Flt2FP(1.092717f));
    setUVTriangle(&triangle[1051], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1052:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022504f), fp_Flt2FP(1.526190f));
    setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002502f), fp_Flt2FP(1.536124f));
    setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203456f), fp_Flt2FP(1.525469f));
    setUVTriangle(&triangle[1052], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1053:

    setVector(&u, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.203456f), fp_Flt2FP(1.525469f));
    setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002502f), fp_Flt2FP(1.536124f));
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203459f), fp_Flt2FP(1.536131f));
    setUVTriangle(&triangle[1053], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1054:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022504f), fp_Flt2FP(1.526190f));
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.203456f), fp_Flt2FP(1.525469f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022498f), fp_Flt2FP(1.525483f));
    setUVTriangle(&triangle[1054], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1055:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022500f), fp_Flt2FP(1.092717f));
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.203458f), fp_Flt2FP(1.092717f));
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022505f), fp_Flt2FP(1.091996f));
    setUVTriangle(&triangle[1055], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1056:

    setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.203458f), fp_Flt2FP(1.082062f));
    setVector(&v, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002500f), fp_Flt2FP(1.082062f));
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.022505f), fp_Flt2FP(1.091996f));
    setUVTriangle(&triangle[1056], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1057:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.022505f), fp_Flt2FP(1.091996f));
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.203458f), fp_Flt2FP(1.092717f));
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.203458f), fp_Flt2FP(1.082062f));
    setUVTriangle(&triangle[1057], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1058:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867366f), fp_Flt2FP(1.781097f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.868074f), fp_Flt2FP(1.781097f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867366f), fp_Flt2FP(1.773994f));
    setUVTriangle(&triangle[1058], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1059:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.867366f), fp_Flt2FP(1.773994f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.868074f), fp_Flt2FP(1.781097f));
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.868074f), fp_Flt2FP(1.773994f));
    setUVTriangle(&triangle[1059], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1060:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880512f), fp_Flt2FP(1.770867f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880512f), fp_Flt2FP(1.771567f));
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.770867f));
    setUVTriangle(&triangle[1060], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1061:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.770867f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880512f), fp_Flt2FP(1.771567f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.771567f));
    setUVTriangle(&triangle[1061], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1062:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864633f), fp_Flt2FP(1.690136f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864633f), fp_Flt2FP(1.689422f));
    setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857530f), fp_Flt2FP(1.690129f));
    setUVTriangle(&triangle[1062], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1063:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857530f), fp_Flt2FP(1.690129f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864633f), fp_Flt2FP(1.689422f));
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857530f), fp_Flt2FP(1.689429f));
    setUVTriangle(&triangle[1063], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1064:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.773994f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.886907f), fp_Flt2FP(1.773994f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.781097f));
    setUVTriangle(&triangle[1064], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1065:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.781097f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.886907f), fp_Flt2FP(1.773994f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.886907f), fp_Flt2FP(1.781097f));
    setUVTriangle(&triangle[1065], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1066:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.808299f), fp_Flt2FP(1.197978f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.808299f), fp_Flt2FP(1.559881f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.815402f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[1066], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1067:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.815402f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.815402f), fp_Flt2FP(1.197978f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.808299f), fp_Flt2FP(1.197978f));
    setUVTriangle(&triangle[1067], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1068:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.898599f), fp_Flt2FP(1.400408f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.899306f), fp_Flt2FP(1.400412f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.898606f), fp_Flt2FP(1.038506f));
    setUVTriangle(&triangle[1068], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1069:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.898606f), fp_Flt2FP(1.038506f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.899306f), fp_Flt2FP(1.400412f));
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.899306f), fp_Flt2FP(1.038511f));
    setUVTriangle(&triangle[1069], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1070:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.893739f), fp_Flt2FP(1.038503f));
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.893038f), fp_Flt2FP(1.038508f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.893746f), fp_Flt2FP(1.400405f));
    setUVTriangle(&triangle[1070], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1071:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.893746f), fp_Flt2FP(1.400405f));
    setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.893038f), fp_Flt2FP(1.038508f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.893038f), fp_Flt2FP(1.400412f));
    setUVTriangle(&triangle[1071], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1072:

    setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.617461f), fp_Flt2FP(1.197964f));
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616760f), fp_Flt2FP(1.197970f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.617468f), fp_Flt2FP(1.559869f));
    setUVTriangle(&triangle[1072], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1073:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.617468f), fp_Flt2FP(1.559869f));
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.616760f), fp_Flt2FP(1.197970f));
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.616760f), fp_Flt2FP(1.559874f));
    setUVTriangle(&triangle[1073], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1074:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.970106f), fp_Flt2FP(1.997498f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.970813f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.970106f), fp_Flt2FP(1.635589f));
    setUVTriangle(&triangle[1074], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1075:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.970106f), fp_Flt2FP(1.635589f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.970813f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.970820f), fp_Flt2FP(1.635592f));
    setUVTriangle(&triangle[1075], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1076:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.599229f), fp_Flt2FP(1.197966f));
    setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.599229f), fp_Flt2FP(1.559870f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.606332f), fp_Flt2FP(1.559874f));
    setUVTriangle(&triangle[1076], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1077:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.606332f), fp_Flt2FP(1.559874f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.606332f), fp_Flt2FP(1.197966f));
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.599229f), fp_Flt2FP(1.197966f));
    setUVTriangle(&triangle[1077], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1078:

    setVector(&u, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862752f), fp_Flt2FP(1.905947f));
    setVector(&v, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862750f), fp_Flt2FP(1.906641f));
    setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.905940f));
    setUVTriangle(&triangle[1078], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1079:

    setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.905940f));
    setVector(&v, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862750f), fp_Flt2FP(1.906641f));
    setVector(&w, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887611f), fp_Flt2FP(1.906655f));
    setUVTriangle(&triangle[1079], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1080:

    setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240620f), fp_Flt2FP(1.401845f));
    setVector(&v, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239913f), fp_Flt2FP(1.401840f));
    setVector(&w, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.240620f), fp_Flt2FP(1.426708f));
    setUVTriangle(&triangle[1080], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1081:

    setVector(&u, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.240620f), fp_Flt2FP(1.426708f));
    setVector(&v, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.239913f), fp_Flt2FP(1.401840f));
    setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.239913f), fp_Flt2FP(1.426706f));
    setUVTriangle(&triangle[1081], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1082:

    setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.243755f), fp_Flt2FP(1.401840f));
    setVector(&v, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.243047f), fp_Flt2FP(1.401840f));
    setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.243755f), fp_Flt2FP(1.426701f));
    setUVTriangle(&triangle[1082], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1083:

    setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.243755f), fp_Flt2FP(1.426701f));
    setVector(&v, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.243047f), fp_Flt2FP(1.401840f));
    setVector(&w, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.243047f), fp_Flt2FP(1.426701f));
    setUVTriangle(&triangle[1083], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1084:

    setVector(&u, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.153020f), fp_Flt2FP(1.328331f));
    setVector(&v, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153728f), fp_Flt2FP(1.328331f));
    setVector(&w, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.153013f), fp_Flt2FP(1.303470f));
    setUVTriangle(&triangle[1084], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1085:

    setVector(&u, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.153013f), fp_Flt2FP(1.303470f));
    setVector(&v, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153728f), fp_Flt2FP(1.328331f));
    setVector(&w, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.153728f), fp_Flt2FP(1.303470f));
    setUVTriangle(&triangle[1085], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1086:

    setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.328331f));
    setVector(&v, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.147446f), fp_Flt2FP(1.328331f));
    setVector(&w, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147442f), fp_Flt2FP(1.303470f));
    setUVTriangle(&triangle[1086], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1087:

    setVector(&u, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147442f), fp_Flt2FP(1.303470f));
    setVector(&v, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.303470f));
    setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.328331f));
    setUVTriangle(&triangle[1087], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1088:

    setVector(&u, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.429127f));
    setVector(&v, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122583f), fp_Flt2FP(1.429842f));
    setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147442f), fp_Flt2FP(1.429134f));
    setUVTriangle(&triangle[1088], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1089:

    setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147442f), fp_Flt2FP(1.429134f));
    setVector(&v, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122583f), fp_Flt2FP(1.429842f));
    setVector(&w, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(1.429842f));
    setUVTriangle(&triangle[1089], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1090:

    setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156862f), fp_Flt2FP(1.401840f));
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156155f), fp_Flt2FP(1.401847f));
    setVector(&w, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156859f), fp_Flt2FP(1.426708f));
    setUVTriangle(&triangle[1090], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1091:

    setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156859f), fp_Flt2FP(1.426708f));
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156155f), fp_Flt2FP(1.401847f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156153f), fp_Flt2FP(1.426708f));
    setUVTriangle(&triangle[1091], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1092:

    setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156862f), fp_Flt2FP(1.303470f));
    setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156158f), fp_Flt2FP(1.303470f));
    setVector(&w, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156862f), fp_Flt2FP(1.328331f));
    setUVTriangle(&triangle[1092], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1093:

    setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.156862f), fp_Flt2FP(1.328331f));
    setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.156158f), fp_Flt2FP(1.303470f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.156155f), fp_Flt2FP(1.328331f));
    setUVTriangle(&triangle[1093], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1094:

    setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237483f), fp_Flt2FP(1.401840f));
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.236779f), fp_Flt2FP(1.401840f));
    setVector(&w, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.237486f), fp_Flt2FP(1.426708f));
    setUVTriangle(&triangle[1094], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1095:

    setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.237486f), fp_Flt2FP(1.426708f));
    setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.236779f), fp_Flt2FP(1.401840f));
    setVector(&w, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.236782f), fp_Flt2FP(1.426701f));
    setUVTriangle(&triangle[1095], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1096:

    setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.315623f), fp_Flt2FP(1.328333f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316329f), fp_Flt2FP(1.328333f));
    setVector(&w, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.315623f), fp_Flt2FP(1.303472f));
    setUVTriangle(&triangle[1096], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1097:

    setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.315623f), fp_Flt2FP(1.303472f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.316329f), fp_Flt2FP(1.328333f));
    setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.316327f), fp_Flt2FP(1.303472f));
    setUVTriangle(&triangle[1097], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1098:

    setVector(&u, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150580f), fp_Flt2FP(1.303470f));
    setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149872f), fp_Flt2FP(1.303470f));
    setVector(&w, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.150587f), fp_Flt2FP(1.328331f));
    setUVTriangle(&triangle[1098], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1099:

    setVector(&u, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150587f), fp_Flt2FP(1.328331f));
    setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149872f), fp_Flt2FP(1.303470f));
    setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149872f), fp_Flt2FP(1.328331f));
    setUVTriangle(&triangle[1099], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1100:

    setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150578f), fp_Flt2FP(1.401840f));
    setVector(&v, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149871f), fp_Flt2FP(1.401841f));
    setVector(&w, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.150585f), fp_Flt2FP(1.426708f));
    setUVTriangle(&triangle[1100], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1101:

    setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.150585f), fp_Flt2FP(1.426708f));
    setVector(&v, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.149871f), fp_Flt2FP(1.401841f));
    setVector(&w, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.149871f), fp_Flt2FP(1.426706f));
    setUVTriangle(&triangle[1101], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1102:

    setVector(&u, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.401840f));
    setVector(&v, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122581f), fp_Flt2FP(1.426701f));
    setVector(&w, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147442f), fp_Flt2FP(1.426701f));
    setUVTriangle(&triangle[1102], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1103:

    setVector(&u, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147442f), fp_Flt2FP(1.426701f));
    setVector(&v, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.147444f), fp_Flt2FP(1.401840f));
    setVector(&w, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.401840f));
    setUVTriangle(&triangle[1103], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1104:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147441f), fp_Flt2FP(1.172310f));
    setVector(&v, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.172310f));
    setVector(&w, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.197171f));
    setUVTriangle(&triangle[1104], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1105:

    setVector(&u, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.197171f));
    setVector(&v, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.147441f), fp_Flt2FP(1.197171f));
    setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(1.172310f));
    setUVTriangle(&triangle[1105], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1106:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853863f), fp_Flt2FP(1.808047f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854579f), fp_Flt2FP(1.808047f));
    setVector(&w, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.853867f), fp_Flt2FP(1.783186f));
    setUVTriangle(&triangle[1106], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1107:

    setVector(&u, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.853867f), fp_Flt2FP(1.783186f));
    setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.854579f), fp_Flt2FP(1.808047f));
    setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.854578f), fp_Flt2FP(1.783186f));
    setUVTriangle(&triangle[1107], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1108:

    setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862747f), fp_Flt2FP(1.914346f));
    setVector(&v, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.862747f), fp_Flt2FP(1.939207f));
    setVector(&w, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.939207f));
    setUVTriangle(&triangle[1108], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1109:

    setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.939207f));
    setVector(&v, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.914346f));
    setVector(&w, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862747f), fp_Flt2FP(1.914346f));
    setUVTriangle(&triangle[1109], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1110:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.676642f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.675931f));
    setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862754f), fp_Flt2FP(1.676642f));
    setUVTriangle(&triangle[1110], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1111:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.862754f), fp_Flt2FP(1.676642f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.675931f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.862754f), fp_Flt2FP(1.675925f));
    setUVTriangle(&triangle[1111], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1112:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.339668f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.340379f));
    setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(1.339668f));
    setUVTriangle(&triangle[1112], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1113:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147441f), fp_Flt2FP(1.339668f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.340379f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(1.340379f));
    setUVTriangle(&triangle[1113], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1114:

    setVector(&u, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.432272f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.432983f));
    setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(1.432268f));
    setUVTriangle(&triangle[1114], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1115:

    setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.147441f), fp_Flt2FP(1.432268f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.122579f), fp_Flt2FP(1.432983f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.147441f), fp_Flt2FP(1.432979f));
    setUVTriangle(&triangle[1115], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1116:

    setVector(&u, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.153019f), fp_Flt2FP(1.426701f));
    setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153712f), fp_Flt2FP(1.426701f));
    setVector(&w, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.153012f), fp_Flt2FP(1.401840f));
    setUVTriangle(&triangle[1116], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1117:

    setVector(&u, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.153012f), fp_Flt2FP(1.401840f));
    setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.153712f), fp_Flt2FP(1.426701f));
    setVector(&w, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.153726f), fp_Flt2FP(1.401840f));
    setUVTriangle(&triangle[1117], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1118:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.930444f), fp_Flt2FP(1.405265f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.405265f));
    setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.453564f));
    setUVTriangle(&triangle[1118], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1119:

    setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.453564f));
    setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.930444f), fp_Flt2FP(1.453564f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.930444f), fp_Flt2FP(1.405265f));
    setUVTriangle(&triangle[1119], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1120:

    setVector(&u, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.050327f), fp_Flt2FP(1.074780f));
    setVector(&v, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.093302f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.093302f), fp_Flt2FP(1.026475f));
    setUVTriangle(&triangle[1120], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1121:

    setVector(&u, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.093302f), fp_Flt2FP(1.026475f));
    setVector(&v, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.050327f), fp_Flt2FP(1.026477f));
    setVector(&w, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.050327f), fp_Flt2FP(1.074780f));
    setUVTriangle(&triangle[1121], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1122:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.002500f), fp_Flt2FP(1.026473f));
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002500f), fp_Flt2FP(1.074780f));
    setVector(&w, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.045474f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[1122], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1123:

    setVector(&u, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.045474f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.045474f), fp_Flt2FP(1.026473f));
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.002500f), fp_Flt2FP(1.026473f));
    setUVTriangle(&triangle[1123], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1124:

    setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.785322f), fp_Flt2FP(1.193127f));
    setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.785322f), fp_Flt2FP(1.144820f));
    setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.742348f), fp_Flt2FP(1.144820f));
    setUVTriangle(&triangle[1124], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1125:

    setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.742348f), fp_Flt2FP(1.144820f));
    setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.742348f), fp_Flt2FP(1.193127f));
    setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.785322f), fp_Flt2FP(1.193127f));
    setUVTriangle(&triangle[1125], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1126:

    setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.672886f), fp_Flt2FP(1.100522f));
    setVector(&v, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.672886f), fp_Flt2FP(1.148824f));
    setVector(&w, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.715860f), fp_Flt2FP(1.148826f));
    setUVTriangle(&triangle[1126], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1127:

    setVector(&u, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.715860f), fp_Flt2FP(1.148826f));
    setVector(&v, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.715860f), fp_Flt2FP(1.100519f));
    setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.672886f), fp_Flt2FP(1.100522f));
    setUVTriangle(&triangle[1127], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1128:

    setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.978272f), fp_Flt2FP(1.511579f));
    setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.935298f), fp_Flt2FP(1.511579f));
    setVector(&w, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.935298f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[1128], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1129:

    setVector(&u, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.935298f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.978272f), fp_Flt2FP(1.559879f));
    setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.978272f), fp_Flt2FP(1.511579f));
    setUVTriangle(&triangle[1129], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1130:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.742348f), fp_Flt2FP(1.091663f));
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.742348f), fp_Flt2FP(1.139966f));
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.785322f), fp_Flt2FP(1.139966f));
    setUVTriangle(&triangle[1130], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1131:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.785322f), fp_Flt2FP(1.139966f));
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.785322f), fp_Flt2FP(1.091666f));
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.742348f), fp_Flt2FP(1.091663f));
    setUVTriangle(&triangle[1131], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1132:

    setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.458417f));
    setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.506720f));
    setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.930444f), fp_Flt2FP(1.506720f));
    setUVTriangle(&triangle[1132], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1133:

    setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.930444f), fp_Flt2FP(1.506720f));
    setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.930444f), fp_Flt2FP(1.458420f));
    setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.458417f));
    setUVTriangle(&triangle[1133], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1134:

    setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.978272f), fp_Flt2FP(1.458422f));
    setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.935298f), fp_Flt2FP(1.458422f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.935298f), fp_Flt2FP(1.506720f));
    setUVTriangle(&triangle[1134], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1135:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.935298f), fp_Flt2FP(1.506720f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.978272f), fp_Flt2FP(1.506720f));
    setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.978272f), fp_Flt2FP(1.458422f));
    setUVTriangle(&triangle[1135], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1136:

    setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.503895f), fp_Flt2FP(1.095652f));
    setVector(&v, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.503895f), fp_Flt2FP(1.047346f));
    setVector(&w, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.460921f), fp_Flt2FP(1.047346f));
    setUVTriangle(&triangle[1136], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1137:

    setVector(&u, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.460921f), fp_Flt2FP(1.047346f));
    setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.460921f), fp_Flt2FP(1.095648f));
    setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.503895f), fp_Flt2FP(1.095652f));
    setUVTriangle(&triangle[1137], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1138:

    setVector(&u, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.535719f), fp_Flt2FP(1.139951f));
    setVector(&v, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.578693f), fp_Flt2FP(1.139951f));
    setVector(&w, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.578693f), fp_Flt2FP(1.091645f));
    setUVTriangle(&triangle[1138], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1139:

    setVector(&u, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.578693f), fp_Flt2FP(1.091645f));
    setVector(&v, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.535719f), fp_Flt2FP(1.091645f));
    setVector(&w, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.535719f), fp_Flt2FP(1.139951f));
    setUVTriangle(&triangle[1139], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1140:

    setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.141129f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.141129f), fp_Flt2FP(1.026480f));
    setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.098155f), fp_Flt2FP(1.026484f));
    setUVTriangle(&triangle[1140], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1141:

    setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.098155f), fp_Flt2FP(1.026484f));
    setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.098155f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.141129f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[1141], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1142:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.785322f), fp_Flt2FP(1.086810f));
    setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.785322f), fp_Flt2FP(1.038509f));
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.742348f), fp_Flt2FP(1.038516f));
    setUVTriangle(&triangle[1142], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1143:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.742348f), fp_Flt2FP(1.038516f));
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.742348f), fp_Flt2FP(1.086810f));
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.785322f), fp_Flt2FP(1.086810f));
    setUVTriangle(&triangle[1143], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1144:

    setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.578693f), fp_Flt2FP(1.038492f));
    setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.535719f), fp_Flt2FP(1.038492f));
    setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.535719f), fp_Flt2FP(1.086792f));
    setUVTriangle(&triangle[1144], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1145:

    setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.535719f), fp_Flt2FP(1.086792f));
    setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.578693f), fp_Flt2FP(1.086792f));
    setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.578693f), fp_Flt2FP(1.038492f));
    setUVTriangle(&triangle[1145], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1146:

    setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.672886f), fp_Flt2FP(1.095665f));
    setVector(&v, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.715860f), fp_Flt2FP(1.095665f));
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.715860f), fp_Flt2FP(1.047365f));
    setUVTriangle(&triangle[1146], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1147:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.715860f), fp_Flt2FP(1.047365f));
    setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.672886f), fp_Flt2FP(1.047372f));
    setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.672886f), fp_Flt2FP(1.095665f));
    setUVTriangle(&triangle[1147], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1148:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.578693f), fp_Flt2FP(1.193111f));
    setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.578693f), fp_Flt2FP(1.144804f));
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.535719f), fp_Flt2FP(1.144804f));
    setUVTriangle(&triangle[1148], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1149:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.535719f), fp_Flt2FP(1.144804f));
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.535719f), fp_Flt2FP(1.193111f));
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.578693f), fp_Flt2FP(1.193111f));
    setUVTriangle(&triangle[1149], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1150:

    setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.924930f), fp_Flt2FP(1.630741f));
    setVector(&v, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.924930f), fp_Flt2FP(1.582434f));
    setVector(&w, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.881956f), fp_Flt2FP(1.582434f));
    setUVTriangle(&triangle[1150], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1151:

    setVector(&u, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.881956f), fp_Flt2FP(1.582434f));
    setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.881956f), fp_Flt2FP(1.630741f));
    setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.924930f), fp_Flt2FP(1.630741f));
    setUVTriangle(&triangle[1151], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1152:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.834128f), fp_Flt2FP(1.582434f));
    setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.834128f), fp_Flt2FP(1.630741f));
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.877103f), fp_Flt2FP(1.630741f));
    setUVTriangle(&triangle[1152], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1153:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.877103f), fp_Flt2FP(1.630741f));
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.877103f), fp_Flt2FP(1.582434f));
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.834128f), fp_Flt2FP(1.582434f));
    setUVTriangle(&triangle[1153], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1154:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.460921f), fp_Flt2FP(1.100505f));
    setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.460921f), fp_Flt2FP(1.148812f));
    setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.503895f), fp_Flt2FP(1.148812f));
    setUVTriangle(&triangle[1154], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1155:

    setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.503895f), fp_Flt2FP(1.148812f));
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.503895f), fp_Flt2FP(1.100505f));
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.460921f), fp_Flt2FP(1.100505f));
    setUVTriangle(&triangle[1155], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1156:

    setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.930444f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.930444f), fp_Flt2FP(1.511581f));
    setVector(&w, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.511574f));
    setUVTriangle(&triangle[1156], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1157:

    setVector(&u, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.511574f));
    setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.559881f));
    setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.930444f), fp_Flt2FP(1.559881f));
    setUVTriangle(&triangle[1157], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1158:

    setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.668032f), fp_Flt2FP(1.148826f));
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.668032f), fp_Flt2FP(1.100519f));
    setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.100519f));
    setUVTriangle(&triangle[1158], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1159:

    setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.100519f));
    setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.148826f));
    setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.668032f), fp_Flt2FP(1.148826f));
    setUVTriangle(&triangle[1159], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1160:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.668032f), fp_Flt2FP(1.047358f));
    setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.047365f));
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.095665f));
    setUVTriangle(&triangle[1160], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1161:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.625058f), fp_Flt2FP(1.095665f));
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.668032f), fp_Flt2FP(1.095665f));
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.668032f), fp_Flt2FP(1.047358f));
    setUVTriangle(&triangle[1161], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1162:

    setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.188956f), fp_Flt2FP(1.074782f));
    setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.188956f), fp_Flt2FP(1.026489f));
    setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.145982f), fp_Flt2FP(1.026489f));
    setUVTriangle(&triangle[1162], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1163:

    setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.145982f), fp_Flt2FP(1.026489f));
    setVector(&v, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.145982f), fp_Flt2FP(1.074782f));
    setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.188956f), fp_Flt2FP(1.074782f));
    setUVTriangle(&triangle[1163], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1164:

    setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.453641f), fp_Flt2FP(1.148812f));
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.453641f), fp_Flt2FP(1.075649f));
    setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.075649f));
    setUVTriangle(&triangle[1164], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1165:

    setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.075649f));
    setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.415989f), fp_Flt2FP(1.148812f));
    setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.453641f), fp_Flt2FP(1.148812f));
    setUVTriangle(&triangle[1165], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1166:

    setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.205480f), fp_Flt2FP(1.997493f));
    setVector(&v, fp_Flt2FP(-4.539766f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.510809f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.408709f), fp_Flt2FP(1.997486f));
    setVector(&w, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.408707f), fp_Flt2FP(1.543411f));
    setUVTriangle(&triangle[1166], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1167:

    setVector(&u, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.408707f), fp_Flt2FP(1.543411f));
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.205478f), fp_Flt2FP(1.543418f));
    setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.205480f), fp_Flt2FP(1.997493f));
    setUVTriangle(&triangle[1167], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1168:

    setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.205478f), fp_Flt2FP(1.543418f));
    setVector(&v, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.002505f), fp_Flt2FP(1.543424f));
    setVector(&w, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.002500f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[1168], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1169:

    setVector(&u, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.002500f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.205480f), fp_Flt2FP(1.997493f));
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.205478f), fp_Flt2FP(1.543418f));
    setUVTriangle(&triangle[1169], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1170:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.868074f), fp_Flt2FP(1.796976f));
    setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867366f), fp_Flt2FP(1.796976f));
    setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.867366f), fp_Flt2FP(1.804080f));
    setUVTriangle(&triangle[1170], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1171:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864633f), fp_Flt2FP(1.709677f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864633f), fp_Flt2FP(1.708970f));
    setVector(&w, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857529f), fp_Flt2FP(1.709677f));
    setUVTriangle(&triangle[1171], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1172:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880511f), fp_Flt2FP(1.690136f));
    setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.689429f));
    setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880511f), fp_Flt2FP(1.689429f));
    setUVTriangle(&triangle[1172], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1173:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.709677f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.708963f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880512f), fp_Flt2FP(1.709677f));
    setUVTriangle(&triangle[1173], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1174:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880512f), fp_Flt2FP(1.709677f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.708963f));
    setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.880512f), fp_Flt2FP(1.708970f));
    setUVTriangle(&triangle[1174], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1175:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.804079f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.886907f), fp_Flt2FP(1.796976f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.886907f), fp_Flt2FP(1.804079f));
    setUVTriangle(&triangle[1175], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1176:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887608f), fp_Flt2FP(1.796976f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.886907f), fp_Flt2FP(1.796976f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887615f), fp_Flt2FP(1.804079f));
    setUVTriangle(&triangle[1176], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1177:

    setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.808299f), fp_Flt2FP(1.012175f));
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.809006f), fp_Flt2FP(1.193125f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.809006f), fp_Flt2FP(1.012168f));
    setUVTriangle(&triangle[1177], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1178:

    setVector(&u, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.611199f), fp_Flt2FP(1.559874f));
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.611907f), fp_Flt2FP(1.378917f));
    setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.611186f), fp_Flt2FP(1.197964f));
    setUVTriangle(&triangle[1178], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1179:

    setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600026f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.943280f), fp_Flt2FP(1.790533f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.943988f), fp_Flt2FP(1.790532f));
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.943988f), fp_Flt2FP(1.609579f));
    setUVTriangle(&triangle[1179], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1180:

    setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.081297f), fp_Flt2FP(1.114019f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.074194f), fp_Flt2FP(1.114017f));
    setVector(&w, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.081298f), fp_Flt2FP(1.475928f));
    setUVTriangle(&triangle[1180], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1181:

    setVector(&u, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.081298f), fp_Flt2FP(1.475928f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.074194f), fp_Flt2FP(1.114017f));
    setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.074194f), fp_Flt2FP(1.475925f));
    setUVTriangle(&triangle[1181], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1182:

    setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.400407f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.888178f), fp_Flt2FP(1.400412f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.038501f));
    setUVTriangle(&triangle[1182], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1183:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.887470f), fp_Flt2FP(1.038501f));
    setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.888178f), fp_Flt2FP(1.400412f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.888185f), fp_Flt2FP(1.038504f));
    setUVTriangle(&triangle[1183], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1184:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.938427f), fp_Flt2FP(1.635597f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.931324f), fp_Flt2FP(1.635601f));
    setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.938427f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[1184], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1185:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.938427f), fp_Flt2FP(1.997500f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.931324f), fp_Flt2FP(1.635601f));
    setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.931323f), fp_Flt2FP(1.997497f));
    setUVTriangle(&triangle[1185], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1186:

    setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.965252f), fp_Flt2FP(1.635599f));
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.964531f), fp_Flt2FP(1.816551f));
    setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.965252f), fp_Flt2FP(1.997495f));
    setUVTriangle(&triangle[1186], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1187:

    setVector(&u, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.965252f), fp_Flt2FP(1.997495f));
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.964531f), fp_Flt2FP(1.816551f));
    setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.964545f), fp_Flt2FP(1.997500f));
    setUVTriangle(&triangle[1187], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1188:

    setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.964545f), fp_Flt2FP(1.635594f));
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.964531f), fp_Flt2FP(1.816551f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.965252f), fp_Flt2FP(1.635599f));
    setUVTriangle(&triangle[1188], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1189:

    setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.975673f), fp_Flt2FP(1.997493f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976381f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.975680f), fp_Flt2FP(1.635591f));
    setUVTriangle(&triangle[1189], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1190:

    setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.975680f), fp_Flt2FP(1.635591f));
    setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976381f), fp_Flt2FP(1.997500f));
    setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.976381f), fp_Flt2FP(1.635594f));
    setUVTriangle(&triangle[1190], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1191:

    setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.514941f), fp_Flt2FP(1.378917f));
    setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.594376f), fp_Flt2FP(1.559874f));
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.594376f), fp_Flt2FP(1.378917f));
    setUVTriangle(&triangle[1191], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1192:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.594375f), fp_Flt2FP(1.197964f));
    setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.514941f), fp_Flt2FP(1.378917f));
    setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.594376f), fp_Flt2FP(1.378917f));
    setUVTriangle(&triangle[1192], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1193:

    setVector(&u, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.803446f), fp_Flt2FP(1.378932f));
    setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.803445f), fp_Flt2FP(1.197980f));
    setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.724011f), fp_Flt2FP(1.378932f));
    setUVTriangle(&triangle[1193], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1194:

    setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.803445f), fp_Flt2FP(1.559881f));
    setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.803446f), fp_Flt2FP(1.378932f));
    setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.724011f), fp_Flt2FP(1.378932f));
    setUVTriangle(&triangle[1194], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1195:

    setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.868074f), fp_Flt2FP(1.796976f));
    setVector(&v, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.867366f), fp_Flt2FP(1.804080f));
    setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.868074f), fp_Flt2FP(1.804080f));
    setUVTriangle(&triangle[1195], u, v, w, uUV, vUV, wUV, m, f);

    setObject(&myObj, myMat, 1196, triangle, f);
    transformObject(&myObj, matMult(genTransMatrix(fp_Flt2FP(1.), fp_Flt2FP(-5.), -fp_Flt2FP(15.), m, f), matMult(genYRotateMat(fp_Flt2FP(160.), m, f), genXRotateMat(fp_Flt2FP(-90.), m, f), m, f), m, f), m, f);
    initialiseScene(scene, 1, f);
    addObject(scene, myObj, f);
}

Vector draw(Ray ray, Scene scene, Light light, int recursion, MathStat *m, FuncStat *f)
{
    Hit hit;
    Vector outputColour, reflectiveColour, refractiveColour, textureColour;
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
        
        // Determine whether this has a texture or not
        if (scene.object[hit.objectIndex].material.textureIdx < 0)
            setVector(&textureColour, -1, -1, -1, f);
        else
            textureColour = getColour(Textures[scene.object[hit.objectIndex].material.textureIdx], scene, hit, m, f);

        // outputColour = vecAdd(ambiance(hit, scene, light, m, f), diffusion(hit, scene, light, m, f), m, f);
        outputColour = vecAdd(ambiance(hit, scene, light, textureColour, m, f), vecAdd(diffusion(hit, scene, light, lightDirection, textureColour, m, f), specular(hit, scene, light, lightDirection, textureColour, m, f), m, f), m, f);
        
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
