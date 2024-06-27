#include <iostream>
#include <algorithm>
using namespace std;

// defining a comparator function for making array in descending order.
bool compare(int a, int b)
{
    return a > b;
}
int main()
{

    int n, key;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sorting an array using sort function
    sort(a, a + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    return 0;
}