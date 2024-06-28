#include <iostream>
using namespace std;
bool canPlaceCows(int stalls[], int n, int cow, int minSep)
{
    int lastCow = stalls[0];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (stalls[i] - lastCow >= minSep)
        {
            lastCow = stalls[i];
            count++;
            if (count == cow)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int stalls[] = {1, 2, 4, 8, 9};
    int n = 5;
    int cow = 3;

    int s = 0;
    int e = stalls[n - 1] - stalls[0];
    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        bool cowRakhPaye = canPlaceCows(stalls, n, cow, mid);
        if (cowRakhPaye)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}