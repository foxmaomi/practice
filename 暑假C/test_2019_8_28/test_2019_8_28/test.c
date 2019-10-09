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
		printf("Ð¡¶Ë×Ö½Ú´æ´¢\n");
	}
	else
	{
		printf("´ó¶Ë×Ö½ÚÐò´æ´¢\n");
	}
}