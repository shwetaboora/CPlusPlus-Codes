#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // search in sorted array
    int arr[] = {10, 30, 40, 60, 60, 60, 66, 80, 90, 100};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;

    bool present = binary_search(arr, arr + n, key);
    if (present)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "not present " << endl;
    }

    // get the index of element
    //  lower_bound(s,e,key) upper_bound(s,e,key)

    auto lb = lower_bound(arr, arr + n, key);
    cout << " lowerbound is " << (lb - arr) << endl;

    auto ub = upper_bound(arr, arr + n, key);
    cout << " upperbound is " << (ub - arr) << endl;

    cout << "occurences of key " << (ub - lb) << endl;

    return 0;
}