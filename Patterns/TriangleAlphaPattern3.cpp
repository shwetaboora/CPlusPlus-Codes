#include <iostream>
using namespace std;

int main()
{
    // D
    // C D
    // B C D
    // A B C D
    int no;
    cin >> no;

    int row = 1;

    while (row <= no)
    {
        int col = 1;
        char ch = 'A' + no - row;
        while (col <= row)
        {

            cout << ch << " ";
            ch++;
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}