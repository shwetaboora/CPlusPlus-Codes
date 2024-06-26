#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {3, 4, 6, 2, 1, 7, 5, 3, 4, 8};

    cout << "array before reversing " << endl;
    printArray(arr, 10);

    swapAlternate(arr, 10);
    cout << "array before reversing " << endl;
    printArray(arr, 10);

    return 0;
}