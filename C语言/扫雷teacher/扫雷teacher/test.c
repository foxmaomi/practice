#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//������Ϸ
void menu()
{
	printf("********************************\n");
	printf("********      1. play    *******\n");
	printf("********      0. exit    *******\n");
	printf("********************************\n");
}

void game()
{
	//ɨ����Ϸ�Ĺ���
	char mine[ROWS][COLS] = { 0 };//���úõ���-'0'
	char show[ROWS][COLS] = { 0 };//�Ų�����׵���Ϣ-'*'
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//
	DisplayBoard(show, ROW, COL);
	//1. ������
	SetMine(mine, ROW, COL);
	//<< << << < HEAD
		//2. �Ų���
		//== == == =
		DisplayBoard(mine, ROW, COL);

	//2. �Ų���
	FindMine(mine, show, ROW, COL);
	//>> >> >> > 91c89a768dd2b4f013122350fc15b002c60c46dc
}
void test()
{
	int input = 0;
	//<< << << < HEAD

	//	== == == =
		srand((unsigned int)time(NULL));
	//>> >> >> > 91c89a768dd2b4f013122350fc15b002c60c46dc
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//����Ϸ
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
	//<< << << < HEAD
}
//== == == =
