#include <iostream>
using namespace std;

void spiralPrint(int a[][100], int m, int n)
{
    int startRow = 0;
    int startCol = 0;
    int endRow = m - 1;
    int endCol = n - 1;

    while (startRow <= endRow and startCol <= endCol)
    {
        // first row
        for (int i = startCol; i <= endCol; i++)
        {
            cout << a[startRow][i] << " ";
        }
        startRow++;
        // end col
        for (int i = startRow; i <= endRow; i++)
        {
            cout << a[i][endCol] << " ";
        }
        endCol--;
        // bottom row
        if (endRow >= startRow)
        {

            for (int i = endCol; i >= startCol; i--)
            {
                cout << a[endRow][i] << " ";
            }

            endRow--;
        }
        // startCol
        if (endCol >= startCol)
        {

            for (int i = endRow; i >= startRow; i--)
            {
                cout << a[i][startCol] << " ";
            }
            startCol++;
        }
    }
}

int main()
{

    // spiral print of an 2D array
    // first print the firstrow till end then top to down at end then right to left then bottom to less than 1 up and on repeat
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
    return 0;
}