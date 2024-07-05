#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
const int n = 10000000;
bitset<10000005> b;
vector<int> primes;
void sieve()
{
    b.set();
    b[0] = b[1] = 0;

    for (long long int i = 2; i <= n; i++)
    {
        if (b[i])
        {
            primes.push_back(i);
            for (long long int j = i * i; j <= n; j += i)
            {
                b[j] = 0;
            }
        }
    }
}

bool isPrime(long long no)
{
    if (no <= n)
    {
        return b[no] == 1 ? true : false;
    }
    for (long long int i = 0; primes[i] * (long long)primes[i] <= no; i++)
    {
        if (no % primes[i] == 0)
        {
            return false;
        }
    }
}

int main()
{
    sieve();
    // for (int i = 0; i <= 100; i++)
    // {
    //     cout << primes[i] << " ";
    // }

    if (isPrime(2147483647))
    {
        cout << "yes it is" << endl;
    }
    else
    {
        cout << "no its not" << endl;
    }

    return 0;
}