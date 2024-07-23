#include <iostream>
#include <cmath>
using namespace std;

bool canPlace(int mat[][9], int i, int j, int n, int num)
{
    for (int x = 0; x < n; x++)
    {
        // row col check
        if (mat[x][j] == num || mat[i][x] == num)
        {
            return false;
        }
    }
    int rn = sqrt(n);
    int sx = (i / rn) * rn;
    int sy = (j / rn) * rn;
    for (int x = sx; x < sx + rn; x++)
    {
        for (int y = sy; y < sy + rn; y++)
        {
            if (mat[x][y] == num)
            {
                return false;
            }
        }
    }
    return true;
}

bool Sudoku(int mat[][9], int i, int j, int n)
{
    // base case
    if (i == n)
    {
        // print the matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }

        return true;
    }
    // case for row end
    if (j == n)
    {
        return Sudoku(mat, i + 1, 0, n);
    }
    // skip the pre filled zero
    if (mat[i][j] != 0)
    {
        return Sudoku(mat, i, j + 1, n);
    }

    // recursive case
    // fill the current cell with possible options
    for (int num = 1; num <= n; num++)
    {
        if (canPlace(mat, i, j, n, num))
        {
            mat[i][j] = num;
            bool couldWeSolve = Sudoku(mat, i, j + 1, n);
            if (couldWeSolve == true)
            {
                return true;
            }
        }
    }
    // backtrack
    mat[i][j] = 0;
    return false;
}

int main()
{
    int mat[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}

    };

    Sudoku(mat, 0, 0, 9);
    return 0;
}