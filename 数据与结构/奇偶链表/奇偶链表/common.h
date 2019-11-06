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
//typedef SListNode* slist;

void SListInit(SList *plist);
void SListShow(SList *plist);
bool SListPushBack(SList *plist, DataType x);
void SListSort(SList *plist);
void slistinit(slist *plist);
void findp_q(SList *plist, SList *p, SList *q);
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



//typedef struct SListNode
//{
//	DataType data;
//	struct SListNode *next;
//}SListNode;
//
//typedef SListNode* SList;
//
//SListNode* _Buynode(DataType x)
//{
//	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
//	//assert(s != NULL);
//	if (s == NULL)
//		return NULL;
//	s->next = NULL;
//	s->data = x;
//	return s;
//}
//void SListInit(SListNode *plist);
//void SListShow(SListNode *plist);
//bool SListPushBack(SListNode *plist, DataType x);
//
//void SListInit(SList *plist)
//{
//	SListNode *s = _Buynode(-2);
//	*plist = s;
//	//plist->data = 0;
//	//plist->next = NULL;
//}
//
//bool SListPushBack(SList *plist)
//{
//
//	DataType x;
//	scanf("%d", &x);
//	SListNode *p = (SListNode*)malloc(sizeof(SListNode));
//	p = *plist;
//	while (x != -1)
//	{
//		SListNode *s = _Buynode(x);
//		if (s == NULL)
//			return false;
//		s->next = p->next;
//		p->next = s;
//		scanf("%d", &x);
//	}
//	return true;
//}

//LNode* CreatLinkListByHead()
//{
//	LNode *s;
//	int x;
//	LNode* head;
//	head = (LNode*)malloc(sizeof(LNode));
//	head->next = NULL;
//
//	scanf("%d", &x);
//	while (x != -1)
//	{
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		s->next = head->next;
//		head->next = s;
//		scanf("%d", &x);
//	}
//
//	return head;
//}

//void SListShow(SListNode *plist)
//{
//	while (plist != NULL)
//	{
//
//		printf("%d-->", plist->data);
//		plist = plist->next;
//	}
//	printf("Over.\n");
//}

//typedef struct SList
//{
//	SListNode *first;
//	SListNode *last;
//	size_t     size;
//}SList;
//
//SListNode* _Buynode(DataType x)
//{
//	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
//	//assert(s != NULL);
//	if (s == NULL)
//		return NULL;
//	s->next = NULL;
//	s->data = x;
//	return s;
//}
//////#define SListNode* SList
////typedef struct SList
////{
////	SListNode *first;
////	SListNode *last;
////	size_t     size;
////}SList;
//



//typedef struct DListNode
//{
//	DataType data;
//	struct DListNode *prev;
//	struct DListNode *next;
//}DListNode;
//
//typedef struct DList
//{
//	DListNode *first;
//	DListNode *last;
//	size_t     size;
//}DList;
//
//void swap(DataType *a, DataType *b)
//{
//	DataType tmp = *a;
//	*a = *b;
//	*b = tmp;
//}