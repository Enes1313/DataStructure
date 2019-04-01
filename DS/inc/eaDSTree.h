/*
 * eaDSTree.h
 *
 *  Created on: 31 03 2019
 *      Author: Enes AYDIN
 */

#ifndef EADSTREE_H_
#define EADSTREE_H_

#include "eaDSData.h"
#include "eaDSDynamicArray.h"
/*
 * Tree
 */

typedef struct _Node_Tree{
	void * Data;
	eaDSDynamicArray childs;
} Node_Tree;

typedef struct _eaDSTree{
	Node_Tree * Root;
	StructDataInfo Info;
} eaDSTree;

void eaDSTreeInit(eaDSTree * tree, StructDataInfo Info);
void eaDSTreeReset(eaDSTree * tree);
void eaDSTreeClear(eaDSTree * tree);


/*

void clearTree(Tree *);
int isEmptyTree(const Tree *);
*/
/*
void setNodes(Node, int, int);
Tree initMyTree(int);
*/


#endif /* EADSTREE_H_ */