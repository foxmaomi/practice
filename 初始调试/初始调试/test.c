#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

//ʵ�ִ��룺�� 1��+2��+3�� ...+ n! �������������

//�������
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//���Ժ�Ĵ���
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	system("pause");
//		return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)//����Խ����ʣ���i�ĵ�ַ����
//	{
//		arr[i] = 0;
//		printf("hahe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	const int num = 10;
//	int *p = (int*)&num;
//	printf("%d\n", num);
//	*p = 20;
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	const int num = 10;
//	int *p = (int*)&num;
//	printf("%d\n", num);
//	*p = 20;
//	printf("%d\n", num);	
//	system("pause");
//	return 0;
//}

//ģ��ʵ��strcpy����
//
//char* Mystrcpy(char* str1, const char* str2)
//{
//	char* ret = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 = *str2)
//	{
//
//		str1++;
//		str2++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char *ret = NULL;
//	char arr1[20] = { 0 };
//	char arr2[] = "cnm";
//	ret = Mystrcpy(arr1, arr2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
// 
//
//
int main()
{
	const int a = 10;
	const int *p = &a;
	*p = 20;
	//a = 20;
	return 0;
}

//int main()
//{
//	int m = 10;
//	int n = 20;
//	int const * p = &m;
//	//const���α�����const int num;//������
//	//  const ����*��ߣ�����*p   *p���ܱ��ı�   p���Ա��ı�
//	//  const ����*�ұߣ�����p    p���ܱ��ı�    *�²��ܸı� 
//
//	p = &n;
//}

//�������ַ�������
//
//int my_strlen(const char * p)
//{
//	assert(p != NULL);
//	int count = 0;
//	while (*p != 0)
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "asjdghaf";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}