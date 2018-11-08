#include "CircList.h"
#define _CRT_SECURE_NO_WARNINGS
void createCircList(CircList& first, DataType a[], int n) {
	first =(circnode*) malloc(sizeof(CircNode));
	first->next = first;//构成空循环链表
	CircNode *p;
	CircNode *r = first;
	for (int i = 0; i < n; i++) {
		p = (CircNode*)malloc(sizeof(CircNode));
		p->data = a[i];
		p->next = r->next;
		r->next = p;
		r = p;
	}
	r->next = first;
}
void showCircList(CircList &L) {
	CircNode* p = L->next;

	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;

	}
	printf("\n");
}
void yuesefu(CircList &first, int begin, int m, int n) {
	CircList p = first->next,pr=first;
	int i, j;
	for (i = 1; i < begin; i++) {
		p = p->next;
	}
	 
	for (i = 0; i < n; i++) {
		for (j = 1; j < m; j++) {
			pr = p;
			p = p->next;
			if (p == first) { pr = p; p = p->next; }
		}
		printf("%d\n", p->data);
		pr->next = p->next;
		free(p);
		p = pr->next;
		if (p == first) {
			pr = p;
			p = p->next;
		}
	}
}