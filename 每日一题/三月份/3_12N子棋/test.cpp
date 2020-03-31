#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct A 
{ 
    void foo() 
    { printf("foo"); } 
    virtual void bar() 
    { printf("bar"); } 
    A() { bar(); } 
};
struct B :A 
{ 
    void foo() { printf("b_foo"); }
    void bar() { printf("b_bar"); }
};
int main()
{
    A* p = new B;
    p->foo();
    p->bar();
}

/*
int f(int x)
{
    int count = 0;
    while (x)
    {
        count++;
        x = x & (x - 1);//与运算
    }
    return count;
}

int main()
{
    int ret = f(9999);
    cout << ret << endl;
}
/*
int numChar(string str, int k)
{
    //根据ASCII码判断大小写
    int small = 0;
    int big = 0;
    for (int i = 0; i < k; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            big++;
        else if (str[i] >= 97 && str[i] <= 122)
            small++;
    }
    if ((small + big) == 0)
        return 0;
    else if (small == k || big == k)
        return 10;
    else if (small > 0 && big > 0)
        return 20;
    return 0;
}
int numNumber(string str, int k)
{
    //根据ASCII码判断数字个数，减去字符‘0’之后在0~9之间的即为数字
    int num = 0;
    for (int i = 0; i < k; i++)
    {
        if (str[i] - '0' >= 0 && str[i] - '0' <= 9)
            num++;
    }
    if (num == 0)
        return 0;
    else if (num == 1)
        return 10;
    else
        return 20;
}

int numSymbal(string str, int k)
{
    int num = 0;
    for (int i = 0; i < k; i++)
    {
        //除去字母，数字，其它都为符号
        if (!(str[i] >= 65 && str[i] <= 90)
            && !(str[i] >= 97 && str[i] <= 122)
            && !(str[i] - '0' >= 0 && str[i] - '0' <= 9))
            num++;
    }
    if (num == 0)
        return 0;
    else if (num == 1)
        return 10;
    else
        return 25;
}

int main()
{
    string str;
    while (cin >> str)
    {
        int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
        int k = str.size();
        if (k <= 4)
            sum1 = 5;
        else if (k >= 8)
            sum1 = 25;
        else
            sum1 = 10;
        sum2 = numChar(str, k);
        sum3 = numNumber(str, k);
        sum4 = numSymbal(str, k);
        if ((sum2 > 0) && (sum3 > 0) && (sum4) > 0)
        {
            if (sum2 == 10)
                sum5 = 3;
            else
                sum5 = 5;
        }
        else if (sum2 > 0 && sum3 > 0 && sum4 == 0)
            sum5 = 2;
        if (sum1 + sum2 + sum3 + sum4 + sum5 >= 90)
            cout << "VERY_SECURE" << endl;
        else if (sum1 + sum2 + sum3 + sum4 + sum5 >= 80)
            cout << "SECURE" << endl;
        else if (sum1 + sum2 + sum3 + sum4 + sum5 >= 70)
            cout << "VERY_STRONG" << endl;
        else if (sum1 + sum2 + sum3 + sum4 + sum5 >= 60)
            cout << "STRONG" << endl;
        else if (sum1 + sum2 + sum3 + sum4 + sum5 >= 50)
            cout << "AVERAGE" << endl;
        else if (sum1 + sum2 + sum3 + sum4 + sum5 >= 25)
            cout << "WEAK"<<endl;
        else
            cout << "VERY_WEAK" << endl;
    }
    return 0;
}

/*
class Board {
public:
    bool checkWon(vector<vector<int> > board) {
        int row = board.size();
        int i, j, sum;
        //判断一行的和是否为sum
        for (i = 0; i < row; i++)
        {
            sum = 0;
            for (j = 0; j < row; j++)
            {
                sum += board[i][j];
            }
            if (sum == row)
                return true;
        }
        //判断一列的和是否为sum
        for (i = 0; i < row; i++)
        {
            sum = 0;
            for (j = 0; j < row; j++)
            {
                sum += board[j][i];
            }
            if (sum == row)
                return true;
        }
        //判断对角
        sum = 0;
        for (i = 0; i < row; i++)
        {
            sum += board[i][i];
        }
        if (sum == row)
            return true;
        for (i = 0; i < row; i++)
        {
            sum += board[i][row - i - 1];
        }
        if (sum == row)
            return true;
        return false;

        // write code here
    }
};
*/