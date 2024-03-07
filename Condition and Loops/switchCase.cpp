#include <iostream>
using namespace std;

int main()
{
    // switch case  -- shortcut to write a if else condition
    // design a menu - where pressing a button gives you the corresponding item
    // B - Burger
    // M - Maggi
    // P - Pizza
    // C - Coke
    // D - Dosa

    char ch;
    cin >> ch;

    int pizzaOrder = 0;
    switch (ch)
    {
    case 'b':
    case 'B':
        cout << "Burger" << endl;
        break;
    case 'm':
    case 'M':
        cout << "Maggi" << endl;
        break;
    case 'p':
    case 'P':
        cout << "Pizza" << endl;
        pizzaOrder++;
        break;
    case 'c':
    case 'C':
        cout << "Coke" << endl;
        break;
    case 'd':
    case 'D':
        cout << "Dosa" << endl;
        break;
    default:
        cout << "item not available" << endl;
        break;
    }

    cout << "pizzaorders" << pizzaOrder << endl;

    return 0;
}
