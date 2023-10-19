#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int cliffEnd = 10;
    int x = 0;
    // exit controlled loop
    // do while is executed atleast once irrespective of condition   -- draw back
    // doesnot check initial condition
    do
    {
        x = x + 1;
        cout << "taking one step" << x << endl;
    } while (x < cliffEnd);

    cout << "final x " << x << endl;

    if (x == cliffEnd)
    {
        cout << "standing at cliff end" << endl;
    }

    else if (x > cliffEnd)
    {
        cout << "falling down" << endl;
    }

    return 0;
}
