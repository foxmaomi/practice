#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
////�����ڴ���ʱ������������׵�ַ������ַ��32������λ��4���ֽڴ�С��
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int k = 7;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	
//	
//	
//	system("pause");
//	return 0;
//}
//sizeof�����Ԫ�ظ��� 
//eg��int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//sizeof(arr) = 10;
//char arr[] = "bit";       b,i,t,\0
//sizeof(arr)=4
//strlen�����ַ������ȣ�
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("##########################\n");
//	printf("      �������¼����      \n");
//	printf("##########################\n");
//	char arr1[] = "iloveyou";
//	char arr2[] = "0";
//	int count = 0;
//	printf("����������");
//	while (count < 3)
//	{
//		scanf("%s", &arr2);
//		if (arr2 == arr1)//�����ַ����ıȽϲ�����==��
//		{
//			printf("������ȷ����¼�ɹ�");
//		}
//		else
//		{
//			printf("�����������������");
//		}
//		count++;
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//iloveyou
//	for (i = 0; i < 3; i++)
//	{
//		printf("�������¼����");
//		scanf("%s", password);
//		//strcpy�����ַ����Ƚϴ�С��ʱ��С��Ϊ��ֵ������Ϊ0������Ϊ��ֵ
//		if (strcmp(password, "123") == 0)
//		{
//			printf("������ȷ����¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������󣬰�������˳�\n");
//	}
//	system("pause");
//	return 0;
//}
//void menu()
//{
//	printf("##############################\n");
//	printf("#######    1. play   #########\n");
//	printf("#######    0. exit   #########\n");
//	printf("##############################\n");
//}
//void game()
//{
//	//0x7fff
//	//0111 1111 1111 1111
//	//RAND_MAX
//	//1.���������
//	int num = rand() % 100 + 1;;
//	int guess = 0; 
//	//printf("%d\n", num);
//		//2.������
//	//printf("������\n
//	while (1)
//	{
//		printf("�������(1-100)>:");
//		scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//time_t  == unsigned int
//	do
//	{
//		menu();
//		printf("��ѡ�񡷣�");
//		scanf("%d", &input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				break;
//			default:
//				printf("����������\n");
//				break;
//		}
//	}while(input);
//	return 0;
//}
//int main()
//{
//	again:
//	printf("hh\n");
//	goto again;
//	system("pause");
//	return 0;
//}
//goto�����ת��ǩֻ����ͬһ��������
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//	again:
//	printf("��ĵ��Խ���2���Ӻ�ػ��������룺������ȡ���ػ�");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	goto again;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello bit!!!!";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//
//}
//int get_max(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int a = 30;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("%d", max);
//	system("pause");
//	return 0;
//}
//��ʵ�δ����βε�ʱ��
//�β���ʵ�ε�һ����ʱ����
// ���βεĸı䲻��Ӱ��ʵ��
//void exchange(int* x, int* y)
//{
//	int  t = 0;
//	t =*x;
//	*x = *y;
//	*y = t;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d", a, b);
//	exchange(&a, &b);
//	printf("a=%d b=%d",a, b);
//	system("pause");
//	return 0;
//}