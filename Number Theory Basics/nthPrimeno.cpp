// Deepak is learning Sieve of Eratosthenes, He is stuck somewhere. Help him printing prime numbers.

// Input Format
// Single line containing integral value n.

// Constraints
// 1<=n<=500000

// Output Format
// Integral value denoting nth prime number.

// Sample Input
// 1
// Sample Output
// 2
#include <iostream>
using namespace std;

int nPrime(int n)
{
    int max = 1000000;
    bool isprime[max];
    int prime[n];
    int count = 0;
    for (int i = 0; i <= max; ++i)
    {
        isprime[i] = true;
    }
    isprime[0] = isprime[1] = false;

    for (int i = 2; i * i <= max; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= max; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i <= max && count < n; i++)
    {
        if (isprime[i])
        {
            prime[count++] = i;
        }
    }

    return prime[n - 1];
}

int main()
{
    int n;
    cin >> n;

    int ans = nPrime(n);
    cout << ans << endl;
    return 0;
}