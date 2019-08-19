#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化数组；
	Initboard(board, ROW, COL);
	//打印数组
	Displayboard(board, ROW, COL);
	//开始游戏
	while (1)
	{
		printf("玩家走->");
		//玩家走
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C' )
		{
			break;
		}
		//电脑走
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断输赢
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '@')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'P')
	{
		printf("平局\n");
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
		printf("请输入选项->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("请输入正确的选项\n");
			break;
		}
	} while (input);
}