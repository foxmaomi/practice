#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<string.h>
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
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
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��



//
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//

//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
	//���彻��
	reverse(str, len);
	//�����ո񽻻�һ��
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