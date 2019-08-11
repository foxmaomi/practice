#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>

//
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//

//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int tmp = 0;
//
//	for (i = 0; i < 32;i++)
//	{
//		tmp = ((value >> i) & 1)*pow(2, i)+tmp;
//			
//	}
//	return tmp;
//}
//
//int main()
//{
//	int value = 25;
//	
//	int ret = 0;
//	ret = unsigned int reverse_bit(unsigned int value);
//	printf("%d\n", ret);
//	printf("%d\n", value);
//	return 0;
//
//}

//unsigned int reserve_bit(unsigned int n)
//{
//	int i = 0;
//	unsigned int sum = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		sum += ((n >> i) & 1)*pow(2, 31 - i);
//	}
//	return sum;
//}
//调用库函数会增加代码运行的时间
//不能用%d来打印二进制序列的数字，要使用%u

//unsigned int reserve_bit(unsigned int n)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum += ((n >> i) & 1)*(1 << (31 - i));
//	}
//	return sum;
//}
//00000000000000000000000000011001 
//00000000000000000000000000000000
//|(按位或)
//unsigned int reserve_bit(unsigned int n)
//{
//	int i = 0;
//	int sum = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		sum = sum << 1;
//		sum |= ((n >> i) & 1);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	unsigned int ret = 0;
//	scanf("%d", &n);
//	ret = reserve_bit(n);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//
//}


//2.不使用（a + b） / 2这种方式，求两个数的平均值。
////
//int average(int a, int b)
//{
//	int   ret = a + (b - a)/2;
//	return ret;
//}
//0000 1010   10
//0001 0100   20
//0000 0000   a&b
//0001 1110   a^b

//0000 1111   15
//int average(int a, int b)
//{
//	int ret = (a&b) + (a^b) / 2;
//	return ret;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = average(a, b);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//
//0001
//0001
//0010
//0010
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		sum = arr[i] ^ sum;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4,  5,  1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//			break;
//	}
//	printf("%d\n", arr[i]);
//	system("pause");
//	return 0;
//
//}

//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。

void reserve_str(char *left, char *right)
{
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int my_strlen(char *str)
{
	assert(str != NULL);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;

}
void reserve(char * str)
{
	//1.逆序整个字符串
	int len = my_strlen(str);
	reserve_str(str, str+len-1);
	//2.逆序每个单词
	while (*str!='\0')
	{
		char *start = str;
		while (*str != ' ' && *str != '\0')
		{
			str++;
		}
		reserve_str(start, str - 1);
		if (*str == ' ')
		{
			str++;
		}
	}
}
int main()
{
	char arr[] =  "student a am i" ;
	reserve( arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}