#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

// O(N)(Best) > O(NlogN) > O(N^2)(worst)
// space complexity is the maximum auxillary / extra space that is consumed apart from the input space

// Bubble sort - O(N^2)
void bubbleSort(int a[], int n)
{
    // N-1 large elements to the end
    for (int itr = 1; itr <= n - 1; itr++)
    {
        // pairwise swapping in the unsorted of the array
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
    int n;
    cin >> n;
    int a[100000];

    // create a reverse sorted array

    for (int i = 0; i < n; i++)
    {
        a[i] = n - i;
    }
    // time_t is datatype
    time_t start = clock();
    bubbleSort(a, n);
    time_t end = clock();

    cout << "bubble sort " << end - start << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = n - i;
    }

    start = clock();
    // merge sort  - O(NlogN)
    sort(a, a + n);
    end = clock();

    cout << "Merge sort " << end - start << endl;

    return 0;
}