#include <iostream>
using namespace std;

int main()
{
    //         1
    //       2 2
    //     3 3 3
    //   4 4 4 4
    // 5 5 5 5 5
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        int spaces = n - row;
        while (spaces)
        {
            cout << " "
                 << " ";
            spaces--;
        }
        while (col <= row)
        {
            cout << row
                 << " ";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}