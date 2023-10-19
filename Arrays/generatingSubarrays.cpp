#include <iostream>
using namespace std;

int main()
{
    // generating subarrays
    // subarray is a continous smaller part of an array
    // for eg. index i to index j in an array is subarray of that array
    // it can be of any length
    int n, key;
    cout << "enter no of elements you want in array: ";
    cin >> n;
    int a[100];
    cout << "enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // generate all subarrays
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // prints elements of subarray(i,j)
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << ", ";
            }
            cout << endl;
        }
    }

    return 0;
}