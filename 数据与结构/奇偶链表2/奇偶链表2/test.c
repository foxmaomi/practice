#define _CRT_SECURE_NO_WARNINGS

#include"common.h"

int main()
{
	int item;
	SList s;
	SListInit(&s);

	// p为奇链表   q为偶链表
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
	printf("请输入要录入的数据以-1结尾！！！！:");
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