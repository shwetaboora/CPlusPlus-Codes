#include <iostream>
using namespace std;

// 1 = even
// 0 = odd
bool isEven(int a)
{

    if (a & 1) // odd
    {
        return 0;
    }

    // else{ //even
    //     return 1;
    // }

    return 1;
}

int main()
{
    int a;
    cin >> a;

    if (isEven(a))
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "number is odd" << endl;
    }

    return 0;
}