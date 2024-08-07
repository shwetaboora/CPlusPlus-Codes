#include <iostream>
using namespace std;

void permute(char in[], int i)
{
    // base case
    if (in[i] == '\0')
    {
        cout << in << endl;
        return;
    }

    // recursive case
    for (int j = i; in[j] != '\0'; j++)
    {
        swap(in[i], in[j]);
        permute(in, i + 1);
        // backtracking - to restore the original array
        swap(in[i], in[j]);
    }
}

int main()
{
    char in[10];
    cin >> in;
    permute(in, 0);

    return 0;
}