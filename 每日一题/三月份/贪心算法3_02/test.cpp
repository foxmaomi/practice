#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

#include<iostream> 
#include<string> 
using namespace std;
int main()
{
	// ע�����ﲻ��ʹ��cin���գ���Ϊcin�����ո�ͽ����ˡ� 
	// oj��IO�����ַ������ʹ��getline��
	string str1, str2;
	//cin>>str1;
	//cin>>str2; 
	getline(cin, str1);
	getline(cin, str2);
	// ʹ�ù�ϣӳ��˼����str2ͳ���ַ����ֵĴ��� 
	int hashtable[256] = { 0 };
	for (size_t i = 0; i < str2.size(); ++i)
	{
		hashtable[str2[i]]++;
	}
	// ����str1��str1[i]ӳ��hashtable��Ӧλ��Ϊ0�����ʾ����ַ��� 
	// str2��û�г��ֹ�������+=��ret��ע��������ò�Ҫstr1.erases(i)
	// ��Ϊ�߱�������erase�����׳���
	string ret;
	for (size_t i = 0; i < str1.size(); ++i)
	{
		if (hashtable[str1[i]] == 0)
			ret += str1[i];
	}
	cout << ret << endl;
	return 0;
}
/*
int main()
{
	//ע�����ﲻ����cin���գ���Ϊcin�����ո�ͽ����ˡ�
	//oj��IO�����ַ������ʹ��getline��
	string str1, str2;
	//cin>>str1��
	//cin>>str2;
	getline(cin, str1);
	getline(cin, str2);
	//ʹ�ù�ϣӳ��˼����str2ͳ���ַ����ֵĴ���
	int hashtable[256] = { 0 };
	for (size_t i = 0; i < str2.size(); ++i)
	{
		hashtable[str2[i]]++;
	}
	// ����str1��str1[i]ӳ��hashtable��Ӧλ��Ϊ0�����ʾ����ַ��� 
	// str2��û�г��ֹ�������+=��ret��ע��������ò�Ҫstr1.erases(i) 
	// ��Ϊ�߱�������erase�����׳���
	string ret;
	for (size_t i = 0; i < str1.size(); ++i)
	{
		if (hashtable[str1[i]] == 0)
			ret += str1[i];
	}
	cout << ret << endl;
	cout << str1 << endl;
	cout << str2 << endl;
	return 0;

}
/*
int main()
{
	int n;
	while (cin >> n)
	{
		long long sum = 0;
		vector<int> a;
		a.resize(3 * n);
		for (int i = 0; i < (3 * n); i++)
		{
			cin >> a[i];
		}
		//����Ȼ��ȡ�±�Ϊ3n - 2��3n - 4 ��3n - 4... n+2��nλ�õ�Ԫ���ۼӼ��ɣ� 
		//�൱�±�Ϊ[0,n-1]��n������
		//ÿ�������ߵ�����ʣ�µ�2����������Ϊһ�飬 ���ֵ�����ұߵ�����
		//�δ�����м�ֵ��������ǰ�����δ��ֵ������
		
		std::sort(a.begin(), a.end());
		for (int i = n; i <= 3 * n - 2; i += 2)
		{
			sum += a[i];
		}
		cout << sum << endl;
	}
}
*/