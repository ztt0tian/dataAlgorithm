#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int ElementType;
struct linearlist
{
	ElementType *data;
	int maxSize;
	int last;
};
typedef struct linearlist Linearlist;
void InitList(Linearlist *L, int size);//初始化
void FreeList(Linearlist *L);//释放存储空间
bool IsEmpty(Linearlist *L);//判断是否为空
bool IsFull(Linearlist *L);//判断是否为满
int GetLength(Linearlist *L);//获取线性表长度
ElementType GetElem(Linearlist *L, int i);//取线性表指定位置的值
int LocateElem(Linearlist *L, ElementType x);//查找值为x的节点，成功则返回节点的序号，否则返回-1
bool InsertElem(Linearlist *L, ElementType x, int i);//在位置i插入值为x的节点
bool DeleteElem(Linearlist *L, int i);//删除位置i的节点
void PrintList(Linearlist *L);//打印线性表的所有节点


