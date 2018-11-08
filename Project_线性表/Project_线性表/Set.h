#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int DataType;
typedef struct Setnode {
	DataType data;
	struct Setnode *link;
}SetNode;
typedef struct {
	SetNode *first, *last;
}LinkSet;
SetNode* contains(LinkSet& s, int x);
LinkSet creatSet(LinkSet& s);
LinkSet InitSet(LinkSet& s);
void showSet(LinkSet &L);
int addNumber(LinkSet& s, int x);
void Merge(LinkSet& a, LinkSet& b, LinkSet& c);