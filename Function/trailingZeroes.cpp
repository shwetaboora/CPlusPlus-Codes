#include <iostream>
using namespace std;
int findZeroes(int n)
{
    int ans = 0;
    for (int divisor = 5; n / divisor >= 1; divisor = divisor * 5)
    {
        ans += n / divisor;
    }
    return ans;
}
int main()
{
    // given an integer n, write a function that returns count of trailing zeroes in n.
    // compute the value of n factorial and count no. of zeroes at the ending of that no.
    // if n is a last no than u can not compute the n factorial
    // as sample input n is given as 5 and output 1
    // constraints - 1<=N<=10^9

    long int n;
    cin >> n;
    cout << findZeroes(n) << endl;
    return 0;
}