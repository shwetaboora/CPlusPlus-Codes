#include <iostream>
using namespace std;

int main()
{
    char c[10][10];
    c[0][0] = 'A';
    char b[][10] = {{'a', 'b', '\0'}, {'d', 'e', 'f', '\0'}};
    char a[][10] = {"ab", "def", "hello"};

    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << c[0][0] << endl;
    cout << b[0] << endl;
    return 0;
}