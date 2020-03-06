#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


struct A
{
	unsigned a : 19;
	unsigned b : 11;
	unsigned c : 4;
	unsigned d : 29;
	char index;
};

int main()
{
	int ret = sizeof(A);
	cout << ret << endl;
}


/*
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	int ret = sizeof(S);
	cout << ret << endl;
}



/*
int main()
{
	string s;
	// 注意这里使用getline cin>>遇到空格就结束了
	getline(cin, s);
	//翻转整个句子
	reverse(s.begin(), s.end());
	//翻转单词
	auto start = s.begin();
	while (start != s.end())
	{
		auto end = start;
		while (end != s.end() && *end != ' ')
			end++;
		reverse(start, end);
		if (end != s.end())
			start = end + 1;
		else
			start = end;
	}
	cout << s << endl;
	return 0;
}

/*
int main()
{
	string s1, s2;
	cin >> s2;
	while (cin >> s1)
		s2 = s1 + " " + s2;
	cout << s2 << endl;
	return 0;
}

/*
//2. a[i+1]>a[i] ，则进入非递增序列判断，直到遍历到下一个值不大于等于为止count++，然后进行下一位
//置的判断
//3. a[i+1]<a[i]，则进入非递增序列判断，直到遍历到下一个值不小于等于为止count++，然后进行下一位
//置的判断
//4. a[i+1] == a[i]不进行操作，++i进行下一位置遍历，因为相等既可以属于非递增序列，也可以属于非递减
//序列。

//注意数组越界的问题

int main()
{
	int n;
	cin >> n;//n个大小的数组
	//注意这里多给了一个值，是处理越界的情况的比较
	vector<int> a;
	a.resize(n + 1);
	//a[n] = 0;//?

	//读入数组
	int i = 0;
	for (i = 0; i < n; ++i)
		cin >> a[i];
	i = 0;
	int count = 0;
	while (i < n)
	{
		//非递减子序列
		if (a[i] < a[i + 1])
		{
			while (i < n && a[i] <= a[i + 1])
				i++;
			count++;
			i++;
		}
		else if (a[i] == a[i + 1])
		{
			i++;
		}
		else   //非递增子序列
		{
			while (i < n && a[i] >= a[i + 1])
				i++;
			count++;
			i++;
		}
	}
	cout << count << endl;
	return 0;
}

*/