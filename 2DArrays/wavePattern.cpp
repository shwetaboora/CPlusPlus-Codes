#include <iostream>
using namespace std;

int main()
{
    // wave pattern traversal
    // first column and then next row then downwards then next row then upwards
    // if col is even we go top down and if its odd we bottom up
    // at firsy we have have too keep the col fixed
    int a[100][100] = {0};
    // asking user to give dimensions
    int m, n;
    cin >> m >> n;

    // iterate over the array
    int val = 1;
    for (int row = 0; row <= m - 1; row++)
    {
        for (int col = 0; col <= n - 1; col++)
        {
            a[row][col] = val;
            val = val + 1;
            cout << a[row][col] << " "; // row wise traversal of an array
        }
        cout << endl;
    }

    // wave print
    for (int col = 0; col < n; col++)
    {
        if (col % 2 == 0)
        {
            // even col - top down
            for (int row = 0; row < m; row++)
            {
                cout << a[row][col] << " ";
            }
        }
        else
        {
            // bottom up
            for (int row = m - 1; row >= 0; row--)
            {
                cout << a[row][col] << " ";
            }
        }
    }

    return 0;
}