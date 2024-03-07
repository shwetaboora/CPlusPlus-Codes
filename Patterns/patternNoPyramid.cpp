#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // problem  Code to print the pattern  N=5
    //          1
    //        2 3 2
    //      3 4 5 4 3
    //    4 5 6 7 6 5 4
    //  5 6 7 8 9 8 7 6 5

    int n;

    cin >> n;
    // loop for rows 1 to n
    for (int i = 1; i <= n; i++)
    {
        // loop for spaces
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }

        // loop for increasing no.
        int val = i;
        for (int cnt = 1; cnt <= i; cnt++)
        {
            cout << val;
            val = val + 1; // at the end it contains +1 value than the no printed
        }

        // loop for decreasing no.
        val = val - 2;
        for (int cnt = 1; cnt <= i - 1; cnt++)
        {
            cout << val;
            val = val - 1;
        }
        // print newline for line end
        cout << endl;
    }

    return 0;
}
