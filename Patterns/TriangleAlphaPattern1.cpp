#include <iostream>
using namespace std;

int main()
{
    // A
    // B C
    // D E F
    // G H I J
    // K L M N O
    int no;
    cin >> no;
    char ch = 'A';
    int row = 1;
    while (row <= no)
    {
        int col = 1;

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