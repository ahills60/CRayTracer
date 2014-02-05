/* This is a C version of the ray tracer that will be implemented
 * in DAMSON
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

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
#include "construct.h"

// Add math stats
#include "mathstats.h"

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
    
    // Build scene
    populateScene(&scene, &m);
    printf("Scene initialised.\n");
    
    // Define lighting:
    setVector(&lightColour, 1, 1, 1);
    setVector(&lightLocation, -1, 4, 4);
    setLight(&light, lightLocation, lightColour, 0.3);
    printf("Lighting defined.\n");
    
    // Camera configuration
    setVector(&cameraLocation, 1, 2, 4);
    setVector(&cameraDirection, 1, 0, -6);
    setCamera(&camera, cameraLocation, cameraDirection, 45, width, height, &m);
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
    
    // Now go through every pixel
    for (i = 0; i < height; i++)
    {
        for (n = 0; n < width; n++)
        {
//             printf("Drawing pixel at row %i and column %i:\n", i, n);
//             printf("Creating ray... ");
            ray = createRay(n, i, camera, &m);
//             printf("Created.\nStarting to draw... ");
            outputColour = vec2Colour(draw(ray, scene, light, recursions, &m));
//             printf("Draw complete.\nSetting pixel... ");
            setPixel(&image, n, i, outputColour);
//             printf("Pixel set at row %i and column %i.\n", i, n);
        }
    }
    printf("Writing image... ");
    writeImageASC(image, filename);
    printf("Complete.\nResetting scene...");
    resetScene(&scene);
    printf("Complete.\n\n");
    
    printf("Stats:\n\n");
    printf("Floating Point Operations:\n");
    printf("+: %lld\t-: %lld\t*: %lld\t/:%lld\n", m.plusFlt, m.subtractFlt, m.multiplyFlt, m.divideFlt);
    printf("Cos: %lld\tSin: %lld\tPow: %lld\tSqrt:%lld\n", m.cosine, m.sine, m.power, m.sqrtFlt);
    printf("Integer Operations:\n");
    printf("+: %lld\t-: %lld\t*: %lld\t/:%lld\n\n", m.plusInt, m.subtractInt, m.multiplyInt, m.divideInt);
	// Exit cleanly
	return 0;
}
