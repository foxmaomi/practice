#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;



/*
char* Inverse(char* s,int len)
{
	int left = 0;
	int right = left+len-1;
	while (left < right)
	{
		char tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
		++left;
		--right;
	}
	return s;
}

int main()
{
	char s[] = "i like beijing.";
	int len = strlen(s);
	char* ret = Inverse(s,len);
	int left = 0;
	int right = len;
	while (left < right)
	{
		int count = 0;
		while (s[left] != ' ')
		{
			left++;
			count++;
		}
		Inverse(s, count);
	}
	printf("%s", ret);
}

//double compare(int,int)
/*
int main()
{
	int a[] = { 1,2,3,4 };
	int* b = a;
	*b += 2;
	*(b + 2) = 2;
	b++;
	printf("%d,%d\n", *b, *(b + 2));
}
/*
class Sample {
public:
	Sample(int x) {
		//*p = x;
		//*p = new int(x);
		p = new int(x);
	}
	~Sample() {
		if (p)
			delete p;
	}
	int show() {
		return *p;
	}
private:
	int* p;
};
int main() {
	Sample S(5);
	cout << S.show() << endl;
	return 0;
}
*/