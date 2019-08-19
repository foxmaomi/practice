#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		//	if (i < col - 1)
		//	{
		//		printf("---|---|---\n");
		//	}

		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i<row - 1)
		for (j = 0; j < col; j++)
		{
			printf("---", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	if ((x <= row && x > 0) && (y <= col && y > 0))
	{
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '@';
		}
		else
		{
			printf("请输入正确的坐标\n");
		}
	}
	else
	{
		printf("请输入正确的坐标\n");
	}
}


void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if ((x < row && x >= 0) && (y < col && y >= 0))
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
	}
}

int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


int Checkwin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断一行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0]!= ' ')
		{
			return board[i][0];
		}
	}
	//判断一列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断平局
	if (Isfull(board, row, col) == 1)
	{
		return 'P';
	}
	else
		return 'C';
}