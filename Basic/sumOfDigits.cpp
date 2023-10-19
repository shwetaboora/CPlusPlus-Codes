#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    // initialization
    int sum = 0;
    while (n > 0) // stopping criteria
    {
        int lastDigit = n % 10; // for getting the last digit of any no.
        sum = sum + lastDigit;

        n = n / 10; // update statement
    }

    cout << sum << endl;
    return 0;
}