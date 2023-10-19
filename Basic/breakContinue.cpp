#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // break it is used to break a loop based upon the certain condtition

    // prblm - read  a stream of no untill you get a multiple of 7

    int no;

    while (true)
    {
        // no stopping condtion as of now
        cin >> no;
        if (no % 13 == 0)
        {
            continue; // multiple times
        }
        if (no % 7 == 0)
        {
            // stop processing other no
            break; // take u out to line 21 // only once
            // continue; // skip line 21 and all statements will be skipped inside the loop and loop will never end
            // take you to the starting of the loop
        }
        cout << "no " << no << endl;
    }

    cout << "out of loop" << endl;
    return 0;
}
