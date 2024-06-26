#include <iostream>
using namespace std;
// finding an element in an array where every element is 2 times and only one element is occurring once.

int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i]; // did XOR with every no. so that all other no.s will become zero and only unique will be left or single will be left.
    }
    return ans;
}

int main()
{
    int arr[9] = {3, 4, 6, 5, 1, 3, 5, 6, 4};

    cout << "unique no " << findUnique(arr, 9) << endl;

    return 0;
}