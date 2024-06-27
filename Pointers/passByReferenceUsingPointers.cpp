#include <iostream>
using namespace std;

void increment(int x, int *y) // pass by value(int x)
// pass by reference(int *y)
{
    x = x + 1;
    *y = *y + 1;
    cout << "inside function x " << x << endl;
    cout << "inside function address of x " << &x << endl;
    // chnges made inside this function will be only with this x not with the main function x
    cout << "inside function y " << *y << endl;
}

int main()
{
    int x = 10;
    int y = 40;
    increment(x, &y);
    // copy of x is sent to function address of both the x are different
    // address of y is sent so that changes will be made in this y only
    cout << "inside main address of x " << &x << endl;
    cout << "inside main x " << x << endl;
    cout << "inside main y " << y << endl;

    return 0;
}