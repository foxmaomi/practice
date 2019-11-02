#define _CRT_SECURE_NO_WARNINGS


#include"heap.h"

void main()
{
	int ar[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	int n = sizeof(ar) / sizeof(int);
	DataType top;
	Heap hp;
	int i;
	HeapInit(&hp, n);

	for (i = 0; i<n; ++i)
	{
		HeapInsert(&hp, ar[i]);
	}

	HeapShow(&hp);
	printf("\n");
	top = HeapTop(&hp);
	printf("%d", top);
	HeapRemove(&hp);
	printf("\n");
	HeapDestroy(&hp);
}


int main()
{
	//char *str = "ABC##DE##F##G#H##";
	//char *str1 = "ABC##D#F##GE##H##";
	char *vlr = "ABCDEFGH";
	char *lvr = "CBEDFAGH";
	char *lrv = "CEFDBHGA";
	int n = strlen(lvr);
	int i = 0, j = 0;
	BinTree bt, bt1;
	BinTreeInit(&bt);
	BinTreeInit(&bt1);
	//BinTreeCreate(&bt);
	//BinTreeCreateByStr(&bt, str, &i);
	//BinTreeCreateByStr(&bt1, str1, &j);
	//BinTreeCreateBy_VLR_LVR(&bt, vlr, lvr, n);
	BinTreeCreateBy_LVR_LRV(&bt, lvr, lrv, n);
	printf("VLR   :");
	PreOrder(&bt);
	printf("\n");
	printf("VLR NR:");
	PreOrderNoR(&bt);
	printf("\n");
	printf("\n");
	printf("LVR   :");
	InOrder(&bt);
	printf("\n");
	printf("LVR NR:");
	InOrderNoR(&bt);
	printf("\n");
	printf("\n");
	printf("LRV   :");
	PostOrder(&bt);
	printf("\n");
	printf("LRV NR:");
	PostOrderNoR(&bt);
	printf("\n");
	printf("\n");
	printf("Level:");
	LevelOrder(&bt);
	printf("\n");
	printf("Size = %d\n", Size(&bt));
	printf("Hegith = %d\n", Height(&bt));
	BinTreeNode *p = Find(&bt, 'B');
	p = Parent(&bt, 'H');
	//Clone(&bt, &bt1);
	bool flag = Equal(&bt, &bt1);
	return 0;
}

//#include"bintree.h"
//
//
//
//int main()
//{
//	char *str = "ABC##DE##F##G#H##";
//	char *str1 = "ABC##D#F##GE##H##";
//	char vlr = "ABCDEFGH";
//	char lvr = "CBEDFAGH";
//	char lrv = "CEFDBHGA";
//	int i = 0, j = 0;
//	BinTree bt, bt1;
//	BinTreeInit(&bt);
//	BinTreeInit(&bt1);
//	//BinTreeCreate(&bt);
//	BinTreeCreateByStr(&bt, str, &i);
//	BinTreeCreateByStr(&bt1, str1, &j);
//
//	printf("VLR   :");
//	PreOrder(&bt);
//	printf("\n");
//	printf("VLR NR:");
//	PreOrderNoR(&bt);
//	printf("\n");
//
//	printf("LVR:");
//	InOrder(&bt);
//	printf("\n");
//	printf("LRV:");
//	PostOrder(&bt);
//	printf("\n");
//	printf("Level:");
//	LevelOrder(&bt);
//	printf("\n");
//
//	printf("Size = %d\n", Size(&bt));
//	printf("Hegith = %d\n", Height(&bt));
//
//	BinTreeNode *p = Find(&bt, 'B');
//	p = Parent(&bt, 'H');
//
//	//Clone(&bt, &bt1);
//	bool flag = Equal(&bt, &bt1);
//
//	return 0;
//}


//int main()
//{
//	char *str = "ABC##DE##F##G#H##";
//	char lvr = "";
//	char lrv = "";
//	int n = strlen(lvr);
//	BinTree bt;
//    BinTreeInit(&bt);
//	BinTreeCreate(&bt);
//	BinTreeCreate(&bt, str);
//	printf("VLR:");
//	PreOrder(&bt);
//	printf("\n");
//	printf("LVR:");
//	InOrder(&bt);
//	printf("\n");
//	printf("LRV:");
//	PostOrder(&bt);
//	printf("\n");
//	return 0;
//}



//#include"seqlist.h"
//#include"queue.h"

//int main()
//{
//	LinkQueue LQ;
//	LinkQueueInit(&LQ);
//	LinkQueueEn(&LQ, 1);
//	LinkQueueEn(&LQ, 2);
//	LinkQueueEn(&LQ, 3);
//	LinkQueueEn(&LQ, 4);
//	LinkQueueEn(&LQ, 5);
//
//	LinkQueueShow(&LQ);
//
//	LinkQueueDestroy(&LQ);
//	return 0;
//}


//int main()
//{
//	SeqCyQueue CQ;
//	SeqQueueCyInit(&CQ, _DEFAULT_QUEUE_SIZE_);
//	SeqQueueCyEn(&CQ, 1);
//	SeqQueueCyEn(&CQ, 2);
//	SeqQueueCyEn(&CQ, 3);
//	SeqQueueCyEn(&CQ, 4);
//	SeqQueueCyEn(&CQ, 5);
//
//	SeqQueueCyDe(&CQ);
//	SeqQueueCyDe(&CQ);
//	SeqQueueCyShow(&CQ);      
//	
//	SeqQueueCyEn(&CQ, 6);
//	SeqQueueCyEn(&CQ, 7);
//	SeqQueueCyEn(&CQ, 8);
//	SeqQueueCyEn(&CQ, 9);
//
//	SeqQueueCyShow(&CQ);
//
//	//SeqQueueCyEn(&CQ, 19);
//	SeqQueueCyEn(&CQ, 19);
//	return 0;
//}





//#include"seqlist.h"
//#include"stack.h"
//
//int main()
//{
//	ListStack st;
//	ListStackInit(&st);
//	ListStackPush(&st, 1);
//	ListStackPush(&st, 2);
//	ListStackPush(&st, 3);
//	ListStackShow(st);
//	printf("=============\n");
//	ListStackPop(&st);
//	ListStackShow(st);
//}




//int main()
//{
//	SeqStack st;
//	SeqStackInit(&st, STACK_DEFAULT_SIZE);
//	//SeqStack *pst = SeqStackCrate(STACK_DEFAULT_SIZE);
//	SeqStackPush(&st, 1);
//	SeqStackPush(&st, 2);
//	SeqStackPush(&st, 3);
//	SeqStackPush(&st, 4);
//	SeqStackPush(&st, 5);
//	SeqStackPush(&st, 6);
//	SeqStackPush(&st, 7);
//	SeqStackPush(&st, 8);
//	SeqStackPop(&st);
//	SeqStackPush(&st, 9);
//	SeqStackShow(&st);
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node *next;
//}Node;
//
//typedef Node* List;
//
//
//void InitList(List *head)
//{
//	*head = (Node*)malloc(sizeof(Node));
//	(*head)->next = NULL;
//}
//
//void CreateList(List *head)
//{
//	Node *p = *head;
//	for (int i = 1; i <= 5; ++i)
//	{
//		Node *s = (Node*)malloc(sizeof(Node));
//		assert(s != NULL);
//		s->data = i;
//		s->next = NULL;
//
//		p->next = s;
//		p = s;
//	}
//}
//
//struct Node* middleNode(struct Node* head)
//{
//	int nodeCount = 0;
//	struct Node *p = head->next;
//	while (p != NULL)
//	{
//		nodeCount++;
//		p = p->next;
//	}
//
//	p = head->next;
//	for (int i = 0; i<nodeCount / 2; ++i)
//		p = p->next;
//	return p;
//}
//
//int main()
//{
//	List mylist;
//	InitList(&mylist);
//	CreateList(&mylist);
//
//	struct Node *p = middleNode(mylist);
//	return 0;
//}


























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
//
//#include"slist.h"
//
//int main()
//{
//	//SeqList mylist;
//	//SeqListInit(&mylist, SEQLIST_DEFAULT_SIZE);
//	//SList mylist;
//	//SListInit(&mylist);
//	//SCList mylist;
//	//SCListInit(&mylist);
//	//DList mylist;
//	//DListInit(&mylist);
//	DCList mylist;
//	DCListInit(&mylist);
//	DCListNode *p;
//	int select = 1;
//	int flag = 1;
//	DataType item, key, ret, pos;
//	ret = 0;
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
//		printf("**************************************\n");
//		printf("请选择：>");
//		scanf("%d", &select);
//		if (select == 0)
//			break;
//		switch (select)
//		{
//		case 1:
//			printf("请输入要插入的数据<-1结束>：>");
//			while (scanf("%d", &item), item != -1)
//			{
//				SListPushBack(&mylist, item);
//			}
//			break;
//		case 2:
//			printf("请输入要插入的数据<-1结束>：>");
//			while (scanf("%d", &item), item != -1)
//			{
//				SListPushFront(&mylist, item);
//			}
//			break;
//		case 3:
//			SListShowList(&mylist);
//			break;
//		case 4:
//			SListPopBack(&mylist);
//			break;
//		case 5:
//			SListPopFront(&mylist);
//			break;
//		case 6:
//			printf("请输入要插入的位置:>");
//			scanf("%d", &pos);
//			printf("请输入要插入的数据:>");
//			scanf("%d", &item);
//			//SListInsertByPos(&mylist,pos,item);
//			break;
//		case 7:
//			printf("请输入要插入的数据:>");
//			scanf("%d", &item);
//			//SListInsertByVal(&mylist,item);
//			break;
//		case 8:
//			printf("请输入要删除的位置：>");
//			scanf("%d", &pos);
//			//SListDeleteByPos(&mylist,pos);
//			break;
//		case 9:
//			printf("请输入要删除的数据：>");
//			scanf("%d", &key);
//			SListDeleteByVal(&mylist, key);
//			break;
//		case 10:
//			printf("请输入要查找的位置：>");
//			scanf("%d", &pos);
//			//flag = SListFindByPos(&mylist,pos,&ret);
//			if (flag)
//			{
//				printf("查找的数据为:>%d\n", ret);
//			}
//			else
//			{
//				printf("查找的数据不存在.\n");
//			}
//			break;
//		case 11:
//			printf("请输入要查找的数据：>");
//			scanf("%d", &key);
//			p = SListFindByVal(&mylist, key);
//			if (p == key)
//			{
//				printf("数据所在的下标为：>");
//			}
//			else
//			{
//				printf("查找的数据不存在.\n");
//			}
//			break;
//		case 12:
//			//SListSort(&mylist);
//			break;
//		case 13:
//			//SListReverse(&mylist);
//			break;
//		case 14:
//			//printf("SListLength = %d\n",SListLength(&mylist));
//			break;
//		case 15:
//			//SListClear(&mylist);
//			break;
//		case 18:
//			//printf("capacity = %d\n",SListCapacity(&mylist));
//			break;
//		default:
//			printf("输入错误，请重新输入.......\n");
//			break;
//		}
//		system("pause");
//		system("cls");
//	}
//}

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
//		printf("请选择：>");
//		scanf("%d", &select);
//		if (select == 0)
//			break;
//		switch (select)
//		{
//		case 1:
//			printf("请输入要插入的数据<-1结束>:>");
//			while (scanf("%d", &item), item != -1)
//			{
//				SeqListPushBack(&mylist, item);
//			}
//			break;
//		case 2:
//			printf("请输入要插入的数据<-1结束>：>");
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
//			printf("请输入要插入的位置:>");
//			scanf("%d", &pos);
//			printf("请输入要插入的数据:>");
//			scanf("%d", &item);
//			SeqListInsertByPos(&mylist, pos, item);
//			break;
//		case 7:
//			printf("请输入要插入的数据:>");
//			scanf("%d", &item);
//			SeqListInsertByVal(&mylist, item);
//			break;
//		case 8:
//			printf("请输入要删除的位置：>");
//			scanf("%d", &pos);
//			SeqListDeleteByPos(&mylist, pos);
//			break;
//		case 9:
//			printf("请输入要删除的数据：>");
//			scanf("%d", &key);
//			SeqListDeleteByVal(&mylist, key);
//			break;
//		case 10:
//			printf("请输入要查找的位置：>");
//			scanf("%d", &pos);
//			flag = SeqListFindByPos(&mylist, pos, &ret);
//			if (flag)
//				printf("SeqListFindByPos查找的数据为：> %d\n", ret);
//			else
//				printf("SeqListFindByPos查找的数据不纯在\n");
//			break;
//		case 11:
//			printf("请输入要查找的值：>");
//			scanf("%d", &key);
//			p = SeqListFindByVal(&mylist, key);
//			if (pos == -1)
//				printf("SeqListFindByVal要查找的数据不纯在。\n");
//			else
//				printf("SeqListFindByVal数据所在的下标为：> %d\n", pos);
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
//			printf("输入错误，请重新输入。。。。\n");
//			break;
//		}
//		system("pause");
//		system("cls");
//	}
//	
//}
////#endif
