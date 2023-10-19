#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // comma operator
    int a, b, c;

    // assignment operator
    a = 10;
    b = 20;
    c = 30;

    // logical operator
    if (c > a and c > b)
    {
        cout << "c is largest" << endl;
    }

    // ternary operator
    int x = c % 2 == 0 ? 1 : 0;
    cout << x << endl;
    c % 2 == 0 ? cout << "even" : cout << "odd" << endl;

    // bitwise operator
    x = 5;
    int y = 9;

    cout << "AND" << (x & y) << endl;
    cout << "OR" << (x | y) << endl;
    cout << "XOR" << (x ^ y) << endl;

    // shift operator
    x = x << 2;
    cout << x << endl;
    cout << (y >> 1) << endl;

    // unary operators
    cout << (&x) << endl; // (address of) x hexadecimal form

    // increment decrement operators
    a = 10;
    int z = a++;
    cout << z << endl;
    z = ++a;
    cout << z << endl;

    // compound assignment operators
    a = 10;
    a *= 3;
    cout << "a after multiply " << a << endl;
    return 0;
}
