/* This is a C version of the ray tracer that will be implemented
 * in DAMSON
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
// #include <math.h>

// Fixed point math functions
#include "fpmath.h"

// Program defines
#include "craytracer.h"

// Colour defines
#include "colours.h"

// Define basic datatypes
#include "datatypes.h"
#include "image.h"
#include "objects.h"
#include "shapes.h"
#include "rays.h"
#include "lighting.h"

// Define the construction instructions
#include "OFconstruct.h"

// Add math stats
#include "mathstats.h"

// Add function stats
#include "funcstats.h"

int main(int argc, char *argv[])
{
    Scene scene;
    Light light;
    Camera camera;
	char *currObj;
	int isParam;
	char *parVal;
	int i, n, a;
    Vector lightColour, lightLocation, cameraLocation, cameraDirection;
    Image image;
    Ray ray;
    Colour outputColour;
    char *filename;
    MathStat m;
    FuncStat f;

    int width = 1024;
    int height = 768;
    int recursions = 2;

	parVal = "";
    filename = "output.ppm";

	// Version information:
	printf("\nRayTracer ");
	printf("Version: %i.%i.%i (%s)\n", VERSION_MAJOR, VERSION_MINOR, VERSION_BUILD, VERSION_DATE);
	printf("Author: Andrew Hills (a.hills@sheffield.ac.uk)\n\n");
    
    // Initialise stats
    initStats(&m);
    initFuncStats(&f);
    
	for (i = 1; i<argc; i++)
	{
		currObj = argv[i];
		isParam = 0;
		a = strlen(argv[i]);
		for (n = 0; n<a; n++)
		{
//			printf("Currently: %c\n", argv[i][n]);
			if (argv[i][n] == '-')
				isParam = 1;
			else
				break;
		}
		if (isParam == 1)
		{
//			printf("before: %s\n", currObj);
			memmove(&currObj[0], &currObj[n], strlen(currObj) - n+1);
//			printf("after: %s\n", currObj);
			parVal = currObj;
		}
		else
		{
//			printf("At options with %s\n", parVal);
			if (strcmp(parVal, "") != 0)
			{
//				printf("%i: %s\n", i, parVal);
				if (strcmp(parVal, "width") == 0)
					width = atoi(currObj) == 0 ? 1024 : atoi(currObj);
				else
				{
					if (strcmp(parVal, "height") == 0)
						height = atoi(currObj) == 0 ? 768 : atoi(currObj);
					else
					{
                        if (strcmp(parVal, "recursions") == 0)
                            recursions = (atoi(currObj) < 0) ? 2 : atoi(currObj);
                        else
                        {
                            if (strcmp(parVal, "filename") == 0)
                                filename = currObj;
                            else
                                printf("Unrecognised input \"%s\"\n", parVal);
                        }
                    }
				}
			}
		}
	}
	printf("Canvas set to resolution %i x %i\n\n", width, height);
    
    // Define lighting:
    setVector(&lightColour, fp_fp1, fp_fp1, fp_fp1, &f);
    setVector(&lightLocation, -fp_fp1, fp_Int2FP(4), fp_Int2FP(4), &f);
    setLight(&light, lightLocation, lightColour, fp_Flt2FP(0.3), &f);
    printf("Lighting defined.\n");
    
    // Build scene
    populateScene(&scene, light, &m, &f);
    printf("Scene initialised.\n");
    
    // Camera configuration
    setVector(&cameraLocation, fp_Int2FP(1), fp_Int2FP(2), fp_Int2FP(4), &f);
    setVector(&cameraDirection, fp_Int2FP(1), 0, -fp_Int2FP(6), &f);
    setCamera(&camera, cameraLocation, cameraDirection, fp_Int2FP(45), width, height, &m, &f);
    printf("Camera is ready.\n");
    
    // Configure image
    initialiseImage(&image, width, height);
    printf("Image is initialised.\n");
    
    printf("Initialisation Stats:\n\n");
    printf("Floating Point Operations:\n");
    printf("+: %lld\t-: %lld\t*: %lld\t/:%lld\n", m.plusFlt, m.subtractFlt, m.multiplyFlt, m.divideFlt);
    printf("Cos: %lld\tSin: %lld\tPow: %lld\tSqrt:%lld\n", m.cosine, m.sine, m.power, m.sqrtFlt);
    printf("Integer Operations:\n");
    printf("+: %lld\t-: %lld\t*: %lld\t/:%lld\n\n", m.plusInt, m.subtractInt, m.multiplyInt, m.divideInt);
    
    // Now reset the stats
    initStats(&m);
    initFuncStats(&f);
    
    
    // Now go through every pixel
    for (i = 0; i < height; i++)
    {
        for (n = 0; n < width; n++)
        {
//             printf("Drawing pixel at row %i and column %i:\n", i, n);
//             printf("Creating ray... ");
            ray = createRay(n, i, camera, &m, &f);
//             printf("Created.\nStarting to draw... ");
            outputColour = vec2Colour(draw(ray, scene, light, recursions, &m, &f));
//             printf("Draw complete.\nSetting pixel... ");
            setPixel(&image, n, i, outputColour);
//             printf("Pixel set at row %i and column %i.\n", i, n);
        }
    }
    printf("Writing image... ");
    writeImageASC(image, filename);
    printf("Complete.\nResetting scene...");
    resetScene(&scene, &f);
    printf("Complete.\n\n");
    
    printf("Stats:\n\n");
    printf("Floating Point Operations:\n");
    printf("+: %lld\t-: %lld\t*: %lld\t/:%lld\n", m.plusFlt, m.subtractFlt, m.multiplyFlt, m.divideFlt);
    printf("Cos: %lld\tSin: %lld\tPow: %lld\tSqrt:%lld\n", m.cosine, m.sine, m.power, m.sqrtFlt);
    printf("Integer Operations:\n");
    printf("+: %lld\t-: %lld\t*: %lld\t/:%lld\n\n", m.plusInt, m.subtractInt, m.multiplyInt, m.divideInt);
    
    
    
    printf("Function stats:\n\n");
    printf("setVector: %lld\n", f.setVector);
    printf("setMatrix: %lld\n", f.setMatrix);
    printf("deg2rad: %lld\n", f.deg2rad);
    printf("vecMult: %lld\n", f.vecMult);
    printf("dot: %lld\n", f.dot);
    printf("cross: %lld\n", f.cross);
    printf("scalarVecMult: %lld\n", f.scalarVecMult);
    printf("scalarVecDiv: %lld\n", f.scalarVecDiv);
    printf("vecAdd: %lld\n", f.vecAdd);
    printf("vecSub: %lld\n", f.vecSub);
    printf("negVec: %lld\n", f.negVec);
    printf("vecLength: %lld\n", f.vecLength);
    printf("vecNormalised: %lld\n", f.vecNormalised);
    printf("matVecMult: %lld\n", f.matVecMult);
    printf("matMult: %lld\n", f.matMult);
    printf("genIdentMat: %lld\n", f.genIdentMat);
    printf("genXRotateMat: %lld\n", f.genXRotateMat);
    printf("genYRotateMat: %lld\n", f.genYRotateMat);
    printf("genZRotateMat: %lld\n", f.genZRotateMat);
    printf("getRotateMatrix: %lld\n", f.getRotateMatrix);
    printf("genTransMatrix: %lld\n", f.genTransMatrix);
    printf("genScaleMatrix: %lld\n", f.genScaleMatrix);
    printf("setTriangle: %lld\n", f.setTriangle);
    printf("ambiance: %lld\n", f.ambiance);
    printf("diffusion: %lld\n", f.diffusion);
    printf("specular: %lld\n", f.specular);
    printf("setMaterial: %lld\n", f.setMaterial);
    printf("setObject: %lld\n", f.setObject);
    printf("initialiseScene: %lld\n", f.initialiseScene);
    printf("getTriangleTotal: %lld\n", f.getTriangleTotal);
    printf("addObject: %lld\n", f.addObject);
    printf("deleteObject: %lld\n", f.deleteObject);
    printf("resetScene: %lld\n", f.resetScene);
    printf("setLight: %lld\n", f.setLight);
    printf("setCamera: %lld\n", f.setCamera);
    printf("transformObject: %lld\n", f.transformObject);
    printf("setRay: %lld\n", f.setRay);
    printf("createRay: %lld\n", f.createRay);
    printf("triangleIntersection: %lld\n", f.triangleIntersection);
    printf("objectIntersection: %lld\n", f.objectIntersection);
    printf("sceneIntersection: %lld\n", f.sceneIntersection);
    printf("traceShadow: %lld\n", f.traceShadow);
    printf("reflectRay: %lld\n", f.reflectRay);
    printf("refractRay: %lld\n", f.refractRay);
    printf("draw: %lld\n", f.draw);
    
	// Exit cleanly
	return 0;
}
