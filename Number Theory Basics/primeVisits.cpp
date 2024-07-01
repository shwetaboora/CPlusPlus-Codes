#include <iostream>
using namespace std;

// Naive appraoch O(N)
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
    }
}

// Sieve Approach - generate a array containing prime nos.
void primeSieve(int *p)
{
    // first mark all odd nos prime
    for (int i = 3; i <= 1000; i += 2)
    {
        p[i] = 1;
    }
    // sieve
    for (int i = 3; i <= 1000; i += 2)
    {
        // if current no is not marked (it is prime)
        if (p[i] == 1)
        {
            // mark all the multiples of i as non prime
            for (int j = i * i; j <= 1000; j = j + i)
            {
                p[j] = 0;
            }
        }
    }
    // special cases
    p[2] = 1;
    p[1] = p[0] = 0;
}

int main()
{
    int p[1005] = {0};
    primeSieve(p);
    int csum[1005] = {0};

    // precompute the primes upto index i
    for (int i = 1; i <= 1000; i++)
    {
        csum[i] = csum[i - 1] + p[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << csum[b] - csum[a - 1] << endl;
    }

    return 0;
}