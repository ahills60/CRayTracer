/*
 * bytecodeconstruct.h
 * 
 * This header file provides functions to read and interpret
 * a byte-code file produced by the OF2RayTracer.py script.
 *
 *  Created on: 1 Apr 2014
 *      Author: andrew
 */

#ifndef BYTECODECONSTRUCT_H_
#define BYTECODECONSTRUCT_H_

#include <stdio.h>
#include "fpmath.h"
#include "craytracer.h"
#include "datatypes.h"
#include "rays.h"
#include "image.h"
#include "lighting.h"
#include "objects.h"
#include "colours.h"
#include "mathstats.h"
#include "funcstats.h"
#include "textures.h"

Texture *Textures;
extern char *inputFile;

/* Function to read the byte file */
void ReadByteFile(Scene *scene, Light lightSrc, MathStat *m, FuncStat *f)
{
    // Variable declarations:
    FILE *fp;
    Vector lgrey = int2Vector(LIGHT_GREY);
    Vector u, v, w;
    UVCoord uUV, vUV, wUV;
    fixedp x, y, z, a, b;
    Triangle *triangle;
    Object myObj;
    int i, n, zeroCheck, matIdx, textIdx, noTriangles, noMaterials, noTextures;
    char *texturefn;
    // Variables for precomputing:
    int DominantAxisIdx, NUDom, NVDom, NDDom, BUDom, BVDom, CUDom, CVDom;
    fixedp vmu, wmu;
    Vector NormDom, normcrvmuwmu;
    
    // File initialisation
    printf("\nReading world \"%s\"...\n", inputFile);
    
    fp = fopen(inputFile, "rb");
    
    // Read the number of materials
    fread(&noMaterials, sizeof(noMaterials), 1, fp);
    // Then read the number of textures:
    fread(&noTextures, sizeof(noTextures), 1, fp);
    
    printf("Total materials: %i\nTotal textures: %i\n", noMaterials, noTextures);
    
    printf("Initialising variables...\n");
    // With this in mind, it's now possible to initialise the textures and materials store.
    Textures = (Texture *)malloc(sizeof(Texture) * noTextures);
    // Materials need only be specified here.
    Material myMat[noMaterials];
    
    printf("Initialising scene with %i objects...\n", noMaterials);
    // Next up: scene initialisation
    initialiseScene(scene, noMaterials, f);
    
    printf("Reading textures...\n");
    for (i = 0; i < noTextures; i++)
    {
        // Read the size of the filename to open
        // printf("Reading texture %i...\n", i);
        fread(&n, sizeof(n), 1, fp);
        // printf("Reserving space for character... ");
        texturefn = (char *)malloc(sizeof(char) * (n + 1));
        memset(texturefn, 0, sizeof(char) * (n + 1));
        // printf("Space reserved (%i)\nReading texture filename...\n", n);
        // The variable texturefn is a pointer. Pass the pointer directly.
        fread(texturefn, sizeof(char), n, fp);
        // printf("Attempting to read \"%s\"", texturefn);
        if (strcmp(texturefn, "terrain.tga") != 0)
        {
            memcpy(texturefn, texturefn + 12, 36);
            memset(texturefn + 36, 0, sizeof(char) * 12);
        }
        ReadTexture(&Textures[i], texturefn, f);
        // printf("Texture read. Freeing memory.\n");
        free(texturefn);
        // printf("Memory freed.\n");
    }
    printf("Complete.\n");
    fread(&zeroCheck, sizeof(int), 1, fp);
    if (zeroCheck != 0)
    {
        printf("\nError encountered entering filenames. Failed zero check.\n");
        // Terminate now.
        exit(-1);
    }
    
    // Everything looks okay. Let's continue to the material and indexing structures
    for (i = 0; i < noMaterials; i++)
    {
        // Read the material index and then read the texture index
        fread(&matIdx, sizeof(int), 1, fp);
        fread(&textIdx, sizeof(int), 1, fp);
        
        // Now create a material:
        setMaterial(&myMat[matIdx], lightSrc, lgrey, fp_Flt2FP(1.0), 0, fp_Flt2FP(0.1), fp_Flt2FP(0.5), fp_Flt2FP(0.2), 0, fp_Flt2FP(1.4), textIdx, m, f);
    }
    // Once agian, do a zero check:
    fread(&zeroCheck, sizeof(int), 1, fp);
    if (zeroCheck != 0)
    {
        printf("\nError encountered pairing materials with textures. Failed zero check.\n");
        // Terminate now:
        exit(-2);
    }
    
    // Next step is to go through triangles
    fread(&noTriangles, sizeof(int), 1, fp);
    // Whilst the EOF flag isn't raised:
    while(!feof(fp))
    {
        triangle = (Triangle *)malloc(sizeof(Triangle) * noTriangles);
        for (i = 0; i < noTriangles; i++)
        {
            // Vector Values
            fread(&x, sizeof(fixedp), 1, fp);
            fread(&y, sizeof(fixedp), 1, fp);
            fread(&z, sizeof(fixedp), 1, fp);
            // UV coords
            fread(&a, sizeof(fixedp), 1, fp);
            fread(&b, sizeof(fixedp), 1, fp);
            
            x >>= 1;
            y >>= 1;
            z >>= 1;
            
            // Add to vector:
            setVector(&u, x, y, z, f);
            setUVCoord(&uUV, a, b);
            
            // Vector Values
            fread(&x, sizeof(fixedp), 1, fp);
            fread(&y, sizeof(fixedp), 1, fp);
            fread(&z, sizeof(fixedp), 1, fp);
            // UV coords
            fread(&a, sizeof(fixedp), 1, fp);
            fread(&b, sizeof(fixedp), 1, fp);
            
            x >>= 1;
            y >>= 1;
            z >>= 1;
            
            // Add to vector:
            setVector(&v, x, y, z, f);
            setUVCoord(&vUV, a, b);
            
            // Vector Values
            fread(&x, sizeof(fixedp), 1, fp);
            fread(&y, sizeof(fixedp), 1, fp);
            fread(&z, sizeof(fixedp), 1, fp);
            // UV coords
            fread(&a, sizeof(fixedp), 1, fp);
            fread(&b, sizeof(fixedp), 1, fp);
            
            x >>= 1;
            y >>= 1;
            z >>= 1;
            
            // Add to vector:
            setVector(&w, x, y, z, f);
            setUVCoord(&wUV, a, b);
            
            //
            // Now precomputed variables:
            //
            
            // k:
            fread(&DominantAxisIdx, sizeof(int), 1, fp);
            
            // c == vmu:
            fread(&x, sizeof(fixedp), 1, fp);
            fread(&y, sizeof(fixedp), 1, fp);
            fread(&z, sizeof(fixedp), 1, fp);
            setVector(&vmu, x, y, z, f);
            
            // b == wmu:
            fread(&x, sizeof(fixedp), 1, fp);
            fread(&y, sizeof(fixedp), 1, fp);
            fread(&z, sizeof(fixedp), 1, fp);
            setVector(&wmu, x, y, z, f);
            
            // m_N == NormDom
            fread(&x, sizeof(fixedp), 1, fp);
            fread(&y, sizeof(fixedp), 1, fp);
            fread(&z, sizeof(fixedp), 1, fp);
            setVector(&NormDom, x, y, z, f);
            
            // m_N_norm == normcrvmuwmu
            fread(&x, sizeof(fixedp), 1, fp);
            fread(&y, sizeof(fixedp), 1, fp);
            fread(&z, sizeof(fixedp), 1, fp);
            setVector(&normcrvmuwmu, x, y, z, f);
            
            // nu
            fread(&NUDom, sizeof(fixedp), 1, fp);
            // nv
            fread(&NVDom, sizeof(fixedp), 1, fp);
            // nd
            fread(&NDDom, sizeof(fixedp), 1, fp);
            // bnu
            fread(&BUDom, sizeof(fixedp), 1, fp);
            // bnv
            fread(&BVDom, sizeof(fixedp), 1, fp);
            // cnu
            fread(&CUDom, sizeof(fixedp), 1, fp);
            // cnv
            fread(&CVDom, sizeof(fixedp), 1, fp);
            
            // Now commit this to a triangle
            setPrecompTriangle(&triangle, u, v, w, uUV, vUV, wUV, vmu, wmu, normcrvmuwmu, DominantAxisIdx, NormDom, NUDom, NVDom, NDDom, BUDom, BVDom, CUDom, CVDom, f)
        }
        // Triangles are now added. Read the associated material index
        fread(&matIdx, sizeof(int), 1, fp);
        setObject(&myObj, myMat[matIdx], noTriangles, triangle, f);
        addObject(scene, myObj, f);
        // Now free up the space
        // free(triangle);
        
        // Finally do a zero check
        fread(&zeroCheck, sizeof(int), 1, fp);
        if (zeroCheck != 0)
        {
            printf("\nError encountered pairing triangle points with UV values. Failed zero check.\n");
            // Terminate now:
            exit(-3);
        }
        // Now read the next number of triangles value. EOF will raise if this failed.
        fread(&noTriangles, sizeof(int), 1, fp);
    }
    fclose(fp);
}

/* The populateScene function calls the ReadByteFile function. This is here mainly
   for compatibility with older generations of the OFconstruct header file.        */
void populateScene(Scene *scene, Light lightSrc, MathStat *m, FuncStat *f)
{
    // Pass all inputs to the byte file reader.
    ReadByteFile(scene, lightSrc, m, f);
}

/* And then the standard draw function that's been previously constructed */
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