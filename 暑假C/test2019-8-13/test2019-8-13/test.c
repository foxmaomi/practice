#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
//
//���ؿƼ�
//do�����ص�
//ѭ������ִ��һ�Σ�ʹ�õĳ������ޣ����Բ��Ǿ���ʹ�á�
//#include <stdio.h>
//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}

//
//��ϰ
//1. ���� n�Ľ׳ˡ�
//
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = i*ret;
//	}
//	printf("%d\n", ret);
//}

//2. ���� 1!+ 2!+ 3!+ ���� + 10!
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//		sum = sum + ret;
//	}
//	printf("ret = %d,sum = %d\n",ret,sum);
//	
//}

//3. ��һ�����������в��Ҿ����ĳ������n�� ��дint binsearch(int x, int v[], int n); ���ܣ���v[0] <= v[1] <= v[2]
//<= ��. <= v[n - 1]�������в���x.
//
//int binsearch(int arr[], int k, int left, int right)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left);
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int k = 0;
//	int ret = 0;
//	scanf("%d", &k);
//	ret = binsearch(arr, k, left, right);
//	if (arr[ret] == k)
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	else
//	{
//		printf("û���ҵ�\n");
//	}
//	return 0;
//}
//4. ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//int main()
//{
//	char s1[] = "welcome to bainiao!!!!";
//	char s2[] = "**********************";
//	int left = 0;
//	int right = strlen(s1);
//	while (left <= right)
//	{
//		s2[left] = s1[left];
//		s2[right] = s1[right];
//		left++;
//		right--;
//		printf("%s\n", s2);
//	}
//	return 0;
//}
//5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼
//�ɣ�������ξ�����������˳�����
int main()
{
	char s[20] = { 0 };
	int i = 0;
	
	for (i = 0; i < 3; i++)
	{
		scanf("%s", s);
		if (strcmp(s, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
		}
		else
		{
			printf("�����������������\n");
		}
	}
}