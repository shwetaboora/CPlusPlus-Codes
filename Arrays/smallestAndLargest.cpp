#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // find the largest and the smallest no from the array
    int n, key;
    cout << "enter no of elements you want in array: ";
    cin >> n;
    int a[100];
    cout << "enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // largest value is denoted by INT_MAX
    // smallest value is denoted by INT_MIN

    // Algorithm
    int largest = INT_MIN;
    int smallest = INT_MAX;

    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] < smallest)
    //     {
    //         smallest = a[i];
    //     }
    //     if (a[i] > largest)
    //     {
    //         largest = a[i];
    //     }
    // }

    // another way
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, a[i]);
        smallest = min(smallest, a[i]);
    }
    cout << "largest no is: " << largest << " smallest no is: " << smallest << endl;

    return 0;
}