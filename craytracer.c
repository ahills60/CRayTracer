/* This is a C version of the ray tracer that will be implemented
 * in DAMSON
 */
// #define DEBUG
#ifdef DEBUG
#define DEBUG_PRINT printf
#define DEBUG_statGroupFlt statGroupFlt
#define DEBUG_statGroupInt statGroupInt
#define DEBUG_statDivideFlt statDivideFlt
#define DEBUG_statPlusInt statPlusInt
#define DEBUG_statPlusFlt statPlusFlt
#define DEBUG_statSqrtFlt statSqrtFlt
#define DEBUG_statMultiplyFlt statMultiplyFlt
#define DEBUG_statSubtractInt statSubtractInt
#define DEBUG_statSubtractFlt statSubtractFlt
#define DEBUG_statSine statSine
#define DEBUG_statCosine statCosine
#define DEBUG_statPower statPower
#else
#define DEBUG_PRINT(...)
#define DEBUG_statGroupFlt(...)
#define DEBUG_statGroupInt(...)
#define DEBUG_statDivideFlt(...)
#define DEBUG_statPlusInt(...)
#define DEBUG_statPlusFlt(...)
#define DEBUG_statSqrtFlt(...)
#define DEBUG_statMultiplyFlt(...)
#define DEBUG_statSubtractInt(...)
#define DEBUG_statSubtractFlt(...)
#define DEBUG_statSine(...)
#define DEBUG_statCosine(...)
#define DEBUG_statPower(...)
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <omp.h>
#include <GL/glut.h>
#include <time.h>
#include <pthread.h>
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
#include "textures.h"

// Define the construction instructions
#include "bytecodeconstruct.h"
// #include "construct.h"
// #include "OFconstruct4.h"

// Add math stats
#include "mathstats.h"

// Add function stats
#include "funcstats.h"

// Add global variables
Scene PrimaryScene;
Light PrimaryLight;
Camera PrimaryCamera;
Image PrimaryImage;
MathStat PrimaryM;
FuncStat PrimaryF;
int PrimaryRecursions;
int TerminateFlag;
int ForceRedraw[MAXTHREADS];
fixedp CameraAngleTheta;
fixedp CameraAnglePhi;
char *inputFile;
int NoTransparencyFlag;
int GlobalLightingFlag;

pthread_t drawing_thread[MAXTHREADS];

void *PixelDraw(void* inputPar)
{
    int i, offset, pixeloffset;//, n;
    Colour outputColour;
    Ray ray;
    
    
    offset = *((int *) inputPar);
    printf("Thread created with offset %i.\n", offset);
    
    int noPixels = ScreenHeight * ScreenWidth;
    int currX = 0, currY = 0;
    
    pixeloffset = offset;
    
    // Let's give the impression that the ray tracer is doing more by separating across the height too:
    pixeloffset += (noPixels / MAXTHREADS) * pixeloffset;
    
    // for (n = 0; n < 100; n++)
    do
    {
        // Reset the redraw flag as this counts as a redraw
        ForceRedraw[offset] = 0;
        // Initialise with pixeloffset. When the end is reached, it'll revert back to (0 + offset).
        i = pixeloffset;
        // for(i = offset; i < noPixels; i += MAXTHREADS)
        while (!ForceRedraw[offset])
        {
            // Decode index
            currY = (int) (i / ScreenWidth);
            currX = i - (currY * ScreenWidth);
            
            // Now create rays
            ray = createRay(currX, currY, PrimaryCamera, &PrimaryM, &PrimaryF);
            // Output Colour
            outputColour = vec2Colour(draw(ray, PrimaryScene, PrimaryLight, PrimaryRecursions, &PrimaryM, &PrimaryF));
            // Save pixel to output buffer, pausing if currently in use.
            setPixel(&PrimaryImage, currX, currY, outputColour);
            // Increment pixel position
            i += MAXTHREADS;
            // Jump to start if the end is reached
            if (i >= noPixels)
                i = offset;
                // ForceRedraw[offset] = 1;
        }
    } while (!TerminateFlag);
    // }
    printf("Thread with offset %i terminated.\n", offset);
    free(inputPar);
    return NULL;
}


