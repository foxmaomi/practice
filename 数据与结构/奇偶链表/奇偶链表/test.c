#define _CRT_SECURE_NO_WARNINGS

//#include"common.h"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<stdbool.h>

#define DataType int

typedef struct SListNode
{
	DataType data;
	struct SListNode *next;
}SListNode;

typedef struct SList
{
	SListNode *first;
	SListNode *last;
	size_t     size;
}SList;

SListNode* _Buynode(DataType x)
{
	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
	//assert(s != NULL);
	if (s == NULL)
		return NULL;
	s->next = NULL;
	s->data = x;
	return s;
}

void SListInit(SList *plist)
{
	SListNode *s = _Buynode(0);
	plist->first = plist->last = s;
	plist->size = 0;
}

bool SListPushBack(SList *plist, DataType x)
{
	SListNode *s = _Buynode(x);
	if (s == NULL)
		return false;
	plist->last->next = s;
	plist->last = s;
	plist->size++;
	return true;
}

void SListShow(SList *plist)
{
	SListNode *p = plist->first->next;
	while (p != NULL)
	{
		printf("%d-->", p->data);
		p = p->next;
	}
	printf("Over.\n");
}

void SListSort(SList *plist)
{
	if (plist->size > 1)
	{
		SListNode *prev;
		SListNode *p = plist->first->next;
		SListNode *q = p->next;
		plist->last = p;
		plist->last->next = NULL;
		p = q;
		while (p != NULL)
		{
			q = q->next;
			prev = plist->first;
			while (prev->next != NULL && p->data > prev->next->data)
				prev = prev->next;
			if (prev->next == NULL)
			{
				prev->next = p;
				plist->last = p;
				p->next = NULL;
			}
			else
			{
				p->next = prev->next;
				prev->next = p;
			}
			p = q;
		}
	}
}

void findp_q(SList *plist, SList* p, SList* q)
{
	SListNode *s = plist->first->next;
	while (s != NULL)
	{
		if ((s->data) % 2 == 1)
		{
			SListPushBack(p, s->data);
		}
		else
		{
			SListPushBack(q, s->data);
		}
		s = s->next;
	}
	return;
}

int main()
{
	int item;
	SList s;
	SListInit(&s);

	// p为奇链表   q为偶链表
	SList p;
	SList q;	
	SListInit(&p);
	SListInit(&q);
	printf("请输入要录入的数据以-1结尾！！！！:");
	while (scanf("%d", &item), item != -1)
	{
     	SListPushBack(&s, item);
	}
	findp_q(&s, &p, &q);
	SListSort(&s);
	SListSort(&p);
	SListSort(&q);
	SListShow(&s);
	SListShow(&p);
	SListShow(&q);
	return 0;
}