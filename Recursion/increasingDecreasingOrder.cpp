#include <iostream>
using namespace std;

void dec(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // recursive case
    cout << n << " ";
    dec(n - 1);
}
void inc(int n)
{
    if (n == 0)
    {
        return;
    }
    inc(n - 1);
    cout << n << " ";
}

int main()
{
    // functions to print first n numbers in
    //  - increasing order
    //  - decreasing order

    int n;
    cin >> n;

    dec(n);
    cout << endl;
    inc(n);
    cout << endl;

    return 0;
}