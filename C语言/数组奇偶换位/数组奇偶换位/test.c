#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//暴力求解法

void Oddeven(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<right)
	{
		//找偶数
		while ((left<right) && (arr[left] % 2 != 0))
		{
			left++;
		}
		//找奇数
		while ( (left<right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		//奇偶交换
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,0};
	//int arr[] = { 1, 1, 1, 1, 1, 1, 11, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	Oddeven(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}