#include <iostream>
using namespace std;

void InsertionSort(int a[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int e = a[i]; // the unsorted part first element
        // place the current element at the end of the or the right position of the sorted part
        int j = i - 1; // last element of the sorted part
        while (j >= 0 and a[j] > e)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = e;
    }
}

int main()
{
    // Insertion Sort
    // the idea of insertion sort is inspired from game of cards
    // in this we divide the array in two parts one is sorted and another is unsorted part
    // in sorted we keep only the first element present in the array
    // then we check the first part of unsorted array and if its smaller than sorted then we try to shift or copy that sorted bigger element towards right and then place the smaller one on the place of that bigger element
    int n, key;
    cout << "enter no of elements you want in array: ";
    cin >> n;
    int a[100];
    cout << "enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    InsertionSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }

    return 0;
}