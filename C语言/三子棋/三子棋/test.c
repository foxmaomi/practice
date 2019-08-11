#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("******     1. play     *******\n");
	printf("******     0. exit     *******\n");
	printf("******************************\n");
}


void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);//��ʼ������
	Displayboard(board, ROW, COL);//��ӡ����
	while (1)
	{
		Playermove(board,ROW,COL);//�����
		Displayboard(board, ROW, COL);//��ӡ����
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Computermove(board,ROW,COL);//������
		Displayboard(board, ROW, COL);//��ӡ����
		//�ж���Ӯ
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
		//����Ӯ---#
		//���Ӯ---*
		//ƽ��---Q
		//����---C
		
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		printf("�������Ӧ����\n");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	system("pause");
	return 0;
}