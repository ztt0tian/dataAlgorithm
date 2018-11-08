#pragma once
typedef char TElemType;
typedef struct node {
	TElemType data;
	struct node *lchild, *rchild;
}BTNode,*BinTree;

