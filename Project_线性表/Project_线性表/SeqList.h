#pragma once
#include <stdio.h>
#include <stdlib.h>
#define initSize 30
#define _CRT_SECURE_NO_WARNINGS
typedef int DataType;
typedef struct {
	DataType *data;
	int maxSize, n;
}SeqList;
typedef struct node {
	DataType data;
	struct node *link;
}LinkNode,*LinkList;
void initSeqList(SeqList &L);
LinkList initList(LinkList &l);
LinkList createList(LinkList &l);
LinkList createList2(LinkList &l);
void showList(LinkList &L);
void clearList(LinkList &l);
int insert(LinkList &first, int i, DataType x);
int deleteLNode(LinkList &first, int i, DataType& x);
int getLength(LinkList &l);
LinkNode* search(LinkList &l, DataType x);
void showList2(LinkNode *l);