#define _CRT_SECURE_NO_WARNINGS

#include "game.h"




void menu()
{
	printf("************************\n");
	printf("******  1. play  *******\n");
	printf("******  0. exit  *******\n");
	printf("************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	Initbin(mine, ROWS, COLS, '0');
	Initbin(show, ROWS, COLS, '*');
	//Display(show, ROW, COL);
	//Display(mine, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	Display(mine, ROW, COL);
	//Display(show, ROW, COL);
	//�Ų��ף�
	Findmine(mine, show, ROW, COL);
	//��֤��ҵ�һ�β���ը��
	
}

void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("������ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("��������ȷ��ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}