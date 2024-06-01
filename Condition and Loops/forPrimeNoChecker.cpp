#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i;
    bool isPrime = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << n << " not prime " << endl;
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << n << "Not prime " << endl;
    }
    else
    {
        cout << n << "is prime " << endl;
    }

    return 0;
}
