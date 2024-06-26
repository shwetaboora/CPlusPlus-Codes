#include <iostream>
using namespace std;

bool staircaseSearch(int matrix[][4], int m, int n, int key)
{
    if (m == 0 || n == 0)
        return false;

    // Start from the top-right corner
    int row = 0;
    int col = n - 1;

    while (row < m && col >= 0)
    {
        if (matrix[row][col] == key)
        {
            cout << "Found " << key << " at position (" << row << ", " << col << ")" << endl;
            return true;
        }
        else if (matrix[row][col] > key)
        {
            col--; // Move left
        }
        else
        {
            row++; // Move down
        }
    }

    cout << key << " not found in the matrix." << endl;
    return false;
}

int main()
{
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    int key = 7;
    int m = 4; // Number of rows
    int n = 4; // Number of columns

    staircaseSearch(matrix, m, n, key);
    return 0;
}