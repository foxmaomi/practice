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
	//初始化数组
	Initbin(mine, ROWS, COLS, '0');
	Initbin(show, ROWS, COLS, '*');
	//Display(show, ROW, COL);
	//Display(mine, ROW, COL);
	//布置雷
	Setmine(mine, ROW, COL);
	Display(mine, ROW, COL);
	//Display(show, ROW, COL);
	//排查雷；
	Findmine(mine, show, ROW, COL);
	//保证玩家第一次不被炸死
	
}

void test()
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

int main()
{
	test();
	return 0;
}