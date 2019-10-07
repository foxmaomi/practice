#define _CRT_SECURE_NO_WARNINGS



#include<stdio.h>
#include"game.h"
#include<string.h>
#include<time.h>
#include<stdlib.h>
void menu()//�˵�����������ɹ�ѡ��Ĳ˵�
{
	printf("**************************\n");
	printf("***** 1.PLAY  0.EXIT *****\n");
	printf("**************************\n");
}
enum Option
{
	EXIT,
	PLAY
};

void game()
{
	char sweep[ROWS + 2][COLS + 2] = { 0 };
	char  show[ROWS + 2][COLS + 2] = { 0 };
	int x = 0;
	int y = 0;
	int win = 0;

	srand((unsigned int)time(NULL));
	memset(sweep, '0', sizeof(char)*(ROWS + 2)*(COLS + 2));
	memset(show, '?', sizeof(char)*(ROWS + 2)*(COLS + 2));
	display(show, ROWS, COLS);
	set_sweep(sweep, ROWS, COLS);
	//display(sweep, ROWS, COLS);
	while (win < (ROWS*COLS - DEFAULT_COUNT))
	{
		printf("���������꣺");
		int x;
		int y;
		int i = 0;
		int j = 0;
		int tmp = 0;
		int count1 = 1;
		scanf_s("%d%d", &x, &y);
		if (win == 0 && sweep[x][y] == '1')
		{
			if (sweep[x][y] == '1')
			{
				int i = rand() % 10 + 1;
				int j = rand() % 10 + 1;
				if (sweep != '1')
				{
					tmp = sweep[i][j];
					sweep[i][j] = sweep[x][y];
					sweep[x][y] = tmp;
					if (sweep[x][y] != '1')
					{
						int ret = 0;
						ret = get_sweep_count(sweep, x, y);
						show[x][y] = ret + '0';
						win++;
						if (ret == 0)
						{
							if (sweep[x - 1][y - 1] != '1')
							{
								ret = get_sweep_count(sweep, x - 1, y - 1);
								show[x - 1][y - 1] = ret + '0';
							}
							if (sweep[x][y - 1] != '1')
							{
								ret = get_sweep_count(sweep, x, y - 1);
								show[x][y - 1] = ret + '0';
							}
							if (sweep[x + 1][y - 1] != '1')
							{
								ret = get_sweep_count(sweep, x + 1, y - 1);
								show[x + 1][y - 1] = ret + '0';
							}
							if (sweep[x + 1][y] != '1')
							{
								ret = get_sweep_count(sweep, x + 1, y);
								show[x + 1][y] = ret + '0';
							}
							if (sweep[x + 1][y + 1] != '1')
							{
								ret = get_sweep_count(sweep, x + 1, y + 1);
								show[x + 1][y + 1] = ret + '0';
							}
							if (sweep[x][y + 1] != '1')
							{
								ret = get_sweep_count(sweep, x, y + 1);
								show[x][y + 1] = ret + '0';
							}
							if (sweep[x - 1][y + 1] != '1')
							{
								ret = get_sweep_count(sweep, x - 1, y + 1);
								show[x - 1][y + 1] = ret + '0';
							}
							if (sweep[x - 1][y] != '1')
							{
								ret = get_sweep_count(sweep, x - 1, y);
								show[x - 1][y] = ret + '0';
							}
						}
					}
				}
			}
		}
		else if (sweep[x][y] == '1')
		{
			printf("��ը��\n");
			break;
		}
		else if (sweep[x][y] != '1')
		{
			int ret = 0;
			win++;
			ret = get_sweep_count(sweep, x, y);
			/*printf("%d", ret);*/
			show[x][y] = ret + '0';
			if (ret == 0)
			{
				if (sweep[x - 1][y - 1] != '1')
				{
					ret = get_sweep_count(sweep, x - 1, y - 1);
					show[x - 1][y - 1] = ret + '0';
				}
				if (sweep[x][y - 1] != '1')
				{
					ret = get_sweep_count(sweep, x, y - 1);
					show[x][y - 1] = ret + '0';
				}
				if (sweep[x + 1][y - 1] != '1')
				{
					ret = get_sweep_count(sweep, x + 1, y - 1);
					show[x + 1][y - 1] = ret + '0';
				}
				if (sweep[x + 1][y] != '1')
				{
					ret = get_sweep_count(sweep, x + 1, y);
					show[x + 1][y] = ret + '0';
				}
				if (sweep[x + 1][y + 1] != '1')
				{
					ret = get_sweep_count(sweep, x + 1, y + 1);
					show[x + 1][y + 1] = ret + '0';
				}
				if (sweep[x][y + 1] != '1')
				{
					ret = get_sweep_count(sweep, x, y + 1);
					show[x][y + 1] = ret + '0';
				}
				if (sweep[x - 1][y + 1] != '1')
				{
					ret = get_sweep_count(sweep, x - 1, y + 1);
					show[x - 1][y + 1] = ret + '0';
				}
				if (sweep[x - 1][y] != '1')
				{
					ret = get_sweep_count(sweep, x - 1, y);
					show[x - 1][y] = ret + '0';
				}
			}
		}
		display(show, ROWS, COLS);
		if (win >= (ROWS*COLS - DEFAULT_COUNT))
		{
			printf("���׳ɹ�\n");
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case PLAY:
			game();
			break;
		case EXIT:
			break;
		default:
			printf("������ѡ��");
			break;
		}
	} while (input);
	return 0;
}
