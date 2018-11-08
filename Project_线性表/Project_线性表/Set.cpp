#include "Set.h"
#define _CRT_SECURE_NO_WARNINGS
/*检查有序集合Set中时候含有一个数*/
SetNode* contains(LinkSet& s, int x) {
	SetNode* p = s.first->link;
	while (p != NULL&&p->data < x) {
		p = p->link;
	}
	if (p != NULL&&p->data == x)
	{
		return p;
	}
	else return NULL;
}

/*初始化Set*/
LinkSet InitSet(LinkSet& s) {
	s.first =(SetNode*) malloc(sizeof(SetNode));
	if (!s.first) {
		printf("存储分配错误!\n");
		exit(1);
	}
	s.first->link = NULL;
	s.last = s.first;
	return s;
}
LinkSet creatSet(LinkSet& s) {
	int i, n, num;
	SetNode *pnew;
	SetNode *p = s.first;
	printf("请输入要输入的元素个数：n = ");
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		printf("请输入第%d个数：", i + 1);
		scanf("%d", &num);
		pnew = (SetNode*)malloc(sizeof(SetNode));
		pnew->data = num;
		p->link = pnew;
		p = pnew;
	}
	s.last = p;
	s.last->link = NULL;
	return s;

}
void showSet(LinkSet &L) {
	SetNode *p;
	p = L.first->link;

	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->link;

	}
	printf("\n");
}
/*往一个有序集合中加入一个数，并在合适位置加上去*/
int addNumber(LinkSet& s, int x) {
	SetNode *p = s.first->link,*pre = s.first;
	while (p != NULL&&p->data < x) {
		p = p->link; pre = pre->link;
	}
	if (p!=NULL&&p->data == x) {
		return 0;
	}
	SetNode *q = (SetNode*)malloc(sizeof(SetNode));
	if (!q) {
		printf("存储分配失败\n");
		return 0;
	}
	q->data = x;
	q->link = p;
	pre->link = q;
	if (!p) {
		s.last = q;
	}

}
/*两个有序集合并运算Merge*/
void Merge(LinkSet& a, LinkSet& b, LinkSet& c) {
	SetNode* ha = a.first->link;
	SetNode* hb = b.first->link;
	SetNode* hc = c.first;
	SetNode* p;
	while (ha!=NULL&&hb!=NULL)// a b 都未检测完
	{
		if (ha->data <= hb->data) {
			hc->link = (SetNode*)malloc(sizeof(SetNode));
			hc->link->data = ha->data;
			ha = ha->link;
		}
		else {
			hc->link = (SetNode*)malloc(sizeof(SetNode));
			hc->link->data = hb->data;
			hb = hb->link;
		}
		hc = hc->link;
	}
	/*if (ha == NULL&&hb!=NULL) {
		hc->link = (SetNode*)malloc(sizeof(SetNode));
		hc->link->data = hb->data;
		hb = hb->link;
		hc = hc->link;
	}
	if (hb == NULL&&ha != NULL) {
		hc->link = (SetNode*)malloc(sizeof(SetNode));
		hc->link->data = ha->data;
		ha = ha->link;
		hc = hc->link;
	}
	else {
		hc->link = NULL;
		c.last = hc;
	}*/
	p = (ha != NULL) ? ha : hb;
	while (p != NULL) {
		hc->link = (SetNode*)malloc(sizeof(SetNode));
		hc->link->data = p->data;
		hc = hc->link;
		p = p->link;
		hc->link = NULL;
		c.last = hc;
	}
}

