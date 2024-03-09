#include <iostream>
using namespace std;

int main()
{
    // * * * *
    // * * *
    // * *
    // *
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        int star = n - row;
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