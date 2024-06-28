#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // rotate
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    rotate(arr, arr + 2, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // applying the same on vector

    vector<int> v{10, 20, 30, 40, 50, 60};
    // rotate(v.begin(), v.begin() + 2, v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // next permutation
    next_permutation(v.begin(), v.end());

    // we can also use foreach loop for iteration on vector or array

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    next_permutation(v.begin(), v.end());
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}