#include"coomon.h"

typedef struct Slistnode
{
	Datatype data;
	struct Slistnode* next;
}Slistnode;

typedef struct Slist
{
	Slistnode* first;
	Slistnode* last;
	int size;
}Slist;

Slistnode* Buynode(Datatype x)
{
	Slistnode* p = (Slistnode*)malloc(sizeof(Slistnode));
	if (p == NULL)
		return NULL;
	p->data = x;
	p->next = NULL;
}
void SlistInit(Slist* plist);
void SListPushBack(Slist* plist, Datatype x);
void SListPushFront(Slist* plist, Datatype x);

void SListShow(Slist* plist);

bool SListPopBack(Slist* plist);
bool SListPopFront(Slist* plist);
void SlistInit(Slist* plist)
{
	Slistnode* p = Buynode(0);
	if (p == NULL)
		return;
	plist->first = plist->last = p;
	plist->size++;
}
void SListPushBack(Slist* plist, Datatype x)
{
	Slist* p = Buynode(x);
	if (p == NULL)
		return;
	plist->last->next = p;
	plist->last = p;
	plist->size++;
}
void SListPushFront(Slist* plist, Datatype x)
{
	Slistnode* p = Buynode(x);
	if (p == NULL)
		return;
	if (plist->first->next == NULL)
		plist->last = p;
	p->next = plist->first->next;
	plist->first->next = p;
}
void SListShow(Slist* plist)
{
	Slistnode *p = plist->first->next;
	if (p == NULL)
		return;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("\n");
}
bool SListPopBack(Slist* plist)
{
	Slistnode* p = plist->last;
	Slistnode* q = plist->first;
	if (plist->first->next == NULL)
		return true;
	while (q->next != p)
	{
		q = q->next;
	}
	q->next = NULL;
	plist->last = q;
	free(p);
	return true;
}
bool SListPopFront(Slist* plist)
{

}
//SlistNode* _Buynode(DataType x)
//{
//	Slistnode *s = (Slistnode*)malloc(sizeof(Slistnode));
//	//assert(s != NULL);
//	if (s == NULL)
//		return NULL;
//	s->next = NULL;
//	s->data = x;
//	return s;
//}
//void SlistInit(Slist *plist);
//void SlistInit(Slist *plist)
//{
//	Slistnode *s = _Buynode(0);
//	plist->first = plist->last = s;
//	plist->size = 0;
//}



