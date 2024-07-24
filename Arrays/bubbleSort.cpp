#include <iostream>
using namespace std;

// it is in place sorting algorithm
// O(N^2)
void BubbleSort(int a[], int n)
{
    // n-1 large elements to the large elements towards the end
    for (int itr = 1; itr <= n - 1; itr++)
    {
        // we will do pairwise swapping the unsorted part of the array
        for (int j = 0; j <= (n - itr - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main()
{
    // Bubble Sort
    // it takes the larger or smaller elements towards the end.
    // in an array we will push the bigger or smaller elements towards the end by pairwise swapping
    // we will compare first two elements if first is bigger then we will swap them
    // then we will compare second and third element and then swap them and repeat the steps again and again
    // at last we get one bigger element at last then we will run the bubble sort part on unsorted part means one element less from the end

    int n, key;
    cout << "enter no of elements you want in array: ";
    cin >> n;
    int a[100];
    cout << "enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    BubbleSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    return 0;
}