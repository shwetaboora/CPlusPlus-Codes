// Problem
// there are N houses for sale. the i-th house costs Ai  dollars to buy. you have a budget of B dollars to spend.
// what is the maximum number of houses you can buy

// Input
// the first line of the input gives the number of test cases, T. T test cases follow. each test case begins with a single line containing the two integers N and B. the second line contains N integers. the i-th integer is Ai, the cost of the i-th house.

// Output
// for each test case, output one line containing case #x: y, where the x is the test case number (starting from 1) and y is the maximum number of houses you can buy.

// limits
// time limit - 15 sec per test sec
// memory limit - 1 gb
// 1<=T<=100
// 1<=B<=10^5
// 1<=Ai<=1000 for all i

// EXAMPLE
// input         Output
// 3
// 4 100 = 4 houses budget of 100 dollars to spend
// below are the prices of houses
// 20 90 40 90   Case #1: 2
// 4 50
// 30 30 10 10   Case #2: 3
// 3 300
// 999 999 999   Case #3: 0

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int n, b;
        cin >> n >> b;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end()); // n log n
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (b >= a[i])
            {
                ans++;
                b -= a[i];
            }
            else
            {
                break;
            }
        }
        cout << "Case #" << tc << ": " << ans << endl;
    }

    return 0;
}