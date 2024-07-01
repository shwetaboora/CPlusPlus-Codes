#include <iostream>
using namespace std;

int main()
{
    int count[64] = {0};
    int n;
    cin >> n;
    int no;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        // update the count array by extracting bits;
        int j = 0;
        while (no > 0)
        {
            int lastBit = (no & 1);
            count[j] = count[j] + lastBit;
            j++;
            no = no >> 1;
        }
    }
    // iterating the array and form the aanswer by converting 0s and ones into a no.
    int p = 1;
    int ans = 0;
    for (int i = 0; i < 64; i++)
    {
        count[i] %= 3;
        ans += (count[i] * p);
        p = p << 1;
    }

    // print the final ans
    cout << ans << endl;

    return 0;
}