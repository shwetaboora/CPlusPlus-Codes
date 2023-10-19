#include <iostream>
using namespace std;
// a park contains N rows and M columns.
// needs atlest K amount of strength.
// initial strength required S.
// Some obstacles are there - '.' - decrease S by 2, '*' - Increase S by 5, '#' move to next line, and at every step decrease 1 S
// and while coming to next line there is no decrease in S
// 4 4 5 20
// . . * .
// . # . .
// * * . .
// . # * *

void magicalPark(char a[][100], int m, int n, int k, int s)
{
    // piyush can get out of the park
    bool success = true;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = a[i][j];
            // check
            if (s < k)
            {
                success = false;
                break;
            }
            if (ch == '*')
            {
                s += 5;
            }
            else if (ch == '.')
            {
                s -= 2;
            }
            else
            {
                break;
            }
            // we also loose 1 S at every step
            if (j != n - 1)
            {
                s--;
            }
        }
    }

    if (success)
    {
        cout << "Yes" << endl;
        cout << s << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int m, n, k, s;
    cin >> m >> n >> k >> s;
    char park[100][100];
    // taking input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> park[i][j];
        }
    }
    magicalPark(park, m, n, k, s);

    return 0;
}