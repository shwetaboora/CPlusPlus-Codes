#include <iostream>
using namespace std;
int BinarySearch(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1; // if the element is not present
}
int main()
{
    // Binary Search
    // An efficient way to search in sorted arrays.
    // at first the array should be sorted then find the mid of the array then check left or right side which is greater than the given element then discard that side.and search the mid element of the left side.then check left or right sid again and repeat the process.
    // it is also called divide and conquer technique
    // efficient than linear search

    // O(logN)

    int n, key;
    cout << "enter no of elements you want in array: ";
    cin >> n;
    int a[100];
    cout << "enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter the element you want to search: ";
    cin >> key;

    cout << BinarySearch(a, n, key) << endl;

    return 0;
}