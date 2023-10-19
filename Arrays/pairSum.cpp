#include <iostream>
using namespace std;

int main()
{
    // given a sorted array , find a pair of elements that sum to k (given)
    // we will use here two pointer approach
    // we will keep two poiner one at the starting and one at the ending and move them
    int a[] = {1, 3, 5, 7, 10, 11, 12, 13};
    int sum = 16;

    int i = 0;
    int j = sizeof(a) / sizeof(int) - 1;

    while (i < j)
    {
        int csum = a[i] + a[j];
        if (csum > sum)
        {
            j--;
        }
        else if (csum < sum)
        {
            i++;
        }
        else if (csum == sum)
        {
            cout << a[i] << " and " << a[j] << endl;
            i++;
            j--;
        }
    }

    return 0;
}