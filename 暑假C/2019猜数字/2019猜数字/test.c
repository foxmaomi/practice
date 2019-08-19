#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("******************\n");
	printf("****  1. play ****\n");
	printf("****  0. exit ****\n");
	printf("******************\n");
}
void game()
{
	//printf("玩游戏\n");
	// 产生随机数
	int n = rand() % 100 + 1;
	//printf("%d\n", n);
	// 开始猜数子
	int k = 0;
	while (1)
	{
		scanf("%d", &k);
		if (k < n)
		{
			printf("猜小了!!\n");
		}
		else if (k>n)
		{
			printf("猜大了！！！@\n");
		}
		else
		{
			printf("恭喜你猜对了@@@\n");
			break;
		}
	}
	
}
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
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
			printf("请重新输入\n");

		}
	} while (input);

}