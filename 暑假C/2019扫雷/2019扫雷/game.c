#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void Initbin(char board[ROWS][COLS], int rows, int cols, char s)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = s;
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
		//��ӡһ��
		printf("%d", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c", board[i][j]);
		}
		printf("\n");
	}
}

 void Setmine(char board[ROWS][COLS], int row, int col)
 {
	 int x = 0;
	 int y = 0;
	 int n = EASY_COUNT;
	 while (n)
	 {
		 x = rand() % row + 1;
		 y = rand() % col + 1;
		 if (board[x][y] == '0')
		 {
			 board[x][y] = '1';
			 n--;
		 }
		 
	 }
 }

 int GetMine(char mine[ROWS][COLS], int x, int y)
 {
	return  mine[x - 1][y - 1] +
		 mine[x - 1][y] +
		 mine[x + 1][y - 1] +
		 mine[x][y - 1] +
		 mine[x][y + 1] +
		 mine[x + 1][y - 1] +
		 mine[x + 1][y] +
		 mine[x + 1][y + 1] - (8 * '0');
 }

 void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
 {
	 int x = 0;
	 int y = 0;
	 int count = 0;
	 while (count<(row*col-EASY_COUNT))
	 {
		 printf("������Ҫ�Ų������->");
		 scanf("%d%d", &x, &y);
		 if ((x > 0 && x <= row) && (y > 0 && y <= col))
		 {
			 //�ж��Ƿ�Ϊ��
			 if (mine[x][y] == '1')
			 {
				 printf("����ը����\n");
				 Display(mine, row, col);
				 return;
			 }
			 else
			 {
				 //��ӡ�жϺ�����̣�
				 int ret = GetMine(mine,x,y);
				 show[x][y] = ret+'0';
				 Display(show, ROW, COL);
				
			 }
			 count++;
		 }
		 else
		 {
			 printf("��������ȷ������->");
		 }
		 //�ж����пո��Ƿ�ȫ����
	 }
	 if (count == (row*col - EASY_COUNT))
	 {
		 printf("��ϲ��Ӯ��\n");
	 }
 }