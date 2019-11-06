#define _CRT_SECURE_NO_WARNINGS

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
//void slistinit(slist *plist);
void odevityinit(odevity *plist);
//void findp_q(SList *plist, SList *p, SList *q);
//void findp_q(SList *plist, SListNode* *p, SListNode* *q);
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
void findp_q(SList *plist, odevity *p, odevity *q)
{
	SListNode* s1 = plist->first->next;
	//SListNode* s2 = s1->next;
	SListNode* s2 = plist->first->next->next;
	//SListNode* p1 = *p;
	//SListNode* q1 = *q;
	if (plist->first->next == NULL)
		return;
	if (s1->next == NULL)
	{
		if ((s1->data) % 2 == 1)//ละฦๆ
		{
			//p1->next = s1;
			p->last->next = s1;
			p->last = s1;
			return;
		}
		else
		{
			q->last->next = s1;
			q->last = s1;
			return;
		}
	}
	while (s1 != NULL)
	{
		if ((s1->data) % 2 == 1)
		{

			s1->next = NULL;
			p->last->next = s1;
			p->last = s1;
			s1 = s2;
			s2 = s1->next;
			
		}
		else
		{
			s1->next = NULL;
			q->last->next = s1;
			q->last = s1;
			s1 = s2;
			s2 = s1->next;
		}
	}
	return;
}

//void findp_q(SList *plist, SListNode* *p, SListNode* *q)
//{
//	SListNode* s1 = plist->first->next;
//	//SListNode* s2 = s1->next;
//	SListNode* s2 = plist->first->next->next;
//	SListNode* p1 = *p;
//	SListNode* q1 = *q;
//	if (plist->first->next == NULL)
//		return;
//	if (s1->next == NULL)
//	{
//		if ((s1->data) % 2 == 1)//ละฦๆ
//		{
//			p1->next = s1;
//			return;
//		}
//		else
//		{
//			q1->next = s1;
//			return;
//		}
//	}
//	while (s1 != NULL)
//	{
//		if ((s1->data) % 2 == 1)
//		{
//			s1->next = NULL;
//			p1->next = s1;
//			s1 = s2;
//			s2 = s1->next;
//			p1 = p1->next;
//		}
//		else
//		{
//			s1->next = NULL;
//			q1->next = NULL;
//			s1 = s2;
//			s2 = s1->next;
//			q1 = q1->next;
//		}
//	}
//	return;
//}
//void findp_q(SList *plist, SListNode* *p, SListNode* *q)
//{
//	SListNode *s = plist->first->next;
//	SListNode *p1 = *p;
//	SListNode *q1 = *q;
//	while (s != NULL)
//	{
//		if ((s->data) % 2 == 1)
//		{
//			p1->next = s;
//			p1 = p1->next;
//			p1->next = NULL;
//		}
//		else
//		{
//			q1->next = s;
//			q1 = q1->next;
//			q1->next = NULL;
//		}
//		s = s->next;
//	}
//	return;
//}