int main(int argc, char *argv[])
{
	char *currObj;
	int isParam;
	char *parVal;
	int i, n, a;
    Vector lightColour, lightLocation, lightDirection, cameraLocation, cameraDirection;
    char *filename;

    int width = 1024;
    int height = 768;
    int interactive = 0;
    void *status;
    int *arg[MAXTHREADS];
    
    // ForceRedraw = 0;
    memset(ForceRedraw, 0, sizeof(ForceRedraw));
    TerminateFlag = 1;
    PrimaryRecursions = 2;
    NoTransparencyFlag = 0;
    GlobalLightingFlag = 0;

	parVal = "";
    filename = "output.ppm";
    inputFile = "\0";

	// Version information:
	printf("\nRayTracer ");
	printf("Version: %i.%i.%i (%s)\n", VERSION_MAJOR, VERSION_MINOR, VERSION_BUILD, VERSION_DATE);
	printf("Author: Andrew Hills (a.hills@sheffield.ac.uk)\n\n");
    
    time_t timer = time(NULL);
    printf("Current timestamp: %s\n", asctime(localtime(&timer)));
    // Initialise stats
    initStats(&PrimaryM);
    initFuncStats(&PrimaryF);
    
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
            
            // Check to see if this is an interactive declaration. If so, then set interactive flag:
            if (strcmp(parVal, "interactive") == 0)
                interactive = 1;
            if (strcmp(parVal, "notransparency") == 0)
                NoTransparencyFlag = 1;
            if (strcmp(parVal, "globallighting") == 0)
                GlobalLightingFlag = 1;
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
                            PrimaryRecursions = (atoi(currObj) < 0) ? 2 : atoi(currObj);
                        else
                        {
                            if (strcmp(parVal, "filename") == 0)
                                filename = currObj;
                            else
                            {
                                if (strcmp(parVal, "input") == 0)
                                    inputFile = currObj;
                                else
                                    printf("Unrecognised input \"%s\"\n", parVal);
                            }
                        }
                    }
				}
			}
		}
	}
	printf("Canvas set to resolution %i x %i\n\n", width, height);
    printf("Recursions to compute: %i\n\n", PrimaryRecursions);
    if (NoTransparencyFlag)
        printf("Texture transparency disabled.\n\n");
    else
        printf("Texture transparency enabled.\n\n");
    
    if (GlobalLightingFlag)
        printf("Global lighting enabled. Spot lighting disabled.\n\n");
    else
        printf("Spot lighting enabled. Global lighting disabled.\n\n");
    
    if (interactive)
        printf("Interactive mode enabled.\n\n");
    
    // Define lighting:
    setVector(&lightColour, fp_fp1, fp_fp1, fp_fp1, &PrimaryF);
    // Light should be defined based on the scene.
    if (inputFile[0] == '\0')
    {
        // Default scene
        setVector(&lightLocation, fp_Int2FP(-1), fp_Int2FP(4), fp_Int2FP(4), &PrimaryF);         // Good for construct.h
        setVector(&lightDirection, fp_Flt2FP(-0.441128773), fp_Flt2FP(0.514650235), fp_Flt2FP(0.735214622), &PrimaryF); // Light at -1, 4, 4;  focus at 2, 0.5, -1
    }
    else
    {
        // Scene from file.
        setVector(&lightLocation, fp_Int2FP(100), fp_Int2FP(100), fp_Int2FP(200), &PrimaryF);
        setVector(&lightDirection, fp_Flt2FP(-0.4459765), fp_Flt2FP(-0.6689647), fp_Flt2FP(0.59463532), &PrimaryF);     // Light at 0, 0, 400; focus at 300, 450, 0
    }
    setLight(&PrimaryLight, lightLocation, lightDirection, lightColour, fp_Flt2FP(0.3), &PrimaryF);
    printf("Lighting defined.\n");
    
    // Build scene
    populateScene(&PrimaryScene, PrimaryLight, &PrimaryM, &PrimaryF);
    printf("Scene initialised.\n");
    
    // Camera configuration
    if (inputFile[0] == '\0')
    {
        // Default scene
        setVector(&cameraLocation, fp_Int2FP(1), fp_Int2FP(2), fp_Int2FP(4), &PrimaryF);         // Good for construct.h
        CameraAngleTheta = 0x0001C4A8;                                                           // Good for construct.h
        CameraAnglePhi = 0xFFFE6DDE;                                                             // Good for construct.h
    }
    else
    {
        // Scene from file
        setVector(&cameraLocation, fp_Int2FP(300), fp_Int2FP(450), fp_Int2FP(60), &PrimaryF);
        setVector(&cameraLocation, fp_Int2FP(300), fp_Int2FP(450), fp_Int2FP(200), &PrimaryF);
        CameraAngleTheta = 0x000181A3;
        CameraAnglePhi = 0xFFFF2096;
    }
    
    // setVector(&cameraDirection, fp_Int2FP(1), 0, -fp_Int2FP(6), &PrimaryF);
    // setVector(&cameraDirection, 0, 0xFFFFCEB6, 0xFFFF04CA, &PrimaryF);
    setVector(&cameraDirection, fp_mult(fp_sin(CameraAngleTheta), fp_cos(CameraAnglePhi)), fp_cos(CameraAngleTheta), fp_mult(fp_sin(CameraAngleTheta), fp_sin(CameraAnglePhi)), &PrimaryF);
    
    //setCamera(Camera *camera, Vector location, Vector view, fixedp fov, int width, int height, MathStat *m, FuncStat *f)
    setCamera(&PrimaryCamera, cameraLocation, cameraDirection, fp_Int2FP(45), width, height, &PrimaryM, &PrimaryF);
    printf("Camera is ready.\n");
    
    // Configure image
    initialiseImage(&PrimaryImage, width, height);
    printf("Image is initialised.\n");
    
    // Initialise pixel store
    initialisePixelStore(width, height);
    printf("Pixel store is initialised.\n");
    
    printf("Initialisation Stats:\n\n");
    printf("Floating Point Operations:\n");
    printf("+: %lld\t-: %lld\t*: %lld\t/: %lld\n", PrimaryM.plusFlt, PrimaryM.subtractFlt, PrimaryM.multiplyFlt, PrimaryM.divideFlt);
    printf("Cos: %lld\tSin: %lld\tPow: %lld\tSqrt: %lld\n", PrimaryM.cosine, PrimaryM.sine, PrimaryM.power, PrimaryM.sqrtFlt);
    printf("Integer Operations:\n");
    printf("+: %lld\t-: %lld\t*: %lld\t/: %lld\n\n", PrimaryM.plusInt, PrimaryM.subtractInt, PrimaryM.multiplyInt, PrimaryM.divideInt);
    
    // Now reset the stats
    initStats(&PrimaryM);
    initFuncStats(&PrimaryF);
    
    // Now load interactive modules if enabled
    if (interactive)
    {
        printf("Starting interactive session...\n\n");
        initialiseGLUT(argc, argv);
        TerminateFlag = 0;
    }
    
    // Spawn a thread for drawing
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    for (i = 0; i < MAXTHREADS; i++)
    {
        arg[i] = (int *)malloc(sizeof(int));
        *arg[i] = i;
        pthread_create(&drawing_thread[i], NULL, PixelDraw, (void *) arg[i]);
    }
    
    // The following are loops that will hold for as long as needed.
    if (interactive)
        glutMainLoop();
    else
        for (i = 0; i < MAXTHREADS; i++)
            pthread_join(drawing_thread[i], &status);
    gettimeofday(&stop, NULL);
    long long usec_diff = (stop.tv_sec - start.tv_sec)*1000000 + (stop.tv_usec - start.tv_usec);
    printf("\n\nTime taken: %llu\n\n", usec_diff);
    // #pragma omp parallel private(n)
    // {
    // // Now go through every pixel
    // #pragma omp for schedule(dynamic, 1)
    // 
    // }
    timer = time(NULL);
    printf("\n\nRendering complete at: %s\n\n", asctime(localtime(&timer)));
    printf("Writing image... ");
    writeImageASC(PrimaryImage, filename);
    printf("Complete.\nResetting scene...");
    resetScene(&PrimaryScene, &PrimaryF);
    printf("Complete.\n\n");
    
    printf("Stats:\n\n");
    printf("Floating Point Operations:\n");
    printf("+: %lld\t-: %lld\t*: %lld\t/: %lld\n", PrimaryM.plusFlt, PrimaryM.subtractFlt, PrimaryM.multiplyFlt, PrimaryM.divideFlt);
    printf("Cos: %lld\tSin: %lld\tPow: %lld\tSqrt: %lld\n", PrimaryM.cosine, PrimaryM.sine, PrimaryM.power, PrimaryM.sqrtFlt);
    printf("Integer Operations:\n");
    printf("+: %lld\t-: %lld\t*: %lld\t/: %lld\n\n", PrimaryM.plusInt, PrimaryM.subtractInt, PrimaryM.multiplyInt, PrimaryM.divideInt);
    
    
    
    printf("Function stats:\n\n");
    printf("setVector: %lld\n", PrimaryF.setVector);
    printf("setMatrix: %lld\n", PrimaryF.setMatrix);
    printf("deg2rad: %lld\n", PrimaryF.deg2rad);
    printf("vecMult: %lld\n", PrimaryF.vecMult);
    printf("dot: %lld\n", PrimaryF.dot);
    printf("cross: %lld\n", PrimaryF.cross);
    printf("scalarVecMult: %lld\n", PrimaryF.scalarVecMult);
    printf("scalarVecDiv: %lld\n", PrimaryF.scalarVecDiv);
    printf("vecAdd: %lld\n", PrimaryF.vecAdd);
    printf("vecSub: %lld\n", PrimaryF.vecSub);
    printf("negVec: %lld\n", PrimaryF.negVec);
    printf("vecLength: %lld\n", PrimaryF.vecLength);
    printf("vecNormalised: %lld\n", PrimaryF.vecNormalised);
    printf("matVecMult: %lld\n", PrimaryF.matVecMult);
    printf("matMult: %lld\n", PrimaryF.matMult);
    printf("genIdentMat: %lld\n", PrimaryF.genIdentMat);
    printf("genXRotateMat: %lld\n", PrimaryF.genXRotateMat);
    printf("genYRotateMat: %lld\n", PrimaryF.genYRotateMat);
    printf("genZRotateMat: %lld\n", PrimaryF.genZRotateMat);
    printf("getRotateMatrix: %lld\n", PrimaryF.getRotateMatrix);
    printf("genTransMatrix: %lld\n", PrimaryF.genTransMatrix);
    printf("genScaleMatrix: %lld\n", PrimaryF.genScaleMatrix);
    printf("setTriangle: %lld\n", PrimaryF.setTriangle);
    printf("ambiance: %lld\n", PrimaryF.ambiance);
    printf("diffusion: %lld\n", PrimaryF.diffusion);
    printf("specular: %lld\n", PrimaryF.specular);
    printf("setMaterial: %lld\n", PrimaryF.setMaterial);
    printf("setObject: %lld\n", PrimaryF.setObject);
    printf("initialiseScene: %lld\n", PrimaryF.initialiseScene);
    printf("getTriangleTotal: %lld\n", PrimaryF.getTriangleTotal);
    printf("addObject: %lld\n", PrimaryF.addObject);
    printf("deleteObject: %lld\n", PrimaryF.deleteObject);
    printf("resetScene: %lld\n", PrimaryF.resetScene);
    printf("setLight: %lld\n", PrimaryF.setLight);
    printf("setCamera: %lld\n", PrimaryF.setCamera);
    printf("transformObject: %lld\n", PrimaryF.transformObject);
    printf("setRay: %lld\n", PrimaryF.setRay);
    printf("createRay: %lld\n", PrimaryF.createRay);
    printf("triangleIntersection: %lld\n", PrimaryF.triangleIntersection);
    printf("objectIntersection: %lld\n", PrimaryF.objectIntersection);
    printf("sceneIntersection: %lld\n", PrimaryF.sceneIntersection);
    printf("traceShadow: %lld\n", PrimaryF.traceShadow);
    printf("reflectRay: %lld\n", PrimaryF.reflectRay);
    printf("refractRay: %lld\n", PrimaryF.refractRay);
    printf("draw: %lld\n", PrimaryF.draw);
    
	// Exit cleanly
	return 0;
}
