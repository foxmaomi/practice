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
//�ж�����
bool isPrime(int num)
{
    int tmp = sqrt(num);
    //ֻ�����������������ܱ�������ߵ�����������һ�����ܱ������ұߵ�������
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
        //���м���������
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