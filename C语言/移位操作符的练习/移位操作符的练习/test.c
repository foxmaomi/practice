#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>


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
//	for(i = 0; i < 32; i++)
//	{
//		sum += ((n >> i) & 1)*pow(2, 31 - i);
//	}
//	return sum;
//}
//unsigned int reverse_bit(unsigned int n)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum <<= 1;
//		sum |= ((n >> i) & 1);
//		//sum += ((n >> i) & 1)*(1 << (31 - i));
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	unsigned int ret = 0;
//	scanf("%d", &n);
//	ret = reverse_bit(n);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//	
//}

//不使用（a + b） / 2这种方式，求两个数的平均值。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//01010
//	//10100
//	//int sum = b + (a - b) / 2;
//	int sum = (a&b) + (a^b) / 2;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	
//	for (i = 0; i < sz; i++)
//	{
//		
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//			
//		}
//		if (count == 1)
//		{
//			break;
//		}
//	}
//
//		printf("%d\n", arr[i]);
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。


int My_strlen(char* str)
{
	assert(str != NULL);

	int count = 0;
	//assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void exchange_s(char* left, char* right)
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

 void exchange(char* str)
{
	 //交换整个字符串

	 int len = My_strlen(str);
	 int right = str + len - 1;
	 exchange_s(str, right);
	 //交换每一个单词
	 while (*str!='\0')
	 {
		 char* start = str;
		 while (*str != ' ' && *str != '\0')
		 {
			 str++;
		 }
		 exchange_s(start, str - 1);
		 str++;
		 if (*str == ' ')
		 {
			 str++;
		 }
	 }


}
int main()
{
	char arr[] = "student a am i";
	
	exchange(arr);
	//printf("%d", len);
	printf("%s", arr);
	system("pause");
	return 0;
}