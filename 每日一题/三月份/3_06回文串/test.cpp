#include<iostream>
#include<string>
using namespace std;

bool Iscircle(const string& s)
{
	size_t begin = 0;
	size_t end = s.size() - 1;
	while (begin < end)
	{
		if (s[begin] != s[end])
			return false;
		++begin;
		++end;
	}
	return true;
}
int main()
{
	std::string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	size_t count = 0;
	for (size_t i = 0; i < str1.size(); ++i)
	{
		string str = str1;
		str.insert(i, str2);
		if (Iscircle(str))
			++count;
	}
	cout << count << endl;
	return 0;
}



/*
bool Iscircle(const string& s)
{
	size_t begin = 0;
	size_t end = s.size() - 1;
	while (begin < end)
	{
		if (s[begin] != s[end])
			return false;
		++begin;
		--end;
	}
	return true;
}

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	size_t count = 0;
	for (size_t i = 0; i < s1.size(); ++i)
	{
		//将字符串2插入到字符串1的每一个位置，再判断是否回文
		string str = s1;
		str.insert(i, s2);
		if (Iscircle(str))
			++count;
	}
	cout << count << endl;
	return 0;
}











/*
#include<iostream>
#include<string>
using namespace std;

bool Iscircle(const string &s)
{
	size_t begin = 0;
	size_t end = s.size() - 1;
	while (begin < end)
	{
		if (s[begin] != s[end])
			return false;
		++begin;
		--end;
	}
	return true;
}

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	size_t count = 0;
	for (size_t i = 0; i < s1.size(); ++i)
	{
		//将字符串2插入到字符串1的每一个位置，再判断是否回文
		string str = s1;
		str.insert(i, s2);
		if (Iscircle(str))
			++count;
	}
	cout << count << endl;
	return 0;
}