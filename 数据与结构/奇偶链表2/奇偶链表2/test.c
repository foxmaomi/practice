#define _CRT_SECURE_NO_WARNINGS

#include"common.h"

int main()
{
	int item;
	SList s;
	SListInit(&s);

	// pΪ������   qΪż����
	odevity p;
	odevity q;
	odevityinit(&p);
	odevityinit(&q);
	/*SListNode *p = (SListNode*)malloc(sizeof(SListNode));
	p->data = 0;
	p->next = NULL;
	SListNode *q = (SListNode*)malloc(sizeof(SListNode));
	q->data = 0;
	q->next = NULL;*/
	printf("������Ҫ¼���������-1��β��������:");
	while (scanf("%d", &item), item != -1)
	{
		SListPushBack(&s, item);
	}
	findp_q(&s,&p, &q);
	SListSort(&s);
	//SListSort(&p);
	//SListSort(&q);
	SListShow(&s);
	//SListShow(&p);
	//SListShow(&q);
	return 0;
}