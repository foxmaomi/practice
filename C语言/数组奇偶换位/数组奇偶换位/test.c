#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//������ⷨ

void Oddeven(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<right)
	{
		//��ż��
		while ((left<right) && (arr[left] % 2 != 0))
		{
			left++;
		}
		//������
		while ( (left<right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		//��ż����
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