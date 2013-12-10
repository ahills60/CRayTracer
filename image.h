/* 
 * image.h
 * A header file that defines image attibutes and functions
 *
 *  Created on: 4 Dec 2013
 *      Author: andrew
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "craytracer.h"
#include "datatypes.h"

#define IMG_COMMENT "# This image was generated with the CRayTracer application."

#ifndef IMAGE_H_
#define IMAGE_H_

/* Define a container for an image */
typedef struct Image
{
    int width;
    int height;
    int *data;
}Image;

/* Define a generic colour */
typedef struct Colour
{
    int r;
    int g;
    int b;
}Colour;

/* Convert a vector to a colour array */
Colour vec2Colour(Vector u)
{
    Colour col;
    col.r = (int)((u.x * 255.0)) & 255;
    col.g = (int)((u.y * 255.0)) & 255;
    col.b = (int)((u.z * 255.0)) & 255;
    return col;
}

Colour int2Colour(int *array)
{
    Colour col;
    col.r = (float)array[0] / 255.0;
    col.g = (float)array[1] / 255.0;
    col.b = (float)array[2] / 255.0;
    return col;
}

Vector int2Vector(int *array)
{
    Vector u;
    u.x = (float)array[0] / 255.0;
    u.y = (float)array[1] / 255.0;
    u.z = (float)array[2] / 255.0;
    return u;
}

/* Allocate space for the image in memory */
void initialiseImage(Image *img, int width, int height)
{
    (*img).width = width;
    (*img).height = height;
    // Reserve the necessary space in memory to hold the image. Note that we use a
    // multiplier here as there's rgb.
    (*img).data = (int *)malloc(sizeof(int) * width * height * 3);
    memset((*img).data, 0, sizeof(int) * width * height * 3);
}

/* Set a pixel for a specific image */
void setPixel(Image *img, int x, int y, Colour col)
{
    int height = (*img).height;
    int width = (*img).width;
    
    // Get location of pixel given that image is RGB and the dimensions are given
    // Note that we do (height - y) as the image would otherwise be upside down!
    int idx = ((height - y - 1) * width + x) * 3;// (((*img).width * ((*img).height - y)) + x) * 3;
    // First do R
    (*img).data[idx] = col.r;
    // Then offset for G and B
    (*img).data[idx + 1] = col.g;
    (*img).data[idx + 2] = col.b;
}

/* Function to output image in PPM ASCII format (P3) */
void writeImageASC(Image img, char *filename)
{
    int x, y, idx;
    
    // File pointer and open file for writing
    FILE *fp;
    fp = fopen(filename, "w");
    
    // Using standard Netpbm format (PPM RGB)
    fprintf(fp, "P3\n%s\n# Version %i.%i.%i\n%i %i\n%i", IMG_COMMENT, VERSION_MAJOR, VERSION_MINOR, VERSION_BUILD, img.width, img.height, 255);
    
    for (y = 0; y < img.height; y++)
    {
        fprintf(fp, "\n");
        for (x = 0; x < img.width; x++)
        {
            // Get the index bearing in mind that we're dealing with RGB
            idx = (y * img.width + x) * 3;
            fprintf(fp, "%3d %3d %3d%s", img.data[idx], img.data[idx + 1], img.data[idx + 2], (x < img.width) ? "\t" : "\n");
        }
    }
    fclose(fp);
}

/* Function to output image in PPM binary format (P6) */
void writeImageBin(Image img, char *filename)
{
    // File pointer and open file for writing
    FILE *fp;
    fp = fopen(filename, "w");
    
    // Using standard Netpbm format (PPM RGB)
    fprintf(fp, "P6\n%s\n# Version %i.%i.%i\n%i %i\n%i", IMG_COMMENT, VERSION_MAJOR, VERSION_MINOR, VERSION_BUILD, img.width, img.height, 255);
    
    // Writing to binary can be simply done through the fwrite command
    fwrite(img.data, sizeof(int), img.height * img.width * 3, fp);
    fclose(fp);
}
#endif
