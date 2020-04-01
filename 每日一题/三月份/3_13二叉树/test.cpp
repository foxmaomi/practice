#include<iostream>
using namespace std;

struct A
{
    int a;
    short b;
    int c;
    char d;
};
struct B
{
    int a;
    short b;
    char c;
    int d;
};

int  main()
{
    cout << sizeof(A) << sizeof(B) << endl;
}
/*
int main()
{
    int x;
    while (cin >> x)
    {
        int count = 0, sum = 0;
        int i = 0;
        for (i = 0; i < 32; i++)
        {
            if (((x >> i) & 1) == 1)
                sum++;
            else
                sum = 0;
            if (sum > count)
                count = sum;
        }
        cout << count << endl;
    }
}


/*
int main()
{
    int x;
    cin >> x;
    int count = 0, sum = 0;
    int i = 0;
    for (i = 0; i < 32; i++)
    {
        if (((x >> i) & 1) == 1)
            sum++;
        else
            sum = 0;
        if (sum > count)
            count = sum;
    }
    cout << count << endl;
}



/*
class LCA {
public:
    int getLCA(int a, int b) {
        while (a != b)
        {
            if (a > b)
                a /= 2;
            else
                b /= 2;
        }
        return a;
        // write code here
    }
};

int main()
{
    int x, y;
    cin >> x>>y;
    LCA a;
    int ret = a.getLCA(x, y);
    cout << ret << endl;
}
*/