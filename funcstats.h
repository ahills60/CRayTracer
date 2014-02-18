/*  
    Function statistics in order to determine which functions
    are called the most.
    
    Created on: 5th February 2014
        Author: Andrew Hills
*/

#ifndef FUNCSTATS_H_
#define FUNCSTATS_H_

typedef struct FuncStat
{
    // Datatypes.h
    long long int setVector;
    long long int setMatrix;
    long long int deg2rad;
    long long int vecMult;
    long long int dot;
    long long int cross;
    long long int scalarVecMult;
    long long int scalarVecDiv;
    long long int vecAdd;
    long long int vecSub;
    long long int negVec;
    long long int vecLength;
    long long int vecNormalised;
    long long int matVecMult;
    long long int matMult;
    long long int genIdentMat;
    long long int genXRotateMat;
    long long int genYRotateMat;
    long long int genZRotateMat;
    long long int getRotateMatrix;
    long long int genTransMatrix;
    long long int genScaleMatrix;
    long long int setTriangle;
    
    // lighting.h
    long long int ambiance;
    long long int diffusion;
    long long int specular;
    
    // objects.h
    long long int setMaterial;
    long long int setObject;
    long long int initialiseScene;
    long long int getTriangleTotal;
    long long int addObject;
    long long int deleteObject;
    long long int resetScene;
    long long int setLight;
    long long int setCamera;
    long long int transformObject;
    
    // rays.h
    long long int setRay;
    long long int createRay;
    long long int triangleIntersection;
    long long int objectIntersection;
    long long int sceneIntersection;
    long long int traceShadow;
    long long int reflectRay;
    long long int refractRay;
    
    // construct.h
    long long int draw;
    // long long int ;
    // long long int ;
    // long long int ;
    // long long int ;
    // long long int ;
}
FuncStat;

void initFuncStats(FuncStat *f)
{
    (*f).setVector = 0;
    (*f).setMatrix = 0;
    (*f).deg2rad = 0;
    (*f).vecMult = 0;
    (*f).dot = 0;
    (*f).cross = 0;
    (*f).scalarVecMult = 0;
    (*f).scalarVecDiv = 0;
    (*f).vecAdd = 0;
    (*f).vecSub = 0;
    (*f).negVec = 0;
    (*f).vecLength = 0;
    (*f).vecNormalised = 0;
    (*f).matVecMult = 0;
    (*f).matMult = 0;
    (*f).genIdentMat = 0;
    (*f).genXRotateMat = 0;
    (*f).genYRotateMat = 0;
    (*f).genZRotateMat = 0;
    (*f).getRotateMatrix = 0;
    (*f).genTransMatrix = 0;
    (*f).genScaleMatrix = 0;
    (*f).setTriangle = 0;
    (*f).ambiance = 0;
    (*f).diffusion = 0;
    (*f).specular = 0;
    (*f).setMaterial = 0;
    (*f).setObject = 0;
    (*f).initialiseScene = 0;
    (*f).getTriangleTotal = 0;
    (*f).addObject = 0;
    (*f).deleteObject = 0;
    (*f).resetScene = 0;
    (*f).setLight = 0;
    (*f).setCamera = 0;
    (*f).transformObject = 0;
    (*f).setRay = 0;
    (*f).createRay = 0;
    (*f).triangleIntersection = 0;
    (*f).objectIntersection = 0;
    (*f).sceneIntersection = 0;
    (*f).traceShadow = 0;
    (*f).reflectRay = 0;
    (*f).refractRay = 0;
    (*f).draw = 0;
}

#endif
