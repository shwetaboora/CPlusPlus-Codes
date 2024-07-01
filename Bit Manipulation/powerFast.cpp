#include <iostream>
using namespace std;
// power using bitmasking
int powerOptimised(int x, int n)
{
    int ans = 1;
    while (n > 0)
    {
        int lastBit = (n & 1);
        if (lastBit)
        {
            ans = ans * x;
        }
        x = x * x;
        n = n >> 1;
    }

    return ans;
}

int main()
{
    int x, n;
    cin >> x >> n;

    cout << powerOptimised(x, n) << endl;

    return 0;
}