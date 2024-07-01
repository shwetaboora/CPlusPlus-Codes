#include <iostream>
using namespace std;

bool isOdd(int n)
{
    return (n & 1);
}
int getBit(int n, int i)
{
    int mask = (1 << i);
    int bit = (n & mask) > 0 ? 1 : 0;
    return bit;
}
int setBit(int n, int i)
{
    int mask = (1 << i);
    int ans = n | mask;
    return ans;
}
void clearBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
}
void updateBit(int &n, int i, int v)
{
    int mask = ~(1 << i);
    int clearedN = n & mask;
    n = clearedN | (v << i);
}

int main()
{
    int n = 5;
    int i;
    // i = 2;
    cin >> i;

    // cout << isOdd(n) << endl;
    // cout << getBit(n, i) << endl;
    // n = setBits(n, i);
    // cout << "ans " << n << endl;
    // cout << setBit(n, i) << endl;
    // clearBit(n, i);
    // cout << n << endl;
    updateBit(n, 2, 0);
    updateBit(n, 4, 1);
    cout << n << endl;
    // cout << updateBit(n, i) << endl;

    return 0;
}