#include <iostream>
using namespace std;

int main()
{

    // largest / maximum subarray sum
    // first and general way is generate all the subarrays  and find max sum of N sums
    // n^3 used 3 nested loops
    int n, key;
    cout << "enter no of elements you want in array: ";
    cin >> n;

    int maximumSum = 0;
    int currentSum = 0;
    // for printing the mximum sum subarray
    int left = -1;
    int right = -1;

    int a[100];
    cout << "enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // generate all subarrays
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // prints elements of subarray(i,j)
            currentSum = 0; // making current sum = 0 for every new subarray
            for (int k = i; k <= j; k++)
            {

                currentSum += a[k];
            }
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