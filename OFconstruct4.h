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

Texture Textures[5];

// Put the object(s) on the scene
void populateScene(Scene *scene, Light lightSrc, MathStat *m, FuncStat *f)
{
    //fixedp normal[3];	// Storage for calculated surface normal
    
    Object myObj;
    Material myMat[5];
    Vector lgrey = int2Vector(LIGHT_GREY);
    Vector u, v, w;

    UVCoord uUV, vUV, wUV;

    initialiseScene(scene, 5, f);
    Triangle *triangle;
    ReadTexture(&Textures[0],"d036b58a8e4f4ac58ccf46f2f6c007ba.tga", f);
    setMaterial(&myMat[0], lightSrc, lgrey, fp_Flt2FP(1.0), 0, fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.2), 0, fp_Flt2FP(1.4), 0, m, f);
    // Texture 0

    triangle = (Triangle *)malloc(sizeof(Triangle) * 66);
    // Now begin object writing

    // Triangle 0:

    setVector(&u, fp_Flt2FP(-1.424207f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(-1.424207f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000112f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(-1.424389f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000112f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[0], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1:

    setVector(&u, fp_Flt2FP(-1.424389f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000112f), fp_Flt2FP(0.000188f));
    setVector(&v, fp_Flt2FP(-1.424389f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(-1.424207f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.165827f));
    setUVTriangle(&triangle[1], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 2:

    setVector(&u, fp_Flt2FP(-1.344205f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.166016f));
    setVector(&v, fp_Flt2FP(-1.424207f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.129513f));
    setVector(&w, fp_Flt2FP(-1.424389f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.129513f));
    setUVTriangle(&triangle[2], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 3:

    setVector(&u, fp_Flt2FP(-1.424389f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.129513f));
    setVector(&v, fp_Flt2FP(-1.344387f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.166016f));
    setVector(&w, fp_Flt2FP(-1.344205f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.166016f));
    setUVTriangle(&triangle[3], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 4:

    setVector(&u, fp_Flt2FP(-1.424389f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(-1.424389f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000112f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(-1.424389f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000112f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[4], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 5:

    setVector(&u, fp_Flt2FP(-1.424389f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000112f), fp_Flt2FP(0.000188f));
    setVector(&v, fp_Flt2FP(-1.424389f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(-1.424389f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.165827f));
    setUVTriangle(&triangle[5], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 6:

    setVector(&u, fp_Flt2FP(-1.344387f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.166016f));
    setVector(&v, fp_Flt2FP(-1.424389f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.129513f));
    setVector(&w, fp_Flt2FP(-1.424389f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.129513f));
    setUVTriangle(&triangle[6], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 7:

    setVector(&u, fp_Flt2FP(-1.424389f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.129513f));
    setVector(&v, fp_Flt2FP(-1.344387f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.166016f));
    setVector(&w, fp_Flt2FP(-1.344387f), fp_Flt2FP(-0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.166016f));
    setUVTriangle(&triangle[7], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 8:

    setVector(&u, fp_Flt2FP(-1.424389f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(-1.424389f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000112f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(-1.424389f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000112f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[8], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 9:

    setVector(&u, fp_Flt2FP(-1.424389f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000112f), fp_Flt2FP(0.000188f));
    setVector(&v, fp_Flt2FP(-1.424389f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(-1.424389f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.165827f));
    setUVTriangle(&triangle[9], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 10:

    setVector(&u, fp_Flt2FP(-1.344387f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.166016f));
    setVector(&v, fp_Flt2FP(-1.424389f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.129513f));
    setVector(&w, fp_Flt2FP(-1.424389f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.129513f));
    setUVTriangle(&triangle[10], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 11:

    setVector(&u, fp_Flt2FP(-1.424389f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.129513f));
    setVector(&v, fp_Flt2FP(-1.344387f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.166016f));
    setVector(&w, fp_Flt2FP(-1.344387f), fp_Flt2FP(0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000112f), fp_Flt2FP(-0.166016f));
    setUVTriangle(&triangle[11], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 12:

    setVector(&u, fp_Flt2FP(-1.424389f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(-1.424389f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000112f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(-1.424207f), fp_Flt2FP(2.705080f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.152255f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[12], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 13:

    setVector(&u, fp_Flt2FP(-1.424207f), fp_Flt2FP(2.705080f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.152255f), fp_Flt2FP(0.000188f));
    setVector(&v, fp_Flt2FP(-1.424146f), fp_Flt2FP(2.705054f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.152253f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(-1.424389f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.165827f));
    setUVTriangle(&triangle[13], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 14:

    setVector(&u, fp_Flt2FP(-1.344205f), fp_Flt2FP(2.625182f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.103513f), fp_Flt2FP(-0.166016f));
    setVector(&v, fp_Flt2FP(-1.344387f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.166016f));
    setVector(&w, fp_Flt2FP(-1.424389f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.129513f));
    setUVTriangle(&triangle[14], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 15:

    setVector(&u, fp_Flt2FP(-1.424389f), fp_Flt2FP(2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.129513f));
    setVector(&v, fp_Flt2FP(-1.424146f), fp_Flt2FP(2.705054f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.152269f), fp_Flt2FP(-0.129501f));
    setVector(&w, fp_Flt2FP(-1.344205f), fp_Flt2FP(2.625182f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.103513f), fp_Flt2FP(-0.166016f));
    setUVTriangle(&triangle[15], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 16:

    setVector(&u, fp_Flt2FP(0.030977f), fp_Flt2FP(2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(0.030977f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000000f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.111255f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[16], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 17:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.111255f), fp_Flt2FP(0.000188f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.111255f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(0.030977f), fp_Flt2FP(2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.165827f));
    setUVTriangle(&triangle[17], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 18:

    setVector(&u, fp_Flt2FP(0.030977f), fp_Flt2FP(2.625000f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.166099f));
    setVector(&v, fp_Flt2FP(0.030977f), fp_Flt2FP(2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.999999f), fp_Flt2FP(-0.129597f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.097261f), fp_Flt2FP(-0.119143f));
    setUVTriangle(&triangle[18], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 19:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.097261f), fp_Flt2FP(-0.119143f));
    setVector(&v, fp_Flt2FP(1.344387f), fp_Flt2FP(2.625000f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.160122f), fp_Flt2FP(-0.166123f));
    setVector(&w, fp_Flt2FP(0.030977f), fp_Flt2FP(2.625000f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.166099f));
    setUVTriangle(&triangle[19], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 20:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.152157f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.152157f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[20], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 21:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(0.000188f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.152157f), fp_Flt2FP(-0.165827f));
    setUVTriangle(&triangle[21], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 22:

    setVector(&u, fp_Flt2FP(1.344387f), fp_Flt2FP(2.625000f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.103307f), fp_Flt2FP(-0.166004f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.152157f), fp_Flt2FP(-0.129513f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.129513f));
    setUVTriangle(&triangle[22], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 23:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.129513f));
    setVector(&v, fp_Flt2FP(1.344387f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.166016f));
    setVector(&w, fp_Flt2FP(1.344387f), fp_Flt2FP(2.625000f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.103307f), fp_Flt2FP(-0.166004f));
    setUVTriangle(&triangle[23], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 24:

    setVector(&u, fp_Flt2FP(-1.424146f), fp_Flt2FP(2.705054f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.890622f), fp_Flt2FP(-0.167778f));
    setVector(&v, fp_Flt2FP(-1.424207f), fp_Flt2FP(2.705080f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.890625f), fp_Flt2FP(0.000191f));
    setVector(&w, fp_Flt2FP(0.030977f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.000000f), fp_Flt2FP(0.000191f));
    setUVTriangle(&triangle[24], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 25:

    setVector(&u, fp_Flt2FP(0.030977f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.000000f), fp_Flt2FP(0.000191f));
    setVector(&v, fp_Flt2FP(0.030977f), fp_Flt2FP(2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.000000f), fp_Flt2FP(-0.167778f));
    setVector(&w, fp_Flt2FP(-1.424146f), fp_Flt2FP(2.705054f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890622f), fp_Flt2FP(-0.167778f));
    setUVTriangle(&triangle[25], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 26:

    setVector(&u, fp_Flt2FP(-1.344205f), fp_Flt2FP(2.625182f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951117f), fp_Flt2FP(-0.166111f));
    setVector(&v, fp_Flt2FP(-1.424146f), fp_Flt2FP(2.705054f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.999999f), fp_Flt2FP(-0.129598f));
    setVector(&w, fp_Flt2FP(0.030977f), fp_Flt2FP(2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.097261f), fp_Flt2FP(-0.119143f));
    setUVTriangle(&triangle[26], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 27:

    setVector(&u, fp_Flt2FP(0.030977f), fp_Flt2FP(2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.097261f), fp_Flt2FP(-0.119143f));
    setVector(&v, fp_Flt2FP(0.030977f), fp_Flt2FP(2.625000f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.111256f), fp_Flt2FP(-0.166123f));
    setVector(&w, fp_Flt2FP(-1.344205f), fp_Flt2FP(2.625182f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951117f), fp_Flt2FP(-0.166111f));
    setUVTriangle(&triangle[27], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 28:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.999888f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[28], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 29:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(0.000188f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.165827f));
    setUVTriangle(&triangle[29], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 30:

    setVector(&u, fp_Flt2FP(1.344387f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.166016f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.129513f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.129513f));
    setUVTriangle(&triangle[30], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 31:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.129513f));
    setVector(&v, fp_Flt2FP(1.344387f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.166016f));
    setVector(&w, fp_Flt2FP(1.344387f), fp_Flt2FP(2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.166016f));
    setUVTriangle(&triangle[31], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 32:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.999888f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[32], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 33:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(0.000188f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.165827f));
    setUVTriangle(&triangle[33], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 34:

    setVector(&u, fp_Flt2FP(1.344387f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.166016f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.129513f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.129513f));
    setUVTriangle(&triangle[34], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 35:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.129513f));
    setVector(&v, fp_Flt2FP(1.344387f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.166016f));
    setVector(&w, fp_Flt2FP(1.344387f), fp_Flt2FP(0.818572f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.166016f));
    setUVTriangle(&triangle[35], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 36:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.999888f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[36], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 37:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(0.000188f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.165827f));
    setUVTriangle(&triangle[37], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 38:

    setVector(&u, fp_Flt2FP(1.344387f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.166016f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.129513f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.129513f));
    setUVTriangle(&triangle[38], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 39:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.129513f));
    setVector(&v, fp_Flt2FP(1.344387f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.166016f));
    setVector(&w, fp_Flt2FP(1.344387f), fp_Flt2FP(-0.818571f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.999888f), fp_Flt2FP(-0.166016f));
    setUVTriangle(&triangle[39], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 40:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.705080f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.152478f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[40], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 41:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.705080f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.152478f), fp_Flt2FP(0.000188f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.705054f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.152477f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.165827f));
    setUVTriangle(&triangle[41], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 42:

    setVector(&u, fp_Flt2FP(1.344387f), fp_Flt2FP(-2.625182f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.103737f), fp_Flt2FP(-0.166016f));
    setVector(&v, fp_Flt2FP(1.344387f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.166016f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.129513f));
    setUVTriangle(&triangle[42], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 43:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.455714f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(-0.000112f), fp_Flt2FP(-0.129513f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.705054f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(-0.152461f), fp_Flt2FP(-0.129525f));
    setVector(&w, fp_Flt2FP(1.344387f), fp_Flt2FP(-2.625182f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(-0.103737f), fp_Flt2FP(-0.166016f));
    setUVTriangle(&triangle[43], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 44:

    setVector(&u, fp_Flt2FP(-1.195964f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.250559f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000000f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[44], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 45:

    setVector(&u, fp_Flt2FP(-1.195964f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.250559f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000000f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(-1.424025f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.111255f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[45], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 46:

    setVector(&u, fp_Flt2FP(-1.424025f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.111255f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(-1.195964f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.250559f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(-1.424025f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.111255f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[46], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 47:

    setVector(&u, fp_Flt2FP(-1.344023f), fp_Flt2FP(-2.625000f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.160122f), fp_Flt2FP(-0.165908f));
    setVector(&v, fp_Flt2FP(-1.194513f), fp_Flt2FP(-2.623896f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.251126f), fp_Flt2FP(-0.165911f));
    setVector(&w, fp_Flt2FP(-1.195964f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.238705f), fp_Flt2FP(-0.120574f));
    setUVTriangle(&triangle[47], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 48:

    setVector(&u, fp_Flt2FP(-1.195964f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.238705f), fp_Flt2FP(-0.120574f));
    setVector(&v, fp_Flt2FP(-1.424025f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.097197f), fp_Flt2FP(-0.118928f));
    setVector(&w, fp_Flt2FP(-1.344023f), fp_Flt2FP(-2.625000f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.160122f), fp_Flt2FP(-0.165908f));
    setUVTriangle(&triangle[48], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 49:

    setVector(&u, fp_Flt2FP(-1.424025f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.152381f), fp_Flt2FP(-0.165827f));
    setVector(&v, fp_Flt2FP(-1.424025f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.152381f), fp_Flt2FP(0.000188f));
    setVector(&w, fp_Flt2FP(-1.424207f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000112f), fp_Flt2FP(0.000188f));
    setUVTriangle(&triangle[49], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 50:

    setVector(&u, fp_Flt2FP(-1.424207f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000112f), fp_Flt2FP(0.000188f));
    setVector(&v, fp_Flt2FP(-1.424207f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.165827f));
    setVector(&w, fp_Flt2FP(-1.424025f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.152381f), fp_Flt2FP(-0.165827f));
    setUVTriangle(&triangle[50], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 51:

    setVector(&u, fp_Flt2FP(-1.344023f), fp_Flt2FP(-2.625000f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.103498f), fp_Flt2FP(-0.166027f));
    setVector(&v, fp_Flt2FP(-1.424025f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.152381f), fp_Flt2FP(-0.129513f));
    setVector(&w, fp_Flt2FP(-1.424207f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.129513f));
    setUVTriangle(&triangle[51], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 52:

    setVector(&u, fp_Flt2FP(-1.424207f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.129513f));
    setVector(&v, fp_Flt2FP(-1.344205f), fp_Flt2FP(-2.455715f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000112f), fp_Flt2FP(-0.166016f));
    setVector(&w, fp_Flt2FP(-1.344023f), fp_Flt2FP(-2.625000f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.103498f), fp_Flt2FP(-0.166027f));
    setUVTriangle(&triangle[52], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 53:

    setVector(&u, fp_Flt2FP(1.204509f), fp_Flt2FP(-2.705054f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750085f), fp_Flt2FP(-0.167778f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.705054f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.890625f), fp_Flt2FP(-0.167778f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.705080f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.890625f), fp_Flt2FP(0.000191f));
    setUVTriangle(&triangle[53], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 54:

    setVector(&u, fp_Flt2FP(1.204509f), fp_Flt2FP(-2.705054f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750085f), fp_Flt2FP(-0.167778f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.705080f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.890625f), fp_Flt2FP(0.000191f));
    setVector(&w, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000000f), fp_Flt2FP(0.000191f));
    setUVTriangle(&triangle[54], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 55:

    setVector(&u, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000000f), fp_Flt2FP(-0.167778f));
    setVector(&v, fp_Flt2FP(1.204509f), fp_Flt2FP(-2.705054f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.750085f), fp_Flt2FP(-0.167778f));
    setVector(&w, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.702315f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000000f), fp_Flt2FP(0.000191f));
    setUVTriangle(&triangle[55], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 56:

    setVector(&u, fp_Flt2FP(1.204563f), fp_Flt2FP(-2.522314f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.861735f), fp_Flt2FP(-0.165919f));
    setVector(&v, fp_Flt2FP(1.203729f), fp_Flt2FP(-2.625564f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859365f), fp_Flt2FP(-0.144374f));
    setVector(&w, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.624696f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.103374f), fp_Flt2FP(-0.139570f));
    setUVTriangle(&triangle[56], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 57:

    setVector(&u, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.624696f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.103374f), fp_Flt2FP(-0.139570f));
    setVector(&v, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.522234f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.111256f), fp_Flt2FP(-0.165908f));
    setVector(&w, fp_Flt2FP(1.204563f), fp_Flt2FP(-2.522314f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.861735f), fp_Flt2FP(-0.165919f));
    setUVTriangle(&triangle[57], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 58:

    setVector(&u, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.522234f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.165932f));
    setVector(&v, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.624696f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.145468f));
    setVector(&w, fp_Flt2FP(-1.194513f), fp_Flt2FP(-2.623896f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.244217f), fp_Flt2FP(-0.140693f));
    setUVTriangle(&triangle[58], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 59:

    setVector(&u, fp_Flt2FP(-1.194513f), fp_Flt2FP(-2.623896f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.244217f), fp_Flt2FP(-0.140693f));
    setVector(&v, fp_Flt2FP(-1.194513f), fp_Flt2FP(-2.522234f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.251126f), fp_Flt2FP(-0.165911f));
    setVector(&w, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.522234f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.165932f));
    setUVTriangle(&triangle[59], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 60:

    setVector(&u, fp_Flt2FP(1.344387f), fp_Flt2FP(-2.625182f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.951149f), fp_Flt2FP(-0.165920f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.705054f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000001f), fp_Flt2FP(-0.129428f));
    setVector(&w, fp_Flt2FP(1.204509f), fp_Flt2FP(-2.705054f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857539f), fp_Flt2FP(-0.127771f));
    setUVTriangle(&triangle[60], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 61:

    setVector(&u, fp_Flt2FP(1.204509f), fp_Flt2FP(-2.705054f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857539f), fp_Flt2FP(-0.127771f));
    setVector(&v, fp_Flt2FP(1.203729f), fp_Flt2FP(-2.625564f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.861735f), fp_Flt2FP(-0.165919f));
    setVector(&w, fp_Flt2FP(1.344387f), fp_Flt2FP(-2.625182f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.951149f), fp_Flt2FP(-0.165920f));
    setUVTriangle(&triangle[61], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 62:

    setVector(&u, fp_Flt2FP(1.204509f), fp_Flt2FP(-2.705054f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.857539f), fp_Flt2FP(-0.127771f));
    setVector(&v, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.097197f), fp_Flt2FP(-0.118928f));
    setVector(&w, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.624696f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.103374f), fp_Flt2FP(-0.139570f));
    setUVTriangle(&triangle[62], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 63:

    setVector(&u, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.624696f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.103374f), fp_Flt2FP(-0.139570f));
    setVector(&v, fp_Flt2FP(1.203729f), fp_Flt2FP(-2.625564f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.859365f), fp_Flt2FP(-0.144374f));
    setVector(&w, fp_Flt2FP(1.204509f), fp_Flt2FP(-2.705054f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.857539f), fp_Flt2FP(-0.127771f));
    setUVTriangle(&triangle[63], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 64:

    setVector(&u, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000001f), fp_Flt2FP(-0.129430f));
    setVector(&v, fp_Flt2FP(-1.195964f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.238705f), fp_Flt2FP(-0.120574f));
    setVector(&w, fp_Flt2FP(-1.194513f), fp_Flt2FP(-2.623896f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.244217f), fp_Flt2FP(-0.140693f));
    setUVTriangle(&triangle[64], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 65:

    setVector(&u, fp_Flt2FP(-1.194513f), fp_Flt2FP(-2.623896f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.244217f), fp_Flt2FP(-0.140693f));
    setVector(&v, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.624696f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.145468f));
    setVector(&w, fp_Flt2FP(0.030977f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000001f), fp_Flt2FP(-0.129430f));
    setUVTriangle(&triangle[65], u, v, w, uUV, vUV, wUV, m, f);

    setObject(&myObj, myMat[0], 66, triangle, f);
    transformObject(&myObj, matMult(genTransMatrix(fp_Flt2FP(1.), fp_Flt2FP(-5.), -fp_Flt2FP(15.), m, f), matMult(genYRotateMat(-fp_Flt2FP(20.), m, f), genXRotateMat(fp_Flt2FP(-90.), m, f), m, f), m, f), m, f);
    addObject(scene, myObj, f);
    ReadTexture(&Textures[1],"6685ba881ad64810ac18c31ceca49c41.tga", f);
    setMaterial(&myMat[1], lightSrc, lgrey, fp_Flt2FP(1.0), 0, fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.2), 0, fp_Flt2FP(1.4), 1, m, f);
    // Texture 1

    triangle = (Triangle *)malloc(sizeof(Triangle) * 371);
    // Now begin object writing

    // Triangle 0:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[0], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[1], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 2:

    setVector(&u, fp_Flt2FP(1.344439f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[2], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 3:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.344439f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.344439f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[3], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 4:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[4], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 5:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[5], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 6:

    setVector(&u, fp_Flt2FP(1.344439f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[6], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 7:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.344305f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.344439f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[7], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 8:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[8], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 9:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[9], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 10:

    setVector(&u, fp_Flt2FP(1.344305f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[10], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 11:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-1.424817f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.344171f), fp_Flt2FP(-2.624818f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.344305f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[11], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 12:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.425289f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.713278f));
    setVector(&w, fp_Flt2FP(-1.344370f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.200568f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.259303f), fp_Flt2FP(-0.713262f));
    setUVTriangle(&triangle[12], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 13:

    setVector(&u, fp_Flt2FP(-1.344382f), fp_Flt2FP(2.625000f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.344370f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.200568f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.259303f), fp_Flt2FP(-0.713262f));
    setUVTriangle(&triangle[13], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 14:

    setVector(&u, fp_Flt2FP(-1.344382f), fp_Flt2FP(2.625000f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.344370f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.200568f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.259303f), fp_Flt2FP(-0.713262f));
    setVector(&w, fp_Flt2FP(-1.344373f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.740516f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.259289f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[14], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 15:

    setVector(&u, fp_Flt2FP(-1.344398f), fp_Flt2FP(2.624909f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.344382f), fp_Flt2FP(2.625000f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.344373f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.740516f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.259289f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[15], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 16:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[16], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 17:

    setVector(&u, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[17], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 18:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[18], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 19:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[19], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 20:

    setVector(&u, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.346531f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.196953f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.345685f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740579f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.196953f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[20], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 21:

    setVector(&u, fp_Flt2FP(-1.345685f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.196953f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[21], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 22:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.344355f), fp_Flt2FP(1.424791f), fp_Flt2FP(0.900771f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.920599f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.900704f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.051371f), fp_Flt2FP(-0.920599f));
    setUVTriangle(&triangle[22], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 23:

    setVector(&u, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.900704f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.051371f), fp_Flt2FP(-0.920599f));
    setVector(&v, fp_Flt2FP(-1.344355f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.740343f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.051371f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[23], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 24:

    setVector(&u, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.900704f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.051371f), fp_Flt2FP(-0.920599f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[24], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 25:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.900704f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.051371f), fp_Flt2FP(-0.920599f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[25], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 26:

    setVector(&u, fp_Flt2FP(-1.344398f), fp_Flt2FP(2.624909f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.344373f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.740516f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.259289f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.344367f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.900704f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.259289f), fp_Flt2FP(-0.920540f));
    setUVTriangle(&triangle[26], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 27:

    setVector(&u, fp_Flt2FP(-1.344367f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.900704f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.259289f), fp_Flt2FP(-0.920540f));
    setVector(&v, fp_Flt2FP(-1.344355f), fp_Flt2FP(1.424791f), fp_Flt2FP(0.900771f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.920599f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[27], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 28:

    setVector(&u, fp_Flt2FP(-1.344398f), fp_Flt2FP(2.624909f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.344367f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.900704f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.259289f), fp_Flt2FP(-0.920540f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[28], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 29:

    setVector(&u, fp_Flt2FP(-1.344230f), fp_Flt2FP(2.624909f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.344398f), fp_Flt2FP(2.624909f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[29], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 30:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[30], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 31:

    setVector(&u, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[31], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 32:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[32], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 33:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[33], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 34:

    setVector(&u, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009773f), fp_Flt2FP(-0.987087f));
    setVector(&v, fp_Flt2FP(-1.345685f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740579f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.196950f), fp_Flt2FP(-0.987087f));
    setVector(&w, fp_Flt2FP(-1.344385f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.196950f), fp_Flt2FP(-0.489247f));
    setUVTriangle(&triangle[34], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 35:

    setVector(&u, fp_Flt2FP(-1.344385f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.196950f), fp_Flt2FP(-0.489247f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009773f), fp_Flt2FP(-0.489247f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009773f), fp_Flt2FP(-0.987087f));
    setUVTriangle(&triangle[35], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 36:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[36], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 37:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[37], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 38:

    setVector(&u, fp_Flt2FP(-1.344230f), fp_Flt2FP(2.624909f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[38], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 39:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.344062f), fp_Flt2FP(2.624909f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-1.344230f), fp_Flt2FP(2.624909f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[39], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 40:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[40], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 41:

    setVector(&u, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[41], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 42:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[42], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 43:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(-0.974819f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[43], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 44:

    setVector(&u, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009808f), fp_Flt2FP(-0.987042f));
    setVector(&v, fp_Flt2FP(-1.344385f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.196985f), fp_Flt2FP(-0.987042f));
    setVector(&w, fp_Flt2FP(-1.343189f), fp_Flt2FP(-2.624818f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.196985f), fp_Flt2FP(-0.821969f));
    setUVTriangle(&triangle[44], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 45:

    setVector(&u, fp_Flt2FP(-1.343189f), fp_Flt2FP(-2.624818f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.196985f), fp_Flt2FP(-0.821969f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009808f), fp_Flt2FP(-0.821968f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(-2.174819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009808f), fp_Flt2FP(-0.987042f));
    setUVTriangle(&triangle[45], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 46:

    setVector(&u, fp_Flt2FP(-1.204456f), fp_Flt2FP(-2.625567f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451044f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.204419f), fp_Flt2FP(-2.625144f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451073f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.345685f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740579f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.387686f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[46], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 47:

    setVector(&u, fp_Flt2FP(-1.345685f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387686f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.346531f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.386985f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.204456f), fp_Flt2FP(-2.625567f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451044f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[47], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 48:

    setVector(&u, fp_Flt2FP(-1.204419f), fp_Flt2FP(-2.625144f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451073f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204365f), fp_Flt2FP(-2.624494f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451211f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.344385f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.388891f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[48], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 49:

    setVector(&u, fp_Flt2FP(-1.344385f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.388891f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.345685f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740579f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.387686f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204419f), fp_Flt2FP(-2.625144f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451073f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[49], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 50:

    setVector(&u, fp_Flt2FP(-1.204365f), fp_Flt2FP(-2.624494f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451211f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204340f), fp_Flt2FP(-2.623896f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451589f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-1.343189f), fp_Flt2FP(-2.624818f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.389894f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[50], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 51:

    setVector(&u, fp_Flt2FP(-1.343189f), fp_Flt2FP(-2.624818f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.389894f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.344385f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.388891f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204365f), fp_Flt2FP(-2.624494f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451211f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[51], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 52:

    setVector(&u, fp_Flt2FP(1.344439f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.344439f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.205236f), fp_Flt2FP(-2.625485f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451249f), fp_Flt2FP(-0.489482f));
    setUVTriangle(&triangle[52], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 53:

    setVector(&u, fp_Flt2FP(1.205236f), fp_Flt2FP(-2.625485f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451249f), fp_Flt2FP(-0.489482f));
    setVector(&v, fp_Flt2FP(1.205929f), fp_Flt2FP(-2.625448f), fp_Flt2FP(0.000285f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451827f), fp_Flt2FP(-0.796487f));
    setVector(&w, fp_Flt2FP(1.344439f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[53], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 54:

    setVector(&u, fp_Flt2FP(1.344439f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344305f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.204101f), fp_Flt2FP(-2.625543f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.450371f), fp_Flt2FP(-0.489482f));
    setUVTriangle(&triangle[54], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 55:

    setVector(&u, fp_Flt2FP(1.204101f), fp_Flt2FP(-2.625543f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.450371f), fp_Flt2FP(-0.489482f));
    setVector(&v, fp_Flt2FP(1.205236f), fp_Flt2FP(-2.625485f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451249f), fp_Flt2FP(-0.987322f));
    setVector(&w, fp_Flt2FP(1.344439f), fp_Flt2FP(-2.624818f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[55], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 56:

    setVector(&u, fp_Flt2FP(1.344305f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344171f), fp_Flt2FP(-2.624818f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.203729f), fp_Flt2FP(-2.625565f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.450123f), fp_Flt2FP(-0.822249f));
    setUVTriangle(&triangle[56], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 57:

    setVector(&u, fp_Flt2FP(1.203729f), fp_Flt2FP(-2.625565f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.450123f), fp_Flt2FP(-0.822249f));
    setVector(&v, fp_Flt2FP(1.204101f), fp_Flt2FP(-2.625543f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.450371f), fp_Flt2FP(-0.987322f));
    setVector(&w, fp_Flt2FP(1.344305f), fp_Flt2FP(-2.624818f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[57], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 58:

    setVector(&u, fp_Flt2FP(1.055587f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-0.144413f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796487f));
    setVector(&w, fp_Flt2FP(-0.144413f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489482f));
    setUVTriangle(&triangle[58], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 59:

    setVector(&u, fp_Flt2FP(-0.144413f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489482f));
    setVector(&v, fp_Flt2FP(1.055587f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.055587f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[59], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 60:

    setVector(&u, fp_Flt2FP(-0.144413f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489482f));
    setVector(&v, fp_Flt2FP(-0.144413f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.000000f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796487f));
    setVector(&w, fp_Flt2FP(-1.344382f), fp_Flt2FP(2.625000f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508915f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[60], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 61:

    setVector(&u, fp_Flt2FP(-1.344382f), fp_Flt2FP(2.625000f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508915f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.344398f), fp_Flt2FP(2.624909f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508915f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-0.144413f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489482f));
    setUVTriangle(&triangle[61], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 62:

    setVector(&u, fp_Flt2FP(1.054589f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.732263f));
    setVector(&v, fp_Flt2FP(0.279049f), fp_Flt2FP(2.624680f), fp_Flt2FP(1.355934f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.332791f), fp_Flt2FP(-0.732340f));
    setVector(&w, fp_Flt2FP(0.278878f), fp_Flt2FP(2.624818f), fp_Flt2FP(1.940394f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.332961f), fp_Flt2FP(-0.489399f));
    setUVTriangle(&triangle[62], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 63:

    setVector(&u, fp_Flt2FP(0.278878f), fp_Flt2FP(2.624818f), fp_Flt2FP(1.940394f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.332961f), fp_Flt2FP(-0.489399f));
    setVector(&v, fp_Flt2FP(1.055856f), fp_Flt2FP(2.624819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.054589f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.732263f));
    setUVTriangle(&triangle[63], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 64:

    setVector(&u, fp_Flt2FP(1.054742f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.882334f));
    setVector(&v, fp_Flt2FP(-0.144632f), fp_Flt2FP(2.625502f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.882453f));
    setVector(&w, fp_Flt2FP(-0.143876f), fp_Flt2FP(2.624819f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822249f));
    setUVTriangle(&triangle[64], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 65:

    setVector(&u, fp_Flt2FP(-0.143876f), fp_Flt2FP(2.624819f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822249f));
    setVector(&v, fp_Flt2FP(1.056127f), fp_Flt2FP(2.624819f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.054742f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.882334f));
    setUVTriangle(&triangle[65], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 66:

    setVector(&u, fp_Flt2FP(1.055587f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508916f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.055587f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508916f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.345706f), fp_Flt2FP(2.624849f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[66], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 67:

    setVector(&u, fp_Flt2FP(1.345706f), fp_Flt2FP(2.624849f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.344979f), fp_Flt2FP(2.624491f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.386986f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.055587f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508916f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[67], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 68:

    setVector(&u, fp_Flt2FP(1.345706f), fp_Flt2FP(2.624849f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.055587f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.054586f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.743634f));
    setUVTriangle(&triangle[68], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 69:

    setVector(&u, fp_Flt2FP(1.345706f), fp_Flt2FP(2.624849f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.054586f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.743634f));
    setVector(&w, fp_Flt2FP(1.054589f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.732264f));
    setUVTriangle(&triangle[69], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 70:

    setVector(&u, fp_Flt2FP(1.345706f), fp_Flt2FP(2.624849f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.054589f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.732264f));
    setVector(&w, fp_Flt2FP(1.055856f), fp_Flt2FP(2.624819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[70], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 71:

    setVector(&u, fp_Flt2FP(1.345706f), fp_Flt2FP(2.624849f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.055856f), fp_Flt2FP(2.624819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.344430f), fp_Flt2FP(2.624912f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.388892f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[71], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 72:

    setVector(&u, fp_Flt2FP(1.054742f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.882334f));
    setVector(&v, fp_Flt2FP(1.056127f), fp_Flt2FP(2.624819f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.344113f), fp_Flt2FP(2.624998f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.389896f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[72], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 73:

    setVector(&u, fp_Flt2FP(1.054708f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.925224f));
    setVector(&v, fp_Flt2FP(1.054742f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.882334f));
    setVector(&w, fp_Flt2FP(1.344113f), fp_Flt2FP(2.624998f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.389896f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[73], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 74:

    setVector(&u, fp_Flt2FP(1.055856f), fp_Flt2FP(2.624819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.054708f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.925224f));
    setVector(&w, fp_Flt2FP(1.344113f), fp_Flt2FP(2.624998f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.389896f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[74], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 75:

    setVector(&u, fp_Flt2FP(1.344430f), fp_Flt2FP(2.624912f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.388893f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.055856f), fp_Flt2FP(2.624819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344113f), fp_Flt2FP(2.624998f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.389896f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[75], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 76:

    setVector(&u, fp_Flt2FP(-1.204392f), fp_Flt2FP(-2.474480f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451044f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.204392f), fp_Flt2FP(-2.474407f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451074f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204419f), fp_Flt2FP(-2.625144f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[76], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 77:

    setVector(&u, fp_Flt2FP(-1.204419f), fp_Flt2FP(-2.625144f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204456f), fp_Flt2FP(-2.625567f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.386986f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.204392f), fp_Flt2FP(-2.474480f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451044f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[77], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 78:

    setVector(&u, fp_Flt2FP(-1.204392f), fp_Flt2FP(-2.474407f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451074f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204392f), fp_Flt2FP(-2.474291f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451212f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204365f), fp_Flt2FP(-2.624494f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.388892f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[78], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 79:

    setVector(&u, fp_Flt2FP(-1.204365f), fp_Flt2FP(-2.624494f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.388892f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204419f), fp_Flt2FP(-2.625144f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204392f), fp_Flt2FP(-2.474407f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451074f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[79], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 80:

    setVector(&u, fp_Flt2FP(-1.204392f), fp_Flt2FP(-2.474291f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451212f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204392f), fp_Flt2FP(-2.474248f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451590f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-1.204340f), fp_Flt2FP(-2.623896f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.389895f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[80], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 81:

    setVector(&u, fp_Flt2FP(-1.204340f), fp_Flt2FP(-2.623896f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.389895f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.204365f), fp_Flt2FP(-2.624494f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.388892f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204392f), fp_Flt2FP(-2.474291f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451212f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[81], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 82:

    setVector(&u, fp_Flt2FP(1.205929f), fp_Flt2FP(-2.625448f), fp_Flt2FP(0.000285f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451044f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.205236f), fp_Flt2FP(-2.625485f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451074f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.204672f), fp_Flt2FP(-2.475090f), fp_Flt2FP(0.740579f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[82], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 83:

    setVector(&u, fp_Flt2FP(1.204672f), fp_Flt2FP(-2.475090f), fp_Flt2FP(0.740579f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.204672f), fp_Flt2FP(-2.474245f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.386986f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.205929f), fp_Flt2FP(-2.625448f), fp_Flt2FP(0.000285f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451044f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[83], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 84:

    setVector(&u, fp_Flt2FP(1.205236f), fp_Flt2FP(-2.625485f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451074f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.204101f), fp_Flt2FP(-2.625543f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451212f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.204672f), fp_Flt2FP(-2.476390f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.388892f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[84], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 85:

    setVector(&u, fp_Flt2FP(1.204672f), fp_Flt2FP(-2.476390f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.388892f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.204672f), fp_Flt2FP(-2.475090f), fp_Flt2FP(0.740579f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.387687f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.205236f), fp_Flt2FP(-2.625485f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451074f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[85], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 86:

    setVector(&u, fp_Flt2FP(1.204101f), fp_Flt2FP(-2.625543f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451212f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.203729f), fp_Flt2FP(-2.625565f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451590f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.204672f), fp_Flt2FP(-2.477586f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.389895f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[86], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 87:

    setVector(&u, fp_Flt2FP(1.204672f), fp_Flt2FP(-2.477586f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.389895f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.204672f), fp_Flt2FP(-2.476390f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.388892f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.204101f), fp_Flt2FP(-2.625543f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451212f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[87], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 88:

    setVector(&u, fp_Flt2FP(0.599261f), fp_Flt2FP(-2.522315f), fp_Flt2FP(0.141282f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-0.600739f), fp_Flt2FP(-2.522315f), fp_Flt2FP(0.141215f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-0.600455f), fp_Flt2FP(-2.523010f), fp_Flt2FP(0.001511f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.450371f), fp_Flt2FP(-0.489482f));
    setUVTriangle(&triangle[88], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 89:

    setVector(&u, fp_Flt2FP(-0.600455f), fp_Flt2FP(-2.523010f), fp_Flt2FP(0.001511f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.450371f), fp_Flt2FP(-0.489482f));
    setVector(&v, fp_Flt2FP(0.599545f), fp_Flt2FP(-2.522982f), fp_Flt2FP(0.002079f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451249f), fp_Flt2FP(-0.987322f));
    setVector(&w, fp_Flt2FP(0.599261f), fp_Flt2FP(-2.522315f), fp_Flt2FP(0.141282f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[89], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 90:

    setVector(&u, fp_Flt2FP(-0.600739f), fp_Flt2FP(-2.522315f), fp_Flt2FP(0.141215f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204157f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141218f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.740720f));
    setVector(&w, fp_Flt2FP(-1.204425f), fp_Flt2FP(-2.523010f), fp_Flt2FP(0.001517f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.450814f), fp_Flt2FP(-0.740885f));
    setUVTriangle(&triangle[90], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 91:

    setVector(&u, fp_Flt2FP(-1.204425f), fp_Flt2FP(-2.523010f), fp_Flt2FP(0.001517f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.450814f), fp_Flt2FP(-0.740885f));
    setVector(&v, fp_Flt2FP(-0.600455f), fp_Flt2FP(-2.523010f), fp_Flt2FP(0.001511f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451249f), fp_Flt2FP(-0.987322f));
    setVector(&w, fp_Flt2FP(-0.600739f), fp_Flt2FP(-2.522315f), fp_Flt2FP(0.141215f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[91], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 92:

    setVector(&u, fp_Flt2FP(1.206158f), fp_Flt2FP(-2.522951f), fp_Flt2FP(0.002647f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451723f), fp_Flt2FP(-0.741147f));
    setVector(&v, fp_Flt2FP(1.205593f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141285f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.740793f));
    setVector(&w, fp_Flt2FP(1.131701f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141137f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.710141f));
    setUVTriangle(&triangle[92], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 93:

    setVector(&u, fp_Flt2FP(1.206158f), fp_Flt2FP(-2.522951f), fp_Flt2FP(0.002647f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451723f), fp_Flt2FP(-0.741147f));
    setVector(&v, fp_Flt2FP(1.131701f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141137f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.710141f));
    setVector(&w, fp_Flt2FP(0.599261f), fp_Flt2FP(-2.522315f), fp_Flt2FP(0.141282f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[93], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 94:

    setVector(&u, fp_Flt2FP(1.206158f), fp_Flt2FP(-2.522951f), fp_Flt2FP(0.002647f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451723f), fp_Flt2FP(-0.741147f));
    setVector(&v, fp_Flt2FP(0.599261f), fp_Flt2FP(-2.522315f), fp_Flt2FP(0.141282f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(0.599545f), fp_Flt2FP(-2.522982f), fp_Flt2FP(0.002079f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451249f), fp_Flt2FP(-0.489482f));
    setUVTriangle(&triangle[94], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 95:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.987305f), fp_Flt2FP(-0.013672f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.638128f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.984375f), fp_Flt2FP(-0.013672f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.638128f), fp_Flt2FP(2.151760f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.984375f), fp_Flt2FP(-0.021484f));
    setUVTriangle(&triangle[95], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 96:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.638128f), fp_Flt2FP(2.151760f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.984375f), fp_Flt2FP(-0.021484f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.987305f), fp_Flt2FP(-0.031250f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.987305f), fp_Flt2FP(-0.013672f));
    setUVTriangle(&triangle[96], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 97:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.497070f), fp_Flt2FP(-0.032227f));
    setVector(&v, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.141382f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.497070f), fp_Flt2FP(-0.022461f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.638761f), fp_Flt2FP(2.149984f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.495117f), fp_Flt2FP(-0.021484f));
    setUVTriangle(&triangle[97], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 98:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.638761f), fp_Flt2FP(2.149984f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.495117f), fp_Flt2FP(-0.021484f));
    setVector(&v, fp_Flt2FP(1.054708f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.492188f), fp_Flt2FP(-0.032227f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.497070f), fp_Flt2FP(-0.032227f));
    setUVTriangle(&triangle[98], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 99:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.638128f), fp_Flt2FP(2.151760f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.019531f));
    setVector(&v, fp_Flt2FP(1.053454f), fp_Flt2FP(2.638761f), fp_Flt2FP(2.149984f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.019531f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.141382f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.022461f));
    setUVTriangle(&triangle[99], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 100:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.141382f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.022461f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.141382f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.022461f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.638128f), fp_Flt2FP(2.151760f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.019531f));
    setUVTriangle(&triangle[100], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 101:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.638128f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.012695f));
    setVector(&v, fp_Flt2FP(1.053454f), fp_Flt2FP(2.638126f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.012695f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.638761f), fp_Flt2FP(2.149984f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.019531f));
    setUVTriangle(&triangle[101], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 102:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.638761f), fp_Flt2FP(2.149984f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.019531f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.638128f), fp_Flt2FP(2.151760f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.019531f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.638128f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.012695f));
    setUVTriangle(&triangle[102], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 103:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.141382f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.022461f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.031250f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.987305f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[103], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 104:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.987305f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.638128f), fp_Flt2FP(2.151760f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.984375f), fp_Flt2FP(-0.021484f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.141382f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.022461f));
    setUVTriangle(&triangle[104], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 105:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.638761f), fp_Flt2FP(2.149984f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.495117f), fp_Flt2FP(-0.021484f));
    setVector(&v, fp_Flt2FP(1.053454f), fp_Flt2FP(2.638126f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.495117f), fp_Flt2FP(-0.013672f));
    setVector(&w, fp_Flt2FP(1.054742f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.492188f), fp_Flt2FP(-0.013672f));
    setUVTriangle(&triangle[105], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 106:

    setVector(&u, fp_Flt2FP(1.054742f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.492188f), fp_Flt2FP(-0.013672f));
    setVector(&v, fp_Flt2FP(1.054708f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.492188f), fp_Flt2FP(-0.032227f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.638761f), fp_Flt2FP(2.149984f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.495117f), fp_Flt2FP(-0.021484f));
    setUVTriangle(&triangle[106], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 107:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.497070f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.497070f), fp_Flt2FP(-0.022461f));
    setVector(&w, fp_Flt2FP(1.054589f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.493164f), fp_Flt2FP(-0.022461f));
    setUVTriangle(&triangle[107], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 108:

    setVector(&u, fp_Flt2FP(1.054589f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.493164f), fp_Flt2FP(-0.022461f));
    setVector(&v, fp_Flt2FP(1.054586f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.493164f), fp_Flt2FP(-0.031250f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.497070f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[108], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 109:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.644521f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.022461f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.644521f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.031250f));
    setVector(&w, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.986328f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[109], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 110:

    setVector(&u, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.986328f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.986328f), fp_Flt2FP(-0.022461f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.644521f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.022461f));
    setUVTriangle(&triangle[110], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 111:

    setVector(&u, fp_Flt2FP(-0.420121f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.345821f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.656504f), fp_Flt2FP(-0.467773f));
    setVector(&v, fp_Flt2FP(0.315615f), fp_Flt2FP(2.631978f), fp_Flt2FP(1.345821f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.780273f), fp_Flt2FP(-0.467773f));
    setVector(&w, fp_Flt2FP(-0.420121f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.393350f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.656504f), fp_Flt2FP(-0.458606f));
    setUVTriangle(&triangle[111], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 112:

    setVector(&u, fp_Flt2FP(0.315615f), fp_Flt2FP(2.631978f), fp_Flt2FP(1.345821f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.780273f), fp_Flt2FP(-0.467773f));
    setVector(&v, fp_Flt2FP(0.315615f), fp_Flt2FP(2.631978f), fp_Flt2FP(2.146432f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.780273f), fp_Flt2FP(-0.236328f));
    setVector(&w, fp_Flt2FP(-0.420121f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.393350f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.656504f), fp_Flt2FP(-0.458606f));
    setUVTriangle(&triangle[112], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 113:

    setVector(&u, fp_Flt2FP(-0.439045f), fp_Flt2FP(2.631979f), fp_Flt2FP(2.149984f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.653320f), fp_Flt2FP(-0.236328f));
    setVector(&v, fp_Flt2FP(-0.439045f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.393350f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.653320f), fp_Flt2FP(-0.458606f));
    setVector(&w, fp_Flt2FP(-0.420121f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.393350f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.656504f), fp_Flt2FP(-0.458606f));
    setUVTriangle(&triangle[113], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 114:

    setVector(&u, fp_Flt2FP(-0.420121f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.393350f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.656504f), fp_Flt2FP(-0.458606f));
    setVector(&v, fp_Flt2FP(0.315615f), fp_Flt2FP(2.631978f), fp_Flt2FP(2.146432f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.780273f), fp_Flt2FP(-0.236328f));
    setVector(&w, fp_Flt2FP(-0.439045f), fp_Flt2FP(2.631979f), fp_Flt2FP(2.149984f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.653320f), fp_Flt2FP(-0.236328f));
    setUVTriangle(&triangle[114], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 115:

    setVector(&u, fp_Flt2FP(-0.421845f), fp_Flt2FP(2.625870f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.976956f), fp_Flt2FP(-0.036133f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.036133f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[115], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 116:

    setVector(&u, fp_Flt2FP(-0.144147f), fp_Flt2FP(2.625502f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932360f), fp_Flt2FP(-0.036133f));
    setVector(&v, fp_Flt2FP(-0.421845f), fp_Flt2FP(2.625870f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.976956f), fp_Flt2FP(-0.036133f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[116], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 117:

    setVector(&u, fp_Flt2FP(-0.144147f), fp_Flt2FP(2.625502f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932360f), fp_Flt2FP(-0.036133f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.031250f));
    setVector(&w, fp_Flt2FP(-0.415744f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.975971f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[117], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 118:

    setVector(&u, fp_Flt2FP(-0.144147f), fp_Flt2FP(2.625502f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932360f), fp_Flt2FP(-0.036133f));
    setVector(&v, fp_Flt2FP(-0.415744f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.975971f), fp_Flt2FP(-0.031250f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[118], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 119:

    setVector(&u, fp_Flt2FP(0.278750f), fp_Flt2FP(2.625279f), fp_Flt2FP(2.090700f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.864431f), fp_Flt2FP(-0.036133f));
    setVector(&v, fp_Flt2FP(-0.144147f), fp_Flt2FP(2.625502f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932360f), fp_Flt2FP(-0.036133f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[119], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 120:

    setVector(&u, fp_Flt2FP(1.054708f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.036133f));
    setVector(&v, fp_Flt2FP(0.278750f), fp_Flt2FP(2.625279f), fp_Flt2FP(2.090700f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.864431f), fp_Flt2FP(-0.036133f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[120], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 121:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.638128f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.042969f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.040039f));
    setVector(&w, fp_Flt2FP(-0.144632f), fp_Flt2FP(2.625502f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932530f), fp_Flt2FP(-0.040039f));
    setUVTriangle(&triangle[121], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 122:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.638126f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.042969f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.638128f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.042969f));
    setVector(&w, fp_Flt2FP(-0.144632f), fp_Flt2FP(2.625502f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.932530f), fp_Flt2FP(-0.040039f));
    setUVTriangle(&triangle[122], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 123:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.638126f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.042969f));
    setVector(&v, fp_Flt2FP(-0.144632f), fp_Flt2FP(2.625502f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932530f), fp_Flt2FP(-0.040039f));
    setVector(&w, fp_Flt2FP(1.054742f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.040039f));
    setUVTriangle(&triangle[123], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 124:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.141382f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.022461f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.141382f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.022461f));
    setUVTriangle(&triangle[124], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 125:

    setVector(&u, fp_Flt2FP(-0.415744f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.975971f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.031250f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.141382f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.022461f));
    setUVTriangle(&triangle[125], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 126:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(-0.415744f), fp_Flt2FP(2.652533f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.975971f), fp_Flt2FP(-0.031250f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.652531f), fp_Flt2FP(2.141382f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.022461f));
    setUVTriangle(&triangle[126], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 127:

    setVector(&u, fp_Flt2FP(-0.144352f), fp_Flt2FP(2.624243f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932384f), fp_Flt2FP(-0.036133f));
    setVector(&v, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.036133f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.644521f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[127], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 128:

    setVector(&u, fp_Flt2FP(-0.144352f), fp_Flt2FP(2.624243f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.932384f), fp_Flt2FP(-0.036133f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.644521f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.031250f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[128], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 129:

    setVector(&u, fp_Flt2FP(1.054586f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.036133f));
    setVector(&v, fp_Flt2FP(-0.144352f), fp_Flt2FP(2.624243f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.932384f), fp_Flt2FP(-0.036133f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[129], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 130:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.644521f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.644521f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.022461f));
    setVector(&w, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.022461f));
    setUVTriangle(&triangle[130], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 131:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.022461f));
    setVector(&v, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.644521f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.982422f), fp_Flt2FP(-0.031250f));
    setUVTriangle(&triangle[131], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 132:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.644521f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.497070f), fp_Flt2FP(-0.031250f));
    setVector(&w, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.497070f), fp_Flt2FP(-0.036133f));
    setUVTriangle(&triangle[132], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 133:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.497070f), fp_Flt2FP(-0.036133f));
    setVector(&w, fp_Flt2FP(-0.421115f), fp_Flt2FP(2.624368f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.502661f), fp_Flt2FP(-0.036133f));
    setUVTriangle(&triangle[133], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 134:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(-0.421115f), fp_Flt2FP(2.624368f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.502661f), fp_Flt2FP(-0.036133f));
    setVector(&w, fp_Flt2FP(-0.143613f), fp_Flt2FP(2.624243f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.547345f), fp_Flt2FP(-0.036133f));
    setUVTriangle(&triangle[134], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 135:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(-0.143613f), fp_Flt2FP(2.624243f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.547345f), fp_Flt2FP(-0.036133f));
    setVector(&w, fp_Flt2FP(0.279049f), fp_Flt2FP(2.624680f), fp_Flt2FP(1.355934f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.615235f), fp_Flt2FP(-0.036133f));
    setUVTriangle(&triangle[135], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 136:

    setVector(&u, fp_Flt2FP(1.053454f), fp_Flt2FP(2.644520f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.031250f));
    setVector(&v, fp_Flt2FP(0.279049f), fp_Flt2FP(2.624680f), fp_Flt2FP(1.355934f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.615235f), fp_Flt2FP(-0.036133f));
    setVector(&w, fp_Flt2FP(1.054589f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.739746f), fp_Flt2FP(-0.036133f));
    setUVTriangle(&triangle[136], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 137:

    setVector(&u, fp_Flt2FP(-1.364368f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.900569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.459961f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.900704f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.459961f));
    setVector(&w, fp_Flt2FP(-1.344355f), fp_Flt2FP(1.424791f), fp_Flt2FP(0.900771f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.445012f));
    setUVTriangle(&triangle[137], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 138:

    setVector(&u, fp_Flt2FP(-1.364368f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.900569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.354492f));
    setVector(&v, fp_Flt2FP(-1.364368f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.900569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.459961f));
    setVector(&w, fp_Flt2FP(-1.344355f), fp_Flt2FP(1.424791f), fp_Flt2FP(0.900771f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.445012f));
    setUVTriangle(&triangle[138], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 139:

    setVector(&u, fp_Flt2FP(-1.344367f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.900704f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.354492f));
    setVector(&v, fp_Flt2FP(-1.364368f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.900569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.354492f));
    setVector(&w, fp_Flt2FP(-1.344355f), fp_Flt2FP(1.424791f), fp_Flt2FP(0.900771f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.445012f));
    setUVTriangle(&triangle[139], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 140:

    setVector(&u, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.425289f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.444862f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.459961f));
    setVector(&w, fp_Flt2FP(-1.364368f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.459961f));
    setUVTriangle(&triangle[140], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 141:

    setVector(&u, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.425289f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.444862f));
    setVector(&v, fp_Flt2FP(-1.364368f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.459961f));
    setVector(&w, fp_Flt2FP(-1.364368f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.354492f));
    setUVTriangle(&triangle[141], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 142:

    setVector(&u, fp_Flt2FP(-1.344370f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.200568f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.354492f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.425289f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.444862f));
    setVector(&w, fp_Flt2FP(-1.364368f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.354492f));
    setUVTriangle(&triangle[142], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 143:

    setVector(&u, fp_Flt2FP(-1.344373f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.740516f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.378611f));
    setVector(&v, fp_Flt2FP(-1.344370f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.200568f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.459961f));
    setVector(&w, fp_Flt2FP(-1.364368f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.459961f));
    setUVTriangle(&triangle[143], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 144:

    setVector(&u, fp_Flt2FP(-1.344373f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.740516f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.378611f));
    setVector(&v, fp_Flt2FP(-1.364368f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.459961f));
    setVector(&w, fp_Flt2FP(-1.364368f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.900569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.354492f));
    setUVTriangle(&triangle[144], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 145:

    setVector(&u, fp_Flt2FP(-1.344367f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.900704f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.354492f));
    setVector(&v, fp_Flt2FP(-1.344373f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.740516f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.378611f));
    setVector(&w, fp_Flt2FP(-1.364368f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.900569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.354492f));
    setUVTriangle(&triangle[145], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 146:

    setVector(&u, fp_Flt2FP(-1.364368f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.900569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.872070f), fp_Flt2FP(-0.351562f));
    setVector(&v, fp_Flt2FP(-1.364368f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.872070f), fp_Flt2FP(-0.466797f));
    setVector(&w, fp_Flt2FP(-1.364368f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.987305f), fp_Flt2FP(-0.466797f));
    setUVTriangle(&triangle[146], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 147:

    setVector(&u, fp_Flt2FP(-1.364368f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.987305f), fp_Flt2FP(-0.466797f));
    setVector(&v, fp_Flt2FP(-1.364368f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.900569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.987305f), fp_Flt2FP(-0.351562f));
    setVector(&w, fp_Flt2FP(-1.364368f), fp_Flt2FP(2.025184f), fp_Flt2FP(0.900569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.872070f), fp_Flt2FP(-0.351562f));
    setUVTriangle(&triangle[147], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 148:

    setVector(&u, fp_Flt2FP(-1.364368f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.459961f));
    setVector(&v, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.459961f));
    setVector(&w, fp_Flt2FP(-1.344355f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.740343f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.379179f));
    setUVTriangle(&triangle[148], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 149:

    setVector(&u, fp_Flt2FP(-1.364368f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.900569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.354492f));
    setVector(&v, fp_Flt2FP(-1.364368f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.459961f));
    setVector(&w, fp_Flt2FP(-1.344355f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.740343f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.379179f));
    setUVTriangle(&triangle[149], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 150:

    setVector(&u, fp_Flt2FP(-1.364368f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.900569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.880859f), fp_Flt2FP(-0.354492f));
    setVector(&v, fp_Flt2FP(-1.344355f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.740343f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.379179f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.900704f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.883789f), fp_Flt2FP(-0.354492f));
    setUVTriangle(&triangle[150], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 151:

    setVector(&u, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.659711f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.177024f));
    setVector(&v, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.659711f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.177024f));
    setVector(&w, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.207312f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.101695f));
    setUVTriangle(&triangle[151], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 152:

    setVector(&u, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.207312f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.101695f));
    setVector(&v, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.207312f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.101695f));
    setVector(&w, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.659711f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.177024f));
    setUVTriangle(&triangle[152], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 153:

    setVector(&u, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.207312f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.177024f));
    setVector(&v, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.207312f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.177024f));
    setVector(&w, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.754913f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.101695f));
    setUVTriangle(&triangle[153], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 154:

    setVector(&u, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.754913f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.101695f));
    setVector(&v, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.754913f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.101695f));
    setVector(&w, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.207312f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.177024f));
    setUVTriangle(&triangle[154], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 155:

    setVector(&u, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.754913f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.177024f));
    setVector(&v, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.754913f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.177024f));
    setVector(&w, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(2.302514f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.101695f));
    setUVTriangle(&triangle[155], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 156:

    setVector(&u, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(2.302514f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.101695f));
    setVector(&v, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(2.302514f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.101695f));
    setVector(&w, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(1.754913f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.177024f));
    setUVTriangle(&triangle[156], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 157:

    setVector(&u, fp_Flt2FP(1.122116f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.922489f), fp_Flt2FP(-0.496277f));
    setVector(&v, fp_Flt2FP(1.204617f), fp_Flt2FP(-2.522314f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.933261f), fp_Flt2FP(-0.485535f));
    setVector(&w, fp_Flt2FP(-1.204609f), fp_Flt2FP(-2.522234f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.735614f), fp_Flt2FP(-0.483769f));
    setUVTriangle(&triangle[157], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 158:

    setVector(&u, fp_Flt2FP(-1.204609f), fp_Flt2FP(-2.522234f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.735614f), fp_Flt2FP(-0.483769f));
    setVector(&v, fp_Flt2FP(-1.130921f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.751108f), fp_Flt2FP(-0.496277f));
    setVector(&w, fp_Flt2FP(1.122116f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.922489f), fp_Flt2FP(-0.496277f));
    setUVTriangle(&triangle[158], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 159:

    setVector(&u, fp_Flt2FP(-1.130921f), fp_Flt2FP(-2.522315f), fp_Flt2FP(0.140989f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.905974f));
    setVector(&v, fp_Flt2FP(-1.130942f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.143227f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.898042f));
    setVector(&w, fp_Flt2FP(-1.126026f), fp_Flt2FP(-2.485189f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.509370f));
    setUVTriangle(&triangle[159], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 160:

    setVector(&u, fp_Flt2FP(-1.126026f), fp_Flt2FP(-2.485189f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.509370f));
    setVector(&v, fp_Flt2FP(-1.130921f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.509370f));
    setVector(&w, fp_Flt2FP(-1.130921f), fp_Flt2FP(-2.522315f), fp_Flt2FP(0.140989f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.905974f));
    setUVTriangle(&triangle[160], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 161:

    setVector(&u, fp_Flt2FP(-1.204157f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141218f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.738394f), fp_Flt2FP(-0.906250f));
    setVector(&v, fp_Flt2FP(-1.130921f), fp_Flt2FP(-2.522315f), fp_Flt2FP(0.140989f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.751124f), fp_Flt2FP(-0.906250f));
    setVector(&w, fp_Flt2FP(-1.130921f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.751124f), fp_Flt2FP(-0.496277f));
    setUVTriangle(&triangle[161], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 162:

    setVector(&u, fp_Flt2FP(-1.130921f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.751124f), fp_Flt2FP(-0.496277f));
    setVector(&v, fp_Flt2FP(-1.204609f), fp_Flt2FP(-2.522234f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.738394f), fp_Flt2FP(-0.485535f));
    setVector(&w, fp_Flt2FP(-1.204157f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141218f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.738394f), fp_Flt2FP(-0.906250f));
    setUVTriangle(&triangle[162], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 163:

    setVector(&u, fp_Flt2FP(1.122116f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.487769f));
    setVector(&v, fp_Flt2FP(-1.130921f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.487769f));
    setVector(&w, fp_Flt2FP(-1.126026f), fp_Flt2FP(-2.485189f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.496934f));
    setUVTriangle(&triangle[163], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 164:

    setVector(&u, fp_Flt2FP(-1.126026f), fp_Flt2FP(-2.485189f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.496934f));
    setVector(&v, fp_Flt2FP(1.127014f), fp_Flt2FP(-2.485190f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.496934f));
    setVector(&w, fp_Flt2FP(1.122116f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.487769f));
    setUVTriangle(&triangle[164], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 165:

    setVector(&u, fp_Flt2FP(1.204617f), fp_Flt2FP(-2.522314f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.933261f), fp_Flt2FP(-0.485535f));
    setVector(&v, fp_Flt2FP(1.122116f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.922489f), fp_Flt2FP(-0.496277f));
    setVector(&w, fp_Flt2FP(1.131701f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141137f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.922489f), fp_Flt2FP(-0.906250f));
    setUVTriangle(&triangle[165], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 166:

    setVector(&u, fp_Flt2FP(1.131701f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141137f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.922489f), fp_Flt2FP(-0.906250f));
    setVector(&v, fp_Flt2FP(1.205593f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141285f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.933261f), fp_Flt2FP(-0.906250f));
    setVector(&w, fp_Flt2FP(1.204617f), fp_Flt2FP(-2.522314f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.933261f), fp_Flt2FP(-0.485535f));
    setUVTriangle(&triangle[166], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 167:

    setVector(&u, fp_Flt2FP(1.122116f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.509377f));
    setVector(&v, fp_Flt2FP(1.127014f), fp_Flt2FP(-2.485190f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.509377f));
    setVector(&w, fp_Flt2FP(1.131689f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.143277f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.898049f));
    setUVTriangle(&triangle[167], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 168:

    setVector(&u, fp_Flt2FP(1.131689f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.143277f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.898049f));
    setVector(&v, fp_Flt2FP(1.131701f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141137f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.905981f));
    setVector(&w, fp_Flt2FP(1.122116f), fp_Flt2FP(-2.522315f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.509377f));
    setUVTriangle(&triangle[168], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 169:

    setVector(&u, fp_Flt2FP(1.131701f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141137f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.921875f), fp_Flt2FP(-0.906250f));
    setVector(&v, fp_Flt2FP(1.131689f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.143277f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.921875f), fp_Flt2FP(-0.896484f));
    setVector(&w, fp_Flt2FP(-1.130942f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.143227f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.750977f), fp_Flt2FP(-0.896484f));
    setUVTriangle(&triangle[169], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 170:

    setVector(&u, fp_Flt2FP(-1.130942f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.143227f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750977f), fp_Flt2FP(-0.896484f));
    setVector(&v, fp_Flt2FP(-1.130921f), fp_Flt2FP(-2.522315f), fp_Flt2FP(0.140989f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.750977f), fp_Flt2FP(-0.906250f));
    setVector(&w, fp_Flt2FP(1.131701f), fp_Flt2FP(-2.522314f), fp_Flt2FP(0.141137f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.921875f), fp_Flt2FP(-0.906250f));
    setUVTriangle(&triangle[170], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 171:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(0.828668f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.447149f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(0.828015f), fp_Flt2FP(0.154828f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.447025f), fp_Flt2FP(-0.732360f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(0.826390f), fp_Flt2FP(0.740997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.446549f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[171], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 172:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(0.828668f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.447149f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(0.826390f), fp_Flt2FP(0.740997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.446549f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[172], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 173:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(0.826390f), fp_Flt2FP(0.740997f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.446549f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[173], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 174:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(0.826390f), fp_Flt2FP(0.740997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.446549f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(0.824915f), fp_Flt2FP(1.940313f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.445575f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[174], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 175:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(0.824915f), fp_Flt2FP(1.940313f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.445575f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[175], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 176:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(0.824915f), fp_Flt2FP(1.940313f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.445575f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(0.825652f), fp_Flt2FP(2.258640f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.445317f), fp_Flt2FP(-0.855041f));
    setUVTriangle(&triangle[176], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 177:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(0.825652f), fp_Flt2FP(2.258640f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.445317f), fp_Flt2FP(-0.855041f));
    setUVTriangle(&triangle[177], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 178:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(-0.224816f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(0.825652f), fp_Flt2FP(2.258640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.445317f), fp_Flt2FP(-0.855041f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(0.824446f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.445253f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[178], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 179:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.344979f), fp_Flt2FP(2.624491f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.196696f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.345706f), fp_Flt2FP(2.624849f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.196752f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[179], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 180:

    setVector(&u, fp_Flt2FP(1.345706f), fp_Flt2FP(2.624849f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.196752f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[180], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 181:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.345706f), fp_Flt2FP(2.624849f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.196752f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344430f), fp_Flt2FP(2.624912f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.196844f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[181], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 182:

    setVector(&u, fp_Flt2FP(1.344430f), fp_Flt2FP(2.624912f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.196844f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[182], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 183:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344430f), fp_Flt2FP(2.624912f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.196844f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344113f), fp_Flt2FP(2.624998f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.196874f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[183], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 184:

    setVector(&u, fp_Flt2FP(1.344113f), fp_Flt2FP(2.624998f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.196874f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[184], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 185:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(1.731016f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.324375f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[185], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 186:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(1.728168f), fp_Flt2FP(0.741622f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.323564f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.345724f), fp_Flt2FP(1.729326f), fp_Flt2FP(0.155322f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.324206f), fp_Flt2FP(-0.732326f));
    setUVTriangle(&triangle[186], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 187:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(1.731016f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.324375f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.345724f), fp_Flt2FP(1.729326f), fp_Flt2FP(0.155322f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.324206f), fp_Flt2FP(-0.732326f));
    setUVTriangle(&triangle[187], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 188:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726587f), fp_Flt2FP(1.941091f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.322248f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[188], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 189:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726587f), fp_Flt2FP(1.941091f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.322248f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(1.728168f), fp_Flt2FP(0.741622f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.323564f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[189], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 190:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726062f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.321812f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726466f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.321900f), fp_Flt2FP(-0.855219f));
    setUVTriangle(&triangle[190], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 191:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726466f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.321900f), fp_Flt2FP(-0.855219f));
    setUVTriangle(&triangle[191], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 192:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726587f), fp_Flt2FP(1.941091f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.322248f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(2.175186f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726466f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.321900f), fp_Flt2FP(-0.855219f));
    setUVTriangle(&triangle[192], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 193:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726466f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.922489f), fp_Flt2FP(-0.496277f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726062f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.933261f), fp_Flt2FP(-0.485535f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(0.824446f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.738394f), fp_Flt2FP(-0.485535f));
    setUVTriangle(&triangle[193], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 194:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(0.824446f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.738394f), fp_Flt2FP(-0.485535f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(0.825652f), fp_Flt2FP(2.258640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.751124f), fp_Flt2FP(-0.496277f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726466f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.922489f), fp_Flt2FP(-0.496277f));
    setUVTriangle(&triangle[194], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 195:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726466f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.487769f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(0.825652f), fp_Flt2FP(2.258640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.487769f));
    setVector(&w, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.496934f));
    setUVTriangle(&triangle[195], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 196:

    setVector(&u, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.496934f));
    setVector(&v, fp_Flt2FP(1.304495f), fp_Flt2FP(1.726766f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.496934f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726466f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.487769f));
    setUVTriangle(&triangle[196], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 197:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(0.826390f), fp_Flt2FP(0.740997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.795407f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(0.828015f), fp_Flt2FP(0.154828f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.905974f));
    setVector(&w, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.898042f));
    setUVTriangle(&triangle[197], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 198:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(0.826390f), fp_Flt2FP(0.740997f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.795407f));
    setVector(&v, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.898042f));
    setVector(&w, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.509370f));
    setUVTriangle(&triangle[198], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 199:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(0.824915f), fp_Flt2FP(1.940313f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.569408f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(0.826390f), fp_Flt2FP(0.740997f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.795407f));
    setVector(&w, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.509370f));
    setUVTriangle(&triangle[199], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 200:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(0.825652f), fp_Flt2FP(2.258640f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.509370f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(0.824915f), fp_Flt2FP(1.940313f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.569408f));
    setVector(&w, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.509370f));
    setUVTriangle(&triangle[200], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 201:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726587f), fp_Flt2FP(1.941091f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.565842f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726466f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.509377f));
    setVector(&w, fp_Flt2FP(1.304495f), fp_Flt2FP(1.726766f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.509377f));
    setUVTriangle(&triangle[201], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 202:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726587f), fp_Flt2FP(1.941091f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.565842f));
    setVector(&v, fp_Flt2FP(1.304495f), fp_Flt2FP(1.726766f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.509377f));
    setVector(&w, fp_Flt2FP(1.304492f), fp_Flt2FP(1.726766f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.898049f));
    setUVTriangle(&triangle[202], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 203:

    setVector(&u, fp_Flt2FP(1.344448f), fp_Flt2FP(1.728168f), fp_Flt2FP(0.741622f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.779491f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(1.726587f), fp_Flt2FP(1.941091f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.565842f));
    setVector(&w, fp_Flt2FP(1.304492f), fp_Flt2FP(1.726766f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.898049f));
    setUVTriangle(&triangle[203], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 204:

    setVector(&u, fp_Flt2FP(1.345724f), fp_Flt2FP(1.729326f), fp_Flt2FP(0.155322f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.905981f));
    setVector(&v, fp_Flt2FP(1.344448f), fp_Flt2FP(1.728168f), fp_Flt2FP(0.741622f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.779491f));
    setVector(&w, fp_Flt2FP(1.304492f), fp_Flt2FP(1.726766f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.898049f));
    setUVTriangle(&triangle[204], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 205:

    setVector(&u, fp_Flt2FP(1.304495f), fp_Flt2FP(1.726766f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.921875f), fp_Flt2FP(-0.498047f));
    setVector(&v, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.750977f), fp_Flt2FP(-0.498047f));
    setVector(&w, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.750977f), fp_Flt2FP(-0.896484f));
    setUVTriangle(&triangle[205], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 206:

    setVector(&u, fp_Flt2FP(1.304492f), fp_Flt2FP(1.726766f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.921875f), fp_Flt2FP(-0.896484f));
    setVector(&v, fp_Flt2FP(1.304495f), fp_Flt2FP(1.726766f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.921875f), fp_Flt2FP(-0.498047f));
    setVector(&w, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.750977f), fp_Flt2FP(-0.896484f));
    setUVTriangle(&triangle[206], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 207:

    setVector(&u, fp_Flt2FP(1.345724f), fp_Flt2FP(1.729326f), fp_Flt2FP(0.155322f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.921875f), fp_Flt2FP(-0.906250f));
    setVector(&v, fp_Flt2FP(1.304492f), fp_Flt2FP(1.726766f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.921875f), fp_Flt2FP(-0.896484f));
    setVector(&w, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.750977f), fp_Flt2FP(-0.896484f));
    setUVTriangle(&triangle[207], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 208:

    setVector(&u, fp_Flt2FP(1.345724f), fp_Flt2FP(1.729326f), fp_Flt2FP(0.155322f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.921875f), fp_Flt2FP(-0.906250f));
    setVector(&v, fp_Flt2FP(1.304492f), fp_Flt2FP(0.826766f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.750977f), fp_Flt2FP(-0.896484f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(0.828015f), fp_Flt2FP(0.154828f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.750977f), fp_Flt2FP(-0.906250f));
    setUVTriangle(&triangle[208], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 209:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(1.731016f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.921965f), fp_Flt2FP(-0.924783f));
    setVector(&v, fp_Flt2FP(1.345724f), fp_Flt2FP(1.729326f), fp_Flt2FP(0.155322f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.921875f), fp_Flt2FP(-0.906250f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(0.828015f), fp_Flt2FP(0.154828f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.750977f), fp_Flt2FP(-0.906250f));
    setUVTriangle(&triangle[209], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 210:

    setVector(&u, fp_Flt2FP(1.344445f), fp_Flt2FP(0.828668f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750693f), fp_Flt2FP(-0.924960f));
    setVector(&v, fp_Flt2FP(1.344445f), fp_Flt2FP(1.731016f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.921965f), fp_Flt2FP(-0.924783f));
    setVector(&w, fp_Flt2FP(1.344448f), fp_Flt2FP(0.828015f), fp_Flt2FP(0.154828f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.750977f), fp_Flt2FP(-0.906250f));
    setUVTriangle(&triangle[210], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 211:

    setVector(&u, fp_Flt2FP(-0.143876f), fp_Flt2FP(2.624819f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-0.144632f), fp_Flt2FP(2.625502f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.882216f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.139492f), fp_Flt2FP(-0.882278f));
    setUVTriangle(&triangle[211], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 212:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.139466f), fp_Flt2FP(-0.925167f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.624843f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.139428f), fp_Flt2FP(-0.987147f));
    setVector(&w, fp_Flt2FP(-1.344230f), fp_Flt2FP(2.624909f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987322f));
    setUVTriangle(&triangle[212], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 213:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.139492f), fp_Flt2FP(-0.882278f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.139466f), fp_Flt2FP(-0.925167f));
    setVector(&w, fp_Flt2FP(-1.344230f), fp_Flt2FP(2.624909f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987322f));
    setUVTriangle(&triangle[213], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 214:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.139492f), fp_Flt2FP(-0.882278f));
    setVector(&v, fp_Flt2FP(-1.344230f), fp_Flt2FP(2.624909f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987322f));
    setVector(&w, fp_Flt2FP(-1.344062f), fp_Flt2FP(2.624909f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822249f));
    setUVTriangle(&triangle[214], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 215:

    setVector(&u, fp_Flt2FP(-0.143876f), fp_Flt2FP(2.624819f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.193073f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.139492f), fp_Flt2FP(-0.882278f));
    setVector(&w, fp_Flt2FP(-1.344062f), fp_Flt2FP(2.624909f), fp_Flt2FP(2.338189f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822249f));
    setUVTriangle(&triangle[215], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 216:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.344355f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.740343f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.051371f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.051371f), fp_Flt2FP(-0.713278f));
    setUVTriangle(&triangle[216], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 217:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.051371f), fp_Flt2FP(-0.713278f));
    setUVTriangle(&triangle[217], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 218:

    setVector(&u, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(0.225181f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.051371f), fp_Flt2FP(-0.713278f));
    setUVTriangle(&triangle[218], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 219:

    setVector(&u, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.425289f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.713278f));
    setVector(&v, fp_Flt2FP(-1.344352f), fp_Flt2FP(1.425182f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.344358f), fp_Flt2FP(1.325184f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.051371f), fp_Flt2FP(-0.713278f));
    setUVTriangle(&triangle[219], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 220:

    setVector(&u, fp_Flt2FP(1.055856f), fp_Flt2FP(2.624819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(0.278878f), fp_Flt2FP(2.624818f), fp_Flt2FP(1.940394f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.332960f), fp_Flt2FP(-0.987239f));
    setVector(&w, fp_Flt2FP(0.278750f), fp_Flt2FP(2.625279f), fp_Flt2FP(2.090700f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.332886f), fp_Flt2FP(-0.925300f));
    setUVTriangle(&triangle[220], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 221:

    setVector(&u, fp_Flt2FP(0.278750f), fp_Flt2FP(2.625279f), fp_Flt2FP(2.090700f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.332886f), fp_Flt2FP(-0.925300f));
    setVector(&v, fp_Flt2FP(1.054708f), fp_Flt2FP(2.626175f), fp_Flt2FP(2.089691f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.925224f));
    setVector(&w, fp_Flt2FP(1.055856f), fp_Flt2FP(2.624819f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[221], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 222:

    setVector(&u, fp_Flt2FP(1.055587f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-0.144413f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987322f));
    setVector(&w, fp_Flt2FP(-0.144352f), fp_Flt2FP(2.624243f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.743752f));
    setUVTriangle(&triangle[222], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 223:

    setVector(&u, fp_Flt2FP(-0.144352f), fp_Flt2FP(2.624243f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.743752f));
    setVector(&v, fp_Flt2FP(1.054586f), fp_Flt2FP(2.623657f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.743634f));
    setVector(&w, fp_Flt2FP(1.055587f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[223], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 224:

    setVector(&u, fp_Flt2FP(-1.344230f), fp_Flt2FP(2.624909f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489482f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.624843f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.139428f), fp_Flt2FP(-0.489307f));
    setVector(&w, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.139379f), fp_Flt2FP(-0.732206f));
    setUVTriangle(&triangle[224], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 225:

    setVector(&u, fp_Flt2FP(-1.344398f), fp_Flt2FP(2.624909f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987322f));
    setVector(&v, fp_Flt2FP(-1.344230f), fp_Flt2FP(2.624909f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489482f));
    setVector(&w, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.139379f), fp_Flt2FP(-0.732206f));
    setUVTriangle(&triangle[225], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 226:

    setVector(&u, fp_Flt2FP(-1.344398f), fp_Flt2FP(2.624909f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987322f));
    setVector(&v, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.139379f), fp_Flt2FP(-0.732206f));
    setVector(&w, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.139377f), fp_Flt2FP(-0.743577f));
    setUVTriangle(&triangle[226], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 227:

    setVector(&u, fp_Flt2FP(-0.144413f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.344398f), fp_Flt2FP(2.624909f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987322f));
    setVector(&w, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.139377f), fp_Flt2FP(-0.743577f));
    setUVTriangle(&triangle[227], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 228:

    setVector(&u, fp_Flt2FP(-0.144352f), fp_Flt2FP(2.624243f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.743516f));
    setVector(&v, fp_Flt2FP(-0.144413f), fp_Flt2FP(2.624819f), fp_Flt2FP(0.740293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009777f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.327397f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.139377f), fp_Flt2FP(-0.743577f));
    setUVTriangle(&triangle[228], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 229:

    setVector(&u, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.139379f), fp_Flt2FP(-0.732206f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.624843f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.139428f), fp_Flt2FP(-0.489307f));
    setVector(&w, fp_Flt2FP(-0.421732f), fp_Flt2FP(2.624840f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.125233f), fp_Flt2FP(-0.489301f));
    setUVTriangle(&triangle[229], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 230:

    setVector(&u, fp_Flt2FP(-0.421732f), fp_Flt2FP(2.624840f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.125233f), fp_Flt2FP(-0.489301f));
    setVector(&v, fp_Flt2FP(-0.421115f), fp_Flt2FP(2.624368f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.124966f), fp_Flt2FP(-0.732200f));
    setVector(&w, fp_Flt2FP(-0.455869f), fp_Flt2FP(2.623670f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.139379f), fp_Flt2FP(-0.732206f));
    setUVTriangle(&triangle[230], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 231:

    setVector(&u, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.624843f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.139428f), fp_Flt2FP(-0.987147f));
    setVector(&v, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.626188f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.139466f), fp_Flt2FP(-0.925167f));
    setVector(&w, fp_Flt2FP(-0.421845f), fp_Flt2FP(2.625870f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.125307f), fp_Flt2FP(-0.925160f));
    setUVTriangle(&triangle[231], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 232:

    setVector(&u, fp_Flt2FP(-0.421845f), fp_Flt2FP(2.625870f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.125307f), fp_Flt2FP(-0.925160f));
    setVector(&v, fp_Flt2FP(-0.421732f), fp_Flt2FP(2.624840f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.125233f), fp_Flt2FP(-0.987140f));
    setVector(&w, fp_Flt2FP(-0.455866f), fp_Flt2FP(2.624843f), fp_Flt2FP(1.940293f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.139428f), fp_Flt2FP(-0.987147f));
    setUVTriangle(&triangle[232], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 233:

    setVector(&u, fp_Flt2FP(0.279049f), fp_Flt2FP(2.624680f), fp_Flt2FP(1.355934f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387757f), fp_Flt2FP(-0.980587f));
    setVector(&v, fp_Flt2FP(0.278854f), fp_Flt2FP(2.484465f), fp_Flt2FP(1.356966f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451073f), fp_Flt2FP(-0.980521f));
    setVector(&w, fp_Flt2FP(0.278933f), fp_Flt2FP(2.484512f), fp_Flt2FP(2.091627f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451160f), fp_Flt2FP(-0.675656f));
    setUVTriangle(&triangle[233], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 234:

    setVector(&u, fp_Flt2FP(0.278933f), fp_Flt2FP(2.484512f), fp_Flt2FP(2.091627f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451160f), fp_Flt2FP(-0.675656f));
    setVector(&v, fp_Flt2FP(0.278750f), fp_Flt2FP(2.625279f), fp_Flt2FP(2.090700f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.388440f), fp_Flt2FP(-0.675599f));
    setVector(&w, fp_Flt2FP(0.279049f), fp_Flt2FP(2.624680f), fp_Flt2FP(1.355934f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.387757f), fp_Flt2FP(-0.980587f));
    setUVTriangle(&triangle[234], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 235:

    setVector(&u, fp_Flt2FP(-0.421354f), fp_Flt2FP(2.484374f), fp_Flt2FP(1.354694f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387743f), fp_Flt2FP(-0.980577f));
    setVector(&v, fp_Flt2FP(-0.421115f), fp_Flt2FP(2.624368f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451078f), fp_Flt2FP(-0.980516f));
    setVector(&w, fp_Flt2FP(-0.421845f), fp_Flt2FP(2.625870f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451160f), fp_Flt2FP(-0.675656f));
    setUVTriangle(&triangle[235], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 236:

    setVector(&u, fp_Flt2FP(-0.421845f), fp_Flt2FP(2.625870f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451160f), fp_Flt2FP(-0.675656f));
    setVector(&v, fp_Flt2FP(-0.421335f), fp_Flt2FP(2.484542f), fp_Flt2FP(2.089869f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.388440f), fp_Flt2FP(-0.675599f));
    setVector(&w, fp_Flt2FP(-0.421354f), fp_Flt2FP(2.484374f), fp_Flt2FP(1.354694f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.387743f), fp_Flt2FP(-0.980577f));
    setUVTriangle(&triangle[236], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 237:

    setVector(&u, fp_Flt2FP(0.278854f), fp_Flt2FP(2.484465f), fp_Flt2FP(1.356966f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.388204f), fp_Flt2FP(-0.704615f));
    setVector(&v, fp_Flt2FP(0.279049f), fp_Flt2FP(2.624680f), fp_Flt2FP(1.355934f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451542f), fp_Flt2FP(-0.704638f));
    setVector(&w, fp_Flt2FP(-0.421115f), fp_Flt2FP(2.624368f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451461f), fp_Flt2FP(-0.902217f));
    setUVTriangle(&triangle[237], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 238:

    setVector(&u, fp_Flt2FP(-0.421115f), fp_Flt2FP(2.624368f), fp_Flt2FP(1.354806f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451461f), fp_Flt2FP(-0.902217f));
    setVector(&v, fp_Flt2FP(-0.421354f), fp_Flt2FP(2.484374f), fp_Flt2FP(1.354694f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.388285f), fp_Flt2FP(-0.902218f));
    setVector(&w, fp_Flt2FP(0.278854f), fp_Flt2FP(2.484465f), fp_Flt2FP(1.356966f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.388204f), fp_Flt2FP(-0.704615f));
    setUVTriangle(&triangle[238], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 239:

    setVector(&u, fp_Flt2FP(-0.421335f), fp_Flt2FP(2.484542f), fp_Flt2FP(2.089869f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.388210f), fp_Flt2FP(-0.701934f));
    setVector(&v, fp_Flt2FP(-0.421845f), fp_Flt2FP(2.625870f), fp_Flt2FP(2.089692f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451549f), fp_Flt2FP(-0.701957f));
    setVector(&w, fp_Flt2FP(0.278750f), fp_Flt2FP(2.625279f), fp_Flt2FP(2.090700f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451468f), fp_Flt2FP(-0.899496f));
    setUVTriangle(&triangle[239], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 240:

    setVector(&u, fp_Flt2FP(0.278750f), fp_Flt2FP(2.625279f), fp_Flt2FP(2.090700f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451468f), fp_Flt2FP(-0.899496f));
    setVector(&v, fp_Flt2FP(0.278933f), fp_Flt2FP(2.484512f), fp_Flt2FP(2.091627f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.388292f), fp_Flt2FP(-0.899497f));
    setVector(&w, fp_Flt2FP(-0.421335f), fp_Flt2FP(2.484542f), fp_Flt2FP(2.089869f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.388210f), fp_Flt2FP(-0.701934f));
    setUVTriangle(&triangle[240], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 241:

    setVector(&u, fp_Flt2FP(-1.344968f), fp_Flt2FP(2.025300f), fp_Flt2FP(0.200542f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387737f), fp_Flt2FP(-0.966113f));
    setVector(&v, fp_Flt2FP(-1.204386f), fp_Flt2FP(2.025248f), fp_Flt2FP(0.200513f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451079f), fp_Flt2FP(-0.966052f));
    setVector(&w, fp_Flt2FP(-1.204441f), fp_Flt2FP(2.025287f), fp_Flt2FP(0.900398f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451160f), fp_Flt2FP(-0.675656f));
    setUVTriangle(&triangle[241], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 242:

    setVector(&u, fp_Flt2FP(-1.204441f), fp_Flt2FP(2.025287f), fp_Flt2FP(0.900398f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451160f), fp_Flt2FP(-0.675656f));
    setVector(&v, fp_Flt2FP(-1.344718f), fp_Flt2FP(2.025264f), fp_Flt2FP(0.900433f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.388440f), fp_Flt2FP(-0.675599f));
    setVector(&w, fp_Flt2FP(-1.344968f), fp_Flt2FP(2.025300f), fp_Flt2FP(0.200542f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.387737f), fp_Flt2FP(-0.966113f));
    setUVTriangle(&triangle[242], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 243:

    setVector(&u, fp_Flt2FP(-1.204178f), fp_Flt2FP(1.325224f), fp_Flt2FP(0.199377f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.387737f), fp_Flt2FP(-0.966113f));
    setVector(&v, fp_Flt2FP(-1.344779f), fp_Flt2FP(1.325373f), fp_Flt2FP(0.199450f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451079f), fp_Flt2FP(-0.966052f));
    setVector(&w, fp_Flt2FP(-1.344877f), fp_Flt2FP(1.325204f), fp_Flt2FP(0.899424f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451160f), fp_Flt2FP(-0.675656f));
    setUVTriangle(&triangle[243], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 244:

    setVector(&u, fp_Flt2FP(-1.344877f), fp_Flt2FP(1.325204f), fp_Flt2FP(0.899424f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451160f), fp_Flt2FP(-0.675656f));
    setVector(&v, fp_Flt2FP(-1.204477f), fp_Flt2FP(1.325206f), fp_Flt2FP(0.899521f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.388440f), fp_Flt2FP(-0.675599f));
    setVector(&w, fp_Flt2FP(-1.204178f), fp_Flt2FP(1.325224f), fp_Flt2FP(0.199377f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.387737f), fp_Flt2FP(-0.966113f));
    setUVTriangle(&triangle[244], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 245:

    setVector(&u, fp_Flt2FP(-1.204386f), fp_Flt2FP(2.025248f), fp_Flt2FP(0.200513f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.388211f), fp_Flt2FP(-0.704584f));
    setVector(&v, fp_Flt2FP(-1.344968f), fp_Flt2FP(2.025300f), fp_Flt2FP(0.200542f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451549f), fp_Flt2FP(-0.704607f));
    setVector(&w, fp_Flt2FP(-1.345304f), fp_Flt2FP(1.315090f), fp_Flt2FP(0.199849f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451468f), fp_Flt2FP(-0.905057f));
    setUVTriangle(&triangle[245], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 246:

    setVector(&u, fp_Flt2FP(-1.345304f), fp_Flt2FP(1.315090f), fp_Flt2FP(0.199849f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451468f), fp_Flt2FP(-0.905057f));
    setVector(&v, fp_Flt2FP(-1.204660f), fp_Flt2FP(1.315088f), fp_Flt2FP(0.199848f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.388292f), fp_Flt2FP(-0.905058f));
    setVector(&w, fp_Flt2FP(-1.204386f), fp_Flt2FP(2.025248f), fp_Flt2FP(0.200513f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.388211f), fp_Flt2FP(-0.704584f));
    setUVTriangle(&triangle[246], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 247:

    setVector(&u, fp_Flt2FP(-1.204477f), fp_Flt2FP(1.325206f), fp_Flt2FP(0.899521f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.388210f), fp_Flt2FP(-0.701934f));
    setVector(&v, fp_Flt2FP(-1.344877f), fp_Flt2FP(1.325204f), fp_Flt2FP(0.899424f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.451549f), fp_Flt2FP(-0.701957f));
    setVector(&w, fp_Flt2FP(-1.344718f), fp_Flt2FP(2.025264f), fp_Flt2FP(0.900433f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.451468f), fp_Flt2FP(-0.899496f));
    setUVTriangle(&triangle[247], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 248:

    setVector(&u, fp_Flt2FP(-1.344718f), fp_Flt2FP(2.025264f), fp_Flt2FP(0.900433f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.451468f), fp_Flt2FP(-0.899496f));
    setVector(&v, fp_Flt2FP(-1.204441f), fp_Flt2FP(2.025287f), fp_Flt2FP(0.900398f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.388292f), fp_Flt2FP(-0.899497f));
    setVector(&w, fp_Flt2FP(-1.204477f), fp_Flt2FP(1.325206f), fp_Flt2FP(0.899521f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.388210f), fp_Flt2FP(-0.701934f));
    setUVTriangle(&triangle[248], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 249:

    setVector(&u, fp_Flt2FP(-1.344968f), fp_Flt2FP(2.025300f), fp_Flt2FP(0.200542f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.872070f), fp_Flt2FP(-0.351562f));
    setVector(&v, fp_Flt2FP(-1.344718f), fp_Flt2FP(2.025264f), fp_Flt2FP(0.900433f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.872070f), fp_Flt2FP(-0.466797f));
    setVector(&w, fp_Flt2FP(-1.344877f), fp_Flt2FP(1.325204f), fp_Flt2FP(0.899424f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.987305f), fp_Flt2FP(-0.466797f));
    setUVTriangle(&triangle[249], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 250:

    setVector(&u, fp_Flt2FP(-1.344877f), fp_Flt2FP(1.325204f), fp_Flt2FP(0.899424f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.987305f), fp_Flt2FP(-0.466797f));
    setVector(&v, fp_Flt2FP(-1.344779f), fp_Flt2FP(1.325373f), fp_Flt2FP(0.199450f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.987305f), fp_Flt2FP(-0.351562f));
    setVector(&w, fp_Flt2FP(-1.344968f), fp_Flt2FP(2.025300f), fp_Flt2FP(0.200542f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.872070f), fp_Flt2FP(-0.351562f));
    setUVTriangle(&triangle[250], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 251:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(0.828995f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.922489f), fp_Flt2FP(-0.496277f));
    setVector(&v, fp_Flt2FP(1.204586f), fp_Flt2FP(0.829730f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.933261f), fp_Flt2FP(-0.485535f));
    setVector(&w, fp_Flt2FP(1.204599f), fp_Flt2FP(1.731020f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.738394f), fp_Flt2FP(-0.485535f));
    setUVTriangle(&triangle[251], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 252:

    setVector(&u, fp_Flt2FP(1.204599f), fp_Flt2FP(1.731020f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.738394f), fp_Flt2FP(-0.485535f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(1.729809f), fp_Flt2FP(2.258640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.751124f), fp_Flt2FP(-0.496277f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(0.828995f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.922489f), fp_Flt2FP(-0.496277f));
    setUVTriangle(&triangle[252], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 253:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(0.828995f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.487769f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(1.729809f), fp_Flt2FP(2.258640f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.487769f));
    setVector(&w, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.496934f));
    setUVTriangle(&triangle[253], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 254:

    setVector(&u, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.496934f));
    setVector(&v, fp_Flt2FP(1.244521f), fp_Flt2FP(0.828697f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.496934f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(0.828995f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.487769f));
    setUVTriangle(&triangle[254], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 255:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(1.729071f), fp_Flt2FP(0.740788f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.795407f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(1.727447f), fp_Flt2FP(0.154828f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.905974f));
    setVector(&w, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.898042f));
    setUVTriangle(&triangle[255], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 256:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(1.729071f), fp_Flt2FP(0.740788f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.795407f));
    setVector(&v, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.898042f));
    setVector(&w, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.509370f));
    setUVTriangle(&triangle[256], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 257:

    setVector(&u, fp_Flt2FP(1.204586f), fp_Flt2FP(1.730541f), fp_Flt2FP(1.940446f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.569408f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(1.729071f), fp_Flt2FP(0.740788f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.795407f));
    setVector(&w, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.509370f));
    setUVTriangle(&triangle[257], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 258:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(1.729809f), fp_Flt2FP(2.258640f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.509370f));
    setVector(&v, fp_Flt2FP(1.204586f), fp_Flt2FP(1.730541f), fp_Flt2FP(1.940446f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.569408f));
    setVector(&w, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.509370f));
    setUVTriangle(&triangle[258], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 259:

    setVector(&u, fp_Flt2FP(1.204577f), fp_Flt2FP(0.829126f), fp_Flt2FP(1.940835f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.565842f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(0.828995f), fp_Flt2FP(2.258504f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.509377f));
    setVector(&w, fp_Flt2FP(1.244521f), fp_Flt2FP(0.828697f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.509377f));
    setUVTriangle(&triangle[259], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 260:

    setVector(&u, fp_Flt2FP(1.204577f), fp_Flt2FP(0.829126f), fp_Flt2FP(1.940835f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.565842f));
    setVector(&v, fp_Flt2FP(1.244521f), fp_Flt2FP(0.828697f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.509377f));
    setVector(&w, fp_Flt2FP(1.244525f), fp_Flt2FP(0.828697f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.898049f));
    setUVTriangle(&triangle[260], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 261:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(0.827294f), fp_Flt2FP(0.741100f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.779491f));
    setVector(&v, fp_Flt2FP(1.204577f), fp_Flt2FP(0.829126f), fp_Flt2FP(1.940835f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.565842f));
    setVector(&w, fp_Flt2FP(1.244525f), fp_Flt2FP(0.828697f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.898049f));
    setUVTriangle(&triangle[261], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 262:

    setVector(&u, fp_Flt2FP(1.203292f), fp_Flt2FP(0.826136f), fp_Flt2FP(0.155322f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.905981f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(0.827294f), fp_Flt2FP(0.741100f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.750148f), fp_Flt2FP(-0.779491f));
    setVector(&w, fp_Flt2FP(1.244525f), fp_Flt2FP(0.828697f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.740200f), fp_Flt2FP(-0.898049f));
    setUVTriangle(&triangle[262], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 263:

    setVector(&u, fp_Flt2FP(1.244521f), fp_Flt2FP(0.828697f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.748047f), fp_Flt2FP(-0.498047f));
    setVector(&v, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.921842f), fp_Flt2FP(-0.498047f));
    setVector(&w, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.921842f), fp_Flt2FP(-0.896484f));
    setUVTriangle(&triangle[263], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 264:

    setVector(&u, fp_Flt2FP(1.244525f), fp_Flt2FP(0.828697f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.748047f), fp_Flt2FP(-0.896484f));
    setVector(&v, fp_Flt2FP(1.244521f), fp_Flt2FP(0.828697f), fp_Flt2FP(2.258473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.748047f), fp_Flt2FP(-0.498047f));
    setVector(&w, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.921842f), fp_Flt2FP(-0.896484f));
    setUVTriangle(&triangle[264], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 265:

    setVector(&u, fp_Flt2FP(1.203292f), fp_Flt2FP(0.826136f), fp_Flt2FP(0.155322f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.748047f), fp_Flt2FP(-0.906250f));
    setVector(&v, fp_Flt2FP(1.244525f), fp_Flt2FP(0.828697f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.748047f), fp_Flt2FP(-0.896484f));
    setVector(&w, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.921842f), fp_Flt2FP(-0.896484f));
    setUVTriangle(&triangle[265], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 266:

    setVector(&u, fp_Flt2FP(1.203292f), fp_Flt2FP(0.826136f), fp_Flt2FP(0.155322f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.748047f), fp_Flt2FP(-0.906250f));
    setVector(&v, fp_Flt2FP(1.244525f), fp_Flt2FP(1.728696f), fp_Flt2FP(0.200569f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.921842f), fp_Flt2FP(-0.896484f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(1.727447f), fp_Flt2FP(0.154828f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.921842f), fp_Flt2FP(-0.906250f));
    setUVTriangle(&triangle[266], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 267:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(0.824449f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.747956f), fp_Flt2FP(-0.924783f));
    setVector(&v, fp_Flt2FP(1.203292f), fp_Flt2FP(0.826136f), fp_Flt2FP(0.155322f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.748047f), fp_Flt2FP(-0.906250f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(1.727447f), fp_Flt2FP(0.154828f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.921842f), fp_Flt2FP(-0.906250f));
    setUVTriangle(&triangle[267], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 268:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(1.727487f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.922130f), fp_Flt2FP(-0.924960f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(0.824449f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.747956f), fp_Flt2FP(-0.924783f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(1.727447f), fp_Flt2FP(0.154828f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.921842f), fp_Flt2FP(-0.906250f));
    setUVTriangle(&triangle[268], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 269:

    setVector(&u, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.197415f), fp_Flt2FP(2.485016f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.198681f), fp_Flt2FP(2.485187f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[269], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 270:

    setVector(&u, fp_Flt2FP(1.198681f), fp_Flt2FP(2.485187f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[270], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 271:

    setVector(&u, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484315f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[271], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 272:

    setVector(&u, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484483f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484315f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[272], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 273:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.204565f), fp_Flt2FP(-2.448141f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.204565f), fp_Flt2FP(-2.448141f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[273], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 274:

    setVector(&u, fp_Flt2FP(1.204565f), fp_Flt2FP(-2.448141f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[274], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 275:

    setVector(&u, fp_Flt2FP(1.204571f), fp_Flt2FP(-0.048139f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[275], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 276:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.204571f), fp_Flt2FP(-0.048139f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.204571f), fp_Flt2FP(-0.048139f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[276], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 277:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.204565f), fp_Flt2FP(-2.448141f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.204565f), fp_Flt2FP(-2.448141f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[277], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 278:

    setVector(&u, fp_Flt2FP(1.204565f), fp_Flt2FP(-2.448141f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[278], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 279:

    setVector(&u, fp_Flt2FP(1.204571f), fp_Flt2FP(-0.048139f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[279], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 280:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.204638f), fp_Flt2FP(-0.048139f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.204571f), fp_Flt2FP(-0.048139f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[280], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 281:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.204565f), fp_Flt2FP(-2.448141f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.205081f), fp_Flt2FP(-2.448143f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[281], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 282:

    setVector(&u, fp_Flt2FP(1.205081f), fp_Flt2FP(-2.448143f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[282], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 283:

    setVector(&u, fp_Flt2FP(1.204638f), fp_Flt2FP(-0.048139f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[283], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 284:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(-1.248138f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.204705f), fp_Flt2FP(-0.048139f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.204638f), fp_Flt2FP(-0.048139f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[284], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 285:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(2.351865f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(1.727487f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.269199f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(1.729071f), fp_Flt2FP(0.740788f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.268826f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[285], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 286:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(1.729071f), fp_Flt2FP(0.740788f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.268826f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(2.351865f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(2.351865f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[286], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 287:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(2.351865f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(1.729071f), fp_Flt2FP(0.740788f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.268826f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.204586f), fp_Flt2FP(1.730541f), fp_Flt2FP(1.940446f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.268218f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[287], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 288:

    setVector(&u, fp_Flt2FP(1.204586f), fp_Flt2FP(1.730541f), fp_Flt2FP(1.940446f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.268218f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.204635f), fp_Flt2FP(2.351865f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(2.351865f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[288], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 289:

    setVector(&u, fp_Flt2FP(1.204635f), fp_Flt2FP(2.351865f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.204586f), fp_Flt2FP(1.730541f), fp_Flt2FP(1.940446f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.268218f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.204599f), fp_Flt2FP(1.731020f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.268014f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[289], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 290:

    setVector(&u, fp_Flt2FP(1.204599f), fp_Flt2FP(1.731020f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.268014f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.204702f), fp_Flt2FP(2.351865f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.204635f), fp_Flt2FP(2.351865f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[290], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 291:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(2.351865f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(2.351865f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.198681f), fp_Flt2FP(2.485187f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.452834f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[291], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 292:

    setVector(&u, fp_Flt2FP(1.198681f), fp_Flt2FP(2.485187f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.452834f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.197415f), fp_Flt2FP(2.485016f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.452834f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(2.351865f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[292], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 293:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(2.351865f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.204635f), fp_Flt2FP(2.351865f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.200943f), fp_Flt2FP(2.485019f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.452832f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[293], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 294:

    setVector(&u, fp_Flt2FP(1.200943f), fp_Flt2FP(2.485019f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.452832f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.198681f), fp_Flt2FP(2.485187f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.452834f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(2.351865f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[294], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 295:

    setVector(&u, fp_Flt2FP(1.204635f), fp_Flt2FP(2.351865f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.204702f), fp_Flt2FP(2.351865f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.200140f), fp_Flt2FP(2.485187f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.452830f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[295], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 296:

    setVector(&u, fp_Flt2FP(1.200140f), fp_Flt2FP(2.485187f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.452830f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.200943f), fp_Flt2FP(2.485019f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.452832f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.204635f), fp_Flt2FP(2.351865f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[296], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 297:

    setVector(&u, fp_Flt2FP(-1.204178f), fp_Flt2FP(1.325224f), fp_Flt2FP(0.199377f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.081837f), fp_Flt2FP(-0.713278f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.325190f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.081839f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[297], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 298:

    setVector(&u, fp_Flt2FP(-1.204178f), fp_Flt2FP(1.325224f), fp_Flt2FP(0.199377f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.081837f), fp_Flt2FP(-0.713278f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[298], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 299:

    setVector(&u, fp_Flt2FP(-1.204178f), fp_Flt2FP(1.325224f), fp_Flt2FP(0.199377f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.081837f), fp_Flt2FP(-0.713278f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[299], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 300:

    setVector(&u, fp_Flt2FP(-1.204386f), fp_Flt2FP(2.025248f), fp_Flt2FP(0.200513f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.373003f), fp_Flt2FP(-0.713278f));
    setVector(&v, fp_Flt2FP(-1.204178f), fp_Flt2FP(1.325224f), fp_Flt2FP(0.199377f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.081837f), fp_Flt2FP(-0.713278f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[300], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 301:

    setVector(&u, fp_Flt2FP(-1.204386f), fp_Flt2FP(2.025248f), fp_Flt2FP(0.200513f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.373003f), fp_Flt2FP(-0.713278f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[301], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 302:

    setVector(&u, fp_Flt2FP(-1.204386f), fp_Flt2FP(2.025248f), fp_Flt2FP(0.200513f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.373003f), fp_Flt2FP(-0.713278f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.025187f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.373004f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[302], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 303:

    setVector(&u, fp_Flt2FP(-1.204383f), fp_Flt2FP(-0.048058f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[303], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 304:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(-0.048058f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204383f), fp_Flt2FP(-0.048058f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[304], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 305:

    setVector(&u, fp_Flt2FP(-1.204383f), fp_Flt2FP(-0.048058f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[305], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 306:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204450f), fp_Flt2FP(-0.048058f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204383f), fp_Flt2FP(-0.048058f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[306], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 307:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[307], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 308:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[308], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 309:

    setVector(&u, fp_Flt2FP(-1.204450f), fp_Flt2FP(-0.048058f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[309], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 310:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.204517f), fp_Flt2FP(-0.048058f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-1.204450f), fp_Flt2FP(-0.048058f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[310], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 311:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(-0.048058f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.204383f), fp_Flt2FP(-0.048058f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[311], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 312:

    setVector(&u, fp_Flt2FP(-1.204383f), fp_Flt2FP(-0.048058f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[312], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 313:

    setVector(&u, fp_Flt2FP(-1.204389f), fp_Flt2FP(-2.448061f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[313], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 314:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204389f), fp_Flt2FP(-2.448061f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204389f), fp_Flt2FP(-2.448061f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[314], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 315:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(-0.048058f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204450f), fp_Flt2FP(-0.048058f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[315], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 316:

    setVector(&u, fp_Flt2FP(-1.204450f), fp_Flt2FP(-0.048058f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[316], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 317:

    setVector(&u, fp_Flt2FP(-1.204389f), fp_Flt2FP(-2.448061f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[317], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 318:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204523f), fp_Flt2FP(-2.448061f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204389f), fp_Flt2FP(-2.448061f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[318], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 319:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204450f), fp_Flt2FP(-0.048058f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204517f), fp_Flt2FP(-0.048058f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[319], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 320:

    setVector(&u, fp_Flt2FP(-1.204517f), fp_Flt2FP(-0.048058f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[320], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 321:

    setVector(&u, fp_Flt2FP(-1.204523f), fp_Flt2FP(-2.448061f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[321], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 322:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(-1.248061f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.204145f), fp_Flt2FP(-2.448063f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-1.204523f), fp_Flt2FP(-2.448061f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[322], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 323:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484315f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.064682f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484483f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.064821f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[323], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 324:

    setVector(&u, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484483f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.064821f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[324], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 325:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484483f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.064821f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484821f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.065048f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[325], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 326:

    setVector(&u, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484821f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.065048f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[326], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 327:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484821f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.065048f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484977f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.065123f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[327], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 328:

    setVector(&u, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484977f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.065123f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[328], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 329:

    setVector(&u, fp_Flt2FP(1.204571f), fp_Flt2FP(-0.048139f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.204638f), fp_Flt2FP(-0.048139f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.204577f), fp_Flt2FP(0.829126f), fp_Flt2FP(1.940835f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.143915f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[329], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 330:

    setVector(&u, fp_Flt2FP(1.204577f), fp_Flt2FP(0.829126f), fp_Flt2FP(1.940835f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.143915f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(0.827294f), fp_Flt2FP(0.741100f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.144780f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.204571f), fp_Flt2FP(-0.048139f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[330], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 331:

    setVector(&u, fp_Flt2FP(1.204638f), fp_Flt2FP(-0.048139f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.204705f), fp_Flt2FP(-0.048139f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(1.204586f), fp_Flt2FP(0.829730f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.143629f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[331], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 332:

    setVector(&u, fp_Flt2FP(1.204586f), fp_Flt2FP(0.829730f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.143629f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(1.204577f), fp_Flt2FP(0.829126f), fp_Flt2FP(1.940835f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.143915f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.204638f), fp_Flt2FP(-0.048139f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[332], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 333:

    setVector(&u, fp_Flt2FP(1.204571f), fp_Flt2FP(-0.048139f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setVector(&v, fp_Flt2FP(1.204571f), fp_Flt2FP(-0.048139f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(1.204568f), fp_Flt2FP(0.827294f), fp_Flt2FP(0.741100f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.144780f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[333], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 334:

    setVector(&u, fp_Flt2FP(1.204568f), fp_Flt2FP(0.827294f), fp_Flt2FP(0.741100f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.144780f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(1.204568f), fp_Flt2FP(0.824449f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.145964f), fp_Flt2FP(-0.796251f));
    setVector(&w, fp_Flt2FP(1.204571f), fp_Flt2FP(-0.048139f), fp_Flt2FP(0.000570f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.796251f));
    setUVTriangle(&triangle[334], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 335:

    setVector(&u, fp_Flt2FP(-1.204441f), fp_Flt2FP(2.025287f), fp_Flt2FP(0.900398f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.373003f), fp_Flt2FP(-0.920711f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.025187f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.373004f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[335], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 336:

    setVector(&u, fp_Flt2FP(-1.204441f), fp_Flt2FP(2.025287f), fp_Flt2FP(0.900398f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.373003f), fp_Flt2FP(-0.920711f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[336], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 337:

    setVector(&u, fp_Flt2FP(-1.204441f), fp_Flt2FP(2.025287f), fp_Flt2FP(0.900398f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.373003f), fp_Flt2FP(-0.920711f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.351942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[337], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 338:

    setVector(&u, fp_Flt2FP(-1.204477f), fp_Flt2FP(1.325206f), fp_Flt2FP(0.899521f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.081839f), fp_Flt2FP(-0.920711f));
    setVector(&v, fp_Flt2FP(-1.204441f), fp_Flt2FP(2.025287f), fp_Flt2FP(0.900398f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.373003f), fp_Flt2FP(-0.920711f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setUVTriangle(&triangle[338], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 339:

    setVector(&u, fp_Flt2FP(-1.204477f), fp_Flt2FP(1.325206f), fp_Flt2FP(0.899521f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.081839f), fp_Flt2FP(-0.920711f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[339], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 340:

    setVector(&u, fp_Flt2FP(-1.204477f), fp_Flt2FP(1.325206f), fp_Flt2FP(0.899521f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.081839f), fp_Flt2FP(-0.920711f));
    setVector(&v, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.151942f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(1.325190f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.081839f), fp_Flt2FP(-0.987086f));
    setUVTriangle(&triangle[340], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 341:

    setVector(&u, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484821f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-0.421381f), fp_Flt2FP(2.484729f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.335466f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-0.421335f), fp_Flt2FP(2.484542f), fp_Flt2FP(2.089869f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335460f), fp_Flt2FP(-0.925158f));
    setUVTriangle(&triangle[341], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 342:

    setVector(&u, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484977f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484821f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-0.421335f), fp_Flt2FP(2.484542f), fp_Flt2FP(2.089869f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335460f), fp_Flt2FP(-0.925158f));
    setUVTriangle(&triangle[342], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 343:

    setVector(&u, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484977f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-0.421335f), fp_Flt2FP(2.484542f), fp_Flt2FP(2.089869f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335460f), fp_Flt2FP(-0.925158f));
    setUVTriangle(&triangle[343], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 344:

    setVector(&u, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(2.090164f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.925028f));
    setVector(&v, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-0.421335f), fp_Flt2FP(2.484542f), fp_Flt2FP(2.089869f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335460f), fp_Flt2FP(-0.925158f));
    setUVTriangle(&triangle[344], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 345:

    setVector(&u, fp_Flt2FP(0.278955f), fp_Flt2FP(2.484759f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.127109f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.200943f), fp_Flt2FP(2.485019f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.200140f), fp_Flt2FP(2.485187f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[345], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 346:

    setVector(&u, fp_Flt2FP(0.278933f), fp_Flt2FP(2.484512f), fp_Flt2FP(2.091627f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.127199f), fp_Flt2FP(-0.924427f));
    setVector(&v, fp_Flt2FP(0.278955f), fp_Flt2FP(2.484759f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.127109f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(1.200140f), fp_Flt2FP(2.485187f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[346], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 347:

    setVector(&u, fp_Flt2FP(0.278933f), fp_Flt2FP(2.484512f), fp_Flt2FP(2.091627f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.127199f), fp_Flt2FP(-0.924427f));
    setVector(&v, fp_Flt2FP(1.200140f), fp_Flt2FP(2.485187f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setUVTriangle(&triangle[347], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 348:

    setVector(&u, fp_Flt2FP(0.278933f), fp_Flt2FP(2.484512f), fp_Flt2FP(2.091627f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.127199f), fp_Flt2FP(-0.924427f));
    setVector(&v, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.822012f));
    setVector(&w, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(2.090164f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.925028f));
    setUVTriangle(&triangle[348], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 349:

    setVector(&u, fp_Flt2FP(1.200943f), fp_Flt2FP(2.485019f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(0.278955f), fp_Flt2FP(2.484759f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.127109f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(0.278854f), fp_Flt2FP(2.484465f), fp_Flt2FP(1.356966f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.127092f), fp_Flt2FP(-0.731381f));
    setUVTriangle(&triangle[349], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 350:

    setVector(&u, fp_Flt2FP(1.198681f), fp_Flt2FP(2.485187f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.200943f), fp_Flt2FP(2.485019f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(0.278854f), fp_Flt2FP(2.484465f), fp_Flt2FP(1.356966f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.127092f), fp_Flt2FP(-0.731381f));
    setUVTriangle(&triangle[350], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 351:

    setVector(&u, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(1.198681f), fp_Flt2FP(2.485187f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(0.278854f), fp_Flt2FP(2.484465f), fp_Flt2FP(1.356966f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.127092f), fp_Flt2FP(-0.731381f));
    setUVTriangle(&triangle[351], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 352:

    setVector(&u, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(1.356014f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.731762f));
    setVector(&v, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(0.278854f), fp_Flt2FP(2.484465f), fp_Flt2FP(1.356966f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.127092f), fp_Flt2FP(-0.731381f));
    setUVTriangle(&triangle[352], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 353:

    setVector(&u, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(1.356014f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.731762f));
    setVector(&w, fp_Flt2FP(-0.421354f), fp_Flt2FP(2.484374f), fp_Flt2FP(1.354694f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335442f), fp_Flt2FP(-0.732315f));
    setUVTriangle(&triangle[353], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 354:

    setVector(&u, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484483f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&v, fp_Flt2FP(-0.004380f), fp_Flt2FP(2.484684f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.508917f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-0.421354f), fp_Flt2FP(2.484374f), fp_Flt2FP(1.354694f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335442f), fp_Flt2FP(-0.732315f));
    setUVTriangle(&triangle[354], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 355:

    setVector(&u, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484821f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484483f), fp_Flt2FP(0.740578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.987086f));
    setVector(&w, fp_Flt2FP(-0.421354f), fp_Flt2FP(2.484374f), fp_Flt2FP(1.354694f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335442f), fp_Flt2FP(-0.732315f));
    setUVTriangle(&triangle[355], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 356:

    setVector(&u, fp_Flt2FP(-0.421381f), fp_Flt2FP(2.484729f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.335466f), fp_Flt2FP(-0.489246f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484821f), fp_Flt2FP(1.940578f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.009776f), fp_Flt2FP(-0.489246f));
    setVector(&w, fp_Flt2FP(-0.421354f), fp_Flt2FP(2.484374f), fp_Flt2FP(1.354694f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.335442f), fp_Flt2FP(-0.732315f));
    setUVTriangle(&triangle[356], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 357:

    setVector(&u, fp_Flt2FP(-1.121128f), fp_Flt2FP(-2.448064f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.922489f), fp_Flt2FP(-0.496277f));
    setVector(&v, fp_Flt2FP(-1.204145f), fp_Flt2FP(-2.448063f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.933261f), fp_Flt2FP(-0.485535f));
    setVector(&w, fp_Flt2FP(1.205081f), fp_Flt2FP(-2.448143f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.735614f), fp_Flt2FP(-0.483769f));
    setUVTriangle(&triangle[357], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 358:

    setVector(&u, fp_Flt2FP(1.205081f), fp_Flt2FP(-2.448143f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.735614f), fp_Flt2FP(-0.483769f));
    setVector(&v, fp_Flt2FP(1.131909f), fp_Flt2FP(-2.448064f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.751108f), fp_Flt2FP(-0.496277f));
    setVector(&w, fp_Flt2FP(-1.121128f), fp_Flt2FP(-2.448064f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.922489f), fp_Flt2FP(-0.496277f));
    setUVTriangle(&triangle[358], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 359:

    setVector(&u, fp_Flt2FP(1.131909f), fp_Flt2FP(-2.448064f), fp_Flt2FP(0.140989f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.905974f));
    setVector(&v, fp_Flt2FP(1.131689f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.143277f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.898042f));
    setVector(&w, fp_Flt2FP(1.127014f), fp_Flt2FP(-2.485190f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.509370f));
    setUVTriangle(&triangle[359], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 360:

    setVector(&u, fp_Flt2FP(1.127014f), fp_Flt2FP(-2.485190f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.933455f), fp_Flt2FP(-0.509370f));
    setVector(&v, fp_Flt2FP(1.131909f), fp_Flt2FP(-2.448064f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.509370f));
    setVector(&w, fp_Flt2FP(1.131909f), fp_Flt2FP(-2.448064f), fp_Flt2FP(0.140989f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.923043f), fp_Flt2FP(-0.905974f));
    setUVTriangle(&triangle[360], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 361:

    setVector(&u, fp_Flt2FP(1.205145f), fp_Flt2FP(-2.448065f), fp_Flt2FP(0.141218f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.738394f), fp_Flt2FP(-0.906250f));
    setVector(&v, fp_Flt2FP(1.131909f), fp_Flt2FP(-2.448064f), fp_Flt2FP(0.140989f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.751124f), fp_Flt2FP(-0.906250f));
    setVector(&w, fp_Flt2FP(1.131909f), fp_Flt2FP(-2.448064f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.751124f), fp_Flt2FP(-0.496277f));
    setUVTriangle(&triangle[361], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 362:

    setVector(&u, fp_Flt2FP(1.131909f), fp_Flt2FP(-2.448064f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.751124f), fp_Flt2FP(-0.496277f));
    setVector(&v, fp_Flt2FP(1.205081f), fp_Flt2FP(-2.448143f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.738394f), fp_Flt2FP(-0.485535f));
    setVector(&w, fp_Flt2FP(1.205145f), fp_Flt2FP(-2.448065f), fp_Flt2FP(0.141218f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.738394f), fp_Flt2FP(-0.906250f));
    setUVTriangle(&triangle[362], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 363:

    setVector(&u, fp_Flt2FP(-1.121128f), fp_Flt2FP(-2.448064f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.487769f));
    setVector(&v, fp_Flt2FP(1.131909f), fp_Flt2FP(-2.448064f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.487769f));
    setVector(&w, fp_Flt2FP(1.127014f), fp_Flt2FP(-2.485190f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.496934f));
    setUVTriangle(&triangle[363], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 364:

    setVector(&u, fp_Flt2FP(1.127014f), fp_Flt2FP(-2.485190f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.751670f), fp_Flt2FP(-0.496934f));
    setVector(&v, fp_Flt2FP(-1.126026f), fp_Flt2FP(-2.485189f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.496934f));
    setVector(&w, fp_Flt2FP(-1.121128f), fp_Flt2FP(-2.448064f), fp_Flt2FP(2.250738f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.922677f), fp_Flt2FP(-0.487769f));
    setUVTriangle(&triangle[364], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 365:

    setVector(&u, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.112111f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.177024f));
    setVector(&v, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.112111f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.177024f));
    setVector(&w, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.659711f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.101695f));
    setUVTriangle(&triangle[365], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 366:

    setVector(&u, fp_Flt2FP(1.132205f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.659711f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.979284f), fp_Flt2FP(-0.101695f));
    setVector(&v, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.659711f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.101695f));
    setVector(&w, fp_Flt2FP(-1.131217f), fp_Flt2FP(-2.485189f), fp_Flt2FP(0.112111f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.644068f), fp_Flt2FP(-0.177024f));
    setUVTriangle(&triangle[366], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 367:

    setVector(&u, fp_Flt2FP(-0.420121f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.345821f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.650410f), fp_Flt2FP(-0.467773f));
    setVector(&v, fp_Flt2FP(-0.420121f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.393350f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.650410f), fp_Flt2FP(-0.458606f));
    setVector(&w, fp_Flt2FP(0.315615f), fp_Flt2FP(2.631978f), fp_Flt2FP(1.345821f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.526641f), fp_Flt2FP(-0.467773f));
    setUVTriangle(&triangle[367], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 368:

    setVector(&u, fp_Flt2FP(0.315615f), fp_Flt2FP(2.631978f), fp_Flt2FP(1.345821f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.526641f), fp_Flt2FP(-0.467773f));
    setVector(&v, fp_Flt2FP(-0.420121f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.393350f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.650410f), fp_Flt2FP(-0.458606f));
    setVector(&w, fp_Flt2FP(0.315615f), fp_Flt2FP(2.631978f), fp_Flt2FP(2.146432f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.526641f), fp_Flt2FP(-0.236328f));
    setUVTriangle(&triangle[368], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 369:

    setVector(&u, fp_Flt2FP(-0.439045f), fp_Flt2FP(2.631979f), fp_Flt2FP(2.149984f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.653594f), fp_Flt2FP(-0.236328f));
    setVector(&v, fp_Flt2FP(0.315615f), fp_Flt2FP(2.631978f), fp_Flt2FP(2.146432f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.526641f), fp_Flt2FP(-0.236328f));
    setVector(&w, fp_Flt2FP(-0.420121f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.393350f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.650410f), fp_Flt2FP(-0.458606f));
    setUVTriangle(&triangle[369], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 370:

    setVector(&u, fp_Flt2FP(-0.420121f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.393350f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.650410f), fp_Flt2FP(-0.458606f));
    setVector(&v, fp_Flt2FP(-0.439045f), fp_Flt2FP(2.631979f), fp_Flt2FP(1.393350f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.653594f), fp_Flt2FP(-0.458606f));
    setVector(&w, fp_Flt2FP(-0.439045f), fp_Flt2FP(2.631979f), fp_Flt2FP(2.149984f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.653594f), fp_Flt2FP(-0.236328f));
    setUVTriangle(&triangle[370], u, v, w, uUV, vUV, wUV, m, f);

    setObject(&myObj, myMat[1], 371, triangle, f);
    transformObject(&myObj, matMult(genTransMatrix(fp_Flt2FP(1.), fp_Flt2FP(-5.), -fp_Flt2FP(15.), m, f), matMult(genYRotateMat(-fp_Flt2FP(20.), m, f), genXRotateMat(fp_Flt2FP(-90.), m, f), m, f), m, f), m, f);
    addObject(scene, myObj, f);
    ReadTexture(&Textures[2],"d036b58a8e4f4ac58ccf46f2f6c007ba.tga", f);
    setMaterial(&myMat[2], lightSrc, lgrey, fp_Flt2FP(1.0), 0, fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.2), 0, fp_Flt2FP(1.4), 2, m, f);
    // Texture 2

    triangle = (Triangle *)malloc(sizeof(Triangle) * 2);
    // Now begin object writing

    // Triangle 0:

    setVector(&u, fp_Flt2FP(-1.424025f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.702314f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000000f), fp_Flt2FP(-1.000000f));
    setVector(&v, fp_Flt2FP(1.424389f), fp_Flt2FP(-2.705080f), fp_Flt2FP(2.702314f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-1.000000f));
    setVector(&w, fp_Flt2FP(1.424389f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.702314f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.199623f));
    setUVTriangle(&triangle[0], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1:

    setVector(&u, fp_Flt2FP(1.424389f), fp_Flt2FP(2.705001f), fp_Flt2FP(2.702314f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.199623f));
    setVector(&v, fp_Flt2FP(-1.424207f), fp_Flt2FP(2.705080f), fp_Flt2FP(2.702314f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000000f), fp_Flt2FP(-0.199623f));
    setVector(&w, fp_Flt2FP(-1.424025f), fp_Flt2FP(-2.705002f), fp_Flt2FP(2.702314f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000000f), fp_Flt2FP(-1.000000f));
    setUVTriangle(&triangle[1], u, v, w, uUV, vUV, wUV, m, f);

    setObject(&myObj, myMat[2], 2, triangle, f);
    transformObject(&myObj, matMult(genTransMatrix(fp_Flt2FP(1.), fp_Flt2FP(-5.), -fp_Flt2FP(15.), m, f), matMult(genYRotateMat(-fp_Flt2FP(20.), m, f), genXRotateMat(fp_Flt2FP(-90.), m, f), m, f), m, f), m, f);
    addObject(scene, myObj, f);
    ReadTexture(&Textures[3],"d036b58a8e4f4ac58ccf46f2f6c007ba.tga", f);
    setMaterial(&myMat[3], lightSrc, lgrey, fp_Flt2FP(1.0), 0, fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.2), 0, fp_Flt2FP(1.4), 3, m, f);
    // Texture 3

    triangle = (Triangle *)malloc(sizeof(Triangle) * 2);
    // Now begin object writing

    // Triangle 0:

    setVector(&u, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.484999f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000000f), fp_Flt2FP(-1.000000f));
    setVector(&v, fp_Flt2FP(1.204602f), fp_Flt2FP(2.484481f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-1.000000f));
    setVector(&w, fp_Flt2FP(1.205593f), fp_Flt2FP(-2.448144f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.199623f));
    setUVTriangle(&triangle[0], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1:

    setVector(&u, fp_Flt2FP(1.205593f), fp_Flt2FP(-2.448144f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.199623f));
    setVector(&v, fp_Flt2FP(-1.203632f), fp_Flt2FP(-2.448064f), fp_Flt2FP(2.338474f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000000f), fp_Flt2FP(-0.199623f));
    setVector(&w, fp_Flt2FP(-1.204380f), fp_Flt2FP(2.484999f), fp_Flt2FP(2.338473f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000000f), fp_Flt2FP(-1.000000f));
    setUVTriangle(&triangle[1], u, v, w, uUV, vUV, wUV, m, f);

    setObject(&myObj, myMat[3], 2, triangle, f);
    transformObject(&myObj, matMult(genTransMatrix(fp_Flt2FP(1.), fp_Flt2FP(-5.), -fp_Flt2FP(15.), m, f), matMult(genYRotateMat(-fp_Flt2FP(20.), m, f), genXRotateMat(fp_Flt2FP(-90.), m, f), m, f), m, f), m, f);
    addObject(scene, myObj, f);
    ReadTexture(&Textures[4],"d036b58a8e4f4ac58ccf46f2f6c007ba.tga", f);
    setMaterial(&myMat[4], lightSrc, lgrey, fp_Flt2FP(1.0), 0, fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.2), 0, fp_Flt2FP(1.4), 4, m, f);
    // Texture 4

    triangle = (Triangle *)malloc(sizeof(Triangle) * 2);
    // Now begin object writing

    // Triangle 0:

    setVector(&u, fp_Flt2FP(-1.204605f), fp_Flt2FP(-2.448065f), fp_Flt2FP(0.141285f), f);
    setUVCoord(&uUV, fp_Flt2FP(0.000000f), fp_Flt2FP(-1.000000f));
    setVector(&v, fp_Flt2FP(1.205145f), fp_Flt2FP(-2.448065f), fp_Flt2FP(0.141285f), f);
    setUVCoord(&vUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-1.000000f));
    setVector(&w, fp_Flt2FP(1.197415f), fp_Flt2FP(2.485016f), fp_Flt2FP(0.141285f), f);
    setUVCoord(&wUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.199623f));
    setUVTriangle(&triangle[0], u, v, w, uUV, vUV, wUV, m, f);

    // Triangle 1:

    setVector(&u, fp_Flt2FP(1.197415f), fp_Flt2FP(2.485016f), fp_Flt2FP(0.141285f), f);
    setUVCoord(&uUV, fp_Flt2FP(1.000000f), fp_Flt2FP(-0.199623f));
    setVector(&v, fp_Flt2FP(-1.204383f), fp_Flt2FP(2.484315f), fp_Flt2FP(0.141285f), f);
    setUVCoord(&vUV, fp_Flt2FP(0.000000f), fp_Flt2FP(-0.199623f));
    setVector(&w, fp_Flt2FP(-1.204605f), fp_Flt2FP(-2.448065f), fp_Flt2FP(0.141285f), f);
    setUVCoord(&wUV, fp_Flt2FP(0.000000f), fp_Flt2FP(-1.000000f));
    setUVTriangle(&triangle[1], u, v, w, uUV, vUV, wUV, m, f);

    setObject(&myObj, myMat[4], 2, triangle, f);
    transformObject(&myObj, matMult(genTransMatrix(fp_Flt2FP(1.), fp_Flt2FP(-5.), -fp_Flt2FP(15.), m, f), matMult(genYRotateMat(-fp_Flt2FP(20.), m, f), genXRotateMat(fp_Flt2FP(-90.), m, f), m, f), m, f), m, f);
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
