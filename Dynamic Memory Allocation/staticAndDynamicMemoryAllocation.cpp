#include <iostream>
using namespace std;

int main()
{
    // Static(compiletime) allocation + deallocation is done by the compiler
    int a[20] = {0};
    cout << sizeof(a) << endl;
    cout << a << endl; // comes from symbol table
    // here a cant be overwritten, a is a part of read only memory

    // Dynamic(runtime) allocation
    int n;
    cin >> n;
    int *b = new int[n]{0};
    cout << sizeof(b) << endl;
    cout << sizeof(b) << endl; // variable a is created in static memory can be overwritten
    // a = new char[30];

    // no change in this part
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << a[i] << ", ";
    }
    cout << endl;
    // free up the space or deallocation
    delete[] a;

    return 0;
}