#include<iostream>
#include<algorithm>
using namespace std;




/*
int main()
{
    int a[2][] = { {1,2},{3,4} };
    //int a[2][2] = { {1},2,3 };
    //int a[][2] = { 1,2,3,4 };
    //int a[2][2] = { {1},{2} };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

/*
//判断素数
bool isPrime(int num)
{
    int tmp = sqrt(num);
    //只遍历到开方出，不能被开方左边的数整除，则一定不能被开方右边的数整除
    for (int i = 2; i <= tmp; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    int half;
    int i;
    while (cin >> num)
    {
        half = num / 2;
        //从中间向两边找
        for (i = half; i > 0; i--)
        {
            if (isPrime(i) && isPrime(num - i))
                break;
        }
        cout << i << endl << num << endl;
    }
}

/*
class BinInsert {
public:
    int binInsert(int n, int m, int j, int i) {
        m <<= j;
        return n | m;
        // write code here
    }
};

int main()
{

}
*/