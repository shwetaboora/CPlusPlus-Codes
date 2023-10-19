#include <iostream>
#include <climits>
using namespace std;

int main()
{

    // datatype  modifiers + datatypes
    // long long, short, signed only 1 bit less, unsigned only 1 bit more  and only for positive integers
    // data type modifiers are used for increase or decrease the size of the memory box provided by compliler

    int x;
    cout << sizeof(x) << endl;
    cout << INT_MIN << endl;
    cout << INT_MAX << endl;

    x = INT_MAX;

    // what will happen if we  add 1 to x?
    cout << "x" << x << endl;
    x = x + 1;
    cout << "updated x" << x << endl;

    // wrap around/overflow -- when the maximum range is exceeded it goes to wrap around and the value comes is the max of opposite side (negative one)
    return 0;
}