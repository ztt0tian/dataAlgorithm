#include"DBlist.h"
void createFBlist(DBLsit &first, DataType A[], int m) {
	first = (db_node*)malloc(sizeof(db_node));
	first->before = first;
	first->next = first;
	db_node *newnode;
	db_node *a=first;
	db_node *b= first;
	for (int i =0; i < m; i++) {
		newnode = (db_node*)malloc(sizeof(db_node));
		newnode->data = A[i];
		a = b->next;
		newnode->before = b;
		a->before = newnode;
	}
}