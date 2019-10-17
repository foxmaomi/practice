#define _CRT_SECURE_NO_WARNINGS
#ifndef _STACK_H_
#define _STACK_H_

#include"common.h"

#define STACK_DEFAULT_SIZE 8
#define STACK_INC_SIZE 5
//顺序栈
typedef struct SeqStack
{
	DataType *base;
	size_t capacity;
	int top;
}SeqStack;

BOOL SeqStackFull(SeqStack *pst)
{
	if (pst->top > pst->capacity)
		return TRUE;
	return FALSE;
}

BOOL SeqStackEmpty(SeqStack *pst)
{
	if (pst->top == 0)
		return TRUE;
	return FALSE;
}

void SeqStackInit(SeqStack *pst,int sz);
SeqStack* SeqStackCreate(int sz);
DataType SeqStackTop(SeqStack *pst);
void SeqStackPush(SeqStack *pst, DataType x);
void SeqStackPop(SeqStack *pst);
void SeqStackShow(SeqStack *pst);

void SeqStackInit(SeqStack *pst, int sz)
{
	pst->capacity = sz > STACK_DEFAULT_SIZE ? sz : STACK_DEFAULT_SIZE;
	pst->base = (DataType *)malloc(sizeof(DataType)*pst->capacity);
	pst->top = 0;
}

SeqStack* SeqStackCrate(int sz)
{
	SeqStack *pst = (SeqStack*)malloc(sizeof(SeqStack));
	pst->capacity = sz > STACK_DEFAULT_SIZE ? sz : STACK_DEFAULT_SIZE;
	pst->base = (DataType*)malloc(sizeof(DataType)*pst->capacity);
	pst->top = 0;
	return pst;
}

DataType SeqStackTop(SeqStack *pst)
{
	if (SeqStackEmpty(pst))
	{
		printf("栈已满，不能取出栈定元素\n");
		return;
	}
	return pst->base[pst->top - 1];
}

void SeqStackPush(SeqStack *pst, DataType x)
{
	if (SeqStackFull(pst))
	{
		printf("栈已满，%d不能入栈。\n", x);
		return;
	}
	pst->base[pst->top++] = x;
} 

void SeqStackPop(SeqStack *pst)
{
	if (SeqStackEmpty(pst))
	{
		printf("栈已空，不能出栈。\n");
		return;
	}
	pst->top--;
}

void SeqStackShow(SeqStack *pst)
{
	int i;
	for ( i= pst->top - 1; i >= 0; i--)
		printf("%d\n", pst->base[i]);
}


//链栈
typedef struct StackNode
{
	DataType data;
	struct StackNode *next;
}StackNode;

typedef StackNode * ListStack;





#endif