#define _CRT_SECURE_NO_WARNINGS

//#include"common.h"
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

bool isValid(char * s,int *t)
{
	ListStack st;
	if (s == NULL)
		return false;
	if (*s == '\0')
		return true;
	ListStackInit(&st);

	while (*s != '\0')
	{
		if (*s == '(' || *s == '[' || *s == '{')
		{
			ListStackPush(&st, *s);
		}
		else
		{
			if (ListStackEmpty(&st))
				return false;

			int topval = ListStackTop(&st);
			if ((*s == ')'&& topval != '(')
				|| (*s == ']'&& topval != '[')
				|| (*s == '}'&& topval != '{'))
				return false;
			ListStackPop(&st);
		}
		s++;
	}

	bool flag = ListStackEmpty(&st);
	*t = flag;
	free(st);
	st = NULL;
	return flag;
}

int main()
{
	int flag = 0;
	char s[10] = { '(', };
	isValid(&s,&flag);
	if (flag == 1)
	{
		printf("¿®∫≈∆•≈‰\n");
	}
	else
	{
		printf("¿®∫≈≤ª∆•≈‰\n");
	}
}