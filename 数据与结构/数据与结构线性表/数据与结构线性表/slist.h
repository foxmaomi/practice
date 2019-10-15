#define _CRT_SECURE_NO_WARNINGS
#ifndef _SLISH_H_
#define _SLISH_H_

#include"common.h"

//#if 0
typedef struct SListNode
{
	DataType data;
	struct SListNode *next;
}SListNode;

typedef struct SList
{
	SListNode *first;
	SListNode *last;
	size_t size;
}SList;

SListNode* _Buynode(DataType x)
{
	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	s->next = NULL;
	s->data = x;
	return s;
}


//typedef Node* List;

void SListInit(SList *plist);
void SListShowList(SList *plist);
bool SListPushBack(SList *plist, DataType x);
bool SListPushFront(SList *plist, DataType x);
bool SListPopBack(SList *plist);
bool SListPopFront(SList *plist);
SListNode* SListFindByVal(SList *plist, DataType key);
bool SListDeleteByVal(SList *plist, DataType key);

void SListShowList(SList *plist)
{
	SListNode *p = plist->first->next;
	while (p != NULL)
	{
		printf("%d-->", p->data);
		p = p->next;
	}
	printf("Over.\n");
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

bool SListPushFront(SList *plist, DataType x)
{
	SListNode *s = _Buynode(x);
	if (s == NULL)
		return false;
	s->next = plist->first->next;
	plist->first->next = s;
	if (plist->size == 0)
		plist->last = s;
}

bool SListPopBack(SList *plist)
{
	SListNode *p;
	if (plist->size == 0)
		return false;
	p= plist->first->next;
	while (p->next !=plist->last)
	{
		p = p->next;
	}
	p->next = NULL;
	free(plist->last);
	plist->last = p;
	plist->size--;
	return true;
}

bool SListPopFront(SList *plist)
{
	SListNode *p;
	if (plist->size == 0)
		return false;
	p = plist->first->next;
	plist->first->next = p->next;
	free(p);
	plist->size--;
	if (plist->size == 0)
	{
		plist->last = plist->first;
	}
	return true;
}

SListNode* SListFindByVal(SList *plist, DataType key)
{
	SListNode *p;
	p = plist->first->next;
	while (p!=NULL && p->data != key)
	{
		p = p->next;
	}
	return p->data;
}
bool SListDeleteByVal(SList *plist, DataType key)
{
	SListNode *q;
	SListNode *p = plist->first;
	while (p->next != NULL && p->next->data != key)
	{
		p = p->next;
	}
	if (p->next == NULL)
		return false;
	q = p->next;
	if (p->next == plist->last)
	{
		plist->last = p;
	}
	p->next = q->next;
	free(q);
	plist->size--;
	return true;
}
#endif
//
//void InitList(List *head);
//void GreateList_Tail(List *head);
//void GreateList_Front(List *head);
//void ShowList(List head);
//
//void InitList(List *head)
//{
//	*head = NULL;
//}
//
//void GreateList_Tail(List *head)
//{
//	*head = (Node*)malloc(sizeof(Node));
//	(*head)->data = 1;
//	(*head)->next = NULL;
//
//	Node *p = *head;
//	for (int i = 2; i <= 10; ++i)
//	{
//		Node *s = (Node*)malloc(sizeof(Node));
//		assert(s != NULL);
//		s->data = i;
//		s->next = NULL;
//		p->next = s;
//		p = s;
//	}
//	return 0;
//}
//
//void GreateList_Front(List *head)
//{
//	*head = (Node*)malloc(sizeof(Node));
//	(*head)->data = 1;
//	(*head)->next = NULL;
//	for (int i = 2; i <= 10; ++i)
//	{
//		Node* s = (Node*)malloc(sizeof(Node));
//		s->data = i;
//		s->next = 
//	}
//}
//
//void ShowList(List head)
//{
//	Node *p = head;
//	while (p != NULL)
//	{
//		printf("%d-->", p->data);
//		p = p->next;
//	}
//	printf("Over.\n");
//}
//
//#endif 



