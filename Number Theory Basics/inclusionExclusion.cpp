#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t; // testcases

    ll primes[] = {2, 3, 5, 7, 11, 13, 17, 19}; // prime nos less than 20

    while (t--) // running for every testcase
    {
        ll n;
        cin >> n;

        ll subsets = (1 << 8) - 1; // total no of subsets will be 2^8. -1 as skipping zero
        ll ans = 0;
        for (ll i = 1; i <= subsets; i++)
        {
            ll denom = 1ll;
            ll setbits = __builtin_popcount(i); // gives how many setbits does i have
            for (ll j = 0; j <= 7; j++)         // iterate over all the bits of no. 7 because we have 7 nos.
            {
                if (i & (1 << j))
                {
                    denom = denom * primes[j]; // if bit is set than multiply it with denom to make prod like ab abc etc
                }
            }
            if (setbits & 1) // is no of setbits are odd
            {
                ans += n / denom; // odd setbits we will add
            }
            else
            {
                ans -= n / denom; // even setbits we will subs
            }
        }
        cout << ans << endl;
    }

    return 0;
}