#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//void move_str(char* p,int k)
//{
//	//int j = 0;
//	//for (j = 0; j < k; j++)
//	//{
//	//	char tmp = *p;
//	//	int i = 0;
//	//	int len = strlen(p);
//	//	//printf("%d\n", len);
//
//	//	for (i = 0; i < len - 1; i++)
//	//	{
//	//		*(p + i) = *(p + i + 1);
//	//	}
//	//	*(p + len - 1) = tmp;
//
//	//}
//
//	
//	int i = 0;
//	int len = strlen(p);
//	//printf("%d\n", len);
//	int j = 0;
//	
//	for (j = 0; j < k; j++)
//	{
//		
//		char tmp = *p;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(p + i) = *(p + i + 1);
//		}
//		*(p + len - 1) = tmp;
//	}
//
//}

//ABCD
//BCDA
//CDAB
//BADC
//CDAB
//0123
void Reverse(char* left, char* right)
{
	while (left < right)
	{
		assert(left != NULL);
		assert(right != NULL);

		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;

	}
}

void move_str(char *p,int k)
{
	int len = strlen(p);
	Reverse(p, p + 1);
	Reverse(p + 2, p + len - 1);
	Reverse(p, p + len - 1);

}
int main()
{
	char a[] = "ABCD";
	int k = 2;
	move_str(&a,k);
	printf("%s\n", a);
	system("pause");
	return 0;
}

//����ָoffer��
//��C�����ȱ�ݡ�
//��������C/C++��̡�
//������Ա���������
//��C�������������
//��UNIX�����߼���̡