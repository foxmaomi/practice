#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("******  1. play    *******\n");
	printf("******  0. exit    *******\n");
	printf("**************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS,'0');//��ʼ������
//	Display(mine, ROW, COL);//��ӡ����

	Initboard(show, ROWS, COLS,'?');
	//������
	Setmine(mine, ROW, COL);
	//Display(mine, ROW, COL);
     Display(show, ROW, COL);
	 Findmine(mine,show, ROW, COL);

}

void test()
{
	
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
		menu();
		printf("������ѡ��->\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
}



int main()
{
	test();
	system("pause");
	return 0;
}