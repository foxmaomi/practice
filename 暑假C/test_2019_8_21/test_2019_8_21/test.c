#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<string.h>
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
//unsigned int reverse_bit(unsigned int n)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum = ((n >> i) & 1)*pow(2, 31 - i);
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	unsigned int ret = 0;
//	scanf("%d", &n);
//	ret =unsigned int reverse_bit(n);
//	printf("%u\n", ret);
//		return 0;
//
//}

//unsigned int reverse_bit(unsigned int n)
//{
//	printf("asghahjsd");
//	return 123;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	unsigned int ret = 0;
//	scanf("%d", &n);
//	ret = unsigned int reverse_bit(n);
//	printf("%d\n", ret);
//	return 0;
//}

//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum += ((value >> i) & 1) * pow(2, 31 - i);
//	}
//	return sum;
//
//}
//int main()
//{
//	int value = 25;
//	int ret = reverse_bit(value);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//
//}
//
//2.不使用（a + b） / 2这种方式，求两个数的平均值。



//
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//

//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//

void reverse(char *str, int len)
{
	int left = 0;
	int right = len - 1;
	while (left<=right)
	{
		char tmp = *(str + left);
		*(str + left) = *(str + right);
		*(str + right) = tmp;
		left++;
		right--;
	}
}

void swap_bin(char *str, int len)
{
	int count = 0;
	char *tmp = str;
	//整体交换
	reverse(str, len);
	//遇见空格交换一次
	while (*str)
	{
		
		if (*str == ' ')
		{
			str++;
		}
		else if (*str == '0')
		{
			return;
		}
		char *tmp = str;
		count = 0;
		while (*str != ' '&& *str)
		{
			count++;
			str++;
		}
		reverse(tmp, count);
		
	}
	
}

int main()
{
	char s[] = "student a am i";
	int len = strlen(s);
	swap_bin(s, len);
	printf("%s\n",s );
	return 0;
}