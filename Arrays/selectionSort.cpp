#include <iostream>
using namespace std;

void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // find out the smallest element index in the unsorted part
        int minIndex = i;
        for (int j = i; j <= n - 1; j++) // this loop just updates the min index that has the lowest value
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        // after this loop we can do swap finally
        swap(a[i], a[minIndex]);
    }
}
int main()
{
    // Selection Sort
    // arrange a randomly shuffled array in increasing or decreasing order
    int n, key;

    cout << "enter no of elements you want in array: ";
    cin >> n;

    int a[100];

    cout << "enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    SelectionSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }

    return 0;
}