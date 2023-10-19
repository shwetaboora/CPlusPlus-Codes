#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cliffEnd = 10;
    int x = 0;

    // entry controlled loop
    // we have to do initialization updation and stopping at diffrent places in while loop
    // checks for initial condition before moving further
    while (x < cliffEnd)
    {
        x = x + 1;
        cout << "taking one step" << x << endl;
    }

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
