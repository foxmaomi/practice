#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string line;
	while (getline(cin, line))
	{
		//王炸最大，直接输出
		if (line.find("joker JOKER") != -1)
			cout << "joker JOKER" << endl;
		else
		{
			int dash = line.find('-');
			//分开两手牌
			string car1 = line.substr(0, dash);
			string car2 = line.substr(dash + 1);
			//获取空格的次数，牌数为c+1
			int c1 = count(car1.begin(), car1.end(), ' ');
			int c2 = count(car2.begin(), car2.end(), ' ');
			//拿到第一张牌
			string first1 = car1.substr(0, car1.find(' '));
			string first2 = car2.substr(0, car2.find(' '));
			string str = "345678910JOKA2jokerJOKER";
			if (c1 == c2) {
				//只要牌数相等，则第一张牌大的即为大
				if (str.find(first1) > str.find(first2))
					cout << car1 << endl;
				else
					cout << car2 << endl;
			}
			else
			{
				//牌数不同，说明类型不同，只有炸弹可以和其它牌比较
				//其它类型都是错误的
				if (c1 == 3)
					cout << car1 << endl;
				else if (c2 == 3)
					cout << car2 << endl;
				else
					cout << "ERROR" << endl;
			}
		}
	}

}

/*
int main() {
	// using std::find with array and pointer:
	int myints[] = { 10, 20, 30, 40 };
	int* p;

	p = std::find(myints, myints + 4, 30);
	if (p != myints + 4)
		std::cout << "Element found in myints: " << *p << '\n';
	else
		std::cout << "Element not found in myints\n";

	// using std::find with vector and iterator:
	std::vector<int> myvector(myints, myints + 4);
	std::vector<int>::iterator it;

	it = find(myvector.begin(), myvector.end(), 30);
	if (it != myvector.end())
		std::cout << "Element found in myvector: " << *it << '\n';
	else
		std::cout << "Element not found in myvector\n";

	return 0;
}

/*
int main()
{
	string line;
	while (getline(cin, line))
	{
		//王炸最大，直接输出
		if (line.find("joker JOKER") != -1)
			cout << "joker JOKER" << endl;
	}

}
/*
int count(int n)
{
	int cnt = 0;
	if (n < 0 && n>500000)
		return -1;
	else
	{
		for (int i = 2; i <= n; i++)
		{
			int sum = 0;
			int sq = sqrt(i);
			for (int j = 2; j <= sq; j++)
			{
				if (i % j == 0)
				{
					if (i / j == j)
						sum += j;
					else
						sum += j + (i / j);
				}
			}
			if (sum + 1 == i)
				cnt++;
		}
		return cnt;
	}
}


int main()
{
	int x;
	while (cin >> x)
		cout << count(x) << endl;
	return 0;
}



/*
int Isenough(int x)
{
	vector<int> a;
	int sum = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
			a.push_back(i);
	}
	vector<int>::iterator it = a.begin();
	while (it != a.end())
	{
		sum += *it;
		it++;
	}
	if (sum == x)
		return x;
	else
		return -1;
}


int main()
{
	int x;
	cin >> x;
	int count = 0;
	for (int i = 1; i <= x; i++)
	{
		int ret = Isenough(i);
		if (ret == i)
			count++;

	}
	;
	cout << count << endl;
}
*/