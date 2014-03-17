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

/* Function to initialise GLUT window and output */
void initialiseGLUT(int width, int height)
{
    glutInitWindowSize(width, height);
    glutInitWindowsPosition(0, 0);
    glutInitDisplayMode(GLUT_RGBA | GLUT_ALPHA | GLUT_DOUBLE);
    
    glutInit();
    
    glutCreateWindow("CRayTracer Visualiser");
    
    glutDisplayFunc(displayFunc);
    glutIdleFunc(idleFunc);
    glutKeyboardFunc(keyboardFunc);
    glutReshapeFunc(reshapeFunc);
    
    glViewport(0, 0, width, height);
    glLoadIdentity();
    glOrtho(0.0, width - 1.0, 0.0, height - 1.0, -1.0, 1.0);
}

#endif