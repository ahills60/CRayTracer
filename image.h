/* 
 * image.h
 * A header file that defines image attibutes and functions
 *
 *  Created on: 4 Dec 2013
 *      Author: andrew
 */

#ifndef IMAGE_H_
#define IMAGE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "craytracer.h"
#include "datatypes.h"
#include "interactive.h"
#define IMG_COMMENT "# This image was generated with the CRayTracer application."

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
{   // 255 is 0x00FF0000
    Colour col;
    col.r = fp_mult((u.x > fp_fp1) ? fp_fp1 : u.x, 0x00FF0000) >> 16; //(int)((u.x * 255.0)) & 255;
    col.g = fp_mult((u.y > fp_fp1) ? fp_fp1 : u.y, 0x00FF0000) >> 16; //(int)((u.y * 255.0)) & 255;
    col.b = fp_mult((u.z > fp_fp1) ? fp_fp1 : u.z, 0x00FF0000) >> 16; //(int)((u.z * 255.0)) & 255;
    return col;
}

Colour int2Colour(int *array) // This doesn't make sense! RGB are stored as ints and you've got decimal values!
{
    Colour col;
    col.r = fp_div(fp_Int2FP(array[0]), fp_Int2FP(255));
    col.g = fp_div(fp_Int2FP(array[1]), fp_Int2FP(255));
    col.b = fp_div(fp_Int2FP(array[2]), fp_Int2FP(255));
    return col;
}

Vector int2Vector(int *array)
{
    Vector u;
    u.x = fp_div(fp_Int2FP(array[0]), fp_Int2FP(255));
    u.y = fp_div(fp_Int2FP(array[1]), fp_Int2FP(255));
    u.z = fp_div(fp_Int2FP(array[2]), fp_Int2FP(255));
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

/* Reset the space used to store the image */
void resetImage(Image *img)
{
    // Simply set the memory to 0 based on the intial image setup conditions
    memset((*img).data, 0, sizeof(int) * (*img).width * (*img).height * 3);
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
    PixelStore[y * width + x] = col.r | (col.g << 8) | (col.b << 16);
    ActivityStore[y * width + x] = 0 | 255 << 8 | 0 << 16 | 255 << 24;
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
