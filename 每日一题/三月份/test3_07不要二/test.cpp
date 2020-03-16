#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
	int StrToInt(string str) {
		if (str.empty())
			return 0;
		int symbol = 1;
		if (str[0] == '-')//������
		{
			symbol = -1;
			str[0] = '0';//�������ַ���0������������0
		}
		else if (str[0] == '+')
		{
			symbol = 1;
			str[0] = '0';
		}
		int sum = 0;
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] < '0' || str[i] > '9')
			{
				sum = 0;
				break;
			}
			sum = sum * 10 + str[i] - '0';
		}
		return symbol * sum;
	}
};
int main()
{
	string s;
	getline(cin, s);
	Solution a;
	int ret = a.StrToInt(s);
	cout << ret << endl;
}




/*
int main()
{
	int w, h, res = 0;
	cin >> w >> h;
	vector<vector<int>> a;
	a.resize(w);
	for (auto& e : a)
		e.resize(h, 1);
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
		{
			if (a[i][j] == 1)
			{
				res++;
				if ((i + 2) < w)
					a[i + 2][j] = 0;
				if ((j + 2) < h)
					a[i][j + 2] = 0;
			}
		}
	}
	cout << res;
	return 0;
}
//��ϸ��������������Ŀ���������ͷǳ����ˣ�ʹ��vector<vector<int>>����һ����ά���飬resize��
//�ռ䲢��ʼ����ÿ��λ�ó�ʼ��Ϊ1����ʾ�����⣬a[i][j]λ�÷ŵ��⣬����Ա�Ǵ�a[i][j + 2]��a[i + 1][j]λ��
//���ܷŵ��⣬����һ���ά���飬��Ǵ����ܷŵ����λ�ã�ͳ��Ҳ��ͳ�Ƴ��˵������λ������
*/