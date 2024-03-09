#include <iostream>
using namespace std;

int main()
{
    // A B C D
    // B C D E
    // C D E F
    // D E F G

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + col + row - 2;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}