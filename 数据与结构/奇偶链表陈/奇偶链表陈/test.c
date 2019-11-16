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
	// p为奇链表   q为偶链表
	printf("请输入要录入的数据以-1结尾！！！！:");
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