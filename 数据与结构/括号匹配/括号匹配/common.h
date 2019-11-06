#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<stdbool.h>

#define DataType char

typedef struct StackNode
{
	DataType data;
	struct StackNode *next;
}StackNode;

typedef StackNode* ListStack;



bool ListStackEmpty(ListStack *pst);
void ListStackInit(ListStack *pst);
DataType ListStackTop(ListStack *pst);
void ListStackPush(ListStack *pst, DataType x);
void ListStackPop(ListStack *pst);
void ListStackShow(ListStack pst);


bool ListStackEmpty(ListStack *pst)
{
	return *pst == NULL;
}

void ListStackInit(ListStack *pst)
{
	*pst = NULL;
}

DataType ListStackTop(ListStack *pst)
{
	assert(*pst != NULL);//
	return (*pst)->data;
}

void ListStackPush(ListStack *pst, DataType x)
{
	StackNode *node = (StackNode*)malloc(sizeof(StackNode));
	assert(node != NULL);
	node->data = x;

	node->next = *pst;
	*pst = node;
}

void ListStackPop(ListStack *pst)
{
	StackNode *p = *pst;
	*pst = p->next;
	free(p);
}


