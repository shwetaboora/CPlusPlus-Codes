#include <iostream>
using namespace std;
int main()
{

    int cliffEnd = 10;
    int x;
    // entry controlled loop
    // for loop = while loop
    // we have to initialize update and stop the loop at one place only in for loop.

    // for (x = 0; x < cliffEnd; x++)
    // {
    //     cout << "taking one step " << x + 1 << endl;
    // }

    // another way
    for (x = 0; x < cliffEnd;)
    {
        x = x + 1;
        cout << "taking one step " << x + 1 << endl;
    }

    return 0;
}
