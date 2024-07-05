#include <iostream>
using namespace std;
int power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int ans = a * power(a, n - 1);
    return ans;
}

int fastPower(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = fastPower(a, n / 2);
    ans *= ans;
    if (n & 1)
    {
        return ans * a;
    }
    return ans;
}
int main()
{

    int a;
    cin >> a;
    int n;
    cin >> n;
    cout << power(a, n) << endl;
    cout << fastPower(a, n) << endl;

    return 0;
}