#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int DataType;
typedef struct db_node {
	DataType data;
	struct db_node *before, *next;
}D_Node,*DBLsit;
