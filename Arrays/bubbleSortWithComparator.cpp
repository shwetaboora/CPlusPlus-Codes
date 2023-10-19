#include <iostream>
using namespace std;
bool compare(int a, int b)
{
    return a < b; // if < is used it will show us increasing order if we use > this will show us decreasing order
}

void BubbleSort(int a[], int n, bool (&compare)(int a, int b)) // passed a function as a parameter with its parameters
{                                                              // accept the function as a parameter inside another function
    // n-1 large elements to the large elements towards the end
    for (int itr = 1; itr <= n - 1; itr++)
    {
        // we will do pairwise swapping the unsorted part of the array
        for (int j = 0; j <= (n - itr - 1); j++)
        {
            if (compare(a[j], a[j + 1]))
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main()
{

    int n, key;
    cout << "enter no of elements you want in array: ";
    cin >> n;
    int a[100];
    cout << "enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    BubbleSort(a, n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    return 0;
}