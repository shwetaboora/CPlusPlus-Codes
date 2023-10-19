#include <iostream>
using namespace std;

int main()
{
    // Array - a collection of items stored in a continous memory
    // or a container that can hold multiple values
    // each bucket in the array has a particular index
    // starting index is 0
    // it is homogenous

    // how to create an array -- declaration and initialization
    // (datatype)(name of the array)[size of the array or values]
    // int a [10];
    // when we create the array it contains the garbage values
    // int a [10] = {0};   -- all values will be initialized with 0

    // how to update array
    // a[3] = 13; -- to update or write the value
    // cout << a[3] << endl;  -- to print the 4th element of the array

    // for printing all the no till where you want or till end you can run for loop til n-1
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];          // to take input for the array
    //     cout << a[i] << endl; // to print all the array numbers
    // }

    // size of the array
    // sizeof(a)
    // 1 - 4bytes
    // n*4 = size of the bucket

    // initialization on an array
    int a[10] = {1, 2, 3};

    // update the single index of an array
    a[8] = 100;

    // input all the elements of the array from the user
    cout << "enter the elements" << endl;
    for (int i = 0; i < 5; i++)
    {

        cin >> a[i];
    }

    // print all the first 10 elements
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    // size of
    cout << sizeof(a) << endl;
    // no of elements in the array
    int n = sizeof(a) / sizeof(int);
    cout << n;

    return 0;
}