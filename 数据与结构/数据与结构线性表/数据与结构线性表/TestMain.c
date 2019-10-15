#define _CRT_SECURE_NO_WARNINGS
//#include"slist.h"
////#include<vld.h>
//int main()
//{
//	List mylist;
//	InitList(&mylist);
//	GreateList_Tail(&mylist);
//    GreateList_Front(&mylist);
//	ShowList(mylist);
//	return 0;
//}

#include"slist.h"

int main()
{
	SList mylist;
	SListInit(&mylist);
	SListNode *p;
	int select = 1;
	int flag = 1;
	DataType item, key, ret, pos;
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
			printf("������Ҫ���������<-1����>��>");
			while (scanf("%d", &item), item != -1)
			{
				SListPushBack(&mylist, item);
			}
			break;
		case 2:
			printf("������Ҫ���������<-1����>��>");
			while (scanf("%d", &item), item != -1)
			{
				SListPushFront(&mylist, item);
			}
			break;
		case 3:
			SListShowList(&mylist);
			break;
		case 4:
			SListPopBack(&mylist);
			break;
		case 5:
			SListPopFront(&mylist);
			break;
		case 6:
			printf("������Ҫ�����λ��:>");
			scanf("%d", &pos);
			printf("������Ҫ���������:>");
			scanf("%d", &item);
			//SListInsertByPos(&mylist,pos,item);
			break;
		case 7:
			printf("������Ҫ���������:>");
			scanf("%d", &item);
			//SListInsertByVal(&mylist,item);
			break;
		case 8:
			printf("������Ҫɾ����λ�ã�>");
			scanf("%d", &pos);
			//SListDeleteByPos(&mylist,pos);
			break;
		case 9:
			printf("������Ҫɾ�������ݣ�>");
			scanf("%d", &key);
			SListDeleteByVal(&mylist, key);
			break;
		case 10:
			printf("������Ҫ���ҵ�λ�ã�>");
			scanf("%d", &pos);
			//flag = SListFindByPos(&mylist,pos,&ret);
			if (flag)
			{
				printf("���ҵ�����Ϊ:>%d\n", ret);
			}
			else
			{
				printf("���ҵ����ݲ�����.\n");
			}
			break;
		case 11:
			printf("������Ҫ���ҵ����ݣ�>");
			scanf("%d", &key);
			p = SListFindByVal(&mylist, key);
			if (p == key)
			{
				printf("�������ڵ��±�Ϊ��>");
			}
			else
			{
				printf("���ҵ����ݲ�����.\n");
			}
			break;
		case 12:
			//SListSort(&mylist);
			break;
		case 13:
			//SListReverse(&mylist);
			break;
		case 14:
			//printf("SListLength = %d\n",SListLength(&mylist));
			break;
		case 15:
			//SListClear(&mylist);
			break;
		case 18:
			//printf("capacity = %d\n",SListCapacity(&mylist));
			break;
		default:
			printf("�����������������.......\n");
			break;
		}
		system("pause");
		system("cls");
	}
}

////#if 0
//#include"seqlist.h"
//int main()
//{
//	SeqList mylist;
//	SeqListInit(&mylist, SEQLIST_DEFAULT_SIZE);
//	int pos;
//	DataType item, key, ret;
//	SeqList *p;
//	bool flag;
//	int select = 1;
//	while (select)
//	{
//		printf("**************************************\n");
//		printf("** [1]push_back      [2]push_front  **\n");
//		printf("** [3]show_list      [0]quit_system **\n");
//		printf("** [4]pop_back       [5]pop_front   **\n");
//		printf("** [6]insert_pos     [7]insert_val  **\n");
//		printf("** [8]delete_pos     [9]delete_val  **\n");
//		printf("** [10]find_pos      [11]find_val   **\n");
//		printf("** [12]sort          [13]reverse    **\n");
//		printf("** [14]length        [15]clear      **\n");
//		printf("** [16]modify_pos    [17]modify_val **\n");
//		printf("**           [18]capacity           **\n");
//		printf("**************************************\n");
//		printf("��ѡ��>");
//		scanf("%d", &select);
//		if (select == 0)
//			break;
//		switch (select)
//		{
//		case 1:
//			printf("������Ҫ���������<-1����>:>");
//			while (scanf("%d", &item), item != -1)
//			{
//				SeqListPushBack(&mylist, item);
//			}
//			break;
//		case 2:
//			printf("������Ҫ���������<-1����>��>");
//			while (scanf("%d", &item), item != -1)
//			{
//				SeqListPushFront(&mylist, item);
//			}
//			break;
//		case 3:
//			SeqListShow(&mylist);
//			break;
//		case 4:
//			SeqListPopBack(&mylist);
//			break;
//		case 5:
//			SeqListPopFront(&mylist);
//			break;
//		case 6:
//			printf("������Ҫ�����λ��:>");
//			scanf("%d", &pos);
//			printf("������Ҫ���������:>");
//			scanf("%d", &item);
//			SeqListInsertByPos(&mylist, pos, item);
//			break;
//		case 7:
//			printf("������Ҫ���������:>");
//			scanf("%d", &item);
//			SeqListInsertByVal(&mylist, item);
//			break;
//		case 8:
//			printf("������Ҫɾ����λ�ã�>");
//			scanf("%d", &pos);
//			SeqListDeleteByPos(&mylist, pos);
//			break;
//		case 9:
//			printf("������Ҫɾ�������ݣ�>");
//			scanf("%d", &key);
//			SeqListDeleteByVal(&mylist, key);
//			break;
//		case 10:
//			printf("������Ҫ���ҵ�λ�ã�>");
//			scanf("%d", &pos);
//			flag = SeqListFindByPos(&mylist, pos, &ret);
//			if (flag)
//				printf("SeqListFindByPos���ҵ�����Ϊ��> %d\n", ret);
//			else
//				printf("SeqListFindByPos���ҵ����ݲ�����\n");
//			break;
//		case 11:
//			printf("������Ҫ���ҵ�ֵ��>");
//			scanf("%d", &key);
//			p = SeqListFindByVal(&mylist, key);
//			if (pos == -1)
//				printf("SeqListFindByValҪ���ҵ����ݲ����ڡ�\n");
//			else
//				printf("SeqListFindByVal�������ڵ��±�Ϊ��> %d\n", pos);
//			break;
//		case 12:
//			SeqListSort(&mylist);
//			break;
//		case 13:
//			SeqListReverse(&mylist);
//			break;
//		case 14:
//			printf("SeqList Length = %d \n", SeqListLength(&mylist);
//			break;
//		case 15:
//			SeqListClear(&mylist);
//		case 16:
//			break;
//		case 17:
//			break;
//		case 18:
//			printf("capacity = %d\n", SeqListCapacity(&mylist));
//			break;
//		default:
//			printf("����������������롣������\n");
//			break;
//		}
//		system("pause");
//		system("cls");
//	}
//	
//}
////#endif
