#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("****** 1. play ******\n");
	printf("****** 0. exit ******\n");
	printf("*********************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		PlayerMove(board,ROW,COL);//�����
		DisplayBoard(board, ROW, COL);//��ӡ����
		//�ж���Ӯ
		ret = Checkwin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board,ROW,COL);//������
		DisplayBoard(board, ROW, COL);//��ӡ����
		//�ж���Ӯ
		ret = Checkwin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
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
		printf("��ѡ��>\n");
		scanf("%d", &input);
		switch(input)
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
	//����
	test() ; 
	system("pause");
	return 0;
}