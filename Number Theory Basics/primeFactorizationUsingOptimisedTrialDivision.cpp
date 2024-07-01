#include <iostream>
#include <vector>
using namespace std;

void primeFactors(int n)
{
    vector<pair<int, int>> factors;
    int count;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count = 0;
            // keep on dividing it by i till it is divisible
            while (n % i == 0)
            {
                count++;
                n = n / i;
            }
            factors.push_back(make_pair(i, count));
        }
    }
    if (n != 1)
    {
        // whatever left is a prime no.
        factors.push_back(make_pair(n, 1));
    }
    for (auto p : factors)
    {
        cout << p.first << "^" << p.second << endl;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    primeFactors(n);
    return 0;
}