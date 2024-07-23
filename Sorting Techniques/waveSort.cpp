#include <iostream>
using namespace std;
// sorting array in the wave form
int main()
{
    int arr[] = {1, 3, 4, 2, 7, 8};
    //  bg, sm,big,sm,big,sm
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i += 2)
    {
        // prev element
        if (i != 0 and arr[i] < arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }

        // next element
        if (i != (n - 1) and arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}