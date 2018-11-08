#pragma once
#include<stdio.h>
#include<stdlib.h>
#define maxSize 50
/*
队列的顺序表示，循环队列
*/
typedef struct {
	int elem[maxSize];
	int front, rear;//队头和队尾指针（数组下标）
}CircQue;
void InitQueue(CircQue& Q);
int insert(CircQue& Q, int x);
int remote(CircQue& Q, int& x);
/*
队列基于单链表的存储表示，链式队列
*/
typedef struct QueueNode {
	int data;
	struct QueueNode* next;
}quequenode;
typedef struct {
	quequenode *front, *rear;
}LinkQueue;