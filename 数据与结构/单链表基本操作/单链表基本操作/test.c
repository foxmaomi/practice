#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<stdbool.h>
#include<time.h>
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

bool SListPushFront(SList *plist, DataType x)
{
	SListNode *s = _Buynode(x);
	if (s == NULL)
		return false;
	s->next = plist->first->next;
	plist->first->next = s;
	if (plist->size == 0)
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


int main()
{
	SList mylist;
	SListInit(&mylist);
	DataType item;
	int n;
	printf("头插请输入1， 尾插请输入其他：");
	scanf("%d", &n);
	if (n == 1)
	{
		printf("请输入要插入的数据<-1结束>：>");
		while (scanf("%d", &item), item != -1)
		{
			SListPushFront(&mylist, item);
		}
	}
	else
	{
		printf("请输入要插入的数据<-1结束>：>");
		while (scanf("%d", &item), item != -1)
		{
			SListPushBack(&mylist, item);
		}
	}
	SListShow(&mylist);
	SListSort(&mylist);
	SListShow(&mylist);
}