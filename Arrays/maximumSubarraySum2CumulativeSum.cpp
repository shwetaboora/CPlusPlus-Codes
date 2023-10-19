#include <iostream>
using namespace std;

int main()
{
    // largest / maximum subarray sum (Cumulative sum or precomputing)
    // first and general way is generate all the subarrays  and find max sum of N sums
    // n^2 used 2 nested loops
    // in this we have removed one internal for loop and we have created one more array csum which will store the current subbarray sum and give us the maximum sum
    int n, key;
    cout << "enter no of elements you want in array: ";
    cin >> n;

    int a[100];
    int csum[100] = {0};

    int maximumSum = 0;
    int currentSum = 0;
    // for printing the mximum sum subarray
    int left = -1;
    int right = -1;

    cin >> a[0];
    csum[0] = a[0];
    cout << "enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        csum[i] = csum[i - 1] + a[i];
    }
    // generate all subarrays
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // prints elements of subarray(i,j)
            currentSum = 0; // making current sum = 0 for every new subarray
            currentSum = csum[j] - csum[i - 1];
            cout << "current sum " << currentSum << endl;
            if (currentSum > maximumSum)
            {
                maximumSum = currentSum;
                left = i;
                right = j;
            }
        }
    }
    // printing maximum sum
    cout << "Maximum sum " << maximumSum << endl;
    // printing the maximum sum subarray
    for (int k = left; k <= right; k++)
    {
        cout << a[k] << ", ";
    }
    cout << endl;

    return 0;
}