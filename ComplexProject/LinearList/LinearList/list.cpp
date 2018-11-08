#include "list.h"
void InitList(Linearlist *L, int size) {
	if (size > 0) {
		L->maxSize = size;
		L->last = 0;
		L->data = (ElementType *)malloc(sizeof(ElementType)*L->maxSize);
	}
	else {
		printf("³õÊ¼»¯Ê§°Ü!\n");
	}
}

void FreeList(Linearlist * L)
{
	free(L->data);
}

bool IsEmpty(Linearlist * L)
{
	return (L->last <= 0) ? true : false;
}

bool IsFull(Linearlist * L)
{
	return (L->last == L->maxSize)?true:false;
}

int GetLength(Linearlist * L)
{
	return L->last;
}

ElementType GetElem(Linearlist * L, int i)
{
	return (i >= 0 && i < L->last) ? L->data[i] : NULL;
}

int LocateElem(Linearlist * L, ElementType x)
{
	int i;
	for (i = 0; i < L->last; i++) {
		if (L->data[i] == x) {
			return i;
		}
	}
	return -1;
}

bool InsertElem(Linearlist * L, ElementType x, int i)
{
	int j;
	if (i<0 || i>L->last || L->last == L->maxSize) {
		return false;
	}
	else {
		for (j = L->last - 1; j >= i; j--) {
			L->data[j + 1] = L->data[j];
		}
		L->data[i] = x;
		L->last++;
		return true;
	}
}

bool DeleteElem(Linearlist * L, int i)
{
	int j;
	if (i < 0 || i>L->last || L->last == 0) {
		return false;
	}
	else {
		for (j = i; j < L->last - 1; j++) {
			L->data[j] = L->data[j + 1];
		}
		L->last--;
		return true;
	}
	return false;
}
