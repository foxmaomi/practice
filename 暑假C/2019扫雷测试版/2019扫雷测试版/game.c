#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"game.h"
void display(char arr[ROWS + 2][COLS + 2], int rows, int cols)
{
	int i;
	int j;
	printf("   ");
	for (i = 1; i <= rows; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= rows; i++)
	{
		printf("%2d ", i);
		for (j = 1; j <= cols; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}

void set_sweep(char arr[ROWS + 2][COLS + 2], int rows, int cols)
{
	int count = DEFAULT_COUNT;
	while (count)
	{
		int x = rand() % 10 + 1;
		int y = rand() % 10 + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}
int get_sweep_count(char arr[ROWS + 2][COLS + 2], int x, int y)
{
	int z;
	z = (arr[x - 1][y - 1] - '0') + (arr[x][y - 1] - '0') + (arr[x + 1][y - 1] - '0') + (arr[x + 1][y] - '0') + (arr[x + 1][y + 1] - '0') + (arr[x][y + 1] - '0') + (arr[x - 1][y + 1] - '0') + (arr[x - 1][y] - '0');
	return (z);

}

void move_sweep(char sweep[ROWS + 2][COLS + 2], int i, int j)
{
	int k = 0;
	k++;
	if (k == 1 && sweep[i][j] == '1')
	{
		while (sweep[i][j] == '1')
		{
			int x = rand() % 10 + 1;
			int y = rand() % 10 + 1;
			if (sweep != '1')
			{
				sweep[x][y] = sweep[i][j];
				sweep[i][j] = '0';
			}
		}
	}
}

