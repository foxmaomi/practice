#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//计算约数，求除了1和本身的约数
void divisornum(int n, vector<int>& divnum)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			divnum.push_back(i);
			//非平方数是还有另一个数也要加入
			if (n / i != i)
				divnum.push_back(n / i);
		}
	}
}
int jump(int n, int m)
{
	//储存的到达此setnum点的步数，初始n为1步，从n到n为一步
	vector<int> stepnum(m + 1, 0);
	stepnum[n] = 1;
	for (int i = n; i < m; i++)
	{
		//n的所有约数，即为从本身这个点开始能走的数量
		vector<int> divnum;
		//0代表这个点不能到
		if (stepnum[i] == 0)
			continue;
		//求出所有能走的步数存储再在divnum的容器中
		divisornum(i, divnum);
		for (int j = 0; j < divnum.size(); j++)
		{
			//由位置i出发能到达的点为 stepNum[divNum[j]+i] 
			if ((divnum[j] + i) <= m && stepnum[divnum[j] + i] != 0)
				stepnum[divnum[j] + i] = min(stepnum[divnum[j] + i], stepnum[i] + 1);
			else if ((divnum[j] + i) <= m)
				stepnum[divnum[j] + i] = stepnum[i] + 1;
		}
	}
	if (stepnum[m] == 0)
		return -1;
	else
		//初始化时多给了一步，故需要减一
		return stepnum[m] - 1;
}
int main()
{
	int n, m;
	cin >> n >> m;
	cout << jump(n, m) << endl;
	return 0;
}

/*
int main()
{
	string str;
	while (getline(cin, str))
	{
		int count = 0;
		//首先计算参数数量
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ')
				count++;
			//如果是双引号，向后遍历，直到下一个双引号结束
			if (str[i] == '"')
			{
				do
				{
					i++;
				} while (str[i] != '"');
			}
		}
		//以空格计算个数，空格数量比参数个数少1个
		cout << count + 1 << endl;
		// 1引号，0表示优双引号
		//用双引号中的空格要打印出来
		///用异或改变flag的值，两个双引号可以使flag复原
		int flag = 1;
		for (int i = 0; i < str.size(); i++)
		{
			//有引号，flag通过异或变为0，下一次再遇到双引号，flag置位1
			if (str[i] == '"')
				flag ^= 1;
			//双引号和普通空格不打印
			if (str[i] != ' ' && str[i] != '"')
				cout << str[i];
			//双引号中的空格要打印
			if (str[i] != ' ' && (!flag))
				cout << str[i];
			//遇到双引号之外的空格就换行
			if (str[i] == ' ' && flag)
				cout << endl;
		}
		cout << endl;
	}
	return 0;
}
*/