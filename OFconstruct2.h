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

// This script is for model "Model"

// Put the object(s) on the scene
void populateScene(Scene *scene, Light lightSrc, MathStat *m, FuncStat *f)
{
//fixedp normal[3];	// Storage for calculated surface normal

Object myObj;
Material myMat;
Vector lgrey = int2Vector(LIGHT_GREY);
//Vector white = int2Vector(WHITE);
Vector u, v, w;

printf("Establishing material... ");
//setMaterial(*matObj, light, Vector colour, fixedp ambiance, fixedp diffusivity, fixedp specular, fixedp shininess, fixedp reflectivity, fixedp opacity, fixedp refractivity)
// setMaterial(&myMat, lightSrc, red, fp_Flt2FP(0.0), fp_Flt2FP(0.5), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(0.8), fp_Flt2FP(1.4), m, f);
setMaterial(&myMat, lightSrc, lgrey, fp_Flt2FP(0.5), fp_Flt2FP(0.0), fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.2), fp_Flt2FP(0.0), fp_Flt2FP(1.4), -1, m, f);
//setMaterial(&bgMat, lightSrc, int2Vector(BLUE), fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.4), fp_Flt2FP(2.0), fp_Flt2FP(0.0), fp_Flt2FP(0.0), fp_Flt2FP(1.4), m, f);
printf("Done.\n");
Triangle *triangle;
triangle = (Triangle *)malloc(sizeof(Triangle) * 1196);
// Now begin object writing

// Triangle 0:

setVector(&u, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
setTriangle(&triangle[0], u, v, w, m, f);

// Triangle 1:

setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setTriangle(&triangle[1], u, v, w, m, f);

// Triangle 2:

setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setVector(&v, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
setTriangle(&triangle[2], u, v, w, m, f);

// Triangle 3:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
setTriangle(&triangle[3], u, v, w, m, f);

// Triangle 4:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
setTriangle(&triangle[4], u, v, w, m, f);

// Triangle 5:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setTriangle(&triangle[5], u, v, w, m, f);

// Triangle 6:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
setTriangle(&triangle[6], u, v, w, m, f);

// Triangle 7:

setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
setTriangle(&triangle[7], u, v, w, m, f);

// Triangle 8:

setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
setTriangle(&triangle[8], u, v, w, m, f);

// Triangle 9:

setVector(&u, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
setTriangle(&triangle[9], u, v, w, m, f);

// Triangle 10:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
setTriangle(&triangle[10], u, v, w, m, f);

// Triangle 11:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
setTriangle(&triangle[11], u, v, w, m, f);

// Triangle 12:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
setTriangle(&triangle[12], u, v, w, m, f);

// Triangle 13:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[13], u, v, w, m, f);

// Triangle 14:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
setTriangle(&triangle[14], u, v, w, m, f);

// Triangle 15:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
setTriangle(&triangle[15], u, v, w, m, f);

// Triangle 16:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
setVector(&v, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
setTriangle(&triangle[16], u, v, w, m, f);

// Triangle 17:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
setTriangle(&triangle[17], u, v, w, m, f);

// Triangle 18:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
setTriangle(&triangle[18], u, v, w, m, f);

// Triangle 19:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
setTriangle(&triangle[19], u, v, w, m, f);

// Triangle 20:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
setTriangle(&triangle[20], u, v, w, m, f);

// Triangle 21:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[21], u, v, w, m, f);

// Triangle 22:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[22], u, v, w, m, f);

// Triangle 23:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setTriangle(&triangle[23], u, v, w, m, f);

// Triangle 24:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
setTriangle(&triangle[24], u, v, w, m, f);

// Triangle 25:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[25], u, v, w, m, f);

// Triangle 26:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setTriangle(&triangle[26], u, v, w, m, f);

// Triangle 27:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[27], u, v, w, m, f);

// Triangle 28:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
setTriangle(&triangle[28], u, v, w, m, f);

// Triangle 29:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
setTriangle(&triangle[29], u, v, w, m, f);

// Triangle 30:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[30], u, v, w, m, f);

// Triangle 31:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
setTriangle(&triangle[31], u, v, w, m, f);

// Triangle 32:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
setTriangle(&triangle[32], u, v, w, m, f);

// Triangle 33:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
setTriangle(&triangle[33], u, v, w, m, f);

// Triangle 34:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
setTriangle(&triangle[34], u, v, w, m, f);

// Triangle 35:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
setTriangle(&triangle[35], u, v, w, m, f);

// Triangle 36:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
setTriangle(&triangle[36], u, v, w, m, f);

// Triangle 37:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[37], u, v, w, m, f);

// Triangle 38:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[38], u, v, w, m, f);

// Triangle 39:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
setTriangle(&triangle[39], u, v, w, m, f);

// Triangle 40:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
setTriangle(&triangle[40], u, v, w, m, f);

// Triangle 41:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[41], u, v, w, m, f);

// Triangle 42:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setTriangle(&triangle[42], u, v, w, m, f);

// Triangle 43:

setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
setTriangle(&triangle[43], u, v, w, m, f);

// Triangle 44:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
setTriangle(&triangle[44], u, v, w, m, f);

// Triangle 45:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
setTriangle(&triangle[45], u, v, w, m, f);

// Triangle 46:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
setTriangle(&triangle[46], u, v, w, m, f);

// Triangle 47:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[47], u, v, w, m, f);

// Triangle 48:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[48], u, v, w, m, f);

// Triangle 49:

setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[49], u, v, w, m, f);

// Triangle 50:

setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
setVector(&w, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
setTriangle(&triangle[50], u, v, w, m, f);

// Triangle 51:

setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
setVector(&v, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
setTriangle(&triangle[51], u, v, w, m, f);

// Triangle 52:

setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
setTriangle(&triangle[52], u, v, w, m, f);

// Triangle 53:

setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
setTriangle(&triangle[53], u, v, w, m, f);

// Triangle 54:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setTriangle(&triangle[54], u, v, w, m, f);

// Triangle 55:

setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[55], u, v, w, m, f);

// Triangle 56:

setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setTriangle(&triangle[56], u, v, w, m, f);

// Triangle 57:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[57], u, v, w, m, f);

// Triangle 58:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[58], u, v, w, m, f);

// Triangle 59:

setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[59], u, v, w, m, f);

// Triangle 60:

setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
setVector(&w, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setTriangle(&triangle[60], u, v, w, m, f);

// Triangle 61:

setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setTriangle(&triangle[61], u, v, w, m, f);

// Triangle 62:

setVector(&u, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
setVector(&w, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[62], u, v, w, m, f);

// Triangle 63:

setVector(&u, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[63], u, v, w, m, f);

// Triangle 64:

setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
setVector(&w, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[64], u, v, w, m, f);

// Triangle 65:

setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
setTriangle(&triangle[65], u, v, w, m, f);

// Triangle 66:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setTriangle(&triangle[66], u, v, w, m, f);

// Triangle 67:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
setTriangle(&triangle[67], u, v, w, m, f);

// Triangle 68:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setTriangle(&triangle[68], u, v, w, m, f);

// Triangle 69:

setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[69], u, v, w, m, f);

// Triangle 70:

setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[70], u, v, w, m, f);

// Triangle 71:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[71], u, v, w, m, f);

// Triangle 72:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000000f), f);
setTriangle(&triangle[72], u, v, w, m, f);

// Triangle 73:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setTriangle(&triangle[73], u, v, w, m, f);

// Triangle 74:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[74], u, v, w, m, f);

// Triangle 75:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
setVector(&v, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
setTriangle(&triangle[75], u, v, w, m, f);

// Triangle 76:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
setTriangle(&triangle[76], u, v, w, m, f);

// Triangle 77:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
setTriangle(&triangle[77], u, v, w, m, f);

// Triangle 78:

setVector(&u, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
setTriangle(&triangle[78], u, v, w, m, f);

// Triangle 79:

setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
setTriangle(&triangle[79], u, v, w, m, f);

// Triangle 80:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
setTriangle(&triangle[80], u, v, w, m, f);

// Triangle 81:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
setTriangle(&triangle[81], u, v, w, m, f);

// Triangle 82:

setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
setTriangle(&triangle[82], u, v, w, m, f);

// Triangle 83:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
setTriangle(&triangle[83], u, v, w, m, f);

// Triangle 84:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
setTriangle(&triangle[84], u, v, w, m, f);

// Triangle 85:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
setTriangle(&triangle[85], u, v, w, m, f);

// Triangle 86:

setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[86], u, v, w, m, f);

// Triangle 87:

setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
setTriangle(&triangle[87], u, v, w, m, f);

// Triangle 88:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[88], u, v, w, m, f);

// Triangle 89:

setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
setTriangle(&triangle[89], u, v, w, m, f);

// Triangle 90:

setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[90], u, v, w, m, f);

// Triangle 91:

setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[91], u, v, w, m, f);

// Triangle 92:

setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setTriangle(&triangle[92], u, v, w, m, f);

// Triangle 93:

setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[93], u, v, w, m, f);

// Triangle 94:

setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
setTriangle(&triangle[94], u, v, w, m, f);

// Triangle 95:

setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
setTriangle(&triangle[95], u, v, w, m, f);

// Triangle 96:

setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[96], u, v, w, m, f);

// Triangle 97:

setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[97], u, v, w, m, f);

// Triangle 98:

setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
setTriangle(&triangle[98], u, v, w, m, f);

// Triangle 99:

setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
setTriangle(&triangle[99], u, v, w, m, f);

// Triangle 100:

setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
setTriangle(&triangle[100], u, v, w, m, f);

// Triangle 101:

setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[101], u, v, w, m, f);

// Triangle 102:

setVector(&u, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
setTriangle(&triangle[102], u, v, w, m, f);

// Triangle 103:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[103], u, v, w, m, f);

// Triangle 104:

setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
setTriangle(&triangle[104], u, v, w, m, f);

// Triangle 105:

setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
setTriangle(&triangle[105], u, v, w, m, f);

// Triangle 106:

setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[106], u, v, w, m, f);

// Triangle 107:

setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setTriangle(&triangle[107], u, v, w, m, f);

// Triangle 108:

setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
setTriangle(&triangle[108], u, v, w, m, f);

// Triangle 109:

setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[109], u, v, w, m, f);

// Triangle 110:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[110], u, v, w, m, f);

// Triangle 111:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setTriangle(&triangle[111], u, v, w, m, f);

// Triangle 112:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
setTriangle(&triangle[112], u, v, w, m, f);

// Triangle 113:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
setTriangle(&triangle[113], u, v, w, m, f);

// Triangle 114:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
setTriangle(&triangle[114], u, v, w, m, f);

// Triangle 115:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
setTriangle(&triangle[115], u, v, w, m, f);

// Triangle 116:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setTriangle(&triangle[116], u, v, w, m, f);

// Triangle 117:

setVector(&u, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setTriangle(&triangle[117], u, v, w, m, f);

// Triangle 118:

setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[118], u, v, w, m, f);

// Triangle 119:

setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
setVector(&v, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
setTriangle(&triangle[119], u, v, w, m, f);

// Triangle 120:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
setTriangle(&triangle[120], u, v, w, m, f);

// Triangle 121:

setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
setTriangle(&triangle[121], u, v, w, m, f);

// Triangle 122:

setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
setTriangle(&triangle[122], u, v, w, m, f);

// Triangle 123:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setTriangle(&triangle[123], u, v, w, m, f);

// Triangle 124:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
setTriangle(&triangle[124], u, v, w, m, f);

// Triangle 125:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000008f), f);
setTriangle(&triangle[125], u, v, w, m, f);

// Triangle 126:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
setTriangle(&triangle[126], u, v, w, m, f);

// Triangle 127:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
setTriangle(&triangle[127], u, v, w, m, f);

// Triangle 128:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
setTriangle(&triangle[128], u, v, w, m, f);

// Triangle 129:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
setTriangle(&triangle[129], u, v, w, m, f);

// Triangle 130:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
setTriangle(&triangle[130], u, v, w, m, f);

// Triangle 131:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
setTriangle(&triangle[131], u, v, w, m, f);

// Triangle 132:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[132], u, v, w, m, f);

// Triangle 133:

setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
setVector(&w, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
setTriangle(&triangle[133], u, v, w, m, f);

// Triangle 134:

setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[134], u, v, w, m, f);

// Triangle 135:

setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setTriangle(&triangle[135], u, v, w, m, f);

// Triangle 136:

setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setTriangle(&triangle[136], u, v, w, m, f);

// Triangle 137:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
setTriangle(&triangle[137], u, v, w, m, f);

// Triangle 138:

setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
setTriangle(&triangle[138], u, v, w, m, f);

// Triangle 139:

setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setTriangle(&triangle[139], u, v, w, m, f);

// Triangle 140:

setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setTriangle(&triangle[140], u, v, w, m, f);

// Triangle 141:

setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
setTriangle(&triangle[141], u, v, w, m, f);

// Triangle 142:

setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
setTriangle(&triangle[142], u, v, w, m, f);

// Triangle 143:

setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
setTriangle(&triangle[143], u, v, w, m, f);

// Triangle 144:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setTriangle(&triangle[144], u, v, w, m, f);

// Triangle 145:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[145], u, v, w, m, f);

// Triangle 146:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[146], u, v, w, m, f);

// Triangle 147:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[147], u, v, w, m, f);

// Triangle 148:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setTriangle(&triangle[148], u, v, w, m, f);

// Triangle 149:

setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
setTriangle(&triangle[149], u, v, w, m, f);

// Triangle 150:

setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
setTriangle(&triangle[150], u, v, w, m, f);

// Triangle 151:

setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
setTriangle(&triangle[151], u, v, w, m, f);

// Triangle 152:

setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
setTriangle(&triangle[152], u, v, w, m, f);

// Triangle 153:

setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
setTriangle(&triangle[153], u, v, w, m, f);

// Triangle 154:

setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
setTriangle(&triangle[154], u, v, w, m, f);

// Triangle 155:

setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setTriangle(&triangle[155], u, v, w, m, f);

// Triangle 156:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
setTriangle(&triangle[156], u, v, w, m, f);

// Triangle 157:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setTriangle(&triangle[157], u, v, w, m, f);

// Triangle 158:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[158], u, v, w, m, f);

// Triangle 159:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.000002f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
setTriangle(&triangle[159], u, v, w, m, f);

// Triangle 160:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setTriangle(&triangle[160], u, v, w, m, f);

// Triangle 161:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[161], u, v, w, m, f);

// Triangle 162:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
setTriangle(&triangle[162], u, v, w, m, f);

// Triangle 163:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
setTriangle(&triangle[163], u, v, w, m, f);

// Triangle 164:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
setTriangle(&triangle[164], u, v, w, m, f);

// Triangle 165:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
setTriangle(&triangle[165], u, v, w, m, f);

// Triangle 166:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[166], u, v, w, m, f);

// Triangle 167:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-2.211875f), fp_Flt2FP(2.024516f), f);
setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[167], u, v, w, m, f);

// Triangle 168:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
setTriangle(&triangle[168], u, v, w, m, f);

// Triangle 169:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.000006f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
setTriangle(&triangle[169], u, v, w, m, f);

// Triangle 170:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[170], u, v, w, m, f);

// Triangle 171:

setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[171], u, v, w, m, f);

// Triangle 172:

setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setTriangle(&triangle[172], u, v, w, m, f);

// Triangle 173:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[173], u, v, w, m, f);

// Triangle 174:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
setTriangle(&triangle[174], u, v, w, m, f);

// Triangle 175:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[175], u, v, w, m, f);

// Triangle 176:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setTriangle(&triangle[176], u, v, w, m, f);

// Triangle 177:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[177], u, v, w, m, f);

// Triangle 178:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
setTriangle(&triangle[178], u, v, w, m, f);

// Triangle 179:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[179], u, v, w, m, f);

// Triangle 180:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[180], u, v, w, m, f);

// Triangle 181:

setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
setTriangle(&triangle[181], u, v, w, m, f);

// Triangle 182:

setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
setTriangle(&triangle[182], u, v, w, m, f);

// Triangle 183:

setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[183], u, v, w, m, f);

// Triangle 184:

setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
setTriangle(&triangle[184], u, v, w, m, f);

// Triangle 185:

setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.785149f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
setTriangle(&triangle[185], u, v, w, m, f);

// Triangle 186:

setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[186], u, v, w, m, f);

// Triangle 187:

setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[187], u, v, w, m, f);

// Triangle 188:

setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[188], u, v, w, m, f);

// Triangle 189:

setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
setTriangle(&triangle[189], u, v, w, m, f);

// Triangle 190:

setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
setTriangle(&triangle[190], u, v, w, m, f);

// Triangle 191:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
setTriangle(&triangle[191], u, v, w, m, f);

// Triangle 192:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
setTriangle(&triangle[192], u, v, w, m, f);

// Triangle 193:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
setTriangle(&triangle[193], u, v, w, m, f);

// Triangle 194:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
setTriangle(&triangle[194], u, v, w, m, f);

// Triangle 195:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[195], u, v, w, m, f);

// Triangle 196:

setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[196], u, v, w, m, f);

// Triangle 197:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[197], u, v, w, m, f);

// Triangle 198:

setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setTriangle(&triangle[198], u, v, w, m, f);

// Triangle 199:

setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
setTriangle(&triangle[199], u, v, w, m, f);

// Triangle 200:

setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
setTriangle(&triangle[200], u, v, w, m, f);

// Triangle 201:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(0.080005f), f);
setVector(&w, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
setTriangle(&triangle[201], u, v, w, m, f);

// Triangle 202:

setVector(&u, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(0.080004f), f);
setVector(&v, fp_Flt2FP(4.113945f), fp_Flt2FP(1.246094f), fp_Flt2FP(1.728004f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(0.397969f), fp_Flt2FP(1.728004f), f);
setTriangle(&triangle[202], u, v, w, m, f);

// Triangle 203:

setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
setTriangle(&triangle[203], u, v, w, m, f);

// Triangle 204:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[204], u, v, w, m, f);

// Triangle 205:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
setTriangle(&triangle[205], u, v, w, m, f);

// Triangle 206:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760000f), f);
setTriangle(&triangle[206], u, v, w, m, f);

// Triangle 207:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
setTriangle(&triangle[207], u, v, w, m, f);

// Triangle 208:

setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setTriangle(&triangle[208], u, v, w, m, f);

// Triangle 209:

setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[209], u, v, w, m, f);

// Triangle 210:

setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728000f), f);
setTriangle(&triangle[210], u, v, w, m, f);

// Triangle 211:

