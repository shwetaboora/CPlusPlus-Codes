#include <iostream>
using namespace std;

int main()
{
    // 2D arrays are arrays that has 2 Dimensions rows and columns dimension
    // we store the elements in the form of a grid in this.
    // a form of matrix
    // how to create a 2D Array
    // first define the datatype then array  name then define no of rows and columns
    // int a[rows][cols];

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