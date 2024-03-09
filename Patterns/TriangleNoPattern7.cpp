#include <iostream>
using namespace std;

int main()
{
    //         1
    //       2 3
    //     4 5 6
    //   7 8 9 10
    // 11 12 13 14
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
            cout << count << " ";
            count++;
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}