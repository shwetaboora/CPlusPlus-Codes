#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    // base case
    if (n == 0 or n == 1)
    {
        return true;
    }

    // recursive case

    if (arr[0] < arr[1] and sorted(arr + 1, n - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << sorted(arr, n) << endl;

    return 0;
}