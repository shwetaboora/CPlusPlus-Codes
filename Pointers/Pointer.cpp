#include <iostream>
using namespace std;

int main()
{
    // pointer is a variable that stores address of another variable
    int x = 10;
    cout << &x << endl;
    int *y = &x; // declaration with initialization

    return 0;
}