#define _CRT_SECURE_NO_WARNINGS

#include"game.h"



void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void Setmine(char mine[ROWS][COLS], int row, int col)
{
	
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
		}
		count--;
	}
}

//'0'-48
//'1'-49
//'1'-'0'=1
//'2'-'0'=2
//'0'-'0'=0

COUNT_lei(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y] +
		mine[x + 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] - 8 * '0';
}

void  Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win<row*col - EASY_COUNT)
	{
		printf("请输入要排查的坐标->\n");
		scanf("%d%d", &x, &y);
		//判断
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{

			if (mine[x][y] == '1')
			{
				printf("你被炸死了！！！！！\n");
				Display(mine, row, col);
				break;
			}
			else
			{
				int ret = COUNT_lei(mine, x, y);
				show[x][y] = ret + '0';
				Display(show, row, col);
			}
			win++;
		}
		else
		{
			printf("请输入正确的坐标\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜你排雷成功！！！！\n");
		Display(mine, row, col);
	}
}



