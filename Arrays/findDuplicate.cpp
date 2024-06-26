#include <iostream>
using namespace std;
// having elements 1 to n-1 occuring atleast once only one no is there which occuring twice and we have to find that duplicate no.

int findDuplicate(int arr[], int size)
{
    int ans = 0;
    // xoring all array elements
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    // xoring from 1 to n-1
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 8, 7, 8, 9};

    cout << "duplicate no " << findDuplicate(arr, 10) << endl;

    return 0;
}