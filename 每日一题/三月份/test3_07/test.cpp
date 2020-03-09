#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{
	// 二进制是B,八进制是O    %o,十进制是D  %d,十六进制是H  %x。
	int m = 0123, n = 123;
	printf("%d %d\n", m, n);
	return 0;
}

/*
int f(int n)
{
	if (n == 1)
		return 1;
	else
		return (f(n - 1) + n * n * n);
}

int main()
{
	int s = f(3);
	cout << s << endl;
	return 0;
}


/*
struct A
{
	long a1;
	short a2;
	int a3;
	int* a4;
};


int main()
{
	int x= sizeof(A);
	cout << x << endl;
}

/*
int main()
{
	char a = 0, ch;
	while ((ch = getchar()) != '\n')
	{
		if (a % 2 != 0 && (ch >= 'a' && ch <= 'z'))
			ch = ch - 'a' + 'A';
		a++;
		putchar(ch);
	}
	printf("\n");
}

/*
char fun(char x, char y)
{
	if (x < y)
		return x;
	return y;
}

int main()
{
	int a = '1', b = '1', c = '2';
	cout << fun(fun(a, b), fun(b, c));
	return 0;
}


/*
int main()
{
	// 二进制是B,八进制是O,十进制是D,十六进制是H。
	int m = 0123, n = 123;
	printf("%o %o\n", m, n);
	return 0;
}
*/