#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<string.h>
//1. дһ�����������ж�һ�����ǲ���������


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = is_prime(n);
//	if (ret == 1)
//	{
//		printf("n = %d������\n", n);
//	}
//	else
//	{
//		printf("��������\n");
//	}
//}
//2. дһ�������ж�һ���ǲ������ꡣ
//
//int is_leap_year(int y)
//{
//	return (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
//} 
//
//
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d", &year);
//	ret = is_leap_year(year);
//	if (ret == 1)
//	{
//		printf("%d ������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//}

//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//
//int bin_search(int arr[], int n, int left, int right)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
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
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = bin_search(arr, n, left, right);
//	if (ret == -1)
//	{
//		printf("�Ҳ����Ǻ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n",ret);
//	}
//}

//4. дһ��������ÿ����һ������������ͻὫnum��ֵ����1��
//
//void Add(int *pn)
//{
//	(*pn)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//
//	Add(&num);
//
//	Add(&num);
//
//	Add(&num);
//	Add(&num);
//
//	Add(&num);
//	printf("%d\n", num);
//}

//
//1.��ɲ�������Ϸ��
//
//void menu()
//{
//	printf("***************************\n");
//	printf("*****     1. play    ******\n");
//	printf("*****     0. exit    ******\n");
//	printf("***************************\n");
//}
//
//void game()
//{
//	//printf("fasdf\n");
//	//���������
//	int n = rand() % 100 + 1;
//	//printf("%d\n", n);
//	//������
//	int k = 0;
//	while (1)
//	{
//		printf("������³�������-> ");
//		scanf("%d", &k);
//		if (k > n)
//		{
//			printf("�´���\n");
//		}
//		else if (k < n)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶��ˣ���%d\n", n);
//			return;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//}
//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//
//
//int bin_search(int arr[], int n, int left, int right)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
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
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int n = 0;
//	int ret = 0;
//	printf("������Ҫ���ҵ�����\n");
//	scanf("%d", &n);
//	ret = bin_search(arr, n, left, right);
//	if (ret == -1)
//	{
//		printf("�Ҳ����� \n");
//	}
//	else
//	{
//		printf("�ҵ��� ���±���%d\n", ret);
//	}
//}

//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//

//void menu()
//{
//		printf("***************************\n");
//		printf("*****     1. ��¼    ******\n");
//		printf("*****     0. exit    ******\n");
//		printf("***************************\n");
//
//}
//
//void dd()
//{
//	//printf("Sad");
//	int i = 0;
//	char s[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("�����룬������");
//		scanf("%s", s);
//		if (strcmp(s, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//		}
//		else
//		{
//			printf("��������������\n");
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			dd();
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default :
//			printf("������ѡ��\n");
//			break;
//		}
//	} while (input);
//}

//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������

//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch > '0' && ch < '9')
		{
			continue;
		}
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
		}
		if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
	}
	return 0;
}