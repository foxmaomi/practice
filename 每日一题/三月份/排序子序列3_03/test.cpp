#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


struct A
{
	unsigned a : 19;
	unsigned b : 11;
	unsigned c : 4;
	unsigned d : 29;
	char index;
};

int main()
{
	int ret = sizeof(A);
	cout << ret << endl;
}


/*
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	int ret = sizeof(S);
	cout << ret << endl;
}



/*
int main()
{
	string s;
	// ע������ʹ��getline cin>>�����ո�ͽ�����
	getline(cin, s);
	//��ת��������
	reverse(s.begin(), s.end());
	//��ת����
	auto start = s.begin();
	while (start != s.end())
	{
		auto end = start;
		while (end != s.end() && *end != ' ')
			end++;
		reverse(start, end);
		if (end != s.end())
			start = end + 1;
		else
			start = end;
	}
	cout << s << endl;
	return 0;
}

/*
int main()
{
	string s1, s2;
	cin >> s2;
	while (cin >> s1)
		s2 = s1 + " " + s2;
	cout << s2 << endl;
	return 0;
}

/*
//2. a[i+1]>a[i] �������ǵ��������жϣ�ֱ����������һ��ֵ�����ڵ���Ϊֹcount++��Ȼ�������һλ
//�õ��ж�
//3. a[i+1]<a[i]�������ǵ��������жϣ�ֱ����������һ��ֵ��С�ڵ���Ϊֹcount++��Ȼ�������һλ
//�õ��ж�
//4. a[i+1] == a[i]�����в�����++i������һλ�ñ�������Ϊ��ȼȿ������ڷǵ������У�Ҳ�������ڷǵݼ�
//���С�

//ע������Խ�������

int main()
{
	int n;
	cin >> n;//n����С������
	//ע����������һ��ֵ���Ǵ���Խ�������ıȽ�
	vector<int> a;
	a.resize(n + 1);
	//a[n] = 0;//?

	//��������
	int i = 0;
	for (i = 0; i < n; ++i)
		cin >> a[i];
	i = 0;
	int count = 0;
	while (i < n)
	{
		//�ǵݼ�������
		if (a[i] < a[i + 1])
		{
			while (i < n && a[i] <= a[i + 1])
				i++;
			count++;
			i++;
		}
		else if (a[i] == a[i + 1])
		{
			i++;
		}
		else   //�ǵ���������
		{
			while (i < n && a[i] >= a[i + 1])
				i++;
			count++;
			i++;
		}
	}
	cout << count << endl;
	return 0;
}

*/