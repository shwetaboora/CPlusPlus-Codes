#include <iostream>
using namespace std;

int main()
{
    // A
    // B C
    // C D E
    // D E F G
    // E F G H I

    int no;
    cin >> no;

    int row = 1;
    while (row <= no)
    {
        int col = 1;

        while (col <= row)
        {
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}