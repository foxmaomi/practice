#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//

//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		if (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		else
//		{
//			if (arr[right] % 2 == 1)
//			{
//				int tmp = arr[left];
//				arr[left] = arr[right];
//				arr[right] = tmp;
//			}
//			else
//			{
//				right--;
//			}
//
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//2.
////杨氏矩阵 
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


//#define ROW 3
//#define COL 3
//
//int reverse(int arr[ROW][COL], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while ((x >= 0 && x < row) && (y >= 0 && y < col))
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
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 0;
//	int ret = 0;
//	scanf("%d", &k);
//	ret = reverse(arr, k, ROW, COL);
//	if (ret == 1)
//	{
//		printf("存在\n");
//	}
//	else
//	{
//		printf("不存在\n");
//	}
//}