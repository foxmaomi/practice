#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<functional>

using namespace std;

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		:_year(year)
		,_month(month)
		,day(day)
	{}
	bool operator<(const Date& d)const
	{
		return (_year < d.year)||
		(_year == d._year && _month < d._month)||
			(_year == d._year && _month == d._month && _day < d._day);
	}
};

/*
void main()
{
	queue<int> Q;
	cout << "empty = " << Q.empty() << endl;
	for (int i = 1; i <= 5; ++i)
		Q.push(i);
	cout << "size = " << Q.size() << endl;
	cout << "front = " << Q.front() << endl;
	cout << "back = " << Q.back() << endl;

	//1 2 3 4 5 
	int value = Q.front();
	Q.pop();
	value = Q.front();
	Q.pop();
	cout << "value = " << value << endl;
}

/*
void main()
{
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(50);
	cout << "empty = " << st.empty() << endl;
	cout << "size = " << st.size() << endl;
	cout << "top = " << st.top() << endl;
	int value = st.top();
	st.pop();
	cout << "size = " << st.size() << endl;
}
*/