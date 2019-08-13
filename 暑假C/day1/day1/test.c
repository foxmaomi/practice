#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//
//int main()
//{
//	//q[0]=&a[0]
//	//q[1]=&a[1]
//	//q[2]=&a[2]
//	//q[3]=&a[3]
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };
//	int *q[4] = {0};//指针数组
//	int k = 0;
//	for (k = 0; k < 4; k++)
//	{
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);//22
//}
//
//int main()
//{
//	//int i = 0;
//	//int j = 0;
//	//int a = 0;
//	//for (i = 0; i < 2; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		if (j % 2)
//	//			break;
//	//		a++;
//	//	}
//	//	a++;
//	//}
//	//printf("%d\n", a);//6
//	int j = 1;
//	printf("%d\n", j % 2);
//	printf("%d\n", j / 2);
//
//}

//int main()
//{
//	char a = 0;
//	int b = 0;
//	float c = 0;
//	double d = 0;
//	printf("%d\n", sizeof(a*b + d - c));
//}

//int find_num(int arr[4][4], int sz, int k)
//{
//	int x = 0;
//	int y = 3;
//	while (x >= 0 && y<=3)
//	{
//		if (arr[x][y] > k)
//		{
//			x++;
//		}
//		else if (arr[x][y] < k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[4][4] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = 0;
//	//printf("%d\n", sz);
//
//	ret = find_num(arr, sz, k);
//	if (ret == 1)
//	{
//		printf("存在\n");
//	}
//	else
//	{
//		printf("不存在\n");
//	}
//
//}
int find_num(int arr[4][4], int k, int *row, int *col)
{
	int x = 0;
	int y = *col-1;
	while (x<=3 && y>=0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*row = x;
			*col = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[4][4] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
	int k = 7;
	int row = 4;
	int col = 4;
	int ret = 0;
	ret = find_num(arr, k, &row, &col);
	if (ret == 1)
	{
		printf("存在\n");
		printf("row = %d col = %d\n", row, col);
	}
	else
	{
		printf("不存在\n");
	}
}