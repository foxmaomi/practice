#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
//
////1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
////
////�ݹ�
//
////int Fib(int n)
////{
////	int a = 1;
////	int b = 1;
////	int c = 1;
////	if (n <= 2)
////	{
////		return c;
////	}
////	else
////	{
////		return Fib(n - 1) + Fib(n - 2);
////	}
////}
////
////int main()
////{
////	int n = 0;
////	int ret = 0;
////	scanf("%d", &n);
////	ret = Fib(n);
////	printf("%d\n", ret);
////}
//
////�ǵݹ�
//
////int Fib(int n)
////{
////	int a = 1;
////	int b = 1;
////	int c = 1;
////	if (n <= 2)
////	{
////		return c;
////	}
////	else
////	{
////		int i = 0;
////		for (i = 0; i < n - 2; i++)
////		{
////			c = a + b;
////			a = b;
////			b = c;
////		}
////		return c;
////	}
////}
////
////int main(void)
////{
////	int n = 0;
////	int ret = 0;
////	scanf("%d", &n);
////	ret = Fib(n);
////	printf("%d\n", ret);
////	return 0;
////}
//
////2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
////
//
//int Mypow(int n, int k)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= k; i++)
//	{
//		sum = n*sum;
//	}
//	return sum;
//}
//
//int main(void)
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	printf("����������Ķ���\n");
//	printf("���������->");
//	scanf("%d", &n);
//	printf("\n");
//	printf("������ָ��->");
//	scanf("%d", &k);
//	printf("\n");
//	ret = Mypow(n, k);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//1729
//172 +9
//17 +2+9
//int DigitSum(int n)
//{
//	int sum = 0;
//	if (n < 9)
//	{
//		return n;
//	}
//	else
//	{
//		return  n % 10 + DigitSum(n / 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//

//void reserve_string(char str)
//{
//	int sz = my_strlen(str);
//}
//
//
//int main(void)
//{
//	char s[] = "abcdef";
//	reverse_string(s);
//	printf("%s\n", s);
//	return 0;
//}

void reverse_string(char *string)
{
	if ('\0' != *(++string))
	{
		reverse_string(string);
	}
		printf("%c", *(string - 1));
	
}

int main()
{
	char *a = "abcde";
	reverse_string(a);
	printf("\n");
	return 0;
}


//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