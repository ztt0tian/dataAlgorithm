#pragma once
#include<stdio.h>
#include<stdlib.h>
#define initSize 20
#define maxSize 50
/*
顺序栈的存储结构定义
*/
typedef struct {
	int elem[maxSize];
	int top;
}Static_Stack;

typedef struct{
	int *elem;
    int maxsize, top;
}Dynamic_Stack;
void InitStack(Dynamic_Stack& s);
int push(Dynamic_Stack& s, int x);
int pop(Dynamic_Stack& s, int& x);
int GetTop(Dynamic_Stack& s, int& x);
int GetSize(Dynamic_Stack& s);
int IsEmpty(Dynamic_Stack& s);
/*
链式栈的存储结构定义
*/
typedef struct stack_node {
	int data;
	struct stack_node *next;
	 
}linknode,*Linkstack;
void InitStack(Linkstack& s);
int push(Linkstack& s, int x);
int pop(Linkstack& s, int& x);
int GetTop(Linkstack& s, int& x);
int GetSize(Linkstack& s);
int IsEmpty(Linkstack& s);