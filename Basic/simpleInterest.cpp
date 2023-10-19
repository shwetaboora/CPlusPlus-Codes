#include <iostream>
using namespace std;

int main()
{
    // declaring variables
    int p, r, t;
    float si;
    // assigning values
    // p = 13;
    // r = 23;
    // t = 21;

    cin >> p >> r >> t;
    // typecasting
    //  two types --> 1.implicit- happens automatically 2.explicit
    //  integer/integer = integer
    //  float/integer = float

    // si = p * r * t / 100;
    // int / int so answer is coming in int form

    si = p * r * t / 100.0;
    // int / float so answer is coming in float form
    cout << si << endl;

    return 0;
}