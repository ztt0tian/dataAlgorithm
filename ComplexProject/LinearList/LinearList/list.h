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
void InitList(Linearlist *L, int size);//��ʼ��
void FreeList(Linearlist *L);//�ͷŴ洢�ռ�
bool IsEmpty(Linearlist *L);//�ж��Ƿ�Ϊ��
bool IsFull(Linearlist *L);//�ж��Ƿ�Ϊ��
int GetLength(Linearlist *L);//��ȡ���Ա���
ElementType GetElem(Linearlist *L, int i);//ȡ���Ա�ָ��λ�õ�ֵ
int LocateElem(Linearlist *L, ElementType x);//����ֵΪx�Ľڵ㣬�ɹ��򷵻ؽڵ����ţ����򷵻�-1
bool InsertElem(Linearlist *L, ElementType x, int i);//��λ��i����ֵΪx�Ľڵ�
bool DeleteElem(Linearlist *L, int i);//ɾ��λ��i�Ľڵ�
void PrintList(Linearlist *L);//��ӡ���Ա�����нڵ�


