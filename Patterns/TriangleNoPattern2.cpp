#include <iostream>
using namespace std;

int main()
{
    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {

        // int col = 1;
        // int count = row;
        // while (col <= row)
        // {
        //     cout << count << " ";
        //     count++;
        //     col++;
        // }

        int col = row;
        while (col < 2 * row)
        {
            cout << col << " ";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}