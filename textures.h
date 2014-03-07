/*
 * textures.h
 * 
 * This header file provides primitives for texturing.
 *
 *  Created on: 6 Feb 2014
 *      Author: andrew
 */

#ifndef TEXTURES_H_
#define TEXTURES_H_

#include "datatypes.h";

typedef struct Texture
{
    int width;
    int height;
    Vector *bitmap;
}
Texture;

/* Open a texture file */
void ReadTexture(Texture *texture, char *fileName, FuncStat *f)
{
    int width, height, i, size;
    Vector a;
    // Open the file
    FILE *f = fopen(fileName, "rb");
    
    // Make sure it opened
    if (f)
    {
        // Extract height and width from file header
        unsigned char buffer[20];
        fread(buffer, 1, 20, f);
        width = *(buffer + 12) + 256 * *(buffer + 13);
        height = *(buffer + 14) + 256 * *(buffer + 15);
        fclose(f);
        size = height * width;
        
        // Now to read the pixel data
        f = fopen(fileName, "rb");
        unsigned char *data = (unsigned char *)malloc(sizeof(unsigned char) * size * 3 + 1024);
        fread(t, 1, size * 3 + 1024);
        fclose(f);
        
        // Convert 8 bits to fixed point
        Vector *bitmap = (Vector *)malloc(sizeof(Vector) * size);
        for (i = 0; i < size; i++)
        {
            // shifting by 8 is equivalent to 256. Note that as 1 starts at bit 16 and char is up to 8 bits, shift by eight to left to align.
            setVector(&a, ((int)data[i * 3 + 20]) << 8, ((int)data[i * 3 + 19]) << 8, ((int)data[i * 3 + 18]) << 8, f);
            bitmap[i] = a;
        }
        (Texture *)texture.width = width;
        (Texture *)texture.height = height;
        (Texture *)texture.bitmap = bitmap;
    }
    else
    {
        printf("Error encountered opening texture file \"%s\".\n", fileName);
    }
}

/* Returns the bilinearly filtered result for a specific point in the texture */
Vector getTexel(Texture texture, fixedp UPos, fixedp VPos, MathStat *m, FuncStat *f)
{
    Vector c1, c2, c3, c4;
    fixedp URem, VRem, b1, b2, b3, b4;
    // Locate pixel intersect
    // This is one method. The other is to use modulo operator: value % fp_fp1
    // Numbers are confined to 0 and 1 (albeit \neq 1) and we obtain the pixel location.
    UPos = fp_mult(fp_fabs(UPos) & 0x0000FFFF, texture.width);
    VPos = fp_mult(fp_fabs(VPos) & 0x0000FFFF, texture.height);
    // Get the whole pixel value
    int TextUPos = UPos >> 16;
    int TextVPos = VPos >> 16;
    
    // Compute weights from fractional part
    fixedp URem = UPos & 0x0000FFFF;
    fixedp VRem = VPos & 0x0000FFFF;
    
    // Inline if statements are used to ensure we're bounded by the image width and height
    b1 = TextUPos + TextVPos * texture.width;                                                   // offset: (0, 0)
    b2 = (TextUPos < texture.width) ? b1 + 1 : 0;                                               // offset: (1, 0)
    b3 = (TextVPos < texture.height) ? TextUPos + (TextVPos + 1) * texture.width : TextUPos;    // offset: (0, 1)
    b4 = (TextUPos < texture.width) ? TextUPos + 1 : (TextVPos + 1) * texture.width;            // offset: (1, 1)
    
    // Compute colours at points
    c1 = texture.bitmap[b1];    // offset: (0, 0)
    c2 = texture.bitmap[b2];    // offset: (1, 0)
    c3 = texture.bitmap[b3];    // offset: (0, 1)
    c4 = texture.bitmap[b4];    // offset: (1, 1)
    
    c1 = scalarVecMult((fp_fp1 - URem) * (fp_fp1 - VRem), c1, m, f);
    c2 = scalarVecMult(URem * (fp_fp1 - VRem), c2, m, f);
    c3 = scalarVecMult((fp_fp1 - URem) * VRem, c3, m, f);
    c4 = scalarVecMult(URem * VRem, c4, m, f);
    
    // return bilinear filtered result
    return vecAdd(c1, vecAdd(c2, vecAdd(c3, c4, m, f), m, f), m, f);
}#endif