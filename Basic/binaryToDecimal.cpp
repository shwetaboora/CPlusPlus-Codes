
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // int no;
    // int N;

    // cin >> N;

    // while (N > 0)
    // {

    //     cin >> no;

    //     int p = 1;
    //     int ans = 0;

    //     while (no > 0)
    //     {
    //         int rem = no % 10;
    //         ans = ans + rem * p;
    //         p = p * 2;
    //         no = no / 10;
    //     }

    //     cout << ans << endl;
    //     N = N - 1;
    // }

    int n;
    cin >> n;

    int i = 0, ans = 0;

    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }

    cout << ans << endl;

    return 0;
}