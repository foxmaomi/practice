#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void menu()
{
	printf("**********************************\n");
	printf("*****   0. exit    1. Add    *****\n");
	printf("*****   2. Del     3. Serch *****\n");
	printf("*****   4. Modify  5. show   *****\n");
	printf("*****         6. sort        *****\n");
	printf("**********************************\n");
}

void test(void)
{
	int input = 0;
	Contact con;
	InitContact(&con);//��ʼ������
	do
	{
		menu();
		printf("������Ҫ������ѡ��-> ");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			break;
		case SORT:
			break;
		default :
			printf("��������ȷ�Ĳ�����\n");
			break;
		}
	} while (input);
	
}

int main()
{
	test();
	return 0;
}