#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;

    int i = s;
    int j = mid + 1;
    int k = s;
    int temp[100];

    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int s, int e)
{
    // base case 0 or 1 elements
    if (s >= e)
    {
        return;
    }

    // follow 3 steps
    // 1. divide
    int mid = (s + e) / 2;

    // 2. recursively sort arrays - first start from s,mid and second start from mid+1,e
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    // 3. merge the two parts
    merge(arr, s, e);
}

int main()
{
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}