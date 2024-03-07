#include <iostream>
using namespace std;

int main()
{
    // pattern
    // n = 5
    // for ith line print i numbers
    // odd lines start with 0 and values alternate b/w 0 and 1
    // even lines start with 1 and values alternate b/w 0 and 1
    // print n lines
    // 0
    // 10
    // 010
    // 1010
    // 01010
    // 101010

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int value = i % 2 == 0 ? 1 : 0;

        // print i values in ith line
        for (int cnt = 1; cnt <= i; cnt++)
        {
            cout << value;
            value = 1 - value; // value = 1 , updated value = 0, next value = 1;
        }
        cout << endl;
    }

    return 0;
}