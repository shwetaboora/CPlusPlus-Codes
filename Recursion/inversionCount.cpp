#include <iostream>
using namespace std;

int merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;

    int temp[10000];
    int count = 0;

    while (i <= mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k++] = arr[j++];
            count += mid - i + 1;
        }
    }
    // fill the array if some elements are left in one of the array
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }

    // copy all the elements back to array

    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }

    return count;
}

int inversionCount(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return 0;
    }

    // merge Sort
    int mid = (s + e) / 2;
    int partA = inversionCount(arr, s, mid);
    int partB = inversionCount(arr, mid + 1, e);
    int crossInversionPart = merge(arr, s, e); // cross inversions

    return partA + partB + crossInversionPart;
}

int main()
{
    int arr[] = {1, 5, 2, 6, 3, 0};
    int n = sizeof(arr) / sizeof(int);
    cout << inversionCount(arr, 0, n - 1) << endl;

    return 0;
}