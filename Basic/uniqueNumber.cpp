#include <iostream>
using namespace std;

int main()
{
    // problem - find the unique no 2N+1
    // given a list of numbers where every no occurs twice except one, find that unique number
    // soo the xor of all the numbers will give the unique number as same numbers will cancel out and the unique one will be left
    int n;
    cin >> n;

    int no;
    int ans = 0;

    // bitwise xor operator to solve
    // helped to not to use any storage
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        ans = ans ^ no;
    }
    cout << ans << endl;

    return 0;
}