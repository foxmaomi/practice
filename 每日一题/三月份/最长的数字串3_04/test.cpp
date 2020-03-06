#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public: int MoreThanHalfNum_Solution(vector<int> numbers)
{ // ��Ϊ�õ���sort��ʱ�临�Ӷ�O(NlogN)���������� 
	if (numbers.empty())
		return 0;
	sort(numbers.begin(), numbers.end());
	// ����ȡ�����м��Ǹ��� 
	int middle = numbers[numbers.size() / 2];
	int count = 0;
	// ���ִ��� 
	for (int i = 0; i < numbers.size(); ++i)
	{
		if (numbers[i] == middle)
			++count;
	}
	return (count > numbers.size() / 2) ? middle : 0;
}
};
int main()
{
	vector<int> a = { 1,2,3,4,5,6,7,2,2,2,2,2,2 };
	Solution s;
	int ret = s.MoreThanHalfNum_Solution(a);
	cout << ret << endl;
}

/*
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		if (numbers.empty())
			return 0;
		//����ÿ��Ԫ�أ�����¼����������ǰһ��Ԫ����ͬ����δ�����һ����1������
		int result = numbers[0];
		int times = 1;//����
		for (int i = 1; i < numbers.size(); ++i)
		{
			if (times == 0)
			{
				//����result��ֵΪ��ǰԪ�أ����ô���Ϊ1
				result = numbers[i];
				times = 1;
			}
			else if (numbers[i] == result)
			{
				++times;  //��ͬ��1
			}
			else
			{
				--times;    //��ͬ��һ
			}
		}
		//�ж�result�Ƿ����������
		times = 0;
		for (int i = 0; i < numbers.size(); ++i)
		{
			if (numbers[i] == result)
				++times;
		}
		return (times > numbers.size() / 2) ? result : 0;
	}
};

/*
class Solution {
public: int MoreThanHalfNum_Solution(vector<int> numbers) 
{ // ��Ϊ�õ���sort��ʱ�临�Ӷ�O(NlogN)���������� 
	if(numbers.empty())
		return 0; 
	sort(numbers.begin(),numbers.end()); 
	// ����ȡ�����м��Ǹ��� 
	int middle = numbers[numbers.size()/2]; 
	int count=0; 
	// ���ִ��� 
	for(int i=0;i<numbers.size();++i) 
	{
		if(numbers[i]==middle)
			++count; 
	}
	return (count>numbers.size()/2) ? middle : 0; 
} 
};

int main()
{
	int ar[] = { 1,2,2,2,2,2,2,5,9,40,52,20 };
	MoreThanHalfNum_Solution(ar);
}


/*
int main()
{
	string str, res, cur;
	cin >> str;
	for (int i = 0; i <= str.length(); i++)
	{
		//����+=��cur
		if (str[i] >= '0' && str[i] <= '9')
		{
			cur += str[i];
		}
		else
		{
			//�ҵ��������ַ�����������ַ���
			if (res.size() < cur.size())
				res = cur;
			else
				cur.clear();
		}
	}
	cout << res;
	return 0;
}
*/