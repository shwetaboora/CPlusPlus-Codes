#include <iostream>
using namespace std;

void ABCDpattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int countAlphabets = n - i + 1;
        char Alphabet = 'A';
        for (int j = 1; j <= countAlphabets; j++)
        {
            cout << Alphabet;
            Alphabet = Alphabet + 1;
        }
        cout << endl;
    }
}
int main()
{
    // print the following pattern for given N = 5;
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A

    int n;
    cin >> n;
    ABCDpattern(n);

    return 0;
}