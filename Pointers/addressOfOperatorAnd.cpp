#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    cout << &x << endl;
    float y = 0;
    cout << &y << endl;

    // it doesnot work for character variables
    char ch = 'A';
    cout << &ch << endl;
    // explicit typecasting from cahr* to void*
    cout << (void *)&ch << endl;

    return 0;
}