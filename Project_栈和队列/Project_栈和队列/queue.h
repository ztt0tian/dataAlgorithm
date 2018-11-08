#pragma once
#include<stdio.h>
#include<stdlib.h>
#define maxSize 50
/*
���е�˳���ʾ��ѭ������
*/
typedef struct {
	int elem[maxSize];
	int front, rear;//��ͷ�Ͷ�βָ�루�����±꣩
}CircQue;
void InitQueue(CircQue& Q);
int insert(CircQue& Q, int x);
int remote(CircQue& Q, int& x);
/*
���л��ڵ�����Ĵ洢��ʾ����ʽ����
*/
typedef struct QueueNode {
	int data;
	struct QueueNode* next;
}quequenode;
typedef struct {
	quequenode *front, *rear;
}LinkQueue;