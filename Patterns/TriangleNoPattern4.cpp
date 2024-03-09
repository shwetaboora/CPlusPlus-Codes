#include <iostream>
using namespace std;

int main()
{
    // 1 1 1 1 1
    //   2 2 2 2
    //     3 3 3
    //       4 4
    //         5
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int spaces = row - 1;
        while (spaces)
        {
            cout << " "
                 << " ";
            spaces--;
        }
        int star = n - row + 1;

        while (star)
        {
            cout << row
                 << " ";

            star--;
        }
        cout << endl;
        row++;
    }

    return 0;
}