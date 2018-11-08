#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct DuoNode {
	double x;
	int e;
	struct DuoNode *next;
}Term,*TermList;