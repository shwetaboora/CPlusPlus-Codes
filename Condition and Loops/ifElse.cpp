#include <iostream>
using namespace std;
// conditional statements
int main()
{
    // int n;

    // cin >> n;

    // // program to check that if a no is div by 2 or 3 or by both

    // // only one of these blocks will be executed
    // if (n % 2 == 0 and n % 3 == 0)
    // {
    //     cout << n << " n is divisible by 2 and 3 " << endl;
    //     cout << "we are in if block" << endl;
    // }

    // // all other blocks below the block which is executed will be skipped

    // // when we want that only one block should be executed if we want both to be executed we can use 2 if blocks
    // else if (n % 3 == 0)
    // {
    //     cout << n << " n is divisible by 3 " << endl;
    //     cout << "we are in else if - 1block" << endl;
    // }

    // else if (n % 2 == 0)
    // {
    //     cout << n << " n is divisible by 2 " << endl;
    //     cout << "we are in else if -2 block" << endl;
    // }

    // else
    // {
    //     cout << "not divisible" << endl;
    //     cout << "we are in else block" << endl;
    // }

    char i;
    cin >> i;

    if (i >= 97 && i <= 122)
    {
        cout << char(i) << " lower case"; // lowercase letters (a-z)
    }
    else if (i >= 65 && i <= 90)
    {
        cout << char(i) << " upper case "; // uppercase letters (A-Z)
    }
    else if (i >= 48 && i <= 57)
    {
        cout << char(i) << " numeric "; // digits (0-9)
    }
    else
    {
        cout << char(i) << " symbol" << endl;
    }

    // int c = 2;
    // int d = c + 1;

    // if ((c = 3) == d)
    // {
    //     cout << c << endl;
    //     cout << "if block" << endl;
    // }
    // else
    // {
    //     cout << c + 1 << endl;
    //     cout << "else block" << endl;
    // }

    return 0;
}
