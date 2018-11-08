#include"stack.h"
void init(Dynamic_Stack &stack) {
	stack.elem =(int *) malloc(initSize*sizeof(int));
	stack.top = -1;
	stack.maxsize = initSize;
	return ;
}
int push(Dynamic_Stack& s, int x) {
	if (s.top == s.maxsize - 1) { return 0; }
	s.elem[++s.top] = x;
	return 1;
}
int pop(Dynamic_Stack& s, int& x) {
	if (s.top == -1) { return 0; }
	x = s.elem[s.top--];
	return 1;
}
int GetTop(Dynamic_Stack& s, int& x) {
	if (s.top == -1) {
		return 0;
	}
	x = s.elem[s.top];
	return 1;
}
int GetSize(Dynamic_Stack& s) {
	return s.top + 1;
}

void InitStack(Linkstack & s)
{
	s = NULL;
}

int push(Linkstack & s, int x)
{
	linknode *p = (linknode*)malloc(sizeof(linknode));
	p->data = x;
	p->next = s;
	s = p;
	return 1;
}

int pop(Linkstack & s, int & x)
{
	if (s == NULL) { return 0; }
	linknode *p = s;
	x = s->data;
	s = p->next;
	free(p);
	return 1;
}

int GetTop(Linkstack & s, int & x)
{
	if (s == NULL) { return 0; }
	x = s->data;
	return 1;
}
