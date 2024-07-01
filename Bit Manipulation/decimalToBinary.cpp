#include <iostream>
using namespace std;
// given a no Nfind the no. of set bits in binary rep. of it
int decimalToBinary(int n)
{
    int ans = 0;
    int p = 1;
    while (n > 0)
    {
        int lastBit = (n & 1);
        ans += p * lastBit;
        p = p * 10;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << decimalToBinary(n);
    cout << endl;
    return 0;
}