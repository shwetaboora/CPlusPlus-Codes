#include <iostream>
using namespace std;
// Sort arrays of 0s,1s,2s
// dnf - it sorts in single iteration of array or single pass

// O(N)

void dnfSort(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        if (arr[mid] == 1)
        {
            mid++;
        }
        if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    return;
}

int main()
{

    int arr[] = {2, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 2, 0};
    int n = sizeof(arr) / sizeof(int);
    dnfSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}