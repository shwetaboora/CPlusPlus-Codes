#include <iostream>
using namespace std;

int main()
{
    // largest / maximum subarray sum (Kadane's Algorithm)
    // N Only one loop is used

    int n;
    cin >> n;

    int a[100];
    int csum = 0;
    int maxsum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // kadane's algo for maximum subarray sum
    for (int i = 0; i < n; i++)
    {
        csum = csum + a[i];
        if (csum < 0)
        {
            csum = 0;
        }
        maxsum = max(csum, maxsum);
    }

    cout << "maximum sum is " << maxsum << endl;

    return 0;
}