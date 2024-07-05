#include <iostream>
using namespace std;

int storeOcc(int arr[], int n, int key, int out[], int j, int i)
{
    if (i == n)
    {
        return j;
    }
    if (arr[i] == key)
    {
        out[j] = i;
        // increment j to store current index
        return storeOcc(arr, n, key, out, j + 1, i + 1);
    }
    // j remains unchanged
    return storeOcc(arr, n, key, out, j, i + 1);
}

void allOcc(int arr[], int i, int n, int key)
{
    if (i == n)
    {
        return;
    }
    if (arr[i] == key)
    {
        cout << i << ",";
    }
    allOcc(arr, i + 1, n, key);
}

int lastOcc(int arr[], int n, int key)
{
    // base case
    if (n == 0)
    {
        return -1;
    }

    int i = lastOcc(arr + 1, n - 1, key);
    if (i == -1)
    {
        if (arr[0] == key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    // if i returned is not -1
    return i + 1;

    // if (arr[n - 1] == key)
    // {
    //     return n - 1;
    // }

    // int ans = lastOcc(arr, n - 1, key);
    // if (ans == -1)
    // {
    //     return -1;
    // }
    // return ans;
}

int firstOcc(int arr[], int n, int key)
{
    // base case
    if (n == 0)
    {
        return -1;
    }
    if (arr[0] == key)
    {
        return 0;
    }

    int ans = firstOcc(arr + 1, n - 1, key);
    if (ans == -1)
    {
        return -1;
    }
    return ans + 1;
}

int linearSearch(int arr[], int n, int key, int i)
{
    // base case
    if (i == n)
    {
        return -1;
    }
    // recursive case
    if (arr[i] == key)
    {
        return i;
    }
    return linearSearch(arr, n, key, i + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 7, 6, 8, 7, 9, 5, 6, 7, 10};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    int i = 0;
    cout << "first occurence ";
    cout << firstOcc(arr, n, key) << endl;
    cout << "linear search ";
    cout << linearSearch(arr, n, key, i) << endl;
    cout << "last occurence ";
    cout << lastOcc(arr, n, key) << endl;
    cout << "all occurence ";
    allOcc(arr, 0, n, key);

    int out[100];
    cout << endl;
    int count = storeOcc(arr, n, key, out, 0, 0);
    cout << "count " << count << endl;
    cout << "stored occurence ";
    for (int k = 0; k < count; k++)
    {
        cout << out[k] << " ";
    }
    cout << endl;

    return 0;
}