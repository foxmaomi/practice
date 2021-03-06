#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//void exchange(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 != 0))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
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
//	printf("\n");
//}
//int main()
//{
//	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	exchange(arr, sz);
//	print(arr, sz);
//	system("pause");
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

//struct point
//{
//	int x;
//	int y;
//};
void findnum(int arr[3][3], int num, int *prow, int *pcol)
{
	int x = 0;
	int y = *pcol-1;
	while (x<*prow && y>=0)
	{
		if (arr[x][y] < num)
		{
			x++;
		}
		else if (arr[x][y]>num)
		{
			y--;
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
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	int x = 3;
	int y = 3;
	
	findnum(arr, 7, &x, &y);
	if (x == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%d %d\n", x, y);
	}
	system("pause");
	return 0;
}