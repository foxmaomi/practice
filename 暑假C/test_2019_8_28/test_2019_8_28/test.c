#define _CRT_SECURE_NO_WARNINGS

int check_bit()
{
	int a = 1;
	return *(char *)(&a);
}

int main()
{
	int ret = check_bit();
	if (ret == 1)
	{
		printf("С���ֽڴ洢\n");
	}
	else
	{
		printf("����ֽ���洢\n");
	}
}