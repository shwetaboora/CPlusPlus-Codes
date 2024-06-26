#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 10, 11, 9, 50};
    int n = sizeof(arr) / sizeof(int);

    // Search --> find
    int key;
    cin >> key;
    auto it = find(arr, arr + n, key);

    int index = it - arr;
    if (index == n)
    {
        cout << key << " not found " << endl;
    }
    else
    {
        cout << "present at index " << index << endl;
    }

    return 0;
}