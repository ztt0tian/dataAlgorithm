#include "SeqList.h"
#include "Set.h"
#include "CircList.h"
#include"lsit.h"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
int main() {
	/*int deleteDate;
	LinkList list;
	initList(list);
	createList2(list);
	showList(list);
	insert(list, 5, 50);
	showList(list);
	deleteLNode(list, 4, deleteDate);
	showList(list);
	printf("%d\n", getLength(list));
	printf("%d\n", deleteDate);
	search(list, 6);
	LinkNode* head = list->link;
	showList2(head);
	//clearList(list);
	//showList(list);*/
	/*LinkSet a, b, c;
	InitSet(a);
	creatSet(a);
	showSet(a);
	addNumber(a, 123);
	showSet(a);
	/*InitSet(b);
	creatSet(b);
	showSet(b);
	InitSet(c);
	Merge(a, b, c);
	showSet(c);*/
	lsit l =  lsit();
	printf("%d\n", l.a);
	CircList CL;
	int a[8] = { 1,2,3,4,5,6,7,8 };
	int *ap=&a[0];
	int *ap2 = &a[1];
	printf("%d\n",sizeof(int));
	printf("%d\n", ap);
	printf("%d", ap2);

	//createCircList(CL, a,8);
	//yuesefu(CL, 1, 3, 8);
	//showCircList(CL);
	system("pause");
	return 0;
	
}
