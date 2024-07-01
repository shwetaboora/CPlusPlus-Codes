#include <iostream>
#include <cstring>
using namespace std;
// finding subsequences/subsets of a given string
// input = "abc"
// output  = " ",a,b,c,ab,bc,ac,abc
void filterChars(int n, char a[])
{
    int j = 0;
    while (n > 0)
    {
        int lastBit = (n & 1);
        if (lastBit == 1)
        {
            cout << a[j];
        }
        j++;
        n = n >> 1;
    }
    cout << endl;
}

void printSubsets(char a[])
{
    int n = strlen(a);
    for (int i = 1; i < (1 << n); i++)
    {
        filterChars(i, a);
    }
    return;
}

int main()
{
    char a[100];
    cin >> a;
    printSubsets(a);

    return 0;
}