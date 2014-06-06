/*  
    KD-tree implementation to speed up intersection searches.
    
    Created on: 6th June 2014
        Author: Andrew Hills
*/

#ifndef __KDTREE_H_
#define __KDTREE_H_

#define TREETYPE "kd-tree"

int treeNodes[][];
int treeNoNodes;
extern Scene PrimaryScene

/* Reserve memory and set up tree variables */
void initialiseTree(int noNodes)
{
    int n, objIdx;
    printf("\nInitialising tree...");
    // Should the number of nodes be determined based on the number of
    // objects within the primary scene object?
    if (noNodes < 0)
    {
        // We can work this out from the primary scene object
        noNodes = 0;
        for (objIdx = 0; objIdx < scene.noObjects; objIdx++)
            noNodes += scene.object[objIdx].noTriangles;
    }
    treeNodes = (int**) malloc(noNodes * sizeof(int*));
    for (n = 0; n < noNodes; n++)
        treeNodes[n] = (int*) malloc(4 * sizeof(int));
    treeNoNodes = noNodes;
    printf(" Done.\n\n");
}

/* Free the tree array in memory */
void destroyTree()
{
    int n;
    printf("\nRemoving tree from memory...");
    for (n = 0; n < treeNoNodes; n++)
        free(treeNodes[n]);
    free(treeNodes);
    printf("Done.\n\n");
}

/* Build tree function adds the triangles for all objects within the
   given scene */
void buildTree(Scene scene)
{
    int objIdx, triIdx;
    
    for (objIdx = 0; objIdx < scene.noObjects; objIdx++)
        for (triIdx = 0; triIdx < scene.object[objIdx].noTriangles; triIdx)
            addNode(scene.object[objIdx].triangle[triIdx]);
}

void addNode(Triangle triangle)
{
    
}

#endif