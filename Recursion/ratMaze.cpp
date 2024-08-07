#include <iostream>
using namespace std;

bool ratInMaze(char maze[10][10], int sol[][10], int i, int j, int m, int n)
{
    if (i == m && j == n)
    {
        sol[m][n] = 1;
        // printing path
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        return true;
    }

    // rat should be inside grid
    if (i > m || j > n)
    {
        return false;
    }
    if (maze[i][j] == 'X')
    {
        return false;
    }
    // assuming sol exist through current cell
    sol[i][j] = 1;

    // recursive case
    bool rightSuccess = ratInMaze(maze, sol, i, j + 1, m, n);
    bool downSuccess = ratInMaze(maze, sol, i + 1, j, m, n);

    // backtracking
    sol[i][j] = 0;

    if (rightSuccess || downSuccess)
    {
        return true;
    }
    return false;
}

int main()
{
    char maze[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00",
    };

    int sol[10][10] = {0};
    int m = 4, n = 4;
    bool ans = ratInMaze(maze, sol, 0, 0, m - 1, n - 1);

    if (ans == false)
    {
        cout << "path doesnt exist";
    }

    return 0;
}