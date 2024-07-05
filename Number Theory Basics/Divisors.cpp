#include <iostream>
#include <vector>
using namespace std;

vector<int> primeSieve(int *p, int n)
{
    p[0] = p[1] = 0;
    p[2] = 1;

    for (int i = 3; i <= n; i += 2)
    {
        p[i] = 1;
    }

    for (int i = 3; i <= n; i += 2)
    {
        if (p[i])
        {
            for (int j = i * i; j <= n; j += 2 * i)
            {
                p[j] = 0;
            }
        }
    }
    vector<int> primes;
    primes.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (p[i] == 1)
        {
            primes.push_back(i);
        }
    }
    return primes;
}

int noOfDivisors(int m, vector<int> &primes)
{

    int i = 0;
    int p = primes[0];
    int ans = 1;
    while (p * p <= m)
    {
        if (m % p == 0)
        {
            int cnt = 0; // what is the power
            while (m % p == 0)
            {
                cnt++;
                m = m / p;
            }
            ans = ans * (cnt + 1);
        }
        i++;
        p = primes[i];
    }
    if (m != 1)
    {
        ans = ans * 2;
    }
    return ans;
}

int main()
{
    int N = 100;
    int p[N];
    for (int i = 0; i < N; i++)
    {
        p[i] = 0;
    }

    vector<int> primes = primeSieve(p, 100);

    int t;
    cin >> t;
    while (t--)
    {
        int no;
        cin >> no;
        int divisors = noOfDivisors(no, primes);
        cout << divisors << endl;
    }

    return 0;
}