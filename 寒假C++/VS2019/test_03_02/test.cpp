#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<assert.h>
#include<functional>

using namespace std;

namespace bit
{
	template<class T>
	struct less
	{
		bool operator()(const T& left, const T& right)
		{
			return left < right;
		}
	};
	template<class T>
	struct greater
	{
		bool operator()(const T& left, const T& right)
		{
			return left > right;
		}
	};
	template<class T,class Cont = vector<T>,class Pred = less<T>>
	class priority_queue
	{
	public:
		typedef T    value_type;
		typedef size_t size_type;
		explicit priority_queue()
		{}
		priority_queue(const value_type* first,
			const value_type* last)
		{
			while (first != last)
				c.push_back(*first++);
			int root = (c.size() - ) / 2;
			while (root >= 0)
			{
				adjustdown(root--);
			}
		}
		bool empty() const
		{
			return c.empty();
		}
		size_type size() const
		{
			return c.size();
		}
		value_type& top()
		{
			assert(!empty());
			return c.front();
		}
		const value_type& top() const
		{
			assert(!empty());
			return c.front();
		}
		void push(const value_type& x)
		{
			c.push_back(x);
			adjustup(c.size() - 1);
		}
		void pop()
		{
			std::swap(c.front(), c.back());
			c.pop_back();
			adjustdown(0);
		}
	public:
		void show_heap()
		{
			for (int i = 0; i < c.size(); ++i)
				cout << c[i] << "->";
			cout << endl;
		}
	protected:
		void adjustdown(int parent)
		{
			int child = 2 * parent + 1;
			whlie(child < c.size())
			{
				if (child + 1 < c.size() && comp(c[child], c[child + 1]))
					child += 1;
				if (comp(c[parent], c[child]))
				{
					std::swap(c[parent], c[child]);
					parent = child;
					child = 2 * parent + 1;
				}
				else
					break;
			}
		}
		void adjust(int child)
		{
			int parent = (child - 1) / 2;
			while (child)
			{
				if (comp(c[parent], c[child]))//less(c[parent],c[child])
				{
					std::swap(c[parent], c[child]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else
					break;
			}
		}
	protected:
		Cont c;
		Pred comp;
    };
}



/*
namespace bit
{
	template<class T>
	struct less
	{
		bool operator()(const T& left, const T& right)
		{
			return left < right;
		}
	};
	template<class T>
	struct greater
	{
		bool operator()(const T& left, const T& right)
		{
			return left > right;
		}
	};
	template<class T, class Cont = vector<T>, class Pred = less<T>>
	class priority_queue
	{
	public:
		typedef T  value_type;
		typedef size_t size_type;
		explicit priority_queue(const Pred& pr = Pred())
		{
			make_heap(c.begin(), c.end());
		}
		priority_queue(const value_type* first,
			const value_type* last,
			const Pred& pr = Pred());
		bool empty() const
		{
			return c.empty();
		}
		size_type size() const
		{
			return c.size();
		}
		value_type& top()
		{
			assert(!empty());
			return c.front();
		}
		const value_type& top() const
		{
			assert(!empty());
			return c.front();
		}
		void  push(const value_type& x)
		{
			c.push_back(x);
			push_heap(c.begin(), c.end());
		}
		void pop()
		{
			pop_heap(c.begin(), c.end());
		}
	protected:
		Cont c;
		Pred comp;
	};
};

void main()
{
	bit::priority_queue<int> pq;
	cout << "is empty = " << pq.empty() << endl;
	cout << "size = " << pq.size() << endl;
	pq.push(5);
	pq.push(7);
	pq.push(8);
	pq.pop();
	cout << pq.top() << endl;
}

/*
void main()
{
	vector<int> v = { 5,7,8,9,6,4,2,1,0 };

	for (const auto& e : v)
		cout << e << "->";
	cout << endl;
}

/*
void main()
{
	vector<int> v = { 5,7,8,9,6,4,2,1,0 };
	for (const auto& e : v)
		cout << e << "->";
	cout << endl;
	sort(v.begin(), v.end(), greater<int>());
	for (const auto& e : v)
		cout << e << "->";
	cout << endl;
}

/*
void main()
{
	vector<int> v = { 5,7,8,9,6,4,2,1,0 };
	for (const auto& e : v)
		cout << e << "->";
	cout << endl;

	make_heap(v.begin(), v.end());//制作一个堆
	for (const auto& e : v)
		cout << e << "->";
	cout << endl;

	v.push_back(3);
	push_heap(v.begin(), v.end());

	for (const auto& e : v)
		cout << e << "->";
	cout << endl;

	pop_heap(v.begin(), v.end());
	for (const auto& e : v)
		cout << e << "->";
	cout << endl;

	pop_heap(v.begin(), v.end());
	for (const auto& e : v)
		cout << e << "->";
	cout << endl;
}

/*
void main()
{
	vector<int> v = { 5,7,8,6,9,1,0 };
	priority_queue<int, vector<int>, greater<int>> pq;//大堆结构
	for (const auto& e : v)
		pq.push(e);
	//pq.pop();
	cout << pq.top() << endl;
}
/*
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
	bool operator>(const Date& d)const
	{
		return (_year > d._year) ||
			(_year == d._year && _month > d._month) ||
			(_year == d._year && _month == d._month && _day > d._day);
	}
	friend ostream& operator<<(ostream& _cout, const Date& d)
	{
		_cout << d._year << "-" << d._month << "-" << d.day;
		return _cont;
	}
private:
	int _year;
	int _month;
	int _day;
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