#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//getLuckyPacket:�ӵ�ǰλ�ÿ�ʼ��������Ҫ�����ϣ�һֱ���������һ��λ�ý��� 
//x[] : �����е������� 
//n : �������
//pos : ��ǰ������λ�� \
//sum : ��Ŀǰλ�õ��ۼӺ� 
//multi : ��Ŀǰλ�õ��ۻ�ֵ

int getluckypacket(int x[], int n, int pos, int sum, int multi)
{
	int count = 0;
	//ѭ����������λ��i��ʼ���п��ܵ����
	for (int i = pos; i < n; i++)
	{
		sum += x[i];
		multi *= x[i];
		if (sum > multi)
		{
			//�ҵ�����Ҫ�����ϣ���һ�������ۼӺ�����ֵ�����Ƿ��з��ϵļ���
			count += 1 + getluckypacket(x, n, i + 1, sum, multi);
		}
		else if (x[i] == 1)
		{
			//���������Ҫ���ҵ�ǰԪ��ֵΪ1��������������
			count += getluckypacket(x, n,i + 1, sum, multi);
		}
		else
		{
			//���sum����multi��������û�з���Ҫ��������
			break;
		}
		//Ҫ������һ��λ��֮ǰ�����Ȼָ�sum��multi
		sum -= x[i];
		multi /= x[i];
		//������ͬ����û�����𣬶�ֻ����һ����ϣ�����ֱ������
		while (i < n - 1 && x[i] == x[i + 1])
		{
			i++;
		}
	}
	return count;
}

int main()
{
	int n;
	while (cin >> n)
	{
		int x[n];
		for (int i = 0; i < n; i++)
		{
			cin >> x[i];
		}
		sort(x, x + n);
		cout << getluckypacket(x, n, 0, 0, 1) << endl;
	}
	return 0;
}
/*
bool Isrun(int year)
{
	if ((year % 4 != 0) || (year % 100 == 0 && year % 400 != 0))
	{
		return false;
	}
	return true;
}
int main()
{
	int year,month,day;
	cin >> year>>month>>day;
	int sum = 0;
	vector<int> a = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (Isrun(year))
		a[1]++;
	for (int i = 0; i < month-1; i++)
		sum = sum + a[i];
	sum = sum + day;
	cout << sum << endl;

}
*/