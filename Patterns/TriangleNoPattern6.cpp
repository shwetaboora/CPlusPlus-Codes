#include <iostream>
using namespace std;

int main()
{
    // 1 2 3 4 5
    //   2 3 4 5
    //     3 4 5
    //       4 5
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
        int num = n - row + 1;
        int start = row;
        while (num)
        {
            cout << start
                 << " ";
            start++;
            num--;
        }
        cout << endl;
        row++;
    }

    return 0;
}