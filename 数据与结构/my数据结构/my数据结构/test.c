#define _CRT_SECURE_NO_WARNINGS


#include"slist.h"

int main()
{
	Slist mylist;
	SlistInit(&mylist);
	Slistnode *p;
	int select = 1;
	int flag = 1;
	Datatype item, key, ret, pos;
	ret = 0;
	while (select)
	{
		printf("**************************************\n");
		printf("** [1]push_back      [2]push_front  **\n");
		printf("** [3]show_list      [0]quit_system **\n");
		printf("** [4]pop_back       [5]pop_front   **\n");
		printf("** [6]insert_pos     [7]insert_val  **\n");
		printf("** [8]delete_pos     [9]delete_val  **\n");
		printf("** [10]find_pos      [11]find_val   **\n");
		printf("** [12]sort          [13]reverse    **\n");
		printf("** [14]length        [15]clear      **\n");
		printf("** [16]modify_pos    [17]modify_val **\n");
		printf("**************************************\n");
		printf("��ѡ��>");
		scanf("%d", &select);
		if (select == 0)
			break;
		switch (select)
		{
		case 1:
			printf("������Ҫ���������<-1����>:>");
			while (scanf("%d", &item), item != -1)
			{
				SListPushBack(&mylist, item);//β�巨
			}
			break;
		case 2:
			printf("������Ҫ���������<-1����>��>");
			while (scanf("%d", &item), item != -1)
			{
				SListPushFront(&mylist, item);//ͷ�巨
			}
			break;
		case 3:
			SListShow(&mylist);//��ʾ
			break;
		case 4:
			SListPopBack(&mylist);//βɾ
			break;
		case 5:
			SListPopFront(&mylist);
			break;
		default:
			printf("�����������������.......\n");
			break;
		}
		system("pause");
		system("cls");
	}
}
