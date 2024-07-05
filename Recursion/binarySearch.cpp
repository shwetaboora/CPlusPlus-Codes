#include <iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int key)
{
    if (e >= s)
    {
        int m = (s + e) / 2;
        if (arr[m] == key)
        {
            return m;
        }
        if (arr[m] > key)
        {
            return binarySearch(arr, s, m - 1, key);
        }
        return binarySearch(arr, m + 1, e, key);
    }
    return -1;
}
int main()
{
    int arr[] = {1, 5, 8, 11, 36, 78};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    int s, e;
    s = 0;
    e = n - 1;
    cout << binarySearch(arr, s, e, key) << endl;

    return 0;
}