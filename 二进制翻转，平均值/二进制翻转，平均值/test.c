#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


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

//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret <<= 1;
//		ret |= ((value >> i) & 1);
//	}
//	return ret;
//
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
//1.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 
	//int main()
	//{
	//	int a=10;
	//	int b=20;
	//	printf("%d\n", (a + b) >> 1);
	//	system("pause");
	//	return 0;
	//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = b + (a - b)/2;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}



