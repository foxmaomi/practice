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
	for (i = 0; i < row; i++)
	{
	//	printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
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
		if (i<row-1)
		for (j = 0; j < col; j++)
		{
			printf("---",board[i][j]);
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
	printf("�����\n");
	printf("������Ҫ�ߵ�����\n");
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã�����������\n");
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
}
void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (x >= 0 && x <= 2 && y >= 0 && y <= 2)
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
	//�ж�˭Ӯ
	for (i = 0; i < row; i++)
	{
		//�ж�һ��
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		//�ж�һ��
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж�ƽ��
	if (Isfull(board,row,col)==1)
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}
}