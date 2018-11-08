#include "SeqList.h"
#define _CRT_SECURE_NO_WARNINGS
/*
��ʼ������
*/
void initSeqList(SeqList &L) {
	L.data = (DataType*)malloc(initSize * sizeof(DataType));
	if (!L.data) {
		printf("�洢�������"); exit(1);
	}
	else {
		L.maxSize = initSize;
		L.n = 0;
	}
}
/*
����������㷨
*/
int insert(LinkList &first, int i, DataType x) {
	 	if (first==NULL || i == 1) {
		LinkNode *newNode = (LinkNode*)malloc(sizeof(LinkNode));
		if (!newNode) {
			printf("�洢�������!\n");
			exit(1);
		}
		newNode->data = x;
		newNode->link = first;
		first = newNode;
	}
	else {
		LinkNode *p = first;
		int k = 1;
		while (p != NULL&&k < i) {
			p = p->link;
			k++;
		}
		if (p == NULL&&first != NULL)
		{
			printf("��Ч�Ĳ���λ��\n");
		}
		else {
			//�½����
			LinkNode *newNode = (LinkNode*)malloc(sizeof(LinkNode));
			if (!newNode) {
				printf("�洢�������!\n");
				exit(1);
			}
			newNode->data = x;
			newNode->link = p->link;
			p->link = newNode;

		}
	}
}
LinkList initList(LinkList &l) {

	l = (LinkNode*)malloc(sizeof(LinkNode));
	if (!l) {
		printf("�洢�������!\n");
		exit(1);
	}
	l->link = NULL;
	return l;
 }
LinkList createList(LinkList &l) {
	int i, n, num;
	LinkNode *pnew;

	printf("������Ҫ�����Ԫ�ظ�����n = ");
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		printf("�������%d������", i + 1);
		scanf("%d", &num);
		pnew = (LinkList)malloc(sizeof(LinkNode));
		pnew->data = num;
		pnew->link = l->link;
		l->link = pnew;
	}
	return l;
}
LinkList createList2(LinkList &l) {
	int i, n, num;
	LinkNode *p,*pnew;
	p = l;
	printf("������Ҫ�����Ԫ�ظ�����n = ");
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		printf("�������%d������", i + 1);
		scanf("%d", &num);
		pnew = (LinkList)malloc(sizeof(LinkNode));
		pnew->data = num;
		p->link = pnew;
		p = pnew;
	}
	p->link = NULL;
	return l;
}
void showList(LinkList &L) {
	LinkNode  *p;
	p = L->link;

	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->link;

	}
	printf("\n");
}
/*�Ӻ�ǰ*/
void showList2(LinkNode *l) {
	if (l == NULL) {
		return;
	 }
	if(l!= NULL) {
		showList2(l->link);	 
	}
	printf("%d,", l->data);

	 
}
int deleteLNode(LinkList &first, int i, DataType& x) {
	LinkNode *p, *q;
	int k = 1;
	if (i <= 1) {
		q = first; first = first->link;
	}
	else {
		p = first;
		while (p != NULL&&k < i) {
			p = p->link;
			k++;
		}
		if (p == NULL || !p->link) {
			printf("��Ч��ɾ��λ��\n");
			return 0;
		}
		q = p->link;
		p->link = q->link;
		x = q->data;
		free(q);
	}
	return 1;
}
void clearList(LinkList &l) {
	LinkNode *p;
	while (l->link != NULL) {
		p = l->link;
		l->link = p->link;
		free(p);
	}
}
int getLength(LinkList &l) {
	LinkNode *p; int count = 0;
	p = l->link;
	while (p != NULL) {
		p = p->link;
		count++;
	}
	return count;
}
LinkNode* search(LinkList &l, DataType x) {
	LinkNode *p = l->link;
	while (p != NULL&&p->data != x) {
		p = p->link;
	}
	if (p == NULL) {
		printf("��������%d\n", x);
	}
	else {

		printf("������%d\n", x);
	}
	return p;
}