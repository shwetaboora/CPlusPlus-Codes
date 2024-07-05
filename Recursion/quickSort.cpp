#include <iostream>
using namespace std;

void partition(int arr[], int s, int e)
{
    // inplace cant take extra array
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // recursive case
    int p = partition(arr, s, e);
    // left part
    quickSort(arr, s, p - 1);
    // right part
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {2, 7, 8, 6, 1, 5, 4};
    int n = sizeof(arr) / sizeof(int);

    quickSort(arr, 0, n - 1);
    return 0;
}