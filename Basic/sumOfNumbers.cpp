#include <iostream>
using namespace std;

int main()
{
    int n; // creating bucket

    cin >> n; // input

    int i = 1; // initial condition
    int sum = 0;

    while (i <= n) // stopping criteria
    {
        sum = sum + i; // update statement
        i = i + 1;
    }

    cout << sum << endl;

    return 0;
}