#include <iostream>
using namespace std;

int main()
{
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1
    int n;
    cin >> n;

    int row = 1;
    int count = 1;
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
            cout << col << " ";
            col++;
        }
        int start = row - 1;
        while (start)
        {
            cout << start << " ";
            start--;
        }

        cout << endl;
        row++;
    }

    return 0;
}