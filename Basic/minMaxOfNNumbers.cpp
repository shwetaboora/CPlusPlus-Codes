#include <iostream>
#include <climits> //contians INT_MIN, INT_MAX
using namespace std;

int main(int argc, char const *argv[])
{
    // find min and max of n no.

    int n;
    cin >> n;

    int min = INT_MAX;
    int max = INT_MIN;

    int no;
    // without storing all the numbers, based upon the current no
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        if (no < min)
        {
            min = no;
        }
        if (no > max)
        {
            max = no;
        }
    }

    cout << "max no: " << max << endl;
    cout << "min no: " << min << endl;

    return 0;
}
