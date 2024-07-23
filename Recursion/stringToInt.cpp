#include <iostream>
#include <cstring>
using namespace std;

int stringToInt(char a[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    int digit = a[n - 1] - '0'; // gives last digit
    int smallans = stringToInt(a, n - 1);

    return smallans * 10 + digit;
}

int main()
{
    char a[] = "1234";
    int n = strlen(a);
    int x = stringToInt(a, n);
    cout << x << endl;
    cout << x + 1 << endl;
    return 0;
}