#include <iostream>
using namespace std;

int main()
{

    // A
    // B B
    // C C C
    // D D D D
    // E E E E E

    int no;
    cin >> no;

    int row = 1;
    while (row <= no)
    {
        int col = 1;

        while (col <= row)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}