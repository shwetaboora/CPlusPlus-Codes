#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {5, 7, 3, 9, 4, 2};
    int brr[5] = {3, 5, 8, 2, 1};
    cout << "array before reversing " << endl;
    printArray(arr, 6);
    printArray(brr, 5);

    reverse(arr, 6);
    reverse(brr, 5);
    cout << "array after reversing " << endl;
    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}