#define _CRT_SECURE_NO_WARNINGS

#include"common.h"

int main()
{
	int item;
	SList s;
	SListInit(&s);
	SList p;
	SListInit(&p);
	//odevity p;
	//odevityinit(&p);
	// pΪ������   qΪż����
	printf("������Ҫ¼���������-1��β��������:");
	while (scanf("%d", &item), item != -1)
	{
		SListPushBack(&s, item);
	}
	SListSort(&s);	
	findp_q(&s, &p);
	
	SListShow(&s);
	SListShow(&p);
	return 0;
}