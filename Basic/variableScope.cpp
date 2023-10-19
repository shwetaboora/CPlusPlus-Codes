#include <iostream>
using namespace std;

int x = 100; // when the same variable is not found in local scope then this value is printed

int main(int argc, char const *argv[])
{
    int x = 10;
    cout << "local x " << x << endl; // local variable

    // to access the global variable there is an operator called scope resolution operator (::)
    for (int i = 0; i < 6; i++)
    {
        cout << i << " loop scope " << endl;
    }

    cout << "global x " << ::x << endl; // global variable
    return 0;
}
