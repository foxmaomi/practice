#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>


//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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

//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
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

//���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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

//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���


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
	 //���������ַ���

	 int len = My_strlen(str);
	 int right = str + len - 1;
	 exchange_s(str, right);
	 //����ÿһ������
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