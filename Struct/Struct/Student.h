#pragma once
typedef struct Student
{
	int num;
	float score;
	Student *next;
};
union MyUnion
{
	int a1;
	float a2;
	char a3;
	Student a4;
};
