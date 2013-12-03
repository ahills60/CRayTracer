/* This is a C version of the ray tracer that will be implemented
 * in DAMSON
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "craytracer.h"

// Define default dimensions
int width = 1024;
int height = 768;

#define NO_KEYWORDS 2

int main(int argc, char *argv[])
{
	char *currObj;
	int isParam;
	char *parVal;
	int i, n, a;

	parVal = "";

	// Version information:
	printf("\nRayTracer ");
	printf("Version: %i.%i.%i (%s)\n", VERSION_MAJOR, VERSION_MINOR, VERSION_BUILD, VERSION_DATE);
	printf("Author: Andrew Hills (a.hills@sheffield.ac.uk)\n\n");

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
						printf("Unrecognised input \"%s\"\n", parVal);
				}
			}
		}
	}
	printf("Canvas set to resolution %i x %i\n\n", width, height);
	// Exit cleanly
	return 0;
}
