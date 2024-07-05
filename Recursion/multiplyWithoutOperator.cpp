#include <iostream>
using namespace std;

int multiply(int a, int n)
{
    if (n == 1)
    {
        return a;
    }

    int ans = a + multiply(a, n - 1);
    return ans;
}

int main()
{
    int a;
    cin >> a;
    int n;
    cin >> n;

    cout << multiply(a, n) << endl;

    return 0;
}