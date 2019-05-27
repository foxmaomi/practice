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
	Initboard(board, ROW, COL);//初始化棋盘
	Displayboard(board, ROW, COL);//打印棋盘
	while (1)
	{
		Playermove(board,ROW,COL);//玩家走
		Displayboard(board, ROW, COL);//打印棋盘
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Computermove(board,ROW,COL);//电脑走
		Displayboard(board, ROW, COL);//打印棋盘
		//判断输赢
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
		//电脑赢---#
		//玩家赢---*
		//平局---Q
		//继续---C
		
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
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
		printf("请输入对应数字\n");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
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