setVector(&u, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
setTriangle(&triangle[211], u, v, w, m, f);

// Triangle 212:

setVector(&u, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
setVector(&v, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
setTriangle(&triangle[212], u, v, w, m, f);

// Triangle 213:

setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
setVector(&w, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
setTriangle(&triangle[213], u, v, w, m, f);

// Triangle 214:

setVector(&u, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
setVector(&v, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[214], u, v, w, m, f);

// Triangle 215:

setVector(&u, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
setVector(&v, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
setVector(&w, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
setTriangle(&triangle[215], u, v, w, m, f);

// Triangle 216:

setVector(&u, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
setVector(&v, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
setVector(&w, fp_Flt2FP(1.834063f), fp_Flt2FP(4.874219f), fp_Flt2FP(1.728002f), f);
setTriangle(&triangle[216], u, v, w, m, f);

// Triangle 217:

setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760002f), f);
setVector(&w, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
setTriangle(&triangle[217], u, v, w, m, f);

// Triangle 218:

setVector(&u, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
setVector(&v, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728002f), f);
setTriangle(&triangle[218], u, v, w, m, f);

// Triangle 219:

setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
setTriangle(&triangle[219], u, v, w, m, f);

// Triangle 220:

setVector(&u, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
setTriangle(&triangle[220], u, v, w, m, f);

// Triangle 221:

setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
setTriangle(&triangle[221], u, v, w, m, f);

// Triangle 222:

setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
setVector(&v, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.874219f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[222], u, v, w, m, f);

// Triangle 223:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
setTriangle(&triangle[223], u, v, w, m, f);

// Triangle 224:

setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[224], u, v, w, m, f);

// Triangle 225:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
setTriangle(&triangle[225], u, v, w, m, f);

// Triangle 226:

setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(1.728001f), f);
setTriangle(&triangle[226], u, v, w, m, f);

// Triangle 227:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[227], u, v, w, m, f);

// Triangle 228:

setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[228], u, v, w, m, f);

// Triangle 229:

setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[229], u, v, w, m, f);

// Triangle 230:

setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[230], u, v, w, m, f);

// Triangle 231:

setVector(&u, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[231], u, v, w, m, f);

// Triangle 232:

setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-0.077852f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[232], u, v, w, m, f);

// Triangle 233:

setVector(&u, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[233], u, v, w, m, f);

// Triangle 234:

setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-1.165977f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[234], u, v, w, m, f);

// Triangle 235:

setVector(&u, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
setVector(&w, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
setTriangle(&triangle[235], u, v, w, m, f);

// Triangle 236:

setVector(&u, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
setVector(&v, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
setVector(&w, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
setTriangle(&triangle[236], u, v, w, m, f);

// Triangle 237:

setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
setVector(&v, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
setTriangle(&triangle[237], u, v, w, m, f);

// Triangle 238:

setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
setVector(&v, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.874062f), fp_Flt2FP(3.160002f), f);
setTriangle(&triangle[238], u, v, w, m, f);

// Triangle 239:

setVector(&u, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
setVector(&v, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
setTriangle(&triangle[239], u, v, w, m, f);

// Triangle 240:

setVector(&u, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
setVector(&v, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
setVector(&w, fp_Flt2FP(1.834101f), fp_Flt2FP(4.874062f), fp_Flt2FP(4.128002f), f);
setTriangle(&triangle[240], u, v, w, m, f);

// Triangle 241:

setVector(&u, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
setVector(&v, fp_Flt2FP(2.922149f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160002f), f);
setVector(&w, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
setTriangle(&triangle[241], u, v, w, m, f);

// Triangle 242:

setVector(&u, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
setVector(&v, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
setVector(&w, fp_Flt2FP(2.922109f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128002f), f);
setTriangle(&triangle[242], u, v, w, m, f);

// Triangle 243:

setVector(&u, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
setTriangle(&triangle[243], u, v, w, m, f);

// Triangle 244:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
setVector(&v, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
setVector(&w, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[244], u, v, w, m, f);

// Triangle 245:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
setTriangle(&triangle[245], u, v, w, m, f);

// Triangle 246:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160000f), f);
setTriangle(&triangle[246], u, v, w, m, f);

// Triangle 247:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
setTriangle(&triangle[247], u, v, w, m, f);

// Triangle 248:

setVector(&u, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128000f), f);
setTriangle(&triangle[248], u, v, w, m, f);

// Triangle 249:

setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.873906f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
setTriangle(&triangle[249], u, v, w, m, f);

// Triangle 250:

setVector(&u, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
setVector(&v, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[250], u, v, w, m, f);

// Triangle 251:

setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
setTriangle(&triangle[251], u, v, w, m, f);

// Triangle 252:

setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
setTriangle(&triangle[252], u, v, w, m, f);

// Triangle 253:

setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[253], u, v, w, m, f);

// Triangle 254:

setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760006f), f);
setTriangle(&triangle[254], u, v, w, m, f);

// Triangle 255:

setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[255], u, v, w, m, f);

// Triangle 256:

setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(1.728006f), f);
setTriangle(&triangle[256], u, v, w, m, f);

// Triangle 257:

setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.760006f), f);
setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
setTriangle(&triangle[257], u, v, w, m, f);

// Triangle 258:

setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728006f), f);
setTriangle(&triangle[258], u, v, w, m, f);

// Triangle 259:

setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[259], u, v, w, m, f);

// Triangle 260:

setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
setTriangle(&triangle[260], u, v, w, m, f);

// Triangle 261:

setVector(&u, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[261], u, v, w, m, f);

// Triangle 262:

setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160006f), f);
setTriangle(&triangle[262], u, v, w, m, f);

// Triangle 263:

setVector(&u, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
setTriangle(&triangle[263], u, v, w, m, f);

// Triangle 264:

setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160006f), f);
setTriangle(&triangle[264], u, v, w, m, f);

// Triangle 265:

setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
setVector(&v, fp_Flt2FP(-2.845859f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128006f), f);
setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
setTriangle(&triangle[265], u, v, w, m, f);

// Triangle 266:

setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
setVector(&v, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.128006f), f);
setTriangle(&triangle[266], u, v, w, m, f);

// Triangle 267:

setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[267], u, v, w, m, f);

// Triangle 268:

setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
setTriangle(&triangle[268], u, v, w, m, f);

// Triangle 269:

setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[269], u, v, w, m, f);

// Triangle 270:

setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.128008f), f);
setTriangle(&triangle[270], u, v, w, m, f);

// Triangle 271:

setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[271], u, v, w, m, f);

// Triangle 272:

setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[272], u, v, w, m, f);

// Triangle 273:

setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(3.160008f), f);
setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[273], u, v, w, m, f);

// Triangle 274:

setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[274], u, v, w, m, f);

// Triangle 275:

setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[275], u, v, w, m, f);

// Triangle 276:

setVector(&u, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[276], u, v, w, m, f);

// Triangle 277:

setVector(&u, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
setTriangle(&triangle[277], u, v, w, m, f);

// Triangle 278:

setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setVector(&w, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[278], u, v, w, m, f);

// Triangle 279:

setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
setTriangle(&triangle[279], u, v, w, m, f);

// Triangle 280:

setVector(&u, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[280], u, v, w, m, f);

// Triangle 281:

setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
setTriangle(&triangle[281], u, v, w, m, f);

// Triangle 282:

setVector(&u, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
setVector(&v, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[282], u, v, w, m, f);

// Triangle 283:

setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[283], u, v, w, m, f);

// Triangle 284:

setVector(&u, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[284], u, v, w, m, f);

// Triangle 285:

setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[285], u, v, w, m, f);

// Triangle 286:

setVector(&u, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[286], u, v, w, m, f);

// Triangle 287:

setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[287], u, v, w, m, f);

// Triangle 288:

setVector(&u, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[288], u, v, w, m, f);

// Triangle 289:

setVector(&u, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[289], u, v, w, m, f);

// Triangle 290:

setVector(&u, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(1.242305f), fp_Flt2FP(-4.874062f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[290], u, v, w, m, f);

// Triangle 291:

setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
setTriangle(&triangle[291], u, v, w, m, f);

// Triangle 292:

setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
setVector(&v, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[292], u, v, w, m, f);

// Triangle 293:

setVector(&u, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
setTriangle(&triangle[293], u, v, w, m, f);

// Triangle 294:

setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
setVector(&w, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874219f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[294], u, v, w, m, f);

// Triangle 295:

setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
setTriangle(&triangle[295], u, v, w, m, f);

// Triangle 296:

setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[296], u, v, w, m, f);

// Triangle 297:

setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(3.402148f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
setTriangle(&triangle[297], u, v, w, m, f);

// Triangle 298:

setVector(&u, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[298], u, v, w, m, f);

// Triangle 299:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
setTriangle(&triangle[299], u, v, w, m, f);

// Triangle 300:

setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
setTriangle(&triangle[300], u, v, w, m, f);

// Triangle 301:

setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
setTriangle(&triangle[301], u, v, w, m, f);

// Triangle 302:

setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[302], u, v, w, m, f);

// Triangle 303:

setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
setTriangle(&triangle[303], u, v, w, m, f);

// Triangle 304:

setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[304], u, v, w, m, f);

// Triangle 305:

setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728006f), f);
setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
setTriangle(&triangle[305], u, v, w, m, f);

// Triangle 306:

setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760006f), f);
setTriangle(&triangle[306], u, v, w, m, f);

// Triangle 307:

setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[307], u, v, w, m, f);

// Triangle 308:

setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
setTriangle(&triangle[308], u, v, w, m, f);

// Triangle 309:

setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[309], u, v, w, m, f);

// Triangle 310:

setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[310], u, v, w, m, f);

// Triangle 311:

setVector(&u, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setTriangle(&triangle[311], u, v, w, m, f);

// Triangle 312:

setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(4.114219f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[312], u, v, w, m, f);

// Triangle 313:

setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
setTriangle(&triangle[313], u, v, w, m, f);

// Triangle 314:

setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setTriangle(&triangle[314], u, v, w, m, f);

// Triangle 315:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[315], u, v, w, m, f);

// Triangle 316:

setVector(&u, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
setTriangle(&triangle[316], u, v, w, m, f);

// Triangle 317:

setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[317], u, v, w, m, f);

// Triangle 318:

setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(2.557969f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[318], u, v, w, m, f);

// Triangle 319:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
setTriangle(&triangle[319], u, v, w, m, f);

// Triangle 320:

setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[320], u, v, w, m, f);

// Triangle 321:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(4.128004f), f);
setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
setTriangle(&triangle[321], u, v, w, m, f);

// Triangle 322:

setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
setTriangle(&triangle[322], u, v, w, m, f);

// Triangle 323:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[323], u, v, w, m, f);

// Triangle 324:

setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
setTriangle(&triangle[324], u, v, w, m, f);

// Triangle 325:

setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[325], u, v, w, m, f);

// Triangle 326:

setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728006f), f);
setTriangle(&triangle[326], u, v, w, m, f);

// Triangle 327:

setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[327], u, v, w, m, f);

// Triangle 328:

setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760006f), f);
setTriangle(&triangle[328], u, v, w, m, f);

// Triangle 329:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728005f), f);
setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[329], u, v, w, m, f);

// Triangle 330:

setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760005f), f);
setTriangle(&triangle[330], u, v, w, m, f);

// Triangle 331:

setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
setTriangle(&triangle[331], u, v, w, m, f);

// Triangle 332:

setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
setTriangle(&triangle[332], u, v, w, m, f);

// Triangle 333:

setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
setVector(&w, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
setTriangle(&triangle[333], u, v, w, m, f);

// Triangle 334:

setVector(&u, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160006f), f);
setTriangle(&triangle[334], u, v, w, m, f);

// Triangle 335:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
setVector(&w, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
setTriangle(&triangle[335], u, v, w, m, f);

// Triangle 336:

setVector(&u, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
setVector(&v, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.160005f), f);
setTriangle(&triangle[336], u, v, w, m, f);

// Triangle 337:

setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
setVector(&v, fp_Flt2FP(4.114101f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128005f), f);
setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
setTriangle(&triangle[337], u, v, w, m, f);

// Triangle 338:

setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
setVector(&v, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.128005f), f);
setTriangle(&triangle[338], u, v, w, m, f);

// Triangle 339:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
setTriangle(&triangle[339], u, v, w, m, f);

// Triangle 340:

setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
setTriangle(&triangle[340], u, v, w, m, f);

// Triangle 341:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
setTriangle(&triangle[341], u, v, w, m, f);

// Triangle 342:

setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.760004f), f);
setTriangle(&triangle[342], u, v, w, m, f);

// Triangle 343:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
setTriangle(&triangle[343], u, v, w, m, f);

// Triangle 344:

setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760005f), f);
setTriangle(&triangle[344], u, v, w, m, f);

// Triangle 345:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.728004f), f);
setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
setTriangle(&triangle[345], u, v, w, m, f);

// Triangle 346:

setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728005f), f);
setTriangle(&triangle[346], u, v, w, m, f);

// Triangle 347:

setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
setTriangle(&triangle[347], u, v, w, m, f);

// Triangle 348:

setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
setVector(&v, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[348], u, v, w, m, f);

// Triangle 349:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
setTriangle(&triangle[349], u, v, w, m, f);

// Triangle 350:

setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.760001f), f);
setTriangle(&triangle[350], u, v, w, m, f);

// Triangle 351:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
setVector(&w, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
setTriangle(&triangle[351], u, v, w, m, f);

// Triangle 352:

setVector(&u, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.728001f), f);
setTriangle(&triangle[352], u, v, w, m, f);

// Triangle 353:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
setTriangle(&triangle[353], u, v, w, m, f);

// Triangle 354:

setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.728001f), f);
setTriangle(&triangle[354], u, v, w, m, f);

// Triangle 355:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
setTriangle(&triangle[355], u, v, w, m, f);

// Triangle 356:

setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
setVector(&v, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[356], u, v, w, m, f);

// Triangle 357:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
setTriangle(&triangle[357], u, v, w, m, f);

// Triangle 358:

setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[358], u, v, w, m, f);

// Triangle 359:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
setTriangle(&triangle[359], u, v, w, m, f);

// Triangle 360:

setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760003f), f);
setTriangle(&triangle[360], u, v, w, m, f);

// Triangle 361:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(3.645937f), fp_Flt2FP(1.728003f), f);
setVector(&w, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
setTriangle(&triangle[361], u, v, w, m, f);

// Triangle 362:

setVector(&u, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760003f), f);
setTriangle(&triangle[362], u, v, w, m, f);

// Triangle 363:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
setTriangle(&triangle[363], u, v, w, m, f);

// Triangle 364:

setVector(&u, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[364], u, v, w, m, f);

// Triangle 365:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
setTriangle(&triangle[365], u, v, w, m, f);

// Triangle 366:

setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[366], u, v, w, m, f);

// Triangle 367:

setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
setTriangle(&triangle[367], u, v, w, m, f);

// Triangle 368:

setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
setVector(&v, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[368], u, v, w, m, f);

// Triangle 369:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
setTriangle(&triangle[369], u, v, w, m, f);

// Triangle 370:

setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[370], u, v, w, m, f);

// Triangle 371:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[371], u, v, w, m, f);

// Triangle 372:

setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
setTriangle(&triangle[372], u, v, w, m, f);

// Triangle 373:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[373], u, v, w, m, f);

// Triangle 374:

setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-2.558125f), fp_Flt2FP(3.160005f), f);
setTriangle(&triangle[374], u, v, w, m, f);

// Triangle 375:

setVector(&u, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
setTriangle(&triangle[375], u, v, w, m, f);

// Triangle 376:

setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-4.037734f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160005f), f);
setTriangle(&triangle[376], u, v, w, m, f);

// Triangle 377:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
setVector(&v, fp_Flt2FP(-4.037734f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128005f), f);
setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
setTriangle(&triangle[377], u, v, w, m, f);

// Triangle 378:

setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128005f), f);
setTriangle(&triangle[378], u, v, w, m, f);

// Triangle 379:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
setTriangle(&triangle[379], u, v, w, m, f);

// Triangle 380:

setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
setVector(&v, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
setTriangle(&triangle[380], u, v, w, m, f);

// Triangle 381:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
setTriangle(&triangle[381], u, v, w, m, f);

// Triangle 382:

setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[382], u, v, w, m, f);

// Triangle 383:

setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
setTriangle(&triangle[383], u, v, w, m, f);

// Triangle 384:

setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[384], u, v, w, m, f);

// Triangle 385:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(0.201875f), fp_Flt2FP(4.128003f), f);
setVector(&w, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
setTriangle(&triangle[385], u, v, w, m, f);

// Triangle 386:

setVector(&u, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.885938f), fp_Flt2FP(4.128004f), f);
setTriangle(&triangle[386], u, v, w, m, f);

// Triangle 387:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
setTriangle(&triangle[387], u, v, w, m, f);

// Triangle 388:

setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[388], u, v, w, m, f);

// Triangle 389:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
setTriangle(&triangle[389], u, v, w, m, f);

// Triangle 390:

setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080003f), f);
setTriangle(&triangle[390], u, v, w, m, f);

// Triangle 391:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
setTriangle(&triangle[391], u, v, w, m, f);

// Triangle 392:

setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080003f), f);
setTriangle(&triangle[392], u, v, w, m, f);

// Triangle 393:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(0.081875f), fp_Flt2FP(1.728003f), f);
setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
setTriangle(&triangle[393], u, v, w, m, f);

// Triangle 394:

setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[394], u, v, w, m, f);

// Triangle 395:

