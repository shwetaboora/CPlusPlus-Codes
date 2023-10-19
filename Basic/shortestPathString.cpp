#include <iostream>
using namespace std;
int main()
{
    // prblm find the displacement
    char ch;
    ch = cin.get();
    int x = 0;
    int y = 0;

    while (ch != '.')
    {
        if (ch == 'N' or ch == 'n')
        {
            y++;
        }
        else if (ch == 'S' or ch == 's')
        {
            y--;
        }
        else if (ch == 'E' or ch == 'e')
        {
            x++;
        }
        else
        {
            x--;
        }

        ch = cin.get();
        cout << ch;
    }
    cout << "final displacement is " << x << " and " << y << endl;
    cout << ch;
    return 0;
}
