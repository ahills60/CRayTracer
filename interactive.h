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

#define MOVE_INCREMENT  0x8000 // Equivalent to 0.5
#define PAN_INCREMENT   0x1657 // Equivalent to 5 degrees

#include <GL/glut.h>
#include "objects.h"

// Make a variable for storing pixels accessible to all functions
unsigned int *PixelStore;
unsigned int ScreenWidth, ScreenHeight;

extern Camera PrimaryCamera;
extern MathStat PrimaryM;
extern FuncStat PrimaryF;
extern int TerminateFlag;
extern int ForceRedraw;
extern fixedp CameraAngleTheta;
extern fixedp CameraAnglePhi;

/* Initialise pixel store */
void initialisePixelStore(int width, int height)
{
    // Ensure we have enough memory to store pixel information
    PixelStore = (unsigned int *)malloc(sizeof(unsigned int) * width * height);
    // Finally wipe this space
    memset(PixelStore, 0, sizeof(unsigned int) * width * height);
    
    // Store the size into the global variable
    ScreenWidth = width;
    ScreenHeight = height;
}

/* Quick function to wipe the pixel store */
void clearPixelStore()
{
    // A simple wipe of the memory location.
    memset(PixelStore, 0, sizeof(unsigned int) * ScreenWidth * ScreenHeight);
}

/* Function to define window resizing */
void reshapeFunc(int newWidth, int newHeight)
{
    // We don't allow this to be resized. Change it back!
    glutReshapeWindow(ScreenWidth, ScreenHeight);
}

/* Function to define idle time tasks */
void idleFunc(void)
{
    glutPostRedisplay();
}

/* Function to take control of user input elements */
void keyboardFunc(unsigned char key, int xmouse, int ymouse)
{
    switch(key)
    {
        case 'Q':
        case 'q':
            exit(0);
            break;
        default:
            break;
    }
}

/* Function to handle special key input */
void specialFunc(int key, int x, int y)
{
    Vector cameraLocation = PrimaryCamera.location;
    
    // printf("Camera location: 0x%X, 0x%X, 0x%X\n", cameraLocation.x, cameraLocation.y, cameraLocation.z);
    // printf("Camera view: 0x%X, 0x%X, 0x%X\n", cameraView.x, cameraView.y, cameraView.z);
    
    switch(key)
    {
        case GLUT_KEY_UP:
            setVector(&cameraLocation, cameraLocation.x, cameraLocation.y, cameraLocation.z - MOVE_INCREMENT, &PrimaryF);
            updateCameraPosition(&PrimaryCamera, cameraLocation, &PrimaryF);
            break;
        case GLUT_KEY_DOWN:
            setVector(&cameraLocation, cameraLocation.x, cameraLocation.y, cameraLocation.z + MOVE_INCREMENT, &PrimaryF);
            updateCameraPosition(&PrimaryCamera, cameraLocation, &PrimaryF);
            break;
        case GLUT_KEY_LEFT:
            setVector(&cameraLocation, cameraLocation.x - MOVE_INCREMENT, cameraLocation.y, cameraLocation.z, &PrimaryF);
            updateCameraPosition(&PrimaryCamera, cameraLocation, &PrimaryF);
            break;
        case GLUT_KEY_RIGHT:
            setVector(&cameraLocation, cameraLocation.x + MOVE_INCREMENT, cameraLocation.y, cameraLocation.z, &PrimaryF);
            updateCameraPosition(&PrimaryCamera, cameraLocation, &PrimaryF);
            break;
        case GLUT_KEY_PAGE_DOWN:
            CameraAngleTheta += PAN_INCREMENT;
            CameraAngleTheta -= (CameraAngleTheta > FP_PI) * FP_2PI;
            CameraAngleTheta += (CameraAngleTheta < -FP_PI) * FP_2PI;
            updateCameraAngle(&PrimaryCamera, CameraAngleTheta, CameraAnglePhi, &PrimaryM, &PrimaryF);
            break;
        case GLUT_KEY_PAGE_UP:
            CameraAngleTheta -= PAN_INCREMENT;
            CameraAngleTheta -= (CameraAngleTheta > FP_PI) * FP_2PI;
            CameraAngleTheta += (CameraAngleTheta < -FP_PI) * FP_2PI;
            updateCameraAngle(&PrimaryCamera, CameraAngleTheta, CameraAnglePhi, &PrimaryM, &PrimaryF);
            break;
        case GLUT_KEY_HOME:
            CameraAnglePhi += PAN_INCREMENT;
            CameraAnglePhi -= (CameraAnglePhi > FP_PI) * FP_2PI;
            CameraAnglePhi += (CameraAnglePhi < -FP_PI) * FP_2PI;
            updateCameraAngle(&PrimaryCamera, CameraAngleTheta, CameraAnglePhi, &PrimaryM, &PrimaryF);
            break;
        case GLUT_KEY_END:
            CameraAnglePhi -= PAN_INCREMENT;
            CameraAnglePhi -= (CameraAnglePhi > FP_PI) * FP_2PI;
            CameraAnglePhi += (CameraAnglePhi < -FP_PI) * FP_2PI;
            updateCameraAngle(&PrimaryCamera, CameraAngleTheta, CameraAnglePhi, &PrimaryM, &PrimaryF);
            break;
        default:
            break;
    }
    // printf("Theta: 0x%X (%f)\tPhi: 0x%X (%f)\n", CameraAngleTheta, fp_FP2Flt(CameraAngleTheta), CameraAnglePhi, fp_FP2Flt(CameraAnglePhi));
    // Now force a scene redraw
    ForceRedraw = 1;
}

/* Function to handle what's displayed within the window */
void displayFunc(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glRasterPos2i(0, 0);
    
    // Display the contents of the pixel store to the screen
    glDrawPixels(ScreenWidth, ScreenHeight, GL_RGBA, GL_UNSIGNED_BYTE, &PixelStore[0]);
    
    glutSwapBuffers();
}

/* Function to initialise GLUT window and output */
void initialiseGLUT(int argc, char *argv[])
{
    glutInitWindowSize(ScreenWidth, ScreenHeight);
    
    // Back to window setup
    glutInitWindowPosition(0, 0);
    glutInitDisplayMode(GLUT_RGBA | GLUT_ALPHA | GLUT_DOUBLE);
    
    glutInit(&argc, argv);
    
    glutCreateWindow("CRayTracer Visualiser");
    
    glutDisplayFunc(displayFunc);
    glutIdleFunc(idleFunc);
    glutKeyboardFunc(keyboardFunc);
    glutSpecialFunc(specialFunc);
    glutReshapeFunc(reshapeFunc);
    
    glViewport(0, 0, ScreenWidth, ScreenHeight);
    glLoadIdentity();
    glOrtho(0.0, ScreenWidth - 1.0, 0.0, ScreenHeight - 1.0, -1.0, 1.0);
}

#endif