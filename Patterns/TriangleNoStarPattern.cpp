#include <iostream>
using namespace std;

int main()
{
    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        int spaces = n - row + 1;
        int count = 1;
        while (spaces)
        {
            cout << count
                 << " ";
            spaces--;
            count++;
        }
        while (col < row)
        {
            cout << "*"
                 << " ";
            col++;
        }
        int star = row - 1;
        while (star)
        {
            cout << "*"
                 << " ";
            star--;
        }
        int start = n - row + 1;

        while (start)
        {
            cout << start
                 << " ";

            start--;
        }
        cout << endl;
        row++;
    }

    return 0;
}