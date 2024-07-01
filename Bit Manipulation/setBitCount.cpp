#include <iostream>
using namespace std;
// given a no. N find the set bits in a binary rep. of it
// N = 13 binary = 1101 output = 3;

// First method
int countBits(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += (n & 1);
        n = n >> 1;
    }

    return ans;
}

// Second Method
int countBitsFast(int n)
{
    int ans = 0;
    while (n > 0)
    {
        n = n & (n - 1); // removes the last set bit left to right
        ans++;
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;

    cout << countBits(n) << endl;
    cout << countBitsFast(n) << endl;
    cout << __builtin_popcount(n) << endl;
    return 0;
}