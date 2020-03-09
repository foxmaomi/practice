#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int b=2;
	const int* a = &b;

}


/*
int main(void)
{
	vector<int>array;
	array.push_back(100);
	array.push_back(300);
	array.push_back(300);
	array.push_back(300);
	array.push_back(300);
	array.push_back(500);
	vector<int>::iterator itor;
	for (itor = array.begin(); itor != array.end(); itor++)
	{
		if (*itor == 300)
		{
			itor = array.erase(itor);
		}
	}
	for (itor = array.begin(); itor != array.end(); itor++)
	{
		cout << *itor << "";
	}
	return 0;
}

/*
int func()
{
	int i, j, k = 0;
	for (i = 0, j = -1; j = 0; i++, j++)
	{
		k++;
	}
	return k;
}
int main(){
	cout << (func());
}
/*
int main(void)
{
	vector<int>array;
	array.push_back(100);
	array.push_back(300);
	array.push_back(300);
	array.push_back(300);
	array.push_back(300);
	array.push_back(500);
	vector<int>::iterator itor;
	for (itor = array.begin(); itor != array.end(); itor++)
	{
		if (*itor == 300)
		{
			itor = array.erase(itor);
		}
	}
	for (itor = array.begin(); itor != array.end(); itor++)
	{
		cout << *itor << "";
	}
	return 0;
}

/*
#include<stdio.h>
int main()
{
	char a[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', 0 }, *p;
	int i;
	i = 8;
	p = a + i;
	printf("%s\n", p - 3);
}
*/