#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    // linear search
    // it is an algorithm that helps us to find a particular element inside an array
    // prblm statement-- given a list of numbers you have to check that if a no is present in that list or not and if present than at which position

    // another way with function

    int key;

    int arr[10] = {15, 7, 6, 2, 4, 8, 9, 5, 23, 11};

    cout << "enter the element you want to search: ";
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "key is present " << endl;
    }
    else
    {
        cout << "key is absent " << endl;
    }

    // without any function

    // int n, key;
    // cout << "enter no of elements you want in array: ";
    // cin >> n;
    // int a[100];
    // cout << "enter elements of the array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }

    // cout << "enter the element you want to search: ";
    // cin >> key;

    // // find out the index of that element by traversing the array
    // // Linear Search Algorithm
    // int i;
    // for (i = 0; i <= n - 1; i++)
    // {
    //     if (a[i] == key)
    //     {
    //         cout << key << " found at " << i << " index" << endl;
    //         break;
    //     }
    // }
    // if (i == n)
    // {
    //     cout << key << " not present in the array" << endl;
    // }

    return 0;
}