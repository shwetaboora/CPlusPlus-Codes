#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100000];
    cin >> n;
    int no;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        a[i] = no;
        res = res ^ no;
    }
    int temp = res;
    int pos = 0;
    while ((temp & 1) != 1)
    {
        pos++;
        temp = temp >> 1;
    }
    // the first bit in the xor is at the position 'pos'
    int mask = (1 << pos);

    // find those no which contain set bit at position pos
    int uniqueO = 0;
    int uniqueT = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] & mask) > 0)
        {
            uniqueO = uniqueO ^ a[i];
        }
    }
    uniqueT = res ^ uniqueO;

    cout << min(uniqueO, uniqueT) << " " << max(uniqueO, uniqueT) << endl;

    return 0;
}