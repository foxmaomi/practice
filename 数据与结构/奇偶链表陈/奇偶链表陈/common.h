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

typedef struct odevity
{
	SListNode *last;
	SListNode *first;
}odevity;

typedef struct SList
{
	SListNode *first;
	SListNode *last;
	size_t     size;
}SList;

SListNode* _Buynode(DataType x)
{
	SListNode *s = (SListNode*)malloc(sizeof(SListNode));

	if (s == NULL)
		return NULL;
	s->next = NULL;
	s->data = x;
	return s;
}
//typedef SListNode* slist;

void SListInit(SList *plist);
void SListShow(SList *plist);
bool SListPushBack(SList *plist, DataType x);
void SListSort(SList *plist);
void odevityinit(odevity *plist);
void findp_q(SList *plist, odevity *p, odevity *q);
void odevityinit(odevity *plist)
{
	SListNode *s = _Buynode(0);
	plist->last = plist->first = s;
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
void findp_q(SList *plist, SList *p)
{
	SListNode* s1 = plist->first;
	SListNode* s2 = s1->next;
	while (s2 != NULL)
	{
		if ((s1->next->data) % 2 == 0)
		{
			s1 = s2;
			s2 = s2->next;
		}
		else
		{
			p ->last->next = s2;
			p->last = s2;
			s1->next = s2->next;
			s1 = s2;
			s2 = s2->next;
		}
	}
	return;
}
