#include <stdio.h>
#include <Windows.h>
#include<string.h>
#include "Student.h"
 typedef struct MyStruct
{
	int id;
	char *name;
	bool isMan;
	MyStruct *next;
}MY;
int main() {
	//struct MyStruct m;
	MY m;
	m.name = "dasd";
	m.id = 2;
	m.isMan = true;
	MY m_array[20];//结构体数组
	for (int i = 0; i < 20; i++) {
		m_array[i].id = i;
		m_array[i].isMan = false;
		m_array[i].name ="dsdad";
	}
	//for (MY temp : m_array) {
	//	printf("%d %s %d\n", temp.id, temp.name, temp.isMan);
	//}
	MY* p;
	p = &m;
	printf("%d %s %d\n", (*p).id, (*p).name, (*p).isMan); 
	//printf("%p",m_array);
	printf("%s", (*(m_array+1)).name);
	//结构体链表
	Student a, b, c, *head, *pS;
	a.num = 1; a.score = 81;
	b.num = 2; b.score = 41;
	c.num = 3; c.score = 45;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	pS = head;
	do {
		printf("%d %3.1f\n", pS->num, pS->score);
		pS = pS->next;
	} while (pS != NULL);
	Student *newP;
	newP = (Student*)malloc(sizeof(Student));
	scanf_s("%d %f", &newP->num, &newP->score);
	newP->next=NULL;
	printf("%d %3.1f\n", newP->num, newP->score);
	MyUnion union2;
	union2.a1 = 16;
	union2.a4 = *newP;
	system("pause");
	return 0;
}