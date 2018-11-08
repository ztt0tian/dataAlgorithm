#include"queue.h"

void InitQueue(CircQue & Q)
{
	Q.front = Q.rear = 0;
}

int insert(CircQue & Q, int x)
{
	if ((Q.rear + 1 )%  maxSize == Q.front) {
		return 0;
	}
	Q.elem[Q.rear] = x;
	Q.rear = (Q.rear + 1) % maxSize;

	return 1;
}
int remote(CircQue& Q, int& x) {
	if (Q.rear == Q.rear) { return 0; }
	x = Q.elem[Q.front];
	Q.front = (Q.front + 1) % maxSize;
	return 1;
}