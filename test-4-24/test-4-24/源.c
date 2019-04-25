#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
////数组在传参时传的是数组的首地址，而地址是32个比特位，4个字节大小；
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
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	
//	
//	
//	system("pause");
//	return 0;
//}
//sizeof算的是元素个数 
//eg：int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//sizeof(arr) = 10;
//char arr[] = "bit";       b,i,t,\0
//sizeof(arr)=4
//strlen计算字符串长度；
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
//	printf("      请输入登录密码      \n");
//	printf("##########################\n");
//	char arr1[] = "iloveyou";
//	char arr2[] = "0";
//	int count = 0;
//	printf("请输入密码");
//	while (count < 3)
//	{
//		scanf("%s", &arr2);
//		if (arr2 == arr1)//两个字符串的比较不能用==；
//		{
//			printf("密码正确，登录成功");
//		}
//		else
//		{
//			printf("密码错误，请重新输入");
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
//		printf("请输入登录密码");
//		scanf("%s", password);
//		//strcpy进行字符串比较大小的时候小于为负值，等于为0，大于为正值
//		if (strcmp(password, "123") == 0)
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，按任意键退出\n");
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
//	//1.生成随机数
//	int num = rand() % 100 + 1;;
//	int guess = 0; 
//	//printf("%d\n", num);
//		//2.猜数字
//	//printf("猜数字\n
//	while (1)
//	{
//		printf("请猜数字(1-100)>:");
//		scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
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
//		printf("请选择》：");
//		scanf("%d", &input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				break;
//			default:
//				printf("请重新输入\n");
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
//goto语句跳转标签只能在同一个代码块里；
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//	again:
//	printf("你的电脑将在2分钟后关机，请输入：我是猪。取消关机");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
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
//当实参传给形参的时候
//形参是实参的一份临时拷贝
// 对形参的改变不会影响实参
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