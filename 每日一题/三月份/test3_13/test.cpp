#include<iostream>
#include<vector>
using namespace std;

int Isprime(int x)
{
	int i = 2;
	int count = 0;
	while (i <= sqrt(x))
	{
		if (x % i == 0)
			count++;
		i++;
	}
	if (count == 0)
		return x;
	else
		return -1;
}

int main()
{
	int x;
	int i = 0;
	int count = 0;
	vector<int> a;
	vector<int> b;
	vector<int> c;
	cin >> x;
	for (i = 1; i <= x; i++)
	{
		int ret = Isprime(i);
		if (ret != -1)
			a.push_back(ret);
	}
	for (i = 1; i < (x / 2); i++)
	{
		count = x - i;
		vector<int>::iterator it = a.begin();
		while (it != a.end())
		{
			if (*it == count)
			{
				b.push_back(i);
				c.push_back(count);
				break;
			}
		}
		i++;
	}
	vector<int>::iterator it1 = b.begin();
	while (it1 != b.end())
	{
		cout << *it1 << " ";
		*it1++;
	}
	cout << endl;
	vector<int>::iterator it2 =c.begin();
	while (it2 != c.end())
	{
		cout << *it2 << " ";
		*it2++;
	}
	cout << endl;
}



/*
#define SQR(A) A*A
class Base
{
public:
	int Bar(char x)
	{
		return (int)(x);
	}
	virtual int Bar(int x)
	{
		return (2 * x);
	}
};
class Derived : public Base
{
public:
	int Bar(char x)
	{
		return (int)(-x);
	}
	int Bar(int x)
	{
		return (x / 2);
	}
};
/*
int main(void)
{
	Derived Obj;
	Base* pobj = &Obj;
	printf("%d,", pobj->Bar((char)(100)));
	printf("%d,", pobj->Bar(100));
}


/*
void main()
{
	int x = 6, y = 3, z = 2;
	x /= SQR(y + z) / SQR(y + z);
	cout << x << endl;
}



/*
void main()
{
	int n[][3] = { 10,20,30,40,50,60 };
	int(*p)[3];
	p = n;
	cout << p[0][0] << "," << *(p[0] + 1) << "," << (*p)[2] << endl;
}
/*
int main()
{
	int a[2][2] = { {1},{2} };
	//int a[2][] = { {1,2},{3,4} };
}


/*
void func(const int& v1, const int& v2)
{
	cout << v1 << ' ';
	cout << v2 << ' ';
}
int main(int argc, char* argv[])
{
	int i = 0;
	func(++i, i++);
	return 0;
}


/*
class myClass
{
	myClass::~myclass() {
		delete this;
		this = NULL;
	}

};


/*
struct st_task
{
	uint16_t id;
	uint32_t value;
	uint64_t timestap;
};
void foo()
{
	st_task task = {};
	uint64_t a = 0x00010001;
	memcpy(&task, &a, sizeof(uint64_t));
	printf("%11u,%11u,%11u", task.id, task.value, task.timestap);
}

int main()
{
	foo();
}
*/