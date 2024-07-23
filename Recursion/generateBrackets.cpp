#include <iostream>
using namespace std;

// Generate balanced brackets using n pairs of round brackets

void generateBrackets(char out[], int n, int index, int open, int close)
{
    // base case
    if (index == 2 * n)
    {
        out[index] = '\0';
        cout << out << endl;
        return;
    }

    // recursive case
    // 2 options
    if (open < n)
    {
        out[index] = '(';
        generateBrackets(out, n, index + 1, open + 1, close);
    }
    if (close < open)
    {
        out[index] = ')';
        generateBrackets(out, n, index + 1, open, close + 1);
    }
    return;
}

int main()
{
    int n;
    cin >> n;

    char out[100];
    int index = 0;

    generateBrackets(out, n, 0, 0, 0);

    return 0;
}