/*
 * interactive.h
 *
 * This defines functions for interacting with a scene.
 *
 *  Created on: 17 Mar 2014
 *      Author: andrew
 */

#ifndef _INTERACTIVE_H_
#define _INTERACTIVE_H_

#include <GL/glut.h>

// Make a variable for storing pixels accessible to all functions
unsigned int *PixelStore;
unsigned int ScreenWidth, ScreenHeight;

/* Initialise pixel store */
void initialisePixelStore(int width, int height)
{
    // Ensure we have enough memory to store pixel information
    PixelStore = (unsigned int *)malloc(sizeof(unsigned int) * width * height);
    // Finally wipe this space
    memset(PixelStore, 0, sizeof(unsigned int) * width * height);
}

/* Quick function to wipe the pixel store */
void clearPixelStore()
{
    // A simple wipe of the memory location.
    memset(PixelStore, 0, sizeof(unsigned int) * width * height);
}

/* Function to define window resizing */
void reshapeFunc(int newWidth, int newHeight)
{
    // We don't allow this to be resized. Change it back!
    glutReshapeWindow(ScreenWidth, ScreenHeight);
}

/* Function to define idle time tasks */
void idleFunc(void){
    glutPostRedisplay();
}

/* Function to take control of user input elements */
void keyboardFunc(unsigned char key, int xmouse, int ymouse)
{
    switch(key)
    {
        case 'Q':
        case 'q':
            break;
        default:
            break;
    }
}

/* Function to handle special key input */
void specialFunc(int key, int x, int y)
{
    switch(key)
    {
        default:
            break;
    }
}

/* Function to handle what's displayed within the window */
void displayFunc(void)
{
    
}

/* Function to initialise GLUT window and output */
void initialiseGLUT(int width, int height)
{
    glutInitWindowSize(width, height);
    
    // Store the size into the global variable
    ScreenWidth = width;
    ScreenHeight = height;
    
    // Back to window setup
    glutInitWindowsPosition(0, 0);
    glutInitDisplayMode(GLUT_RGBA | GLUT_ALPHA | GLUT_DOUBLE);
    
    glutInit();
    
    glutCreateWindow("CRayTracer Visualiser");
    
    glutDisplayFunc(displayFunc);
    glutIdleFunc(idleFunc);
    glutKeyboardFunc(keyboardFunc);
    glutSpecialFunc(specialFunc);
    glutReshapeFunc(reshapeFunc);
    
    glViewport(0, 0, width, height);
    glLoadIdentity();
    glOrtho(0.0, width - 1.0, 0.0, height - 1.0, -1.0, 1.0);
}

#endif