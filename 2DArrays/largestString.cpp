#include <iostream>
#include <cstring> // strlen- string length strcpy- copying string
using namespace std;

int main()
{
    // read n, n no of strings, print largest string and its length
    // we will only store 2 strings largest and the current string
    int n;
    cin >> n;
    char a[100];
    char largest[100];
    int len = 0;
    int largest_len = 0;

    cin.get();
    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 100);
        // cout << a << endl;

        len = strlen(a);
        if (len > largest_len)
        {
            largest_len = len;
            strcpy(largest, a);
        }
    }
    cout << largest << " and " << largest_len << endl;

    return 0;
}