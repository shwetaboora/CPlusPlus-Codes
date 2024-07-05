#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // base case
    if (n == 1)
    {
        return;
    }

    // rec case
    // after we have moved the largest element in the current part to the end of the array by swapping
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }
    // sort first n-1 elements
    bubbleSort(arr, n - 1);
}

void bubbleSortRecursive(int arr[], int j, int n)
{
    if (n == 1)
    {
        return;
    }
    if (j == n - 1)
    {
        // we have done single pass of the current array
        return bubbleSortRecursive(arr, 0, n - 1);
    }

    if (arr[j] > arr[j + 1])
    {
        swap(arr[j], arr[j + 1]);
    }
    bubbleSortRecursive(arr, j + 1, n);
    return;
}

int main()
{
    int arr[] = {5, 4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    bubbleSortRecursive(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}