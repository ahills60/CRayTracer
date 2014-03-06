/*
 * textures.h
 * 
 * This header file provides primitives for texturing.
 *
 *  Created on: 6 Feb 2014
 *      Author: andrew
 */

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
            setVector(&a, data[i * 3 + 20] << 8, data[i * 3 + 19] << 8, data[i * 3 + 18] << 8, f);
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