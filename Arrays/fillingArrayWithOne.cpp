#include <iostream>
using namespace std;

int main()
{
    int array[100];

    // To initialize the array with value'1'.
    fill_n(array, 100, 1);

    // To check the array input (printed only 5 index values)
    for (int i = 0; i <= 5; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}