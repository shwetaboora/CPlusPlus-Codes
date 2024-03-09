#include <iostream>
using namespace std;

int main()
{
    // * * * * *
    //   * * * *
    //     * * *
    //       * *
    //         *
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
            cout << "*"
                 << " ";
            star--;
        }

        cout << endl;
        row++;
    }

    return 0;
}