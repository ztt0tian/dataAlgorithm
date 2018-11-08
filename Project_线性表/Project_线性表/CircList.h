#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int DataType;
typedef struct circnode {
	DataType data;
	struct circnode *next;
}CircNode,* CircList;
void createCircList(CircList& first, DataType a[], int n); 
void showCircList(CircList &L);
void yuesefu(CircList &L, int begin, int m, int n);
