#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int a = 10;
    int b = 20;
    swap(a, b);

    cout << a << " and " << b << endl;

    cout << "max " << max(a, b) << endl;

    cout << "min " << min(a, b) << endl;

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    swap(arr[0], arr[1]);
    reverse(arr, arr + 4); // reverse first 4 elements
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    next_permutation(arr, arr + n);
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}