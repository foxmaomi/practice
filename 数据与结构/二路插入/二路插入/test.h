#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<stdbool.h>
#include<time.h>

void PrintArray(int *ar, int left, int right);
void TwoWayInsertSort(int *ar, int left, int right);
void PrintArray(int *ar, int left, int right)
{
	for (int i = left; i <= right; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}

void TwoWayInsertSort(int *ar, int left, int right)
{
	int final = 0;
	int first = 0;
	int i = 0;
	int *tmp = (int*)malloc(sizeof(int)* (right+1));
	tmp[0] = ar[0];
	for (i = 1; i <= right; i++)
	{
		if (ar[i] > tmp[final])
		{
			//大于当前最大值，后插
			final++;
			tmp[final] = ar[i];
		}
		if (ar[i] < tmp[first])
		{
			//小于当前最小值，前插
			first = (first + right) % (right + 1);
			//first = (first - 1 + right) % (right + 1);
			//first = (first - 1 + right) % right;
			tmp[first] = ar[i];
		}
		if (ar[i]<tmp[final] && ar[i] > tmp[first])
		{
			int j = final++;
			while (ar[i] < tmp[j])
			{
				tmp[(j + 1) % (right+1)] = tmp[j];
				//j = (j - 1 + right) % right;
				j = (j + right) % (right + 1);
			}
			tmp[(j + 1)%(right+1)] = ar[i];
		}
 	}
	for (int k = 0; k <= right; k++)
	{
		//ar[k] = tmp[(first++) % (right+1)];
		ar[k] = tmp[first];
		first = (first + 1) % (right + 1);
	}
}





//
//template <typename T>
//void quickSort2(T arr[], int n)
//{
//	srand(time(NULL));
//	__quickSort2(arr, 0, n - 1);
//}
//
//
//// 对arr[l...r]部分进行快速排序
//template <typename T>
//void __quickSort2(T arr[], int l, int r)
//{
//	/*if (l >= r)
//	return;*/
//
//	if (r - l <= 15) {
//		insertSort2(arr, l, r);
//		return;
//	}
//
//	int p = __partition2(arr, l, r);
//	__quickSort2(arr, l, p - 1);
//	__quickSort2(arr, p + 1, r);
//}
//
//
////双路随机快速排序的partition方法
//template <typename T>
//int __partition2(T arr[], int l, int r)
//{
//	swap(arr[l], arr[rand() % (r - l + 1) + l]);
//	T v = arr[l];
//
//	//arr[l+1...i)<=v 且 arr(j...r}>=v
//	int i = l + 1, j = r;
//	while (true)
//	{
//		while (i <= r && arr[i] < v)
//			i++;
//		while (j >= l + 1 && arr[j] > v)
//			j--;
//		if (i > j)
//			break;
//		swap(arr[i], arr[j]);
//		i++;
//		j--;
//	}
//	swap(arr[l], arr[j]);
//
//	return j;
//}