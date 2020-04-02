#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//getLuckyPacket:从当前位置开始搜索符合要求的组合，一直搜索到最后一个位置结束 
//x[] : 袋子中的所有球 
//n : 球的总数
//pos : 当前搜索的位置 \
//sum : 到目前位置的累加和 
//multi : 到目前位置的累积值

int getluckypacket(int x[], int n, int pos, int sum, int multi)
{
	int count = 0;
	//循环，搜索以位置i开始所有可能的组合
	for (int i = pos; i < n; i++)
	{
		sum += x[i];
		multi *= x[i];
		if (sum > multi)
		{
			//找到符合要求的组合，加一，继续累加后续的值，看是否有符合的集合
			count += 1 + getluckypacket(x, n, i + 1, sum, multi);
		}
		else if (x[i] == 1)
		{
			//如果不符合要求，且当前元素值为1，则继续向后搜索
			count += getluckypacket(x, n,i + 1, sum, multi);
		}
		else
		{
			//如果sum大于multi，则后面就没有符合要求的组合了
			break;
		}
		//要搜索下一个位置之前，首先恢复sum和multi
		sum -= x[i];
		multi /= x[i];
		//数字相同的求，没有区别，都只能算一个组合，所以直接跳过
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