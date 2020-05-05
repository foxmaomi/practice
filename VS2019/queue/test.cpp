#include<iostream>
#include<string>
#include<queue>
#include<list>

using namespace std;

void main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(ar) / sizeof(int);

	list<int> mylist;
	list<int> mylist1(10, 2);
	list<int> mylist2(mylist1);

	list<int> mylist3(ar, ar + n);
	list<int> mylist4(mylist3.begin(), mylist3.end());

	list<int> mylist5 = { 1,2,3,4,5 };
}