#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//
/// 杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

//void Findyang(int arr[], int k,  int row, int col)
//{
//	//1 2 3
//	//4 5 6
//	//7 8 9
//	int x = 0;
//	int y = 3;
//	for (x = 0; x < row - 1; x++)
//	{
//	//排除一行
//		if (arr[0][x] > k)
//		{
//			y--;
//		}
//		else if (arr[0][x] < k)
//		{
//			x++;
//		}
//		else(arr[0][x] == k)
//		{
//			printf("%d %d", x, y);
//		}
//	}
//}
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Point Findyang(int arr[3][3], int k, int row, int col)
//{
//	struct Point ret = {-1,-1};
//	int x = 0;
//	int y = col - 1;
//	while (x < row && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			ret.x = x;
//			ret.y = y;
//			return ret;
//		}
//	
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int row = 3;
//	int col = 3;
//	int k = 7;
//	int ret = 0;
//	struct Point p = {0,0};
//	p=Findyang(arr,k, row, col);
//	if (p.x == -1)
//	{
//		printf("找不到了\n");
//	}
//	else
//	{
//		printf("%d %d \n", p.x, p.y);
//	}
//	system("pause");
//	return 0;
//}


void Findyang(int arr[3][3], int k, int* prow, int* pcol)
{
	int x = 0;
	int y = *pcol - 1;
	while (x < *prow && y >= 0)
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
			*prow = x;
			*pcol = y;
			return;
		}

	}
	*prow = -1;
	*pcol = -1;
}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int row = 3;
	int col = 3;
	int k = 7;
	Findyang(arr, k, &row, &col);
	if (row == -1)
	{
		printf("找不到了\n");
	}
	else
	{
		printf("%d %d \n", row,col);
	}
	system("pause");
	return 0;
}