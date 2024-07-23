#include <iostream>
using namespace std;

// counting sort is an algorithm to sort array when we have data that lies in certain range for eg a to b
// in this we create an array for freq of nos then sort the nos and then print those no acc to thier freq
// O(N) / O(N + range)  can say linear complexity if range is small

void countingSort(int arr[], int n)
{
    // largest in the array assuming no are > 0
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }

    // create a freq array
    int *freq = new int[largest + 1]{0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // put the elements back into the array arr by reading freq array
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main()
{
    int arr[] = {34, 67, 1, 6, 8, 34, 5, 23, 88, 56, 97, 5};
    int n = sizeof(arr) / sizeof(int);
    countingSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}