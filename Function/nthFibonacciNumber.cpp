#include <iostream>
using namespace std;

int nthFibonacciNo(int n)
{
    int a = 0;
    int b = 1;
    int c;
    for (int i = 1; i <= n - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main()
{
    // fibonacci series
    // 0,1,1,2,3,5,8,13,...
    // we have to find nth fibonacci number.

    int n;
    cin >> n;

    cout << nthFibonacciNo(n) << endl;
    return 0;
}