setVector(&u, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
setVector(&v, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
setVector(&w, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
setTriangle(&triangle[395], u, v, w, m, f);

// Triangle 396:

setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
setVector(&v, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
setVector(&w, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
setTriangle(&triangle[396], u, v, w, m, f);

// Triangle 397:

setVector(&u, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
setVector(&v, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
setVector(&w, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
setTriangle(&triangle[397], u, v, w, m, f);

// Triangle 398:

setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
setVector(&v, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
setVector(&w, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
setTriangle(&triangle[398], u, v, w, m, f);

// Triangle 399:

setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
setVector(&v, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
setVector(&w, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
setTriangle(&triangle[399], u, v, w, m, f);

// Triangle 400:

setVector(&u, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
setVector(&v, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
setVector(&w, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
setTriangle(&triangle[400], u, v, w, m, f);

// Triangle 401:

setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
setVector(&v, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
setVector(&w, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
setTriangle(&triangle[401], u, v, w, m, f);

// Triangle 402:

setVector(&u, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
setVector(&v, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
setVector(&w, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
setTriangle(&triangle[402], u, v, w, m, f);

// Triangle 403:

setVector(&u, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
setVector(&v, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
setTriangle(&triangle[403], u, v, w, m, f);

// Triangle 404:

setVector(&u, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
setVector(&v, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
setTriangle(&triangle[404], u, v, w, m, f);

// Triangle 405:

setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
setVector(&v, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
setTriangle(&triangle[405], u, v, w, m, f);

// Triangle 406:

setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
setVector(&v, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
setVector(&w, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
setTriangle(&triangle[406], u, v, w, m, f);

// Triangle 407:

setVector(&u, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
setVector(&v, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
setVector(&w, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
setTriangle(&triangle[407], u, v, w, m, f);

// Triangle 408:

setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
setVector(&v, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
setVector(&w, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
setTriangle(&triangle[408], u, v, w, m, f);

// Triangle 409:

setVector(&u, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
setVector(&v, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
setVector(&w, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
setTriangle(&triangle[409], u, v, w, m, f);

// Triangle 410:

setVector(&u, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
setVector(&v, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
setTriangle(&triangle[410], u, v, w, m, f);

// Triangle 411:

setVector(&u, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
setVector(&v, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
setTriangle(&triangle[411], u, v, w, m, f);

// Triangle 412:

setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
setVector(&v, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
setTriangle(&triangle[412], u, v, w, m, f);

// Triangle 413:

setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
setVector(&v, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
setTriangle(&triangle[413], u, v, w, m, f);

// Triangle 414:

setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
setVector(&v, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
setTriangle(&triangle[414], u, v, w, m, f);

// Triangle 415:

setVector(&u, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
setVector(&v, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
setTriangle(&triangle[415], u, v, w, m, f);

// Triangle 416:

setVector(&u, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
setVector(&v, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
setTriangle(&triangle[416], u, v, w, m, f);

// Triangle 417:

setVector(&u, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
setVector(&v, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
setVector(&w, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
setTriangle(&triangle[417], u, v, w, m, f);

// Triangle 418:

setVector(&u, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
setVector(&v, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
setVector(&w, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
setTriangle(&triangle[418], u, v, w, m, f);

// Triangle 419:

setVector(&u, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
setVector(&v, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
setVector(&w, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
setTriangle(&triangle[419], u, v, w, m, f);

// Triangle 420:

setVector(&u, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
setVector(&v, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
setVector(&w, fp_Flt2FP(-0.838555f), fp_Flt2FP(-4.327187f), fp_Flt2FP(6.838049f), f);
setTriangle(&triangle[420], u, v, w, m, f);

// Triangle 421:

setVector(&u, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
setVector(&v, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
setVector(&w, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
setTriangle(&triangle[421], u, v, w, m, f);

// Triangle 422:

setVector(&u, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
setVector(&v, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
setVector(&w, fp_Flt2FP(-0.861406f), fp_Flt2FP(-4.334219f), fp_Flt2FP(6.838834f), f);
setTriangle(&triangle[422], u, v, w, m, f);

// Triangle 423:

setVector(&u, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
setVector(&v, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
setVector(&w, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
setTriangle(&triangle[423], u, v, w, m, f);

// Triangle 424:

setVector(&u, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
setVector(&v, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
setVector(&w, fp_Flt2FP(-0.881680f), fp_Flt2FP(-4.347031f), fp_Flt2FP(6.839509f), f);
setTriangle(&triangle[424], u, v, w, m, f);

// Triangle 425:

setVector(&u, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
setVector(&v, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
setVector(&w, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
setTriangle(&triangle[425], u, v, w, m, f);

// Triangle 426:

setVector(&u, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
setVector(&v, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
setVector(&w, fp_Flt2FP(-0.897930f), fp_Flt2FP(-4.364687f), fp_Flt2FP(6.840026f), f);
setTriangle(&triangle[426], u, v, w, m, f);

// Triangle 427:

setVector(&u, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
setVector(&v, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
setVector(&w, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
setTriangle(&triangle[427], u, v, w, m, f);

// Triangle 428:

setVector(&u, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
setVector(&v, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
setVector(&w, fp_Flt2FP(-0.909102f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.840352f), f);
setTriangle(&triangle[428], u, v, w, m, f);

// Triangle 429:

setVector(&u, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
setVector(&v, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
setVector(&w, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
setTriangle(&triangle[429], u, v, w, m, f);

// Triangle 430:

setVector(&u, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
setVector(&v, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
setVector(&w, fp_Flt2FP(-0.914375f), fp_Flt2FP(-4.409219f), fp_Flt2FP(6.840462f), f);
setTriangle(&triangle[430], u, v, w, m, f);

// Triangle 431:

setVector(&u, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
setVector(&v, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
setVector(&w, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
setTriangle(&triangle[431], u, v, w, m, f);

// Triangle 432:

setVector(&u, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
setVector(&v, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
setVector(&w, fp_Flt2FP(-0.913437f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.840352f), f);
setTriangle(&triangle[432], u, v, w, m, f);

// Triangle 433:

setVector(&u, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
setVector(&v, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
setVector(&w, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
setTriangle(&triangle[433], u, v, w, m, f);

// Triangle 434:

setVector(&u, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
setVector(&v, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
setVector(&w, fp_Flt2FP(-0.906367f), fp_Flt2FP(-4.456094f), fp_Flt2FP(6.840026f), f);
setTriangle(&triangle[434], u, v, w, m, f);

// Triangle 435:

setVector(&u, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
setVector(&v, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
setVector(&w, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
setTriangle(&triangle[435], u, v, w, m, f);

// Triangle 436:

setVector(&u, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
setVector(&v, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
setVector(&w, fp_Flt2FP(-0.893555f), fp_Flt2FP(-4.476406f), fp_Flt2FP(6.839509f), f);
setTriangle(&triangle[436], u, v, w, m, f);

// Triangle 437:

setVector(&u, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
setVector(&v, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
setVector(&w, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
setTriangle(&triangle[437], u, v, w, m, f);

// Triangle 438:

setVector(&u, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
setVector(&v, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
setVector(&w, fp_Flt2FP(-0.875977f), fp_Flt2FP(-4.492656f), fp_Flt2FP(6.838834f), f);
setTriangle(&triangle[438], u, v, w, m, f);

// Triangle 439:

setVector(&u, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
setVector(&v, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
setVector(&w, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
setTriangle(&triangle[439], u, v, w, m, f);

// Triangle 440:

setVector(&u, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
setVector(&v, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
setVector(&w, fp_Flt2FP(-0.854766f), fp_Flt2FP(-4.503750f), fp_Flt2FP(6.838049f), f);
setTriangle(&triangle[440], u, v, w, m, f);

// Triangle 441:

setVector(&u, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
setVector(&v, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
setVector(&w, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
setTriangle(&triangle[441], u, v, w, m, f);

// Triangle 442:

setVector(&u, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
setVector(&v, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
setVector(&w, fp_Flt2FP(-0.831406f), fp_Flt2FP(-4.509063f), fp_Flt2FP(6.837206f), f);
setTriangle(&triangle[442], u, v, w, m, f);

// Triangle 443:

setVector(&u, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
setVector(&v, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
setVector(&w, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
setTriangle(&triangle[443], u, v, w, m, f);

// Triangle 444:

setVector(&u, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
setVector(&v, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
setVector(&w, fp_Flt2FP(-0.807461f), fp_Flt2FP(-4.508125f), fp_Flt2FP(6.836363f), f);
setTriangle(&triangle[444], u, v, w, m, f);

// Triangle 445:

setVector(&u, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
setVector(&v, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
setVector(&w, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
setTriangle(&triangle[445], u, v, w, m, f);

// Triangle 446:

setVector(&u, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
setVector(&v, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
setVector(&w, fp_Flt2FP(-0.784609f), fp_Flt2FP(-4.501094f), fp_Flt2FP(6.835579f), f);
setTriangle(&triangle[446], u, v, w, m, f);

// Triangle 447:

setVector(&u, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
setVector(&v, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
setVector(&w, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
setTriangle(&triangle[447], u, v, w, m, f);

// Triangle 448:

setVector(&u, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
setVector(&v, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
setVector(&w, fp_Flt2FP(-0.764336f), fp_Flt2FP(-4.488281f), fp_Flt2FP(6.834904f), f);
setTriangle(&triangle[448], u, v, w, m, f);

// Triangle 449:

setVector(&u, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
setVector(&v, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
setVector(&w, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
setTriangle(&triangle[449], u, v, w, m, f);

// Triangle 450:

setVector(&u, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
setVector(&v, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
setVector(&w, fp_Flt2FP(-0.748086f), fp_Flt2FP(-4.470625f), fp_Flt2FP(6.834386f), f);
setTriangle(&triangle[450], u, v, w, m, f);

// Triangle 451:

setVector(&u, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
setVector(&v, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
setVector(&w, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
setTriangle(&triangle[451], u, v, w, m, f);

// Triangle 452:

setVector(&u, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
setVector(&v, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
setVector(&w, fp_Flt2FP(-0.736914f), fp_Flt2FP(-4.449375f), fp_Flt2FP(6.834061f), f);
setTriangle(&triangle[452], u, v, w, m, f);

// Triangle 453:

setVector(&u, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
setVector(&v, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
setVector(&w, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
setTriangle(&triangle[453], u, v, w, m, f);

// Triangle 454:

setVector(&u, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
setVector(&v, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
setVector(&w, fp_Flt2FP(-0.731641f), fp_Flt2FP(-4.426094f), fp_Flt2FP(6.833950f), f);
setTriangle(&triangle[454], u, v, w, m, f);

// Triangle 455:

setVector(&u, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
setVector(&v, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
setVector(&w, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
setTriangle(&triangle[455], u, v, w, m, f);

// Triangle 456:

setVector(&u, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
setVector(&v, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
setVector(&w, fp_Flt2FP(-0.732578f), fp_Flt2FP(-4.402031f), fp_Flt2FP(6.834061f), f);
setTriangle(&triangle[456], u, v, w, m, f);

// Triangle 457:

setVector(&u, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
setVector(&v, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
setVector(&w, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
setTriangle(&triangle[457], u, v, w, m, f);

// Triangle 458:

setVector(&u, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
setVector(&v, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
setVector(&w, fp_Flt2FP(-0.739648f), fp_Flt2FP(-4.379219f), fp_Flt2FP(6.834386f), f);
setTriangle(&triangle[458], u, v, w, m, f);

// Triangle 459:

setVector(&u, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
setVector(&v, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
setVector(&w, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
setTriangle(&triangle[459], u, v, w, m, f);

// Triangle 460:

setVector(&u, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
setVector(&v, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
setVector(&w, fp_Flt2FP(-0.752461f), fp_Flt2FP(-4.358906f), fp_Flt2FP(6.834904f), f);
setTriangle(&triangle[460], u, v, w, m, f);

// Triangle 461:

setVector(&u, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
setVector(&v, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
setVector(&w, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
setTriangle(&triangle[461], u, v, w, m, f);

// Triangle 462:

setVector(&u, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
setVector(&v, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
setVector(&w, fp_Flt2FP(-0.770039f), fp_Flt2FP(-4.342656f), fp_Flt2FP(6.835579f), f);
setTriangle(&triangle[462], u, v, w, m, f);

// Triangle 463:

setVector(&u, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
setVector(&v, fp_Flt2FP(-0.814609f), fp_Flt2FP(-4.326250f), fp_Flt2FP(6.837206f), f);
setVector(&w, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
setTriangle(&triangle[463], u, v, w, m, f);

// Triangle 464:

setVector(&u, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
setVector(&v, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
setVector(&w, fp_Flt2FP(-0.791250f), fp_Flt2FP(-4.331562f), fp_Flt2FP(6.836363f), f);
setTriangle(&triangle[464], u, v, w, m, f);

// Triangle 465:

setVector(&u, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
setVector(&v, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
setVector(&w, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
setTriangle(&triangle[465], u, v, w, m, f);

// Triangle 466:

setVector(&u, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
setVector(&v, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
setVector(&w, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
setTriangle(&triangle[466], u, v, w, m, f);

// Triangle 467:

setVector(&u, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
setVector(&v, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
setVector(&w, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
setTriangle(&triangle[467], u, v, w, m, f);

// Triangle 468:

setVector(&u, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
setVector(&v, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
setVector(&w, fp_Flt2FP(-0.834688f), fp_Flt2FP(-4.345313f), fp_Flt2FP(6.859373f), f);
setTriangle(&triangle[468], u, v, w, m, f);

// Triangle 469:

setVector(&u, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
setVector(&v, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
setVector(&w, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
setTriangle(&triangle[469], u, v, w, m, f);

// Triangle 470:

setVector(&u, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
setVector(&v, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
setVector(&w, fp_Flt2FP(-0.852969f), fp_Flt2FP(-4.350938f), fp_Flt2FP(6.860002f), f);
setTriangle(&triangle[470], u, v, w, m, f);

// Triangle 471:

setVector(&u, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
setVector(&v, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
setVector(&w, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
setTriangle(&triangle[471], u, v, w, m, f);

// Triangle 472:

setVector(&u, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
setVector(&v, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
setVector(&w, fp_Flt2FP(-0.869180f), fp_Flt2FP(-4.361250f), fp_Flt2FP(6.860542f), f);
setTriangle(&triangle[472], u, v, w, m, f);

// Triangle 473:

setVector(&u, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
setVector(&v, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
setVector(&w, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
setTriangle(&triangle[473], u, v, w, m, f);

// Triangle 474:

setVector(&u, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
setVector(&v, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
setVector(&w, fp_Flt2FP(-0.882187f), fp_Flt2FP(-4.375312f), fp_Flt2FP(6.860956f), f);
setTriangle(&triangle[474], u, v, w, m, f);

// Triangle 475:

setVector(&u, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
setVector(&v, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
setVector(&w, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
setTriangle(&triangle[475], u, v, w, m, f);

// Triangle 476:

setVector(&u, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
setVector(&v, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
setVector(&w, fp_Flt2FP(-0.891133f), fp_Flt2FP(-4.392344f), fp_Flt2FP(6.861216f), f);
setTriangle(&triangle[476], u, v, w, m, f);

// Triangle 477:

setVector(&u, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
setVector(&v, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
setVector(&w, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
setTriangle(&triangle[477], u, v, w, m, f);

// Triangle 478:

setVector(&u, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
setVector(&v, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
setVector(&w, fp_Flt2FP(-0.895352f), fp_Flt2FP(-4.410938f), fp_Flt2FP(6.861304f), f);
setTriangle(&triangle[478], u, v, w, m, f);

// Triangle 479:

setVector(&u, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
setVector(&v, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
setVector(&w, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
setTriangle(&triangle[479], u, v, w, m, f);

// Triangle 480:

setVector(&u, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
setVector(&v, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
setVector(&w, fp_Flt2FP(-0.894609f), fp_Flt2FP(-4.430156f), fp_Flt2FP(6.861216f), f);
setTriangle(&triangle[480], u, v, w, m, f);

// Triangle 481:

setVector(&u, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
setVector(&v, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
setVector(&w, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
setTriangle(&triangle[481], u, v, w, m, f);

// Triangle 482:

setVector(&u, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
setVector(&v, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
setVector(&w, fp_Flt2FP(-0.888945f), fp_Flt2FP(-4.448437f), fp_Flt2FP(6.860956f), f);
setTriangle(&triangle[482], u, v, w, m, f);

// Triangle 483:

setVector(&u, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
setVector(&v, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
setVector(&w, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
setTriangle(&triangle[483], u, v, w, m, f);

// Triangle 484:

setVector(&u, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
setVector(&v, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
setVector(&w, fp_Flt2FP(-0.878711f), fp_Flt2FP(-4.464687f), fp_Flt2FP(6.860542f), f);
setTriangle(&triangle[484], u, v, w, m, f);

// Triangle 485:

setVector(&u, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
setVector(&v, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
setVector(&w, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
setTriangle(&triangle[485], u, v, w, m, f);

// Triangle 486:

setVector(&u, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
setVector(&v, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
setVector(&w, fp_Flt2FP(-0.864609f), fp_Flt2FP(-4.477656f), fp_Flt2FP(6.860002f), f);
setTriangle(&triangle[486], u, v, w, m, f);

// Triangle 487:

setVector(&u, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
setVector(&v, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
setVector(&w, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
setTriangle(&triangle[487], u, v, w, m, f);

// Triangle 488:

setVector(&u, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
setVector(&v, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
setVector(&w, fp_Flt2FP(-0.847656f), fp_Flt2FP(-4.486719f), fp_Flt2FP(6.859373f), f);
setTriangle(&triangle[488], u, v, w, m, f);

// Triangle 489:

setVector(&u, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
setVector(&v, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
setVector(&w, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
setTriangle(&triangle[489], u, v, w, m, f);

// Triangle 490:

setVector(&u, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
setVector(&v, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
setVector(&w, fp_Flt2FP(-0.828984f), fp_Flt2FP(-4.490937f), fp_Flt2FP(6.858699f), f);
setTriangle(&triangle[490], u, v, w, m, f);

// Triangle 491:

setVector(&u, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
setVector(&v, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
setVector(&w, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
setTriangle(&triangle[491], u, v, w, m, f);

// Triangle 492:

setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
setVector(&v, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
setVector(&w, fp_Flt2FP(-0.809805f), fp_Flt2FP(-4.490156f), fp_Flt2FP(6.858025f), f);
setTriangle(&triangle[492], u, v, w, m, f);

// Triangle 493:

setVector(&u, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
setVector(&v, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
setTriangle(&triangle[493], u, v, w, m, f);

// Triangle 494:

setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
setVector(&w, fp_Flt2FP(-0.791523f), fp_Flt2FP(-4.484375f), fp_Flt2FP(6.857397f), f);
setTriangle(&triangle[494], u, v, w, m, f);

// Triangle 495:

setVector(&u, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
setVector(&v, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
setVector(&w, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
setTriangle(&triangle[495], u, v, w, m, f);

// Triangle 496:

setVector(&u, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
setVector(&w, fp_Flt2FP(-0.775313f), fp_Flt2FP(-4.474219f), fp_Flt2FP(6.856858f), f);
setTriangle(&triangle[496], u, v, w, m, f);

// Triangle 497:

setVector(&u, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
setVector(&v, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
setVector(&w, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
setTriangle(&triangle[497], u, v, w, m, f);

// Triangle 498:

setVector(&u, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
setVector(&v, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
setVector(&w, fp_Flt2FP(-0.762305f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.856444f), f);
setTriangle(&triangle[498], u, v, w, m, f);

// Triangle 499:

setVector(&u, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
setVector(&v, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
setVector(&w, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
setTriangle(&triangle[499], u, v, w, m, f);

// Triangle 500:

setVector(&u, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
setVector(&v, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
setVector(&w, fp_Flt2FP(-0.753359f), fp_Flt2FP(-4.443125f), fp_Flt2FP(6.856184f), f);
setTriangle(&triangle[500], u, v, w, m, f);

// Triangle 501:

setVector(&u, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
setVector(&v, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
setVector(&w, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
setTriangle(&triangle[501], u, v, w, m, f);

// Triangle 502:

setVector(&u, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
setVector(&v, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
setVector(&w, fp_Flt2FP(-0.749141f), fp_Flt2FP(-4.424375f), fp_Flt2FP(6.856095f), f);
setTriangle(&triangle[502], u, v, w, m, f);

// Triangle 503:

setVector(&u, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
setVector(&v, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
setVector(&w, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
setTriangle(&triangle[503], u, v, w, m, f);

// Triangle 504:

setVector(&u, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
setVector(&v, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
setVector(&w, fp_Flt2FP(-0.749883f), fp_Flt2FP(-4.405312f), fp_Flt2FP(6.856184f), f);
setTriangle(&triangle[504], u, v, w, m, f);

// Triangle 505:

setVector(&u, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
setVector(&v, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
setVector(&w, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
setTriangle(&triangle[505], u, v, w, m, f);

// Triangle 506:

setVector(&u, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
setVector(&v, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
setVector(&w, fp_Flt2FP(-0.755586f), fp_Flt2FP(-4.387031f), fp_Flt2FP(6.856444f), f);
setTriangle(&triangle[506], u, v, w, m, f);

// Triangle 507:

setVector(&u, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
setVector(&v, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
setVector(&w, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
setTriangle(&triangle[507], u, v, w, m, f);

// Triangle 508:

setVector(&u, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
setVector(&v, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
setVector(&w, fp_Flt2FP(-0.765781f), fp_Flt2FP(-4.370781f), fp_Flt2FP(6.856858f), f);
setTriangle(&triangle[508], u, v, w, m, f);

// Triangle 509:

setVector(&u, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
setVector(&v, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
setVector(&w, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
setTriangle(&triangle[509], u, v, w, m, f);

// Triangle 510:

setVector(&u, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
setVector(&v, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
setVector(&w, fp_Flt2FP(-0.779883f), fp_Flt2FP(-4.357656f), fp_Flt2FP(6.857397f), f);
setTriangle(&triangle[510], u, v, w, m, f);

// Triangle 511:

setVector(&u, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
setVector(&v, fp_Flt2FP(-0.815508f), fp_Flt2FP(-4.344531f), fp_Flt2FP(6.858699f), f);
setVector(&w, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
setTriangle(&triangle[511], u, v, w, m, f);

// Triangle 512:

setVector(&u, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
setVector(&v, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
setVector(&w, fp_Flt2FP(-0.796836f), fp_Flt2FP(-4.348750f), fp_Flt2FP(6.858025f), f);
setTriangle(&triangle[512], u, v, w, m, f);

// Triangle 513:

setVector(&u, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
setVector(&v, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
setVector(&w, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
setTriangle(&triangle[513], u, v, w, m, f);

// Triangle 514:

setVector(&u, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
setVector(&v, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
setVector(&w, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
setTriangle(&triangle[514], u, v, w, m, f);

// Triangle 515:

setVector(&u, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
setVector(&v, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
setVector(&w, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
setTriangle(&triangle[515], u, v, w, m, f);

// Triangle 516:

setVector(&u, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
setVector(&v, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
setVector(&w, fp_Flt2FP(-0.830820f), fp_Flt2FP(-4.363438f), fp_Flt2FP(6.880698f), f);
setTriangle(&triangle[516], u, v, w, m, f);

// Triangle 517:

setVector(&u, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
setVector(&v, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
setVector(&w, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
setTriangle(&triangle[517], u, v, w, m, f);

// Triangle 518:

setVector(&u, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
setVector(&v, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
setVector(&w, fp_Flt2FP(-0.844531f), fp_Flt2FP(-4.367812f), fp_Flt2FP(6.881169f), f);
setTriangle(&triangle[518], u, v, w, m, f);

// Triangle 519:

setVector(&u, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
setVector(&v, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
setVector(&w, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
setTriangle(&triangle[519], u, v, w, m, f);

// Triangle 520:

setVector(&u, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
setVector(&v, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
setVector(&w, fp_Flt2FP(-0.856680f), fp_Flt2FP(-4.375469f), fp_Flt2FP(6.881574f), f);
setTriangle(&triangle[520], u, v, w, m, f);

// Triangle 521:

setVector(&u, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
setVector(&v, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
setVector(&w, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
setTriangle(&triangle[521], u, v, w, m, f);

// Triangle 522:

setVector(&u, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
setVector(&v, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
setVector(&w, fp_Flt2FP(-0.866445f), fp_Flt2FP(-4.385937f), fp_Flt2FP(6.881885f), f);
setTriangle(&triangle[522], u, v, w, m, f);

// Triangle 523:

setVector(&u, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
setVector(&v, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
setVector(&w, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
setTriangle(&triangle[523], u, v, w, m, f);

// Triangle 524:

setVector(&u, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
setVector(&v, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
setVector(&w, fp_Flt2FP(-0.873164f), fp_Flt2FP(-4.398750f), fp_Flt2FP(6.882080f), f);
setTriangle(&triangle[524], u, v, w, m, f);

// Triangle 525:

setVector(&u, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
setVector(&v, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
setVector(&w, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
setTriangle(&triangle[525], u, v, w, m, f);

// Triangle 526:

setVector(&u, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
setVector(&v, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
setVector(&w, fp_Flt2FP(-0.876328f), fp_Flt2FP(-4.412812f), fp_Flt2FP(6.882146f), f);
setTriangle(&triangle[526], u, v, w, m, f);

// Triangle 527:

setVector(&u, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
setVector(&v, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
setVector(&w, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
setTriangle(&triangle[527], u, v, w, m, f);

// Triangle 528:

setVector(&u, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
setVector(&v, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
setVector(&w, fp_Flt2FP(-0.875742f), fp_Flt2FP(-4.427187f), fp_Flt2FP(6.882080f), f);
setTriangle(&triangle[528], u, v, w, m, f);

// Triangle 529:

setVector(&u, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
setVector(&v, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
setVector(&w, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
setTriangle(&triangle[529], u, v, w, m, f);

// Triangle 530:

setVector(&u, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
setVector(&v, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
setVector(&w, fp_Flt2FP(-0.871484f), fp_Flt2FP(-4.440937f), fp_Flt2FP(6.881885f), f);
setTriangle(&triangle[530], u, v, w, m, f);

// Triangle 531:

setVector(&u, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
setVector(&v, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
setVector(&w, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
setTriangle(&triangle[531], u, v, w, m, f);

// Triangle 532:

setVector(&u, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
setVector(&v, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
setVector(&w, fp_Flt2FP(-0.863828f), fp_Flt2FP(-4.452969f), fp_Flt2FP(6.881574f), f);
setTriangle(&triangle[532], u, v, w, m, f);

// Triangle 533:

setVector(&u, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
setVector(&v, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
setVector(&w, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
setTriangle(&triangle[533], u, v, w, m, f);

// Triangle 534:

setVector(&u, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
setVector(&v, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
setVector(&w, fp_Flt2FP(-0.853281f), fp_Flt2FP(-4.462812f), fp_Flt2FP(6.881169f), f);
setTriangle(&triangle[534], u, v, w, m, f);

// Triangle 535:

setVector(&u, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
setVector(&v, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
setVector(&w, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
setTriangle(&triangle[535], u, v, w, m, f);

// Triangle 536:

setVector(&u, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
setVector(&v, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
setVector(&w, fp_Flt2FP(-0.840547f), fp_Flt2FP(-4.469531f), fp_Flt2FP(6.880698f), f);
setTriangle(&triangle[536], u, v, w, m, f);

// Triangle 537:

setVector(&u, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
setVector(&v, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
setVector(&w, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
setTriangle(&triangle[537], u, v, w, m, f);

// Triangle 538:

setVector(&u, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
setVector(&v, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
setVector(&w, fp_Flt2FP(-0.826523f), fp_Flt2FP(-4.472656f), fp_Flt2FP(6.880193f), f);
setTriangle(&triangle[538], u, v, w, m, f);

// Triangle 539:

setVector(&u, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
setVector(&w, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
setTriangle(&triangle[539], u, v, w, m, f);

// Triangle 540:

setVector(&u, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
setVector(&v, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
setVector(&w, fp_Flt2FP(-0.812187f), fp_Flt2FP(-4.472031f), fp_Flt2FP(6.879688f), f);
setTriangle(&triangle[540], u, v, w, m, f);

// Triangle 541:

setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
setVector(&w, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
setTriangle(&triangle[541], u, v, w, m, f);

// Triangle 542:

setVector(&u, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
setVector(&v, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
setVector(&w, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.467812f), fp_Flt2FP(6.879216f), f);
setTriangle(&triangle[542], u, v, w, m, f);

// Triangle 543:

setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
setVector(&v, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
setVector(&w, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
setTriangle(&triangle[543], u, v, w, m, f);

// Triangle 544:

setVector(&u, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
setVector(&v, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.460156f), fp_Flt2FP(6.878812f), f);
setTriangle(&triangle[544], u, v, w, m, f);

// Triangle 545:

setVector(&u, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
setVector(&v, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
setTriangle(&triangle[545], u, v, w, m, f);

// Triangle 546:

setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
setVector(&v, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
setVector(&w, fp_Flt2FP(-0.776523f), fp_Flt2FP(-4.449531f), fp_Flt2FP(6.878501f), f);
setTriangle(&triangle[546], u, v, w, m, f);

// Triangle 547:

setVector(&u, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
setVector(&v, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
setVector(&w, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
setTriangle(&triangle[547], u, v, w, m, f);

// Triangle 548:

setVector(&u, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
setVector(&w, fp_Flt2FP(-0.769844f), fp_Flt2FP(-4.436875f), fp_Flt2FP(6.878306f), f);
setTriangle(&triangle[548], u, v, w, m, f);

// Triangle 549:

setVector(&u, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
setVector(&v, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
setVector(&w, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
setTriangle(&triangle[549], u, v, w, m, f);

// Triangle 550:

setVector(&u, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
setVector(&v, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
setVector(&w, fp_Flt2FP(-0.766641f), fp_Flt2FP(-4.422813f), fp_Flt2FP(6.878239f), f);
setTriangle(&triangle[550], u, v, w, m, f);

// Triangle 551:

setVector(&u, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
setVector(&v, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
setVector(&w, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
setTriangle(&triangle[551], u, v, w, m, f);

// Triangle 552:

setVector(&u, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
setVector(&v, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
setVector(&w, fp_Flt2FP(-0.767227f), fp_Flt2FP(-4.408437f), fp_Flt2FP(6.878306f), f);
setTriangle(&triangle[552], u, v, w, m, f);

// Triangle 553:

setVector(&u, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
setVector(&v, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
setVector(&w, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
setTriangle(&triangle[553], u, v, w, m, f);

// Triangle 554:

setVector(&u, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
setVector(&v, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
setVector(&w, fp_Flt2FP(-0.771484f), fp_Flt2FP(-4.394688f), fp_Flt2FP(6.878501f), f);
setTriangle(&triangle[554], u, v, w, m, f);

// Triangle 555:

setVector(&u, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
setVector(&v, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
setVector(&w, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
setTriangle(&triangle[555], u, v, w, m, f);

// Triangle 556:

setVector(&u, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
setVector(&v, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
setVector(&w, fp_Flt2FP(-0.779141f), fp_Flt2FP(-4.382500f), fp_Flt2FP(6.878812f), f);
setTriangle(&triangle[556], u, v, w, m, f);

// Triangle 557:

setVector(&u, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
setVector(&v, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
setVector(&w, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
setTriangle(&triangle[557], u, v, w, m, f);

// Triangle 558:

setVector(&u, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
setVector(&v, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
setVector(&w, fp_Flt2FP(-0.789687f), fp_Flt2FP(-4.372813f), fp_Flt2FP(6.879216f), f);
setTriangle(&triangle[558], u, v, w, m, f);

// Triangle 559:

setVector(&u, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
setVector(&v, fp_Flt2FP(-0.816445f), fp_Flt2FP(-4.362969f), fp_Flt2FP(6.880193f), f);
setVector(&w, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
setTriangle(&triangle[559], u, v, w, m, f);

// Triangle 560:

setVector(&u, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
setVector(&v, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
setVector(&w, fp_Flt2FP(-0.802422f), fp_Flt2FP(-4.366094f), fp_Flt2FP(6.879688f), f);
setTriangle(&triangle[560], u, v, w, m, f);

// Triangle 561:

setVector(&u, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
setVector(&v, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
setVector(&w, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
setTriangle(&triangle[561], u, v, w, m, f);

// Triangle 562:

setVector(&u, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
setVector(&v, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
setVector(&w, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
setTriangle(&triangle[562], u, v, w, m, f);

// Triangle 563:

setVector(&u, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
setVector(&v, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
setVector(&w, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
setTriangle(&triangle[563], u, v, w, m, f);

// Triangle 564:

setVector(&u, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
setVector(&v, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
setVector(&w, fp_Flt2FP(-0.826953f), fp_Flt2FP(-4.381719f), fp_Flt2FP(6.902023f), f);
setTriangle(&triangle[564], u, v, w, m, f);

// Triangle 565:

setVector(&u, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
setVector(&v, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
setVector(&w, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
setTriangle(&triangle[565], u, v, w, m, f);

// Triangle 566:

setVector(&u, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
setVector(&v, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
setVector(&w, fp_Flt2FP(-0.836094f), fp_Flt2FP(-4.384531f), fp_Flt2FP(6.902337f), f);
setTriangle(&triangle[566], u, v, w, m, f);

// Triangle 567:

setVector(&u, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
setVector(&v, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
setVector(&w, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
setTriangle(&triangle[567], u, v, w, m, f);

// Triangle 568:

setVector(&u, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
setVector(&v, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
setVector(&w, fp_Flt2FP(-0.844219f), fp_Flt2FP(-4.389687f), fp_Flt2FP(6.902607f), f);
setTriangle(&triangle[568], u, v, w, m, f);

// Triangle 569:

setVector(&u, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
setVector(&v, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
setVector(&w, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
setTriangle(&triangle[569], u, v, w, m, f);

// Triangle 570:

setVector(&u, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
setVector(&v, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
setVector(&w, fp_Flt2FP(-0.850703f), fp_Flt2FP(-4.396719f), fp_Flt2FP(6.902814f), f);
setTriangle(&triangle[570], u, v, w, m, f);

// Triangle 571:

setVector(&u, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
setVector(&v, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
setVector(&w, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
setTriangle(&triangle[571], u, v, w, m, f);

// Triangle 572:

setVector(&u, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
setVector(&v, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
setVector(&w, fp_Flt2FP(-0.855156f), fp_Flt2FP(-4.405156f), fp_Flt2FP(6.902944f), f);
setTriangle(&triangle[572], u, v, w, m, f);

// Triangle 573:

setVector(&u, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
setVector(&v, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
setVector(&w, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
setTriangle(&triangle[573], u, v, w, m, f);

// Triangle 574:

setVector(&u, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
setVector(&v, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
setVector(&w, fp_Flt2FP(-0.857266f), fp_Flt2FP(-4.414531f), fp_Flt2FP(6.902988f), f);
setTriangle(&triangle[574], u, v, w, m, f);

// Triangle 575:

setVector(&u, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
setVector(&v, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
setVector(&w, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
setTriangle(&triangle[575], u, v, w, m, f);

// Triangle 576:

setVector(&u, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
setVector(&v, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
setVector(&w, fp_Flt2FP(-0.856914f), fp_Flt2FP(-4.424062f), fp_Flt2FP(6.902944f), f);
setTriangle(&triangle[576], u, v, w, m, f);

// Triangle 577:

setVector(&u, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
setVector(&v, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
setVector(&w, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
setTriangle(&triangle[577], u, v, w, m, f);

// Triangle 578:

setVector(&u, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
setVector(&v, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
setVector(&w, fp_Flt2FP(-0.854062f), fp_Flt2FP(-4.433281f), fp_Flt2FP(6.902814f), f);
setTriangle(&triangle[578], u, v, w, m, f);

// Triangle 579:

setVector(&u, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
setVector(&v, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
setVector(&w, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
setTriangle(&triangle[579], u, v, w, m, f);

// Triangle 580:

setVector(&u, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
setVector(&v, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
setVector(&w, fp_Flt2FP(-0.848945f), fp_Flt2FP(-4.441406f), fp_Flt2FP(6.902607f), f);
setTriangle(&triangle[580], u, v, w, m, f);

// Triangle 581:

setVector(&u, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
setVector(&v, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
setVector(&w, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
setTriangle(&triangle[581], u, v, w, m, f);

// Triangle 582:

setVector(&u, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
setVector(&v, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
setVector(&w, fp_Flt2FP(-0.841914f), fp_Flt2FP(-4.447813f), fp_Flt2FP(6.902337f), f);
setTriangle(&triangle[582], u, v, w, m, f);

// Triangle 583:

setVector(&u, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
setVector(&v, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
setVector(&w, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
setTriangle(&triangle[583], u, v, w, m, f);

// Triangle 584:

setVector(&u, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
setVector(&v, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
setVector(&w, fp_Flt2FP(-0.833438f), fp_Flt2FP(-4.452344f), fp_Flt2FP(6.902023f), f);
setTriangle(&triangle[584], u, v, w, m, f);

// Triangle 585:

setVector(&u, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
setVector(&v, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
setVector(&w, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
setTriangle(&triangle[585], u, v, w, m, f);

// Triangle 586:

setVector(&u, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
setVector(&v, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
setVector(&w, fp_Flt2FP(-0.824102f), fp_Flt2FP(-4.454375f), fp_Flt2FP(6.901686f), f);
setTriangle(&triangle[586], u, v, w, m, f);

// Triangle 587:

setVector(&u, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
setVector(&v, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
setVector(&w, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
setTriangle(&triangle[587], u, v, w, m, f);

// Triangle 588:

setVector(&u, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
setVector(&v, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
setVector(&w, fp_Flt2FP(-0.814531f), fp_Flt2FP(-4.454063f), fp_Flt2FP(6.901349f), f);
setTriangle(&triangle[588], u, v, w, m, f);

// Triangle 589:

setVector(&u, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
setVector(&v, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
setVector(&w, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
setTriangle(&triangle[589], u, v, w, m, f);

// Triangle 590:

setVector(&u, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
setVector(&v, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
setVector(&w, fp_Flt2FP(-0.805352f), fp_Flt2FP(-4.451250f), fp_Flt2FP(6.901035f), f);
setTriangle(&triangle[590], u, v, w, m, f);

// Triangle 591:

setVector(&u, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
setVector(&v, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
setVector(&w, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
setTriangle(&triangle[591], u, v, w, m, f);

// Triangle 592:

setVector(&u, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
setVector(&v, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
setVector(&w, fp_Flt2FP(-0.797266f), fp_Flt2FP(-4.446094f), fp_Flt2FP(6.900765f), f);
setTriangle(&triangle[592], u, v, w, m, f);

// Triangle 593:

setVector(&u, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
setVector(&v, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
setVector(&w, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
setTriangle(&triangle[593], u, v, w, m, f);

// Triangle 594:

setVector(&u, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
setVector(&v, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
setVector(&w, fp_Flt2FP(-0.790742f), fp_Flt2FP(-4.439063f), fp_Flt2FP(6.900558f), f);
setTriangle(&triangle[594], u, v, w, m, f);

// Triangle 595:

setVector(&u, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
setVector(&v, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
setVector(&w, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
setTriangle(&triangle[595], u, v, w, m, f);

// Triangle 596:

setVector(&u, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
setVector(&v, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
setVector(&w, fp_Flt2FP(-0.786289f), fp_Flt2FP(-4.430625f), fp_Flt2FP(6.900428f), f);
setTriangle(&triangle[596], u, v, w, m, f);

// Triangle 597:

setVector(&u, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
setVector(&v, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
setVector(&w, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
setTriangle(&triangle[597], u, v, w, m, f);

// Triangle 598:

setVector(&u, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
setVector(&v, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
setVector(&w, fp_Flt2FP(-0.784180f), fp_Flt2FP(-4.421250f), fp_Flt2FP(6.900384f), f);
setTriangle(&triangle[598], u, v, w, m, f);

// Triangle 599:

setVector(&u, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
setVector(&v, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
setVector(&w, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
setTriangle(&triangle[599], u, v, w, m, f);

// Triangle 600:

setVector(&u, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
setVector(&v, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
setVector(&w, fp_Flt2FP(-0.784531f), fp_Flt2FP(-4.411719f), fp_Flt2FP(6.900428f), f);
setTriangle(&triangle[600], u, v, w, m, f);

// Triangle 601:

setVector(&u, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
setVector(&v, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
setVector(&w, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
setTriangle(&triangle[601], u, v, w, m, f);

// Triangle 602:

setVector(&u, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
setVector(&v, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
setVector(&w, fp_Flt2FP(-0.787383f), fp_Flt2FP(-4.402500f), fp_Flt2FP(6.900558f), f);
setTriangle(&triangle[602], u, v, w, m, f);

// Triangle 603:

setVector(&u, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
setVector(&v, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
setVector(&w, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
setTriangle(&triangle[603], u, v, w, m, f);

// Triangle 604:

setVector(&u, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
setVector(&v, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
setVector(&w, fp_Flt2FP(-0.792500f), fp_Flt2FP(-4.394375f), fp_Flt2FP(6.900765f), f);
setTriangle(&triangle[604], u, v, w, m, f);

// Triangle 605:

setVector(&u, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
setVector(&v, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
setVector(&w, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
setTriangle(&triangle[605], u, v, w, m, f);

// Triangle 606:

setVector(&u, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
setVector(&v, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
setVector(&w, fp_Flt2FP(-0.799531f), fp_Flt2FP(-4.387812f), fp_Flt2FP(6.901035f), f);
setTriangle(&triangle[606], u, v, w, m, f);

// Triangle 607:

setVector(&u, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
setVector(&v, fp_Flt2FP(-0.817383f), fp_Flt2FP(-4.381250f), fp_Flt2FP(6.901686f), f);
setVector(&w, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
setTriangle(&triangle[607], u, v, w, m, f);

// Triangle 608:

setVector(&u, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
setVector(&v, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
setVector(&w, fp_Flt2FP(-0.808008f), fp_Flt2FP(-4.383437f), fp_Flt2FP(6.901349f), f);
setTriangle(&triangle[608], u, v, w, m, f);

// Triangle 609:

setVector(&u, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
setVector(&v, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[609], u, v, w, m, f);

// Triangle 610:

setVector(&u, fp_Flt2FP(-0.823086f), fp_Flt2FP(-4.399844f), fp_Flt2FP(6.923347f), f);
setVector(&v, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[610], u, v, w, m, f);

// Triangle 611:

setVector(&u, fp_Flt2FP(-0.827656f), fp_Flt2FP(-4.401250f), fp_Flt2FP(6.923505f), f);
setVector(&v, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[611], u, v, w, m, f);

// Triangle 612:

setVector(&u, fp_Flt2FP(-0.831719f), fp_Flt2FP(-4.403750f), fp_Flt2FP(6.923640f), f);
setVector(&v, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[612], u, v, w, m, f);

// Triangle 613:

setVector(&u, fp_Flt2FP(-0.834961f), fp_Flt2FP(-4.407344f), fp_Flt2FP(6.923743f), f);
setVector(&v, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[613], u, v, w, m, f);

// Triangle 614:

setVector(&u, fp_Flt2FP(-0.837187f), fp_Flt2FP(-4.411562f), fp_Flt2FP(6.923808f), f);
setVector(&v, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[614], u, v, w, m, f);

// Triangle 615:

setVector(&u, fp_Flt2FP(-0.838242f), fp_Flt2FP(-4.416250f), fp_Flt2FP(6.923830f), f);
setVector(&v, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[615], u, v, w, m, f);

// Triangle 616:

setVector(&u, fp_Flt2FP(-0.838047f), fp_Flt2FP(-4.421094f), fp_Flt2FP(6.923808f), f);
setVector(&v, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[616], u, v, w, m, f);

// Triangle 617:

setVector(&u, fp_Flt2FP(-0.836641f), fp_Flt2FP(-4.425625f), fp_Flt2FP(6.923743f), f);
setVector(&v, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[617], u, v, w, m, f);

// Triangle 618:

setVector(&u, fp_Flt2FP(-0.834102f), fp_Flt2FP(-4.429688f), fp_Flt2FP(6.923640f), f);
setVector(&v, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[618], u, v, w, m, f);

// Triangle 619:

setVector(&u, fp_Flt2FP(-0.830547f), fp_Flt2FP(-4.432969f), fp_Flt2FP(6.923505f), f);
setVector(&v, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[619], u, v, w, m, f);

// Triangle 620:

setVector(&u, fp_Flt2FP(-0.826328f), fp_Flt2FP(-4.435156f), fp_Flt2FP(6.923347f), f);
setVector(&v, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[620], u, v, w, m, f);

// Triangle 621:

setVector(&u, fp_Flt2FP(-0.821641f), fp_Flt2FP(-4.436250f), fp_Flt2FP(6.923180f), f);
setVector(&v, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[621], u, v, w, m, f);

// Triangle 622:

setVector(&u, fp_Flt2FP(-0.816875f), fp_Flt2FP(-4.436094f), fp_Flt2FP(6.923011f), f);
setVector(&v, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[622], u, v, w, m, f);

// Triangle 623:

setVector(&u, fp_Flt2FP(-0.812305f), fp_Flt2FP(-4.434687f), fp_Flt2FP(6.922853f), f);
setVector(&v, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[623], u, v, w, m, f);

// Triangle 624:

setVector(&u, fp_Flt2FP(-0.808242f), fp_Flt2FP(-4.432031f), fp_Flt2FP(6.922719f), f);
setVector(&v, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[624], u, v, w, m, f);

// Triangle 625:

setVector(&u, fp_Flt2FP(-0.805000f), fp_Flt2FP(-4.428594f), fp_Flt2FP(6.922615f), f);
setVector(&v, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[625], u, v, w, m, f);

// Triangle 626:

setVector(&u, fp_Flt2FP(-0.802734f), fp_Flt2FP(-4.424219f), fp_Flt2FP(6.922550f), f);
setVector(&v, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[626], u, v, w, m, f);

// Triangle 627:

setVector(&u, fp_Flt2FP(-0.801680f), fp_Flt2FP(-4.419688f), fp_Flt2FP(6.922528f), f);
setVector(&v, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[627], u, v, w, m, f);

// Triangle 628:

setVector(&u, fp_Flt2FP(-0.801875f), fp_Flt2FP(-4.414844f), fp_Flt2FP(6.922550f), f);
setVector(&v, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[628], u, v, w, m, f);

// Triangle 629:

setVector(&u, fp_Flt2FP(-0.803320f), fp_Flt2FP(-4.410313f), fp_Flt2FP(6.922615f), f);
setVector(&v, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[629], u, v, w, m, f);

// Triangle 630:

setVector(&u, fp_Flt2FP(-0.805859f), fp_Flt2FP(-4.406250f), fp_Flt2FP(6.922719f), f);
setVector(&v, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[630], u, v, w, m, f);

// Triangle 631:

setVector(&u, fp_Flt2FP(-0.809375f), fp_Flt2FP(-4.402969f), fp_Flt2FP(6.922853f), f);
setVector(&v, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[631], u, v, w, m, f);

// Triangle 632:

setVector(&u, fp_Flt2FP(-0.813633f), fp_Flt2FP(-4.400781f), fp_Flt2FP(6.923011f), f);
setVector(&v, fp_Flt2FP(-0.818281f), fp_Flt2FP(-4.399688f), fp_Flt2FP(6.923180f), f);
setVector(&w, fp_Flt2FP(-0.819219f), fp_Flt2FP(-4.417969f), fp_Flt2FP(6.944672f), f);
setTriangle(&triangle[632], u, v, w, m, f);

// Triangle 633:

setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[633], u, v, w, m, f);

// Triangle 634:

setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[634], u, v, w, m, f);

// Triangle 635:

setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[635], u, v, w, m, f);

// Triangle 636:

setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[636], u, v, w, m, f);

// Triangle 637:

setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[637], u, v, w, m, f);

// Triangle 638:

setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[638], u, v, w, m, f);

// Triangle 639:

setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[639], u, v, w, m, f);

// Triangle 640:

setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[640], u, v, w, m, f);

// Triangle 641:

setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[641], u, v, w, m, f);

// Triangle 642:

setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[642], u, v, w, m, f);

// Triangle 643:

setVector(&u, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[643], u, v, w, m, f);

// Triangle 644:

setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[644], u, v, w, m, f);

// Triangle 645:

setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[645], u, v, w, m, f);

// Triangle 646:

setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[646], u, v, w, m, f);

// Triangle 647:

setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[647], u, v, w, m, f);

// Triangle 648:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[648], u, v, w, m, f);

// Triangle 649:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[649], u, v, w, m, f);

// Triangle 650:

setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[650], u, v, w, m, f);

// Triangle 651:

setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[651], u, v, w, m, f);

// Triangle 652:

setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[652], u, v, w, m, f);

// Triangle 653:

setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[653], u, v, w, m, f);

// Triangle 654:

setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[654], u, v, w, m, f);

// Triangle 655:

setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[655], u, v, w, m, f);

// Triangle 656:

setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[656], u, v, w, m, f);

// Triangle 657:

setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[657], u, v, w, m, f);

// Triangle 658:

setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[658], u, v, w, m, f);

// Triangle 659:

setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[659], u, v, w, m, f);

// Triangle 660:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[660], u, v, w, m, f);

// Triangle 661:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[661], u, v, w, m, f);

// Triangle 662:

setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[662], u, v, w, m, f);

// Triangle 663:

setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[663], u, v, w, m, f);

// Triangle 664:

setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[664], u, v, w, m, f);

// Triangle 665:

setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
setVector(&v, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.000731f), f);
setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[665], u, v, w, m, f);

// Triangle 666:

setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.000731f), f);
setTriangle(&triangle[666], u, v, w, m, f);

// Triangle 667:

setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[667], u, v, w, m, f);

// Triangle 668:

setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[668], u, v, w, m, f);

// Triangle 669:

setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[669], u, v, w, m, f);

// Triangle 670:

setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[670], u, v, w, m, f);

// Triangle 671:

setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[671], u, v, w, m, f);

// Triangle 672:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[672], u, v, w, m, f);

// Triangle 673:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[673], u, v, w, m, f);

// Triangle 674:

setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[674], u, v, w, m, f);

// Triangle 675:

setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[675], u, v, w, m, f);

// Triangle 676:

setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[676], u, v, w, m, f);

// Triangle 677:

setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[677], u, v, w, m, f);

// Triangle 678:

setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[678], u, v, w, m, f);

// Triangle 679:

setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[679], u, v, w, m, f);

// Triangle 680:

setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[680], u, v, w, m, f);

// Triangle 681:

setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[681], u, v, w, m, f);

// Triangle 682:

setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[682], u, v, w, m, f);

// Triangle 683:

setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[683], u, v, w, m, f);

// Triangle 684:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[684], u, v, w, m, f);

// Triangle 685:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[685], u, v, w, m, f);

// Triangle 686:

setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[686], u, v, w, m, f);

// Triangle 687:

setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[687], u, v, w, m, f);

// Triangle 688:

setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[688], u, v, w, m, f);

// Triangle 689:

setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.154141f), f);
setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[689], u, v, w, m, f);

// Triangle 690:

setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.154141f), f);
setTriangle(&triangle[690], u, v, w, m, f);

// Triangle 691:

setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[691], u, v, w, m, f);

// Triangle 692:

setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[692], u, v, w, m, f);

// Triangle 693:

setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[693], u, v, w, m, f);

// Triangle 694:

setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[694], u, v, w, m, f);

// Triangle 695:

setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[695], u, v, w, m, f);

// Triangle 696:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[696], u, v, w, m, f);

// Triangle 697:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[697], u, v, w, m, f);

// Triangle 698:

setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[698], u, v, w, m, f);

// Triangle 699:

setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[699], u, v, w, m, f);

// Triangle 700:

setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[700], u, v, w, m, f);

// Triangle 701:

setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[701], u, v, w, m, f);

// Triangle 702:

setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[702], u, v, w, m, f);

// Triangle 703:

setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[703], u, v, w, m, f);

// Triangle 704:

setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[704], u, v, w, m, f);

// Triangle 705:

setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[705], u, v, w, m, f);

// Triangle 706:

setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[706], u, v, w, m, f);

// Triangle 707:

setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[707], u, v, w, m, f);

// Triangle 708:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[708], u, v, w, m, f);

// Triangle 709:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[709], u, v, w, m, f);

// Triangle 710:

setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[710], u, v, w, m, f);

// Triangle 711:

setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[711], u, v, w, m, f);

// Triangle 712:

setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[712], u, v, w, m, f);

// Triangle 713:

setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.307551f), f);
setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[713], u, v, w, m, f);

// Triangle 714:

setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.307551f), f);
setTriangle(&triangle[714], u, v, w, m, f);

// Triangle 715:

setVector(&u, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[715], u, v, w, m, f);

// Triangle 716:

setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[716], u, v, w, m, f);

// Triangle 717:

setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[717], u, v, w, m, f);

// Triangle 718:

setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[718], u, v, w, m, f);

// Triangle 719:

setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[719], u, v, w, m, f);

// Triangle 720:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[720], u, v, w, m, f);

// Triangle 721:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[721], u, v, w, m, f);

// Triangle 722:

setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.775156f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[722], u, v, w, m, f);

// Triangle 723:

setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[723], u, v, w, m, f);

// Triangle 724:

setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-3.812969f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[724], u, v, w, m, f);

// Triangle 725:

setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[725], u, v, w, m, f);

// Triangle 726:

setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-3.916250f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[726], u, v, w, m, f);

// Triangle 727:

setVector(&u, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[727], u, v, w, m, f);

// Triangle 728:

setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.610195f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[728], u, v, w, m, f);

// Triangle 729:

setVector(&u, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[729], u, v, w, m, f);

// Triangle 730:

setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.572383f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[730], u, v, w, m, f);

// Triangle 731:

setVector(&u, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[731], u, v, w, m, f);

// Triangle 732:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.469102f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460961f), f);
setTriangle(&triangle[732], u, v, w, m, f);

// Triangle 733:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[733], u, v, w, m, f);

// Triangle 734:

setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.339531f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[734], u, v, w, m, f);

// Triangle 735:

setVector(&u, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[735], u, v, w, m, f);

// Triangle 736:

setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.186914f), fp_Flt2FP(-4.301719f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[736], u, v, w, m, f);

// Triangle 737:

setVector(&u, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setVector(&v, fp_Flt2FP(-4.045820f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.460960f), f);
setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[737], u, v, w, m, f);

// Triangle 738:

setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.083633f), fp_Flt2FP(-4.198437f), fp_Flt2FP(0.460960f), f);
setTriangle(&triangle[738], u, v, w, m, f);

// Triangle 739:

setVector(&u, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[739], u, v, w, m, f);

// Triangle 740:

setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[740], u, v, w, m, f);

// Triangle 741:

setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[741], u, v, w, m, f);

// Triangle 742:

setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[742], u, v, w, m, f);

// Triangle 743:

setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[743], u, v, w, m, f);

// Triangle 744:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[744], u, v, w, m, f);

// Triangle 745:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[745], u, v, w, m, f);

// Triangle 746:

setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.796250f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[746], u, v, w, m, f);

// Triangle 747:

setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[747], u, v, w, m, f);

// Triangle 748:

setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-3.831250f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[748], u, v, w, m, f);

// Triangle 749:

setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[749], u, v, w, m, f);

// Triangle 750:

setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-3.926719f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[750], u, v, w, m, f);

// Triangle 751:

setVector(&u, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[751], u, v, w, m, f);

// Triangle 752:

setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.589141f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[752], u, v, w, m, f);

// Triangle 753:

setVector(&u, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[753], u, v, w, m, f);

// Triangle 754:

setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.554180f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[754], u, v, w, m, f);

// Triangle 755:

setVector(&u, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[755], u, v, w, m, f);

// Triangle 756:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.458594f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[756], u, v, w, m, f);

// Triangle 757:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[757], u, v, w, m, f);

// Triangle 758:

setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.318438f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[758], u, v, w, m, f);

// Triangle 759:

setVector(&u, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[759], u, v, w, m, f);

// Triangle 760:

setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.197422f), fp_Flt2FP(-4.283437f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[760], u, v, w, m, f);

// Triangle 761:

setVector(&u, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setVector(&v, fp_Flt2FP(-4.066875f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.614370f), f);
setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[761], u, v, w, m, f);

// Triangle 762:

setVector(&u, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.101836f), fp_Flt2FP(-4.187969f), fp_Flt2FP(0.614370f), f);
setTriangle(&triangle[762], u, v, w, m, f);

// Triangle 763:

setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[763], u, v, w, m, f);

// Triangle 764:

setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[764], u, v, w, m, f);

// Triangle 765:

setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[765], u, v, w, m, f);

// Triangle 766:

setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[766], u, v, w, m, f);

// Triangle 767:

setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[767], u, v, w, m, f);

// Triangle 768:

setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[768], u, v, w, m, f);

// Triangle 769:

setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[769], u, v, w, m, f);

// Triangle 770:

setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[770], u, v, w, m, f);

// Triangle 771:

setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[771], u, v, w, m, f);

// Triangle 772:

setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[772], u, v, w, m, f);

// Triangle 773:

setVector(&u, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[773], u, v, w, m, f);

// Triangle 774:

setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[774], u, v, w, m, f);

// Triangle 775:

setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[775], u, v, w, m, f);

// Triangle 776:

setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[776], u, v, w, m, f);

// Triangle 777:

setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[777], u, v, w, m, f);

// Triangle 778:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[778], u, v, w, m, f);

// Triangle 779:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[779], u, v, w, m, f);

// Triangle 780:

setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.838281f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[780], u, v, w, m, f);

// Triangle 781:

setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[781], u, v, w, m, f);

// Triangle 782:

setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-3.867656f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[782], u, v, w, m, f);

// Triangle 783:

setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[783], u, v, w, m, f);

// Triangle 784:

setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-3.947813f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[784], u, v, w, m, f);

// Triangle 785:

setVector(&u, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[785], u, v, w, m, f);

// Triangle 786:

setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.547109f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[786], u, v, w, m, f);

// Triangle 787:

setVector(&u, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[787], u, v, w, m, f);

// Triangle 788:

setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.517735f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[788], u, v, w, m, f);

// Triangle 789:

setVector(&u, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[789], u, v, w, m, f);

// Triangle 790:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.437539f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[790], u, v, w, m, f);

// Triangle 791:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[791], u, v, w, m, f);

// Triangle 792:

setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.276406f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[792], u, v, w, m, f);

// Triangle 793:

setVector(&u, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[793], u, v, w, m, f);

// Triangle 794:

setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.218476f), fp_Flt2FP(-4.247031f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[794], u, v, w, m, f);

// Triangle 795:

setVector(&u, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.108906f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[795], u, v, w, m, f);

// Triangle 796:

setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.138281f), fp_Flt2FP(-4.166875f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[796], u, v, w, m, f);

// Triangle 797:

setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[797], u, v, w, m, f);

// Triangle 798:

setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[798], u, v, w, m, f);

// Triangle 799:

setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[799], u, v, w, m, f);

// Triangle 800:

setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[800], u, v, w, m, f);

// Triangle 801:

setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[801], u, v, w, m, f);

// Triangle 802:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[802], u, v, w, m, f);

// Triangle 803:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[803], u, v, w, m, f);

// Triangle 804:

setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-3.849531f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[804], u, v, w, m, f);

// Triangle 805:

setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[805], u, v, w, m, f);

// Triangle 806:

setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-3.877500f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[806], u, v, w, m, f);

// Triangle 807:

setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[807], u, v, w, m, f);

// Triangle 808:

setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-3.953437f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[808], u, v, w, m, f);

// Triangle 809:

setVector(&u, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[809], u, v, w, m, f);

// Triangle 810:

setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.535742f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[810], u, v, w, m, f);

// Triangle 811:

setVector(&u, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[811], u, v, w, m, f);

// Triangle 812:

setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.507930f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[812], u, v, w, m, f);

// Triangle 813:

setVector(&u, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[813], u, v, w, m, f);

// Triangle 814:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.431875f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[814], u, v, w, m, f);

// Triangle 815:

setVector(&u, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[815], u, v, w, m, f);

// Triangle 816:

setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.328008f), fp_Flt2FP(-4.265156f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[816], u, v, w, m, f);

// Triangle 817:

setVector(&u, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[817], u, v, w, m, f);

// Triangle 818:

setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.224141f), fp_Flt2FP(-4.237188f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[818], u, v, w, m, f);

// Triangle 819:

setVector(&u, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setVector(&v, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.767780f), f);
setVector(&w, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setTriangle(&triangle[819], u, v, w, m, f);

// Triangle 820:

setVector(&u, fp_Flt2FP(-4.120274f), fp_Flt2FP(-4.057344f), fp_Flt2FP(0.703859f), f);
setVector(&v, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.703859f), f);
setVector(&w, fp_Flt2FP(-4.148086f), fp_Flt2FP(-4.161250f), fp_Flt2FP(0.767780f), f);
setTriangle(&triangle[820], u, v, w, m, f);

// Triangle 821:

setVector(&u, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
setVector(&w, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
setTriangle(&triangle[821], u, v, w, m, f);

// Triangle 822:

setVector(&u, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
setVector(&v, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
setVector(&w, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
setTriangle(&triangle[822], u, v, w, m, f);

// Triangle 823:

setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
setVector(&v, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
setVector(&w, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
setTriangle(&triangle[823], u, v, w, m, f);

// Triangle 824:

setVector(&u, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
setTriangle(&triangle[824], u, v, w, m, f);

// Triangle 825:

setVector(&u, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
setVector(&v, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
setVector(&w, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
setTriangle(&triangle[825], u, v, w, m, f);

// Triangle 826:

setVector(&u, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
setVector(&v, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
setVector(&w, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
setTriangle(&triangle[826], u, v, w, m, f);

// Triangle 827:

setVector(&u, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
setVector(&v, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
setVector(&w, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
setTriangle(&triangle[827], u, v, w, m, f);

// Triangle 828:

setVector(&u, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
setVector(&v, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
setVector(&w, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
setTriangle(&triangle[828], u, v, w, m, f);

// Triangle 829:

setVector(&u, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
setVector(&v, fp_Flt2FP(0.088437f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498201f), f);
setVector(&w, fp_Flt2FP(0.088359f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498185f), f);
setTriangle(&triangle[829], u, v, w, m, f);

// Triangle 830:

setVector(&u, fp_Flt2FP(0.088359f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498185f), f);
setVector(&v, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
setVector(&w, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
setTriangle(&triangle[830], u, v, w, m, f);

// Triangle 831:

setVector(&u, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
setVector(&v, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
setVector(&w, fp_Flt2FP(-0.012461f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498191f), f);
setTriangle(&triangle[831], u, v, w, m, f);

// Triangle 832:

setVector(&u, fp_Flt2FP(-0.012461f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498191f), f);
setVector(&v, fp_Flt2FP(-0.012461f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498193f), f);
setVector(&w, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
setTriangle(&triangle[832], u, v, w, m, f);

// Triangle 833:

setVector(&u, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
setVector(&v, fp_Flt2FP(0.080078f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
setVector(&w, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
setTriangle(&triangle[833], u, v, w, m, f);

// Triangle 834:

setVector(&u, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
setVector(&v, fp_Flt2FP(0.088359f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498185f), f);
setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
setTriangle(&triangle[834], u, v, w, m, f);

// Triangle 835:

setVector(&u, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
setVector(&v, fp_Flt2FP(0.097539f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
setTriangle(&triangle[835], u, v, w, m, f);

// Triangle 836:

setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562469f), f);
setVector(&w, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
setTriangle(&triangle[836], u, v, w, m, f);

// Triangle 837:

setVector(&u, fp_Flt2FP(-0.012461f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498193f), f);
setVector(&v, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520341f), f);
setTriangle(&triangle[837], u, v, w, m, f);

// Triangle 838:

setVector(&u, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
setVector(&v, fp_Flt2FP(-0.012461f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498193f), f);
setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520341f), f);
setTriangle(&triangle[838], u, v, w, m, f);

// Triangle 839:

setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
setVector(&v, fp_Flt2FP(-0.021602f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520320f), f);
setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520341f), f);
setTriangle(&triangle[839], u, v, w, m, f);

// Triangle 840:

setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
setVector(&v, fp_Flt2FP(-0.012461f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.498191f), f);
setVector(&w, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
setTriangle(&triangle[840], u, v, w, m, f);

// Triangle 841:

setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
setVector(&v, fp_Flt2FP(-0.021641f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520335f), f);
setVector(&w, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
setTriangle(&triangle[841], u, v, w, m, f);

// Triangle 842:

setVector(&u, fp_Flt2FP(0.037969f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.520320f), f);
setVector(&v, fp_Flt2FP(-0.004180f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.562478f), f);
setVector(&w, fp_Flt2FP(0.037930f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.579934f), f);
setTriangle(&triangle[842], u, v, w, m, f);

// Triangle 843:

setVector(&u, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
setVector(&v, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.579940f), f);
setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
setTriangle(&triangle[843], u, v, w, m, f);

// Triangle 844:

setVector(&u, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
setVector(&v, fp_Flt2FP(0.080117f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.562498f), f);
setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
setTriangle(&triangle[844], u, v, w, m, f);

// Triangle 845:

setVector(&u, fp_Flt2FP(0.088437f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.498201f), f);
setVector(&v, fp_Flt2FP(0.097578f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520360f), f);
setVector(&w, fp_Flt2FP(0.037969f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520327f), f);
setTriangle(&triangle[845], u, v, w, m, f);

// Triangle 846:

setVector(&u, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
setVector(&v, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
setTriangle(&triangle[846], u, v, w, m, f);

// Triangle 847:

setVector(&u, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
setVector(&v, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
setVector(&w, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
setTriangle(&triangle[847], u, v, w, m, f);

// Triangle 848:

setVector(&u, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
setVector(&v, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
setVector(&w, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
setTriangle(&triangle[848], u, v, w, m, f);

// Triangle 849:

setVector(&u, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
setVector(&v, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
setVector(&w, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
setTriangle(&triangle[849], u, v, w, m, f);

// Triangle 850:

setVector(&u, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
setVector(&v, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
setVector(&w, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
setTriangle(&triangle[850], u, v, w, m, f);

// Triangle 851:

setVector(&u, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
setVector(&v, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
setVector(&w, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
setTriangle(&triangle[851], u, v, w, m, f);

// Triangle 852:

setVector(&u, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
setVector(&v, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
setVector(&w, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
setTriangle(&triangle[852], u, v, w, m, f);

// Triangle 853:

setVector(&u, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
setVector(&v, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
setVector(&w, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
setTriangle(&triangle[853], u, v, w, m, f);

// Triangle 854:

setVector(&u, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
setVector(&v, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
setVector(&w, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
setTriangle(&triangle[854], u, v, w, m, f);

// Triangle 855:

setVector(&u, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
setVector(&v, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
setVector(&w, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
setTriangle(&triangle[855], u, v, w, m, f);

// Triangle 856:

setVector(&u, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
setVector(&v, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
setVector(&w, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
setTriangle(&triangle[856], u, v, w, m, f);

// Triangle 857:

setVector(&u, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
setVector(&v, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
setVector(&w, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
setTriangle(&triangle[857], u, v, w, m, f);

// Triangle 858:

setVector(&u, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
setVector(&v, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
setVector(&w, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
setTriangle(&triangle[858], u, v, w, m, f);

// Triangle 859:

setVector(&u, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
setVector(&v, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
setVector(&w, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
setTriangle(&triangle[859], u, v, w, m, f);

// Triangle 860:

setVector(&u, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
setVector(&v, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
setVector(&w, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
setTriangle(&triangle[860], u, v, w, m, f);

// Triangle 861:

setVector(&u, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
setVector(&v, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
setVector(&w, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
setTriangle(&triangle[861], u, v, w, m, f);

// Triangle 862:

setVector(&u, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
setVector(&v, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
setVector(&w, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
setTriangle(&triangle[862], u, v, w, m, f);

// Triangle 863:

setVector(&u, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
setVector(&v, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
setVector(&w, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
setTriangle(&triangle[863], u, v, w, m, f);

// Triangle 864:

setVector(&u, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
setVector(&v, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
setVector(&w, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
setTriangle(&triangle[864], u, v, w, m, f);

// Triangle 865:

setVector(&u, fp_Flt2FP(-4.247070f), fp_Flt2FP(-4.156562f), fp_Flt2FP(4.348246f), f);
setVector(&v, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
setVector(&w, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
setTriangle(&triangle[865], u, v, w, m, f);

// Triangle 866:

setVector(&u, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
setVector(&v, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
setVector(&w, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
setTriangle(&triangle[866], u, v, w, m, f);

// Triangle 867:

setVector(&u, fp_Flt2FP(-4.276211f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.344085f), f);
setVector(&v, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
setVector(&w, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
setTriangle(&triangle[867], u, v, w, m, f);

// Triangle 868:

setVector(&u, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
setVector(&v, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
setVector(&w, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
setTriangle(&triangle[868], u, v, w, m, f);

// Triangle 869:

setVector(&u, fp_Flt2FP(-4.317695f), fp_Flt2FP(-4.127813f), fp_Flt2FP(4.328015f), f);
setVector(&v, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
setVector(&w, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
setTriangle(&triangle[869], u, v, w, m, f);

// Triangle 870:

setVector(&u, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
setVector(&v, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
setVector(&w, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
setTriangle(&triangle[870], u, v, w, m, f);

// Triangle 871:

setVector(&u, fp_Flt2FP(-4.347227f), fp_Flt2FP(-4.156719f), fp_Flt2FP(4.309451f), f);
setVector(&v, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
setVector(&w, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
setTriangle(&triangle[871], u, v, w, m, f);

// Triangle 872:

setVector(&u, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
setVector(&v, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
setVector(&w, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
setTriangle(&triangle[872], u, v, w, m, f);

// Triangle 873:

setVector(&u, fp_Flt2FP(-4.347500f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.299267f), f);
setVector(&v, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
setVector(&w, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
setTriangle(&triangle[873], u, v, w, m, f);

// Triangle 874:

setVector(&u, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
setVector(&v, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
setVector(&w, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
setTriangle(&triangle[874], u, v, w, m, f);

// Triangle 875:

setVector(&u, fp_Flt2FP(-4.318359f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.303429f), f);
setVector(&v, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
setVector(&w, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
setTriangle(&triangle[875], u, v, w, m, f);

// Triangle 876:

setVector(&u, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
setVector(&v, fp_Flt2FP(-4.247344f), fp_Flt2FP(-4.197500f), fp_Flt2FP(4.338062f), f);
setVector(&w, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
setTriangle(&triangle[876], u, v, w, m, f);

// Triangle 877:

setVector(&u, fp_Flt2FP(-4.276875f), fp_Flt2FP(-4.226406f), fp_Flt2FP(4.319498f), f);
setVector(&v, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
setVector(&w, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
setTriangle(&triangle[877], u, v, w, m, f);

// Triangle 878:

setVector(&u, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
setVector(&v, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
setVector(&w, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
setTriangle(&triangle[878], u, v, w, m, f);

// Triangle 879:

setVector(&u, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
setVector(&v, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
setVector(&w, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
setTriangle(&triangle[879], u, v, w, m, f);

// Triangle 880:

setVector(&u, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
setVector(&v, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
setVector(&w, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
setTriangle(&triangle[880], u, v, w, m, f);

// Triangle 881:

setVector(&u, fp_Flt2FP(-4.036992f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.149620f), f);
setVector(&v, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
setVector(&w, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
setTriangle(&triangle[881], u, v, w, m, f);

// Triangle 882:

setVector(&u, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
setVector(&v, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
setVector(&w, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
setTriangle(&triangle[882], u, v, w, m, f);

// Triangle 883:

setVector(&u, fp_Flt2FP(-4.066133f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.145454f), f);
setVector(&v, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
setVector(&w, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
setTriangle(&triangle[883], u, v, w, m, f);

// Triangle 884:

setVector(&u, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
setVector(&v, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
setVector(&w, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
setTriangle(&triangle[884], u, v, w, m, f);

// Triangle 885:

setVector(&u, fp_Flt2FP(-4.107617f), fp_Flt2FP(-4.002031f), fp_Flt2FP(4.129390f), f);
setVector(&v, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
setVector(&w, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
setTriangle(&triangle[885], u, v, w, m, f);

// Triangle 886:

setVector(&u, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
setVector(&v, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
setVector(&w, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
setTriangle(&triangle[886], u, v, w, m, f);

// Triangle 887:

setVector(&u, fp_Flt2FP(-4.137148f), fp_Flt2FP(-4.030938f), fp_Flt2FP(4.110838f), f);
setVector(&v, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
setVector(&w, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
setTriangle(&triangle[887], u, v, w, m, f);

// Triangle 888:

setVector(&u, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
setVector(&v, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
setVector(&w, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
setTriangle(&triangle[888], u, v, w, m, f);

// Triangle 889:

setVector(&u, fp_Flt2FP(-4.137422f), fp_Flt2FP(-4.071875f), fp_Flt2FP(4.100665f), f);
setVector(&v, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
setVector(&w, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
setTriangle(&triangle[889], u, v, w, m, f);

// Triangle 890:

setVector(&u, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
setVector(&v, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
setVector(&w, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
setTriangle(&triangle[890], u, v, w, m, f);

// Triangle 891:

setVector(&u, fp_Flt2FP(-4.108281f), fp_Flt2FP(-4.100781f), fp_Flt2FP(4.104830f), f);
setVector(&v, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
setVector(&w, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
setTriangle(&triangle[891], u, v, w, m, f);

// Triangle 892:

setVector(&u, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
setVector(&v, fp_Flt2FP(-4.037266f), fp_Flt2FP(-4.071719f), fp_Flt2FP(4.139447f), f);
setVector(&w, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
setTriangle(&triangle[892], u, v, w, m, f);

// Triangle 893:

setVector(&u, fp_Flt2FP(-4.066797f), fp_Flt2FP(-4.100625f), fp_Flt2FP(4.120895f), f);
setVector(&v, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
setTriangle(&triangle[893], u, v, w, m, f);

// Triangle 894:

setVector(&u, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
setVector(&v, fp_Flt2FP(-4.268281f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.563515f), f);
setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
setTriangle(&triangle[894], u, v, w, m, f);

// Triangle 895:

setVector(&u, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
setVector(&v, fp_Flt2FP(-4.309101f), fp_Flt2FP(-4.227187f), fp_Flt2FP(4.564958f), f);
setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
setTriangle(&triangle[895], u, v, w, m, f);

// Triangle 896:

setVector(&u, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
setVector(&v, fp_Flt2FP(-4.338047f), fp_Flt2FP(-4.198437f), fp_Flt2FP(4.566075f), f);
setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
setTriangle(&triangle[896], u, v, w, m, f);

// Triangle 897:

setVector(&u, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
setVector(&v, fp_Flt2FP(-4.338125f), fp_Flt2FP(-4.157500f), fp_Flt2FP(4.566210f), f);
setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
setTriangle(&triangle[897], u, v, w, m, f);

// Triangle 898:

setVector(&u, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
setVector(&v, fp_Flt2FP(-4.309297f), fp_Flt2FP(-4.128594f), fp_Flt2FP(4.565285f), f);
setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
setTriangle(&triangle[898], u, v, w, m, f);

// Triangle 899:

setVector(&u, fp_Flt2FP(-4.239492f), fp_Flt2FP(-4.157344f), fp_Flt2FP(4.562726f), f);
setVector(&v, fp_Flt2FP(-4.268438f), fp_Flt2FP(-4.128437f), fp_Flt2FP(4.563842f), f);
setVector(&w, fp_Flt2FP(-4.239414f), fp_Flt2FP(-4.198125f), fp_Flt2FP(4.562590f), f);
setTriangle(&triangle[899], u, v, w, m, f);

// Triangle 900:

setVector(&u, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
setVector(&v, fp_Flt2FP(-4.055508f), fp_Flt2FP(-4.024688f), fp_Flt2FP(0.849520f), f);
setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
setTriangle(&triangle[900], u, v, w, m, f);

// Triangle 901:

setVector(&u, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
setVector(&v, fp_Flt2FP(-4.084453f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.850627f), f);
setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
setTriangle(&triangle[901], u, v, w, m, f);

// Triangle 902:

setVector(&u, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
setVector(&v, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
setVector(&w, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
setTriangle(&triangle[902], u, v, w, m, f);

// Triangle 903:

setVector(&u, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
setVector(&v, fp_Flt2FP(-4.154063f), fp_Flt2FP(-4.065625f), fp_Flt2FP(0.852914f), f);
setVector(&w, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
setTriangle(&triangle[903], u, v, w, m, f);

// Triangle 904:

setVector(&u, fp_Flt2FP(-4.125312f), fp_Flt2FP(-3.995781f), fp_Flt2FP(0.852080f), f);
setVector(&v, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
setVector(&w, fp_Flt2FP(-4.154140f), fp_Flt2FP(-4.024844f), fp_Flt2FP(0.853027f), f);
setTriangle(&triangle[904], u, v, w, m, f);

// Triangle 905:

setVector(&u, fp_Flt2FP(-4.084258f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.850355f), f);
setVector(&v, fp_Flt2FP(-4.125117f), fp_Flt2FP(-4.094531f), fp_Flt2FP(0.851807f), f);
setVector(&w, fp_Flt2FP(-4.055430f), fp_Flt2FP(-4.065469f), fp_Flt2FP(0.849407f), f);
setTriangle(&triangle[905], u, v, w, m, f);

// Triangle 906:

setVector(&u, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
setVector(&v, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
setTriangle(&triangle[906], u, v, w, m, f);

// Triangle 907:

setVector(&u, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
setVector(&v, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
setVector(&w, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
setTriangle(&triangle[907], u, v, w, m, f);

// Triangle 908:

setVector(&u, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
setVector(&v, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
setVector(&w, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
setTriangle(&triangle[908], u, v, w, m, f);

// Triangle 909:

setVector(&u, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
setVector(&v, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
setVector(&w, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
setTriangle(&triangle[909], u, v, w, m, f);

// Triangle 910:

setVector(&u, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
setVector(&v, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
setVector(&w, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
setTriangle(&triangle[910], u, v, w, m, f);

// Triangle 911:

setVector(&u, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
setVector(&v, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
setVector(&w, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
setTriangle(&triangle[911], u, v, w, m, f);

// Triangle 912:

setVector(&u, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
setVector(&v, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
setVector(&w, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
setTriangle(&triangle[912], u, v, w, m, f);

// Triangle 913:

setVector(&u, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
setVector(&v, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
setVector(&w, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
setTriangle(&triangle[913], u, v, w, m, f);

// Triangle 914:

setVector(&u, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
setVector(&v, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
setVector(&w, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
setTriangle(&triangle[914], u, v, w, m, f);

// Triangle 915:

setVector(&u, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
setVector(&v, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
setVector(&w, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
setTriangle(&triangle[915], u, v, w, m, f);

// Triangle 916:

setVector(&u, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
setVector(&v, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
setVector(&w, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
setTriangle(&triangle[916], u, v, w, m, f);

// Triangle 917:

setVector(&u, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
setVector(&v, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
setVector(&w, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
setTriangle(&triangle[917], u, v, w, m, f);

// Triangle 918:

setVector(&u, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
setVector(&v, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
setVector(&w, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
setTriangle(&triangle[918], u, v, w, m, f);

// Triangle 919:

setVector(&u, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
setVector(&v, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
setVector(&w, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
setTriangle(&triangle[919], u, v, w, m, f);

// Triangle 920:

setVector(&u, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
setVector(&v, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
setVector(&w, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
setTriangle(&triangle[920], u, v, w, m, f);

// Triangle 921:

setVector(&u, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
setVector(&v, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
setVector(&w, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
setTriangle(&triangle[921], u, v, w, m, f);

// Triangle 922:

setVector(&u, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
setVector(&v, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
setVector(&w, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
setTriangle(&triangle[922], u, v, w, m, f);

// Triangle 923:

setVector(&u, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
setVector(&v, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
setVector(&w, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
setTriangle(&triangle[923], u, v, w, m, f);

// Triangle 924:

setVector(&u, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
setVector(&v, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
setVector(&w, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
setTriangle(&triangle[924], u, v, w, m, f);

// Triangle 925:

setVector(&u, fp_Flt2FP(4.395039f), fp_Flt2FP(4.520937f), fp_Flt2FP(4.280157f), f);
setVector(&v, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
setVector(&w, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
setTriangle(&triangle[925], u, v, w, m, f);

// Triangle 926:

setVector(&u, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
setVector(&v, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
setVector(&w, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
setTriangle(&triangle[926], u, v, w, m, f);

// Triangle 927:

setVector(&u, fp_Flt2FP(4.398789f), fp_Flt2FP(4.480000f), fp_Flt2FP(4.275995f), f);
setVector(&v, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
setVector(&w, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
setTriangle(&triangle[927], u, v, w, m, f);

// Triangle 928:

setVector(&u, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
setVector(&v, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
setVector(&w, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
setTriangle(&triangle[928], u, v, w, m, f);

// Triangle 929:

setVector(&u, fp_Flt2FP(4.430586f), fp_Flt2FP(4.453437f), fp_Flt2FP(4.259925f), f);
setVector(&v, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
setVector(&w, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
setTriangle(&triangle[929], u, v, w, m, f);

// Triangle 930:

setVector(&u, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
setVector(&v, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
setVector(&w, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
setTriangle(&triangle[930], u, v, w, m, f);

// Triangle 931:

setVector(&u, fp_Flt2FP(4.471758f), fp_Flt2FP(4.456562f), fp_Flt2FP(4.241361f), f);
setVector(&v, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
setVector(&w, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
setTriangle(&triangle[931], u, v, w, m, f);

// Triangle 932:

setVector(&u, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
setVector(&v, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
setVector(&w, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
setTriangle(&triangle[932], u, v, w, m, f);

// Triangle 933:

setVector(&u, fp_Flt2FP(4.498242f), fp_Flt2FP(4.487656f), fp_Flt2FP(4.231178f), f);
setVector(&v, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
setVector(&w, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
setTriangle(&triangle[933], u, v, w, m, f);

// Triangle 934:

setVector(&u, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
setVector(&v, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
setVector(&w, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
setTriangle(&triangle[934], u, v, w, m, f);

// Triangle 935:

setVector(&u, fp_Flt2FP(4.494453f), fp_Flt2FP(4.528594f), fp_Flt2FP(4.235340f), f);
setVector(&v, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
setVector(&w, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
setTriangle(&triangle[935], u, v, w, m, f);

// Triangle 936:

setVector(&u, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
setVector(&v, fp_Flt2FP(4.421484f), fp_Flt2FP(4.552031f), fp_Flt2FP(4.269973f), f);
setVector(&w, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
setTriangle(&triangle[936], u, v, w, m, f);

// Triangle 937:

setVector(&u, fp_Flt2FP(4.462695f), fp_Flt2FP(4.555156f), fp_Flt2FP(4.251408f), f);
setVector(&v, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
setVector(&w, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
setTriangle(&triangle[937], u, v, w, m, f);

// Triangle 938:

setVector(&u, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
setVector(&v, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
setVector(&w, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
setTriangle(&triangle[938], u, v, w, m, f);

// Triangle 939:

setVector(&u, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
setVector(&v, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
setVector(&w, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
setTriangle(&triangle[939], u, v, w, m, f);

// Triangle 940:

setVector(&u, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
setVector(&v, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
setVector(&w, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
setTriangle(&triangle[940], u, v, w, m, f);

// Triangle 941:

setVector(&u, fp_Flt2FP(4.153281f), fp_Flt2FP(4.559687f), fp_Flt2FP(4.081530f), f);
setVector(&v, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
setVector(&w, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
setTriangle(&triangle[941], u, v, w, m, f);

// Triangle 942:

setVector(&u, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
setVector(&v, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
setVector(&w, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
setTriangle(&triangle[942], u, v, w, m, f);

// Triangle 943:

setVector(&u, fp_Flt2FP(4.157070f), fp_Flt2FP(4.518906f), fp_Flt2FP(4.077365f), f);
setVector(&v, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
setVector(&w, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
setTriangle(&triangle[943], u, v, w, m, f);

// Triangle 944:

setVector(&u, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
setVector(&v, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
setVector(&w, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
setTriangle(&triangle[944], u, v, w, m, f);

// Triangle 945:

setVector(&u, fp_Flt2FP(4.188867f), fp_Flt2FP(4.492188f), fp_Flt2FP(4.061301f), f);
setVector(&v, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
setVector(&w, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
setTriangle(&triangle[945], u, v, w, m, f);

// Triangle 946:

setVector(&u, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
setVector(&v, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
setVector(&w, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
setTriangle(&triangle[946], u, v, w, m, f);

// Triangle 947:

setVector(&u, fp_Flt2FP(4.230039f), fp_Flt2FP(4.495312f), fp_Flt2FP(4.042748f), f);
setVector(&v, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
setVector(&w, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
setTriangle(&triangle[947], u, v, w, m, f);

// Triangle 948:

setVector(&u, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
setVector(&v, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
setVector(&w, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
setTriangle(&triangle[948], u, v, w, m, f);

// Triangle 949:

setVector(&u, fp_Flt2FP(4.256524f), fp_Flt2FP(4.526406f), fp_Flt2FP(4.032575f), f);
setVector(&v, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
setVector(&w, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
setTriangle(&triangle[949], u, v, w, m, f);

// Triangle 950:

setVector(&u, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
setVector(&v, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
setVector(&w, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
setTriangle(&triangle[950], u, v, w, m, f);

// Triangle 951:

setVector(&u, fp_Flt2FP(4.252773f), fp_Flt2FP(4.567344f), fp_Flt2FP(4.036741f), f);
setVector(&v, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
setVector(&w, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
setTriangle(&triangle[951], u, v, w, m, f);

// Triangle 952:

setVector(&u, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
setVector(&v, fp_Flt2FP(4.179766f), fp_Flt2FP(4.590781f), fp_Flt2FP(4.071357f), f);
setVector(&w, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
setTriangle(&triangle[952], u, v, w, m, f);

// Triangle 953:

setVector(&u, fp_Flt2FP(4.220977f), fp_Flt2FP(4.593906f), fp_Flt2FP(4.052805f), f);
setVector(&v, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
setTriangle(&triangle[953], u, v, w, m, f);

// Triangle 954:

setVector(&u, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
setVector(&v, fp_Flt2FP(4.456602f), fp_Flt2FP(4.561406f), fp_Flt2FP(4.495426f), f);
setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
setTriangle(&triangle[954], u, v, w, m, f);

// Triangle 955:

setVector(&u, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
setVector(&v, fp_Flt2FP(4.487930f), fp_Flt2FP(4.535156f), fp_Flt2FP(4.496869f), f);
setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
setTriangle(&triangle[955], u, v, w, m, f);

// Triangle 956:

setVector(&u, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
setVector(&v, fp_Flt2FP(4.491563f), fp_Flt2FP(4.494375f), fp_Flt2FP(4.497985f), f);
setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
setTriangle(&triangle[956], u, v, w, m, f);

// Triangle 957:

setVector(&u, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
setVector(&v, fp_Flt2FP(4.465351f), fp_Flt2FP(4.463125f), fp_Flt2FP(4.498120f), f);
setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
setTriangle(&triangle[957], u, v, w, m, f);

// Triangle 958:

setVector(&u, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
setVector(&v, fp_Flt2FP(4.424648f), fp_Flt2FP(4.459375f), fp_Flt2FP(4.497196f), f);
setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
setTriangle(&triangle[958], u, v, w, m, f);

// Triangle 959:

setVector(&u, fp_Flt2FP(4.389648f), fp_Flt2FP(4.526250f), fp_Flt2FP(4.494637f), f);
setVector(&v, fp_Flt2FP(4.393281f), fp_Flt2FP(4.485625f), fp_Flt2FP(4.495753f), f);
setVector(&w, fp_Flt2FP(4.415899f), fp_Flt2FP(4.557656f), fp_Flt2FP(4.494501f), f);
setTriangle(&triangle[959], u, v, w, m, f);

// Triangle 960:

setVector(&u, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
setVector(&v, fp_Flt2FP(4.163438f), fp_Flt2FP(4.542969f), fp_Flt2FP(-0.000966f), f);
setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
setTriangle(&triangle[960], u, v, w, m, f);

// Triangle 961:

setVector(&u, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
setVector(&v, fp_Flt2FP(4.167070f), fp_Flt2FP(4.502187f), fp_Flt2FP(0.000141f), f);
setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
setTriangle(&triangle[961], u, v, w, m, f);

// Triangle 962:

setVector(&u, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
setVector(&v, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
setVector(&w, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
setTriangle(&triangle[962], u, v, w, m, f);

// Triangle 963:

setVector(&u, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
setVector(&v, fp_Flt2FP(4.265313f), fp_Flt2FP(4.511094f), fp_Flt2FP(0.002428f), f);
setVector(&w, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
setTriangle(&triangle[963], u, v, w, m, f);

// Triangle 964:

setVector(&u, fp_Flt2FP(4.198399f), fp_Flt2FP(4.476094f), fp_Flt2FP(0.001594f), f);
setVector(&v, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
setVector(&w, fp_Flt2FP(4.239101f), fp_Flt2FP(4.479687f), fp_Flt2FP(0.002541f), f);
setTriangle(&triangle[964], u, v, w, m, f);

// Triangle 965:

setVector(&u, fp_Flt2FP(4.230352f), fp_Flt2FP(4.577969f), fp_Flt2FP(-0.000132f), f);
setVector(&v, fp_Flt2FP(4.261719f), fp_Flt2FP(4.551719f), fp_Flt2FP(0.001321f), f);
setVector(&w, fp_Flt2FP(4.189648f), fp_Flt2FP(4.574375f), fp_Flt2FP(-0.001079f), f);
setTriangle(&triangle[965], u, v, w, m, f);

// Triangle 966:

setVector(&u, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
setVector(&v, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
setTriangle(&triangle[966], u, v, w, m, f);

// Triangle 967:

setVector(&u, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
setVector(&v, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
setVector(&w, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
setTriangle(&triangle[967], u, v, w, m, f);

// Triangle 968:

setVector(&u, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
setVector(&w, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
setTriangle(&triangle[968], u, v, w, m, f);

// Triangle 969:

setVector(&u, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
setVector(&v, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
setVector(&w, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
setTriangle(&triangle[969], u, v, w, m, f);

// Triangle 970:

setVector(&u, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
setVector(&v, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
setVector(&w, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
setTriangle(&triangle[970], u, v, w, m, f);

// Triangle 971:

setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
setVector(&v, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
setVector(&w, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
setTriangle(&triangle[971], u, v, w, m, f);

// Triangle 972:

setVector(&u, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
setVector(&v, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
setVector(&w, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
setTriangle(&triangle[972], u, v, w, m, f);

// Triangle 973:

setVector(&u, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
setVector(&v, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
setVector(&w, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
setTriangle(&triangle[973], u, v, w, m, f);

// Triangle 974:

setVector(&u, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
setVector(&v, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
setVector(&w, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
setTriangle(&triangle[974], u, v, w, m, f);

// Triangle 975:

setVector(&u, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
setVector(&v, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
setVector(&w, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
setTriangle(&triangle[975], u, v, w, m, f);

// Triangle 976:

setVector(&u, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
setVector(&v, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
setVector(&w, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
setTriangle(&triangle[976], u, v, w, m, f);

// Triangle 977:

setVector(&u, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
setVector(&v, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
setVector(&w, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
setTriangle(&triangle[977], u, v, w, m, f);

// Triangle 978:

setVector(&u, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
setVector(&v, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
setVector(&w, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
setTriangle(&triangle[978], u, v, w, m, f);

// Triangle 979:

setVector(&u, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
setVector(&v, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
setVector(&w, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
setTriangle(&triangle[979], u, v, w, m, f);

// Triangle 980:

setVector(&u, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
setVector(&v, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
setVector(&w, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
setTriangle(&triangle[980], u, v, w, m, f);

// Triangle 981:

setVector(&u, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
setVector(&v, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
setVector(&w, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
setTriangle(&triangle[981], u, v, w, m, f);

// Triangle 982:

setVector(&u, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
setVector(&v, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
setVector(&w, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
setTriangle(&triangle[982], u, v, w, m, f);

// Triangle 983:

setVector(&u, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
setVector(&v, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
setVector(&w, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
setTriangle(&triangle[983], u, v, w, m, f);

// Triangle 984:

setVector(&u, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
setVector(&v, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
setVector(&w, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
setTriangle(&triangle[984], u, v, w, m, f);

// Triangle 985:

setVector(&u, fp_Flt2FP(-0.777070f), fp_Flt2FP(-4.392500f), fp_Flt2FP(6.620918f), f);
setVector(&v, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
setVector(&w, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
setTriangle(&triangle[985], u, v, w, m, f);

// Triangle 986:

setVector(&u, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
setVector(&v, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
setVector(&w, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
setTriangle(&triangle[986], u, v, w, m, f);

// Triangle 987:

setVector(&u, fp_Flt2FP(-0.806211f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.616757f), f);
setVector(&v, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
setVector(&w, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
setTriangle(&triangle[987], u, v, w, m, f);

// Triangle 988:

setVector(&u, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
setVector(&v, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
setVector(&w, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
setTriangle(&triangle[988], u, v, w, m, f);

// Triangle 989:

setVector(&u, fp_Flt2FP(-0.847695f), fp_Flt2FP(-4.363750f), fp_Flt2FP(6.600687f), f);
setVector(&v, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
setVector(&w, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
setTriangle(&triangle[989], u, v, w, m, f);

// Triangle 990:

setVector(&u, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
setVector(&v, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
setVector(&w, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
setTriangle(&triangle[990], u, v, w, m, f);

// Triangle 991:

setVector(&u, fp_Flt2FP(-0.877227f), fp_Flt2FP(-4.392656f), fp_Flt2FP(6.582124f), f);
setVector(&v, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
setVector(&w, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
setTriangle(&triangle[991], u, v, w, m, f);

// Triangle 992:

setVector(&u, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
setVector(&v, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
setVector(&w, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
setTriangle(&triangle[992], u, v, w, m, f);

// Triangle 993:

setVector(&u, fp_Flt2FP(-0.877500f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.571940f), f);
setVector(&v, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
setVector(&w, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
setTriangle(&triangle[993], u, v, w, m, f);

// Triangle 994:

setVector(&u, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
setVector(&v, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
setVector(&w, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
setTriangle(&triangle[994], u, v, w, m, f);

// Triangle 995:

setVector(&u, fp_Flt2FP(-0.848359f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.576102f), f);
setVector(&v, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
setVector(&w, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
setTriangle(&triangle[995], u, v, w, m, f);

// Triangle 996:

setVector(&u, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
setVector(&v, fp_Flt2FP(-0.777344f), fp_Flt2FP(-4.433437f), fp_Flt2FP(6.610735f), f);
setVector(&w, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
setTriangle(&triangle[996], u, v, w, m, f);

// Triangle 997:

setVector(&u, fp_Flt2FP(-0.806875f), fp_Flt2FP(-4.462344f), fp_Flt2FP(6.592171f), f);
setVector(&v, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
setVector(&w, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
setTriangle(&triangle[997], u, v, w, m, f);

// Triangle 998:

setVector(&u, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
setVector(&v, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
setVector(&w, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
setTriangle(&triangle[998], u, v, w, m, f);

// Triangle 999:

setVector(&u, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
setVector(&v, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
setVector(&w, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
setTriangle(&triangle[999], u, v, w, m, f);

// Triangle 1000:

setVector(&u, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
setVector(&v, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
setVector(&w, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
setTriangle(&triangle[1000], u, v, w, m, f);

// Triangle 1001:

setVector(&u, fp_Flt2FP(-0.566992f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.422292f), f);
setVector(&v, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
setVector(&w, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
setTriangle(&triangle[1001], u, v, w, m, f);

// Triangle 1002:

setVector(&u, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
setVector(&v, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
setVector(&w, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
setTriangle(&triangle[1002], u, v, w, m, f);

// Triangle 1003:

setVector(&u, fp_Flt2FP(-0.596133f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.418127f), f);
setVector(&v, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
setVector(&w, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
setTriangle(&triangle[1003], u, v, w, m, f);

// Triangle 1004:

setVector(&u, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
setVector(&v, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
setVector(&w, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
setTriangle(&triangle[1004], u, v, w, m, f);

// Triangle 1005:

setVector(&u, fp_Flt2FP(-0.637617f), fp_Flt2FP(-4.237969f), fp_Flt2FP(6.402063f), f);
setVector(&v, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
setVector(&w, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
setTriangle(&triangle[1005], u, v, w, m, f);

// Triangle 1006:

setVector(&u, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
setVector(&v, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
setVector(&w, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
setTriangle(&triangle[1006], u, v, w, m, f);

// Triangle 1007:

setVector(&u, fp_Flt2FP(-0.667148f), fp_Flt2FP(-4.266875f), fp_Flt2FP(6.383510f), f);
setVector(&v, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
setVector(&w, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
setTriangle(&triangle[1007], u, v, w, m, f);

// Triangle 1008:

setVector(&u, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
setVector(&v, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
setVector(&w, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
setTriangle(&triangle[1008], u, v, w, m, f);

// Triangle 1009:

setVector(&u, fp_Flt2FP(-0.667422f), fp_Flt2FP(-4.307812f), fp_Flt2FP(6.373338f), f);
setVector(&v, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
setVector(&w, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
setTriangle(&triangle[1009], u, v, w, m, f);

// Triangle 1010:

setVector(&u, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
setVector(&v, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
setVector(&w, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
setTriangle(&triangle[1010], u, v, w, m, f);

// Triangle 1011:

setVector(&u, fp_Flt2FP(-0.638281f), fp_Flt2FP(-4.336719f), fp_Flt2FP(6.377502f), f);
setVector(&v, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
setVector(&w, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
setTriangle(&triangle[1011], u, v, w, m, f);

// Triangle 1012:

setVector(&u, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
setVector(&v, fp_Flt2FP(-0.567266f), fp_Flt2FP(-4.307656f), fp_Flt2FP(6.412119f), f);
setVector(&w, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
setTriangle(&triangle[1012], u, v, w, m, f);

// Triangle 1013:

setVector(&u, fp_Flt2FP(-0.596797f), fp_Flt2FP(-4.336562f), fp_Flt2FP(6.393567f), f);
setVector(&v, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
setTriangle(&triangle[1013], u, v, w, m, f);

// Triangle 1014:

setVector(&u, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
setVector(&v, fp_Flt2FP(-0.798281f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.836188f), f);
setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
setTriangle(&triangle[1014], u, v, w, m, f);

// Triangle 1015:

setVector(&u, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
setVector(&v, fp_Flt2FP(-0.839102f), fp_Flt2FP(-4.463125f), fp_Flt2FP(6.837630f), f);
setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
setTriangle(&triangle[1015], u, v, w, m, f);

// Triangle 1016:

setVector(&u, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
setVector(&v, fp_Flt2FP(-0.868047f), fp_Flt2FP(-4.434375f), fp_Flt2FP(6.838747f), f);
setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
setTriangle(&triangle[1016], u, v, w, m, f);

// Triangle 1017:

setVector(&u, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
setVector(&v, fp_Flt2FP(-0.868125f), fp_Flt2FP(-4.393438f), fp_Flt2FP(6.838882f), f);
setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
setTriangle(&triangle[1017], u, v, w, m, f);

// Triangle 1018:

setVector(&u, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
setVector(&v, fp_Flt2FP(-0.839297f), fp_Flt2FP(-4.364531f), fp_Flt2FP(6.837958f), f);
setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
setTriangle(&triangle[1018], u, v, w, m, f);

// Triangle 1019:

setVector(&u, fp_Flt2FP(-0.769492f), fp_Flt2FP(-4.393281f), fp_Flt2FP(6.835399f), f);
setVector(&v, fp_Flt2FP(-0.798438f), fp_Flt2FP(-4.364375f), fp_Flt2FP(6.836515f), f);
setVector(&w, fp_Flt2FP(-0.769414f), fp_Flt2FP(-4.434063f), fp_Flt2FP(6.835262f), f);
setTriangle(&triangle[1019], u, v, w, m, f);

// Triangle 1020:

setVector(&u, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
setVector(&v, fp_Flt2FP(-0.585508f), fp_Flt2FP(-4.260625f), fp_Flt2FP(5.889841f), f);
setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
setTriangle(&triangle[1020], u, v, w, m, f);

// Triangle 1021:

setVector(&u, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
setVector(&v, fp_Flt2FP(-0.614453f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.890948f), f);
setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
setTriangle(&triangle[1021], u, v, w, m, f);

// Triangle 1022:

setVector(&u, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
setVector(&v, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
setVector(&w, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
setTriangle(&triangle[1022], u, v, w, m, f);

// Triangle 1023:

setVector(&u, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
setVector(&v, fp_Flt2FP(-0.684062f), fp_Flt2FP(-4.301563f), fp_Flt2FP(5.893235f), f);
setVector(&w, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
setTriangle(&triangle[1023], u, v, w, m, f);

// Triangle 1024:

setVector(&u, fp_Flt2FP(-0.655312f), fp_Flt2FP(-4.231719f), fp_Flt2FP(5.892400f), f);
setVector(&v, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
setVector(&w, fp_Flt2FP(-0.684141f), fp_Flt2FP(-4.260781f), fp_Flt2FP(5.893348f), f);
setTriangle(&triangle[1024], u, v, w, m, f);

// Triangle 1025:

setVector(&u, fp_Flt2FP(-0.614258f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.890675f), f);
setVector(&v, fp_Flt2FP(-0.655117f), fp_Flt2FP(-4.330469f), fp_Flt2FP(5.892128f), f);
setVector(&w, fp_Flt2FP(-0.585430f), fp_Flt2FP(-4.301406f), fp_Flt2FP(5.889728f), f);
setTriangle(&triangle[1025], u, v, w, m, f);

// Triangle 1026:

setVector(&u, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
setVector(&v, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
setVector(&w, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
setTriangle(&triangle[1026], u, v, w, m, f);

// Triangle 1027:

setVector(&u, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
setVector(&v, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
setVector(&w, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
setTriangle(&triangle[1027], u, v, w, m, f);

// Triangle 1028:

setVector(&u, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
setTriangle(&triangle[1028], u, v, w, m, f);

// Triangle 1029:

setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
setVector(&w, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
setTriangle(&triangle[1029], u, v, w, m, f);

// Triangle 1030:

setVector(&u, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
setTriangle(&triangle[1030], u, v, w, m, f);

// Triangle 1031:

setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
setVector(&w, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
setTriangle(&triangle[1031], u, v, w, m, f);

// Triangle 1032:

setVector(&u, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
setVector(&v, fp_Flt2FP(-4.539766f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.510809f), f);
setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
setTriangle(&triangle[1032], u, v, w, m, f);

// Triangle 1033:

setVector(&u, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
setVector(&w, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
setTriangle(&triangle[1033], u, v, w, m, f);

// Triangle 1034:

setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
setTriangle(&triangle[1034], u, v, w, m, f);

// Triangle 1035:

setVector(&u, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
setVector(&v, fp_Flt2FP(-4.539766f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.510809f), f);
setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
setTriangle(&triangle[1035], u, v, w, m, f);

// Triangle 1036:

setVector(&u, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
setTriangle(&triangle[1036], u, v, w, m, f);

// Triangle 1037:

setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
setVector(&v, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
setVector(&w, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
setTriangle(&triangle[1037], u, v, w, m, f);

// Triangle 1038:

setVector(&u, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
setTriangle(&triangle[1038], u, v, w, m, f);

// Triangle 1039:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
setTriangle(&triangle[1039], u, v, w, m, f);

// Triangle 1040:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
setTriangle(&triangle[1040], u, v, w, m, f);

// Triangle 1041:

setVector(&u, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
setVector(&v, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
setTriangle(&triangle[1041], u, v, w, m, f);

// Triangle 1042:

setVector(&u, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
setTriangle(&triangle[1042], u, v, w, m, f);

// Triangle 1043:

setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
setVector(&v, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
setVector(&w, fp_Flt2FP(-4.492070f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.400732f), f);
setTriangle(&triangle[1043], u, v, w, m, f);

// Triangle 1044:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
setVector(&v, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
setTriangle(&triangle[1044], u, v, w, m, f);

// Triangle 1045:

setVector(&u, fp_Flt2FP(-4.491797f), fp_Flt2FP(-5.114063f), fp_Flt2FP(4.400738f), f);
setVector(&v, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
setTriangle(&triangle[1045], u, v, w, m, f);

// Triangle 1046:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
setTriangle(&triangle[1046], u, v, w, m, f);

// Triangle 1047:

setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
setVector(&v, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
setTriangle(&triangle[1047], u, v, w, m, f);

// Triangle 1048:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
setTriangle(&triangle[1048], u, v, w, m, f);

// Triangle 1049:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
setVector(&w, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
setTriangle(&triangle[1049], u, v, w, m, f);

// Triangle 1050:

setVector(&u, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setTriangle(&triangle[1050], u, v, w, m, f);

// Triangle 1051:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
setVector(&v, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
setTriangle(&triangle[1051], u, v, w, m, f);

// Triangle 1052:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
setTriangle(&triangle[1052], u, v, w, m, f);

// Triangle 1053:

setVector(&u, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
setVector(&v, fp_Flt2FP(4.564610f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.402232f), f);
setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.389287f), f);
setTriangle(&triangle[1053], u, v, w, m, f);

// Triangle 1054:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setTriangle(&triangle[1054], u, v, w, m, f);

// Triangle 1055:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
setTriangle(&triangle[1055], u, v, w, m, f);

// Triangle 1056:

setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
setVector(&v, fp_Flt2FP(4.564648f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.402227f), f);
setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
setTriangle(&triangle[1056], u, v, w, m, f);

// Triangle 1057:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(5.113906f), fp_Flt2FP(6.389280f), f);
setTriangle(&triangle[1057], u, v, w, m, f);

// Triangle 1058:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
setTriangle(&triangle[1058], u, v, w, m, f);

// Triangle 1059:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
setTriangle(&triangle[1059], u, v, w, m, f);

// Triangle 1060:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setTriangle(&triangle[1060], u, v, w, m, f);

// Triangle 1061:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
setTriangle(&triangle[1061], u, v, w, m, f);

// Triangle 1062:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
setVector(&w, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setTriangle(&triangle[1062], u, v, w, m, f);

// Triangle 1063:

setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
setTriangle(&triangle[1063], u, v, w, m, f);

// Triangle 1064:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
setTriangle(&triangle[1064], u, v, w, m, f);

// Triangle 1065:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
setTriangle(&triangle[1065], u, v, w, m, f);

// Triangle 1066:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
setTriangle(&triangle[1066], u, v, w, m, f);

// Triangle 1067:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
setTriangle(&triangle[1067], u, v, w, m, f);

// Triangle 1068:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.200006f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
setTriangle(&triangle[1068], u, v, w, m, f);

// Triangle 1069:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.200007f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200006f), f);
setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.200007f), f);
setTriangle(&triangle[1069], u, v, w, m, f);

// Triangle 1070:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(2.360007f), f);
setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
setTriangle(&triangle[1070], u, v, w, m, f);

// Triangle 1071:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(2.360006f), f);
setVector(&v, fp_Flt2FP(4.114024f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360008f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(2.360006f), f);
setTriangle(&triangle[1071], u, v, w, m, f);

// Triangle 1072:

setVector(&u, fp_Flt2FP(4.114101f), fp_Flt2FP(4.874062f), fp_Flt2FP(2.360002f), f);
setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setTriangle(&triangle[1072], u, v, w, m, f);

// Triangle 1073:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.360000f), f);
setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
setTriangle(&triangle[1073], u, v, w, m, f);

// Triangle 1074:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200000f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
setTriangle(&triangle[1074], u, v, w, m, f);

// Triangle 1075:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(2.200002f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
setTriangle(&triangle[1075], u, v, w, m, f);

// Triangle 1076:

setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
setVector(&v, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360002f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
setTriangle(&triangle[1076], u, v, w, m, f);

// Triangle 1077:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(2.200002f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.200000f), f);
setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(2.360000f), f);
setTriangle(&triangle[1077], u, v, w, m, f);

// Triangle 1078:

setVector(&u, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
setVector(&v, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
setTriangle(&triangle[1078], u, v, w, m, f);

// Triangle 1079:

setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
setVector(&v, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
setTriangle(&triangle[1079], u, v, w, m, f);

// Triangle 1080:

setVector(&u, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setVector(&v, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setTriangle(&triangle[1080], u, v, w, m, f);

// Triangle 1081:

setVector(&u, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setVector(&v, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
setTriangle(&triangle[1081], u, v, w, m, f);

// Triangle 1082:

setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
setVector(&v, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
setTriangle(&triangle[1082], u, v, w, m, f);

// Triangle 1083:

setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
setVector(&v, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setVector(&w, fp_Flt2FP(0.730156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setTriangle(&triangle[1083], u, v, w, m, f);

// Triangle 1084:

setVector(&u, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
setVector(&v, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[1084], u, v, w, m, f);

// Triangle 1085:

setVector(&u, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
setVector(&v, fp_Flt2FP(0.170117f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[1085], u, v, w, m, f);

// Triangle 1086:

setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
setVector(&v, fp_Flt2FP(0.170000f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[1086], u, v, w, m, f);

// Triangle 1087:

setVector(&u, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
setVector(&v, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.080001f), f);
setTriangle(&triangle[1087], u, v, w, m, f);

// Triangle 1088:

setVector(&u, fp_Flt2FP(0.170078f), fp_Flt2FP(4.890000f), fp_Flt2FP(0.640001f), f);
setVector(&v, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setVector(&w, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[1088], u, v, w, m, f);

// Triangle 1089:

setVector(&u, fp_Flt2FP(0.730117f), fp_Flt2FP(4.889844f), fp_Flt2FP(0.640001f), f);
setVector(&v, fp_Flt2FP(0.170156f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setVector(&w, fp_Flt2FP(0.730078f), fp_Flt2FP(4.873906f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[1089], u, v, w, m, f);

// Triangle 1090:

setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setTriangle(&triangle[1090], u, v, w, m, f);

// Triangle 1091:

setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setTriangle(&triangle[1091], u, v, w, m, f);

// Triangle 1092:

setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
setVector(&w, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
setTriangle(&triangle[1092], u, v, w, m, f);

// Triangle 1093:

setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
setVector(&v, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.080007f), f);
setTriangle(&triangle[1093], u, v, w, m, f);

// Triangle 1094:

setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
setVector(&w, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
setTriangle(&triangle[1094], u, v, w, m, f);

// Triangle 1095:

setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
setVector(&w, fp_Flt2FP(4.114258f), fp_Flt2FP(-4.593906f), fp_Flt2FP(0.640007f), f);
setTriangle(&triangle[1095], u, v, w, m, f);

// Triangle 1096:

setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
setTriangle(&triangle[1096], u, v, w, m, f);

// Triangle 1097:

setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
setTriangle(&triangle[1097], u, v, w, m, f);

// Triangle 1098:

setVector(&u, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
setVector(&w, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
setTriangle(&triangle[1098], u, v, w, m, f);

// Triangle 1099:

setVector(&u, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
setVector(&v, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
setVector(&w, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.080006f), f);
setTriangle(&triangle[1099], u, v, w, m, f);

// Triangle 1100:

setVector(&u, fp_Flt2FP(-0.893867f), fp_Flt2FP(-4.874062f), fp_Flt2FP(0.640006f), f);
setVector(&v, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
setVector(&w, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
setTriangle(&triangle[1100], u, v, w, m, f);

// Triangle 1101:

setVector(&u, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
setVector(&w, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
setTriangle(&triangle[1101], u, v, w, m, f);

// Triangle 1102:

setVector(&u, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
setVector(&v, fp_Flt2FP(-0.893789f), fp_Flt2FP(-4.890156f), fp_Flt2FP(0.080006f), f);
setVector(&w, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
setTriangle(&triangle[1102], u, v, w, m, f);

// Triangle 1103:

setVector(&u, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
setVector(&v, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
setVector(&w, fp_Flt2FP(-0.893828f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640006f), f);
setTriangle(&triangle[1103], u, v, w, m, f);

// Triangle 1104:

setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
setVector(&v, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setVector(&w, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
setTriangle(&triangle[1104], u, v, w, m, f);

// Triangle 1105:

setVector(&u, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
setVector(&v, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[1105], u, v, w, m, f);

// Triangle 1106:

setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setVector(&w, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
setTriangle(&triangle[1106], u, v, w, m, f);

// Triangle 1107:

setVector(&u, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
setVector(&v, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setVector(&w, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
setTriangle(&triangle[1107], u, v, w, m, f);

// Triangle 1108:

setVector(&u, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setVector(&v, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.640007f), f);
setVector(&w, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
setTriangle(&triangle[1108], u, v, w, m, f);

// Triangle 1109:

setVector(&u, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(4.130117f), fp_Flt2FP(-4.594062f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(4.130039f), fp_Flt2FP(-4.033906f), fp_Flt2FP(0.080007f), f);
setTriangle(&triangle[1109], u, v, w, m, f);

// Triangle 1110:

setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setTriangle(&triangle[1110], u, v, w, m, f);

// Triangle 1111:

setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.640000f), f);
setTriangle(&triangle[1111], u, v, w, m, f);

// Triangle 1112:

setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[1112], u, v, w, m, f);

// Triangle 1113:

setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.640001f), f);
setTriangle(&triangle[1113], u, v, w, m, f);

// Triangle 1114:

setVector(&u, fp_Flt2FP(-4.053867f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
setVector(&w, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setTriangle(&triangle[1114], u, v, w, m, f);

// Triangle 1115:

setVector(&u, fp_Flt2FP(-4.053945f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.593906f), fp_Flt2FP(0.080000f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.033906f), fp_Flt2FP(0.080001f), f);
setTriangle(&triangle[1115], u, v, w, m, f);

// Triangle 1116:

setVector(&u, fp_Flt2FP(-0.333789f), fp_Flt2FP(-4.889844f), fp_Flt2FP(0.080007f), f);
setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
setTriangle(&triangle[1116], u, v, w, m, f);

// Triangle 1117:

setVector(&u, fp_Flt2FP(-0.333750f), fp_Flt2FP(-4.890000f), fp_Flt2FP(0.640007f), f);
setVector(&v, fp_Flt2FP(-0.333828f), fp_Flt2FP(-4.874219f), fp_Flt2FP(0.080007f), f);
setVector(&w, fp_Flt2FP(-0.333711f), fp_Flt2FP(-4.873906f), fp_Flt2FP(0.640007f), f);
setTriangle(&triangle[1117], u, v, w, m, f);

// Triangle 1118:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728000f), f);
setVector(&w, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
setTriangle(&triangle[1118], u, v, w, m, f);

// Triangle 1119:

setVector(&u, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728001f), f);
setVector(&v, fp_Flt2FP(-2.237969f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760001f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.760000f), f);
setTriangle(&triangle[1119], u, v, w, m, f);

// Triangle 1120:

setVector(&u, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
setVector(&v, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
setVector(&w, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
setTriangle(&triangle[1120], u, v, w, m, f);

// Triangle 1121:

setVector(&u, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(0.760002f), f);
setVector(&v, fp_Flt2FP(1.833984f), fp_Flt2FP(4.714219f), fp_Flt2FP(1.728002f), f);
setVector(&w, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.728002f), f);
setTriangle(&triangle[1121], u, v, w, m, f);

// Triangle 1122:

setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
setVector(&w, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
setTriangle(&triangle[1122], u, v, w, m, f);

// Triangle 1123:

setVector(&u, fp_Flt2FP(-0.077773f), fp_Flt2FP(4.714219f), fp_Flt2FP(0.759992f), f);
setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(0.759992f), f);
setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(1.727992f), f);
setTriangle(&triangle[1123], u, v, w, m, f);

// Triangle 1124:

setVector(&u, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
setVector(&v, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
setVector(&w, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
setTriangle(&triangle[1124], u, v, w, m, f);

// Triangle 1125:

setVector(&u, fp_Flt2FP(-1.165938f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
setVector(&v, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128001f), f);
setVector(&w, fp_Flt2FP(-0.077812f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160001f), f);
setTriangle(&triangle[1125], u, v, w, m, f);

// Triangle 1126:

setVector(&u, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
setVector(&v, fp_Flt2FP(2.922031f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.127996f), f);
setVector(&w, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
setTriangle(&triangle[1126], u, v, w, m, f);

// Triangle 1127:

setVector(&u, fp_Flt2FP(2.922070f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
setVector(&v, fp_Flt2FP(1.833945f), fp_Flt2FP(4.714062f), fp_Flt2FP(3.159996f), f);
setVector(&w, fp_Flt2FP(1.834023f), fp_Flt2FP(4.714062f), fp_Flt2FP(4.127996f), f);
setTriangle(&triangle[1127], u, v, w, m, f);

// Triangle 1128:

setVector(&u, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
setVector(&v, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128009f), f);
setVector(&w, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
setTriangle(&triangle[1128], u, v, w, m, f);

// Triangle 1129:

setVector(&u, fp_Flt2FP(-2.237891f), fp_Flt2FP(4.713906f), fp_Flt2FP(4.128010f), f);
setVector(&v, fp_Flt2FP(-2.237930f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
setVector(&w, fp_Flt2FP(-3.325898f), fp_Flt2FP(4.713906f), fp_Flt2FP(3.160009f), f);
setTriangle(&triangle[1129], u, v, w, m, f);

// Triangle 1130:

setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
setTriangle(&triangle[1130], u, v, w, m, f);

// Triangle 1131:

setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760002f), f);
setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setTriangle(&triangle[1131], u, v, w, m, f);

// Triangle 1132:

setVector(&u, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
setVector(&v, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[1132], u, v, w, m, f);

// Triangle 1133:

setVector(&u, fp_Flt2FP(-2.845820f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(-1.757852f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-1.757773f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128003f), f);
setTriangle(&triangle[1133], u, v, w, m, f);

// Triangle 1134:

setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[1134], u, v, w, m, f);

// Triangle 1135:

setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[1135], u, v, w, m, f);

// Triangle 1136:

setVector(&u, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
setVector(&v, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760003f), f);
setVector(&w, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
setTriangle(&triangle[1136], u, v, w, m, f);

// Triangle 1137:

setVector(&u, fp_Flt2FP(1.242227f), fp_Flt2FP(-4.714062f), fp_Flt2FP(1.728004f), f);
setVector(&v, fp_Flt2FP(0.154219f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728003f), f);
setVector(&w, fp_Flt2FP(0.154141f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760003f), f);
setTriangle(&triangle[1137], u, v, w, m, f);

// Triangle 1138:

setVector(&u, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
setTriangle(&triangle[1138], u, v, w, m, f);

// Triangle 1139:

setVector(&u, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(3.160007f), f);
setVector(&v, fp_Flt2FP(1.242188f), fp_Flt2FP(-4.713906f), fp_Flt2FP(4.128007f), f);
setVector(&w, fp_Flt2FP(0.154102f), fp_Flt2FP(-4.714219f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[1139], u, v, w, m, f);

// Triangle 1140:

setVector(&u, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
setVector(&v, fp_Flt2FP(3.402187f), fp_Flt2FP(-4.714062f), fp_Flt2FP(0.760011f), f);
setVector(&w, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
setTriangle(&triangle[1140], u, v, w, m, f);

// Triangle 1141:

setVector(&u, fp_Flt2FP(3.402110f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
setVector(&v, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(1.728011f), f);
setVector(&w, fp_Flt2FP(2.314180f), fp_Flt2FP(-4.714219f), fp_Flt2FP(0.760011f), f);
setTriangle(&triangle[1141], u, v, w, m, f);

// Triangle 1142:

setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(0.760004f), f);
setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
setTriangle(&triangle[1142], u, v, w, m, f);

// Triangle 1143:

setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-2.594219f), fp_Flt2FP(1.728004f), f);
setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(1.728005f), f);
setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(0.760005f), f);
setTriangle(&triangle[1143], u, v, w, m, f);

// Triangle 1144:

setVector(&u, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setVector(&v, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(4.128006f), f);
setVector(&w, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
setTriangle(&triangle[1144], u, v, w, m, f);

// Triangle 1145:

setVector(&u, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(4.128007f), f);
setVector(&v, fp_Flt2FP(3.954258f), fp_Flt2FP(-3.682031f), fp_Flt2FP(3.160007f), f);
setVector(&w, fp_Flt2FP(3.954219f), fp_Flt2FP(-2.594062f), fp_Flt2FP(3.160006f), f);
setTriangle(&triangle[1145], u, v, w, m, f);

// Triangle 1146:

setVector(&u, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
setVector(&v, fp_Flt2FP(3.953984f), fp_Flt2FP(2.558125f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[1146], u, v, w, m, f);

// Triangle 1147:

setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(3.646094f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(3.645937f), fp_Flt2FP(4.128002f), f);
setVector(&w, fp_Flt2FP(3.954063f), fp_Flt2FP(2.558125f), fp_Flt2FP(4.128004f), f);
setTriangle(&triangle[1147], u, v, w, m, f);

// Triangle 1148:

setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
setVector(&v, fp_Flt2FP(3.954063f), fp_Flt2FP(-0.313906f), fp_Flt2FP(0.760007f), f);
setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
setTriangle(&triangle[1148], u, v, w, m, f);

// Triangle 1149:

setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(-0.313906f), fp_Flt2FP(1.728007f), f);
setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(1.728007f), f);
setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(0.760007f), f);
setTriangle(&triangle[1149], u, v, w, m, f);

// Triangle 1150:

setVector(&u, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
setVector(&v, fp_Flt2FP(3.954023f), fp_Flt2FP(-0.313906f), fp_Flt2FP(3.159999f), f);
setVector(&w, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
setTriangle(&triangle[1150], u, v, w, m, f);

// Triangle 1151:

setVector(&u, fp_Flt2FP(3.953945f), fp_Flt2FP(-0.313906f), fp_Flt2FP(4.127999f), f);
setVector(&v, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(4.128000f), f);
setVector(&w, fp_Flt2FP(3.954140f), fp_Flt2FP(-1.402031f), fp_Flt2FP(3.160000f), f);
setTriangle(&triangle[1151], u, v, w, m, f);

// Triangle 1152:

setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
setVector(&v, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(1.727999f), f);
setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
setTriangle(&triangle[1152], u, v, w, m, f);

// Triangle 1153:

setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(0.759999f), f);
setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-3.646094f), fp_Flt2FP(0.760000f), f);
setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(1.728000f), f);
setTriangle(&triangle[1153], u, v, w, m, f);

// Triangle 1154:

setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(1.727997f), f);
setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
setTriangle(&triangle[1154], u, v, w, m, f);

// Triangle 1155:

setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(0.759997f), f);
setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(0.759998f), f);
setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(1.727998f), f);
setTriangle(&triangle[1155], u, v, w, m, f);

// Triangle 1156:

setVector(&u, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(3.645937f), fp_Flt2FP(0.760008f), f);
setVector(&w, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
setTriangle(&triangle[1156], u, v, w, m, f);

// Triangle 1157:

setVector(&u, fp_Flt2FP(3.954180f), fp_Flt2FP(3.646094f), fp_Flt2FP(1.728008f), f);
setVector(&v, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(1.728009f), f);
setVector(&w, fp_Flt2FP(3.954102f), fp_Flt2FP(2.557969f), fp_Flt2FP(0.760009f), f);
setTriangle(&triangle[1157], u, v, w, m, f);

// Triangle 1158:

setVector(&u, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(3.159998f), f);
setVector(&w, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
setTriangle(&triangle[1158], u, v, w, m, f);

// Triangle 1159:

setVector(&u, fp_Flt2FP(-3.877969f), fp_Flt2FP(2.593906f), fp_Flt2FP(4.127998f), f);
setVector(&v, fp_Flt2FP(-3.878047f), fp_Flt2FP(3.682031f), fp_Flt2FP(4.127997f), f);
setVector(&w, fp_Flt2FP(-3.878086f), fp_Flt2FP(3.682031f), fp_Flt2FP(3.159997f), f);
setTriangle(&triangle[1159], u, v, w, m, f);

// Triangle 1160:

setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
setVector(&v, fp_Flt2FP(-3.877813f), fp_Flt2FP(-3.645937f), fp_Flt2FP(4.128003f), f);
setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
setTriangle(&triangle[1160], u, v, w, m, f);

// Triangle 1161:

setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-2.557969f), fp_Flt2FP(4.128003f), f);
setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-2.557969f), fp_Flt2FP(3.160003f), f);
setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-3.646094f), fp_Flt2FP(3.160003f), f);
setTriangle(&triangle[1161], u, v, w, m, f);

// Triangle 1162:

setVector(&u, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
setVector(&v, fp_Flt2FP(-3.877969f), fp_Flt2FP(-0.886094f), fp_Flt2FP(3.159996f), f);
setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
setTriangle(&triangle[1162], u, v, w, m, f);

// Triangle 1163:

setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(-0.886094f), fp_Flt2FP(4.127996f), f);
setVector(&v, fp_Flt2FP(-3.877891f), fp_Flt2FP(0.201719f), fp_Flt2FP(4.127996f), f);
setVector(&w, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.201719f), fp_Flt2FP(3.159995f), f);
setTriangle(&triangle[1163], u, v, w, m, f);

// Triangle 1164:

setVector(&u, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(0.082031f), fp_Flt2FP(0.080004f), f);
setVector(&w, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
setTriangle(&triangle[1164], u, v, w, m, f);

// Triangle 1165:

setVector(&u, fp_Flt2FP(-3.877773f), fp_Flt2FP(-0.766094f), fp_Flt2FP(0.080004f), f);
setVector(&v, fp_Flt2FP(-3.877851f), fp_Flt2FP(-0.766094f), fp_Flt2FP(1.728005f), f);
setVector(&w, fp_Flt2FP(-3.877813f), fp_Flt2FP(0.082031f), fp_Flt2FP(1.728004f), f);
setTriangle(&triangle[1165], u, v, w, m, f);

// Triangle 1166:

setVector(&u, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
setVector(&v, fp_Flt2FP(-4.539766f), fp_Flt2FP(5.113906f), fp_Flt2FP(4.510809f), f);
setVector(&w, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
setTriangle(&triangle[1166], u, v, w, m, f);

// Triangle 1167:

setVector(&u, fp_Flt2FP(-4.539727f), fp_Flt2FP(-5.114219f), fp_Flt2FP(4.510815f), f);
setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
setVector(&w, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
setTriangle(&triangle[1167], u, v, w, m, f);

// Triangle 1168:

setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
setVector(&v, fp_Flt2FP(4.610039f), fp_Flt2FP(-5.113906f), fp_Flt2FP(4.513353f), f);
setVector(&w, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
setTriangle(&triangle[1168], u, v, w, m, f);

// Triangle 1169:

setVector(&u, fp_Flt2FP(4.610156f), fp_Flt2FP(5.114219f), fp_Flt2FP(4.513347f), f);
setVector(&v, fp_Flt2FP(0.038008f), fp_Flt2FP(5.114063f), fp_Flt2FP(6.520334f), f);
setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(-5.114063f), fp_Flt2FP(6.520340f), f);
setTriangle(&triangle[1169], u, v, w, m, f);

// Triangle 1170:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
setVector(&v, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
setTriangle(&triangle[1170], u, v, w, m, f);

// Triangle 1171:

setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
setVector(&w, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
setTriangle(&triangle[1171], u, v, w, m, f);

// Triangle 1172:

setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600026f), f);
setVector(&v, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
setVector(&w, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
setTriangle(&triangle[1172], u, v, w, m, f);

// Triangle 1173:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
setTriangle(&triangle[1173], u, v, w, m, f);

// Triangle 1174:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
setVector(&w, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600002f), f);
setTriangle(&triangle[1174], u, v, w, m, f);

// Triangle 1175:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setTriangle(&triangle[1175], u, v, w, m, f);

// Triangle 1176:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
setTriangle(&triangle[1176], u, v, w, m, f);

// Triangle 1177:

setVector(&u, fp_Flt2FP(4.113984f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600002f), f);
setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
setTriangle(&triangle[1177], u, v, w, m, f);

// Triangle 1178:

setVector(&u, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
setVector(&w, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
setTriangle(&triangle[1178], u, v, w, m, f);

// Triangle 1179:

setVector(&u, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600026f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
setTriangle(&triangle[1179], u, v, w, m, f);

// Triangle 1180:

setVector(&u, fp_Flt2FP(4.114024f), fp_Flt2FP(4.890156f), fp_Flt2FP(4.600002f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
setVector(&w, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
setTriangle(&triangle[1180], u, v, w, m, f);

// Triangle 1181:

setVector(&u, fp_Flt2FP(-4.038047f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.600025f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
setVector(&w, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
setTriangle(&triangle[1181], u, v, w, m, f);

// Triangle 1182:

setVector(&u, fp_Flt2FP(-4.037852f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440000f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
setTriangle(&triangle[1182], u, v, w, m, f);

// Triangle 1183:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.440002f), f);
setVector(&v, fp_Flt2FP(-4.037969f), fp_Flt2FP(4.889844f), fp_Flt2FP(4.440000f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(4.890000f), fp_Flt2FP(4.440002f), f);
setTriangle(&triangle[1183], u, v, w, m, f);

// Triangle 1184:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
setVector(&w, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
setTriangle(&triangle[1184], u, v, w, m, f);

// Triangle 1185:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
setTriangle(&triangle[1185], u, v, w, m, f);

// Triangle 1186:

setVector(&u, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
setVector(&w, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
setTriangle(&triangle[1186], u, v, w, m, f);

// Triangle 1187:

setVector(&u, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
setVector(&w, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
setTriangle(&triangle[1187], u, v, w, m, f);

// Triangle 1188:

setVector(&u, fp_Flt2FP(4.114180f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600008f), f);
setTriangle(&triangle[1188], u, v, w, m, f);

// Triangle 1189:

setVector(&u, fp_Flt2FP(-4.037774f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.440005f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
setVector(&w, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
setTriangle(&triangle[1189], u, v, w, m, f);

// Triangle 1190:

setVector(&u, fp_Flt2FP(4.114141f), fp_Flt2FP(-4.890000f), fp_Flt2FP(4.440008f), f);
setVector(&v, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
setVector(&w, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440008f), f);
setTriangle(&triangle[1190], u, v, w, m, f);

// Triangle 1191:

setVector(&u, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
setVector(&v, fp_Flt2FP(4.114141f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600002f), f);
setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
setTriangle(&triangle[1191], u, v, w, m, f);

// Triangle 1192:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600022f), f);
setVector(&v, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(6.389281f), f);
setVector(&w, fp_Flt2FP(0.038047f), fp_Flt2FP(4.873906f), fp_Flt2FP(4.600001f), f);
setTriangle(&triangle[1192], u, v, w, m, f);

// Triangle 1193:

setVector(&u, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
setVector(&v, fp_Flt2FP(4.114063f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600008f), f);
setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
setTriangle(&triangle[1193], u, v, w, m, f);

// Triangle 1194:

setVector(&u, fp_Flt2FP(-4.037812f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600014f), f);
setVector(&v, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(4.600007f), f);
setVector(&w, fp_Flt2FP(0.038086f), fp_Flt2FP(-4.873906f), fp_Flt2FP(6.389287f), f);
setTriangle(&triangle[1194], u, v, w, m, f);

// Triangle 1195:

setVector(&u, fp_Flt2FP(-4.037930f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.440005f), f);
setVector(&v, fp_Flt2FP(-4.037695f), fp_Flt2FP(-4.890156f), fp_Flt2FP(4.600031f), f);
setVector(&w, fp_Flt2FP(-4.037891f), fp_Flt2FP(-4.874219f), fp_Flt2FP(4.600019f), f);
setTriangle(&triangle[1195], u, v, w, m, f);

setObject(&myObj, myMat, 1196, triangle, f);
transformObject(&myObj, matMult(genTransMatrix(fp_Flt2FP(1.), fp_Flt2FP(-5.), -fp_Flt2FP(15.), m, f), matMult(genYRotateMat(fp_Flt2FP(160.), m, f), genXRotateMat(fp_Flt2FP(-90.),m, f), m, f), m, f), m, f);
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
        // return outputColour;
        return scalarVecMult(fp_fp1 - traceShadow(hit, scene, light, lightDirection, m, f), outputColour, m, f);
    }

    // No hit, return black.

    return outputColour;
}

#endif
