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
	InitBoard(board, ROW, COL);//初始化数组
	DisplayBoard(board, ROW, COL);//打印棋盘
	while (1)
	{
		PlayerMove(board,ROW,COL);//玩家走
		DisplayBoard(board, ROW, COL);//打印棋盘
		//判断输赢
		ret = Checkwin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board,ROW,COL);//电脑走
		DisplayBoard(board, ROW, COL);//打印棋盘
		//判断输赢
		ret = Checkwin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
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
		printf("请选择：>\n");
		scanf("%d", &input);
		switch(input)
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
	//测试
	test() ; 
	system("pause");
	return 0;
}