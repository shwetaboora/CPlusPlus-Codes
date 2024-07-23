// // for 1 config
// #include <iostream>
// using namespace std;

// bool isSafe(int board[][10], int i, int j, int n)
// {
//     // check column
//     for (int row = 0; row < i; row++)
//     {
//         if (board[row][j] == 1)
//         {
//             return false;
//         }
//     }
//     // check for left diagonal
//     int x = i;
//     int y = j;

//     while (x >= 0 && y >= 0)
//     {
//         if (board[x][y] == 1)
//         {
//             return false;
//         }
//         x--;
//         y--;
//     }
//     // check for right diagonal
//     x = i;
//     y = j;

//     while (x >= 0 && y < n)
//     {
//         if (board[x][y] == 1)
//         {
//             return false;
//         }
//         x--;
//         y++;
//     }
//     // position is now safe if not getting any false coz checked in column and diagonals
//     return true;
// }

// bool NQueen(int board[][10], int i, int n)
// {
//     // base case
//     if (i == n)
//     {
//         // successfully placed all the queens in n rows
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (board[i][j] == 1)
//                 {
//                     cout << "Q ";
//                 }
//                 else
//                 {
//                     cout << "_ ";
//                 }
//             }
//             cout << endl;
//         }
//         cout << endl
//              << endl;

// return true; //for 1 config
// // return false; //for all config
//     }
//     // recursive case
//     // try to place the queen in the current row and call on the remaining part which will be solved by the recursion
//     for (int j = 0; j < n; j++)
//     {
//         // check that i, j position is safe to place the queen or not
//         if (isSafe(board, i, j, n))
//         {
//             // if safe place the queen - assuming ij is the right position
//             board[i][j] = 1;
//             bool nextQueenRakhPaye = NQueen(board, i + 1, n);
//             if (nextQueenRakhPaye)
//             {
//                 return true;
//             }
//             // if flow coming here means ij is not the right position - our assumption is wrong
//             board[i][j] = 0; // backtrack
//         }
//     }
//     // tried for all positions in current row but not able to place the queen
//     return false;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int board[10][10] = {0};
//     NQueen(board, 0, n);
//     return 0;
// }

// // for all config
// #include <iostream>
// using namespace std;

// bool isSafe(int board[][10], int i, int j, int n)
// {
//     // check column
//     for (int row = 0; row < i; row++)
//     {
//         if (board[row][j] == 1)
//         {
//             return false;
//         }
//     }
//     // check for left diagonal
//     int x = i;
//     int y = j;

//     while (x >= 0 && y >= 0)
//     {
//         if (board[x][y] == 1)
//         {
//             return false;
//         }
//         x--;
//         y--;
//     }
//     // check for right diagonal
//     x = i;
//     y = j;

//     while (x >= 0 && y < n)
//     {
//         if (board[x][y] == 1)
//         {
//             return false;
//         }
//         x--;
//         y++;
//     }
//     // position is now safe if not getting any false coz checked in column and diagonals
//     return true;
// }

// void NQueen(int board[][10], int i, int n)
// {
//     // base case
//     if (i == n)
//     {
//         // successfully placed all the queens in n rows
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (board[i][j] == 1)
//                 {
//                     cout << "Q ";
//                 }
//                 else
//                 {
//                     cout << "_ ";
//                 }
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
//     // recursive case
//     // try to place the queen in the current row and call on the remaining part which will be solved by the recursion
//     for (int j = 0; j < n; j++)
//     {
//         // check that i, j position is safe to place the queen or not
//         if (isSafe(board, i, j, n))
//         {
//             // if safe place the queen - assuming ij is the right position
//             board[i][j] = 1;
//             NQueen(board, i + 1, n);
//             // if flow coming here means ij is not the right position - our assumption is wrong
//             board[i][j] = 0; // backtrack
//         }
//     }
//     // tried for all positions in current row but not able to place the queen
//     return;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int board[10][10] = {0};
//     NQueen(board, 0, n);
//     return 0;
// }

// for counting config
#include <iostream>
using namespace std;

bool isSafe(int board[][10], int i, int j, int n)
{
    // check column
    for (int row = 0; row < i; row++)
    {
        if (board[row][j] == 1)
        {
            return false;
        }
    }
    // check for left diagonal
    int x = i;
    int y = j;

    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }
    // check for right diagonal
    x = i;
    y = j;

    while (x >= 0 && y < n)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y++;
    }
    // position is now safe if not getting any false coz checked in column and diagonals
    return true;
}
int ans = 0;

int NQueen(int board[][10], int i, int n)
{
    // base case
    if (i == n)
    {
        // successfully placed all the queens in n rows
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (board[i][j] == 1)
        //         {
        //             cout << "Q ";
        //         }
        //         else
        //         {
        //             cout << "_ ";
        //         }
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        return 1;
    }
    // recursive case
    // try to place the queen in the current row and call on the remaining part which will be solved by the recursion
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        // check that i, j position is safe to place the queen or not
        if (isSafe(board, i, j, n))
        {
            // if safe place the queen - assuming ij is the right position
            board[i][j] = 1;
            count += NQueen(board, i + 1, n);
            // if flow coming here means ij is not the right position - our assumption is wrong
            board[i][j] = 0; // backtrack
        }
    }
    // tried for all positions in current row but not able to place the queen
    return count;
}

int main()
{
    int n;
    cin >> n;
    int board[10][10] = {0};
    cout << NQueen(board, 0, n) << endl;
    return 0;
}