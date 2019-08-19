#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ�����飻
	Initboard(board, ROW, COL);
	//��ӡ����
	Displayboard(board, ROW, COL);
	//��ʼ��Ϸ
	while (1)
	{
		printf("�����->");
		//�����
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C' )
		{
			break;
		}
		//������
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '@')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'P')
	{
		printf("ƽ��\n");
	}
	

}


void menu()
{
	printf("**********************************\n");
	printf("******        1. play        *****\n");
	printf("******        0. exit        *****\n");
	printf("**********************************\n");
}
int main()
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