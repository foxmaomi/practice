#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define STACK_INIT_SIZE 100;
#define STACKINCREMEMT 10;
typedef struct {
    SElemType* base;
    SElemType* top;
    int stacksize;
} sqstack;

status Initstack(sqstack& s) {
    s.base = (SElemType*)malloc(STACK_INIT_SIZE * sizeof(SElemType));
    if (!s.base) exit(OVERFLOW);
    s.stacksize = STACK_INIT_SIZE;
    s.top = s.base;
    return OK;
}  //;

status Push(sqstack& s, SElemType e) {
    if (s.top - s.base >= s.stacksize) {
        s.base = (SElemType*)realloc(s.base, sizeof(SElemType) * (s.stacksize + STACKINCREMEMT));
        if (!s.base) exit(OVERFLOW);
        s.top = s.base + s.stacksize;
        s.stacksize += STACKINCREMEMT;
    }
    *(s.top) = e;
    s.top++;
    return OK;
};

status Pop(sqstack& s, SElemType& e) {
    if (s.top == s.base) return ERROR;
    e = *(--s.top)
        return OK;
}

void conversion() {
    int x;
    status Initstack(s);  //s  ?
    printf("请输入转换的十进制数");
    scanf("%u",&N);//缺少"
        printf("请输入转换为多少进制");
    scanf("%d",&x);//缺少"
        while (N) {
            status Push(s, N % x);
            N = N / x;
        }
    while (!stackEmpty(s)) {
        status Pop(s, e);
        printf("%d", e);
    }
}

void main()
{
    void conversion();
}








/*#include<iostream>
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