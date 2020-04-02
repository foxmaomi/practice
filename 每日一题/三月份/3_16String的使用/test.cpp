#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//����Լ���������1�ͱ����Լ��
void divisornum(int n, vector<int>& divnum)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			divnum.push_back(i);
			//��ƽ�����ǻ�����һ����ҲҪ����
			if (n / i != i)
				divnum.push_back(n / i);
		}
	}
}
int jump(int n, int m)
{
	//����ĵ����setnum��Ĳ�������ʼnΪ1������n��nΪһ��
	vector<int> stepnum(m + 1, 0);
	stepnum[n] = 1;
	for (int i = n; i < m; i++)
	{
		//n������Լ������Ϊ�ӱ�������㿪ʼ���ߵ�����
		vector<int> divnum;
		//0��������㲻�ܵ�
		if (stepnum[i] == 0)
			continue;
		//����������ߵĲ����洢����divnum��������
		divisornum(i, divnum);
		for (int j = 0; j < divnum.size(); j++)
		{
			//��λ��i�����ܵ���ĵ�Ϊ stepNum[divNum[j]+i] 
			if ((divnum[j] + i) <= m && stepnum[divnum[j] + i] != 0)
				stepnum[divnum[j] + i] = min(stepnum[divnum[j] + i], stepnum[i] + 1);
			else if ((divnum[j] + i) <= m)
				stepnum[divnum[j] + i] = stepnum[i] + 1;
		}
	}
	if (stepnum[m] == 0)
		return -1;
	else
		//��ʼ��ʱ�����һ��������Ҫ��һ
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
		//���ȼ����������
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ')
				count++;
			//�����˫���ţ���������ֱ����һ��˫���Ž���
			if (str[i] == '"')
			{
				do
				{
					i++;
				} while (str[i] != '"');
			}
		}
		//�Կո����������ո������Ȳ���������1��
		cout << count + 1 << endl;
		// 1���ţ�0��ʾ��˫����
		//��˫�����еĿո�Ҫ��ӡ����
		///�����ı�flag��ֵ������˫���ſ���ʹflag��ԭ
		int flag = 1;
		for (int i = 0; i < str.size(); i++)
		{
			//�����ţ�flagͨ������Ϊ0����һ��������˫���ţ�flag��λ1
			if (str[i] == '"')
				flag ^= 1;
			//˫���ź���ͨ�ո񲻴�ӡ
			if (str[i] != ' ' && str[i] != '"')
				cout << str[i];
			//˫�����еĿո�Ҫ��ӡ
			if (str[i] != ' ' && (!flag))
				cout << str[i];
			//����˫����֮��Ŀո�ͻ���
			if (str[i] == ' ' && flag)
				cout << endl;
		}
		cout << endl;
	}
	return 0;
}
*/