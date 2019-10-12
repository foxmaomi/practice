#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void menu()
{
	printf("******************************\n");
	printf("*******      1. add      *****\n");
	printf("*******      2. del      *****\n");
	printf("*******      3. search   *****\n");
	printf("*******      4. modify   *****\n");
	printf("*******      5. show     *****\n");
	printf("*******      6. sort     *****\n");
	printf("*******      0. exit     *****\n");
	printf("******************************\n");
}

void test()
{
	int input = 0;
	//����ͨѶ¼
	//struct Contact con = {0};
	pContact pcon = (pContact)malloc(sizeof(Contact)+DEFAULT_SZ*sizeof(PeoInfo));

	if (pcon == NULL)
	{
		printf("����ͨѶ¼ʧ��\n");
		system("pause");
		return;
	}

	//��ʼ��ͨѶ¼
	pcon = InitContact(pcon);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			pcon = AddContact(pcon);
			break;
		case DEL:
			DelContact(pcon);
			break;
		case SEARCH:
			SeachContact(pcon);
			break;
		case MODIFY:
			ModifyContact(pcon);
			break;
		case SHOW:
			ShowContact(pcon);
			break;
		case SORT:
			SortContact(pcon);
			break;
		case EXIT:
			DestroyContact(pcon);
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	//����ͨѶ¼�Ĺ���
	test();
	system("pause");
	return 0;
}