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
	//printf("����Ϸ\n");
	// ���������
	int n = rand() % 100 + 1;
	//printf("%d\n", n);
	// ��ʼ������
	int k = 0;
	while (1)
	{
		scanf("%d", &k);
		if (k < n)
		{
			printf("��С��!!\n");
		}
		else if (k>n)
		{
			printf("�´��ˣ�����@\n");
		}
		else
		{
			printf("��ϲ��¶���@@@\n");
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
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("����������\n");

		}
	} while (input);

}