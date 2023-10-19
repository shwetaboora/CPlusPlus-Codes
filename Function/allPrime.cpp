#include <iostream>
using namespace std;
// check if a given no is prime or not.
bool isPrime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// prints all prime numbers upto a number n.
void printPrimes(int N)
{
    for (int i = 2; i <= N; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{

    int n;
    cin >> n;

    printPrimes(n);

    return 0;
}