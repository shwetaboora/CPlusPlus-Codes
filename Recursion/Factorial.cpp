#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }

    // recursive case

    int smallans = factorial(n - 1);
    int ans = n * smallans;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}