#include <iostream>
using namespace std;

int main()
{
    // A A A A
    // B B B B
    // C C C C
    // D D D D
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
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