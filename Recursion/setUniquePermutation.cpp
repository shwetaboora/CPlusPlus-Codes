#include <iostream>
#include <set>
#include <string>
using namespace std;

void permute(char in[], int i, set<string> &s)
{
    // base case
    if (in[i] == '\0')
    {
        // cout << in << endl;
        string t(in);
        s.insert(t);
        return;
    }

    // recursive case
    for (int j = i; in[j] != '\0'; j++)
    {
        swap(in[i], in[j]);
        permute(in, i + 1, s);
        // backtracking - to restore the original array
        swap(in[i], in[j]);
    }
}

int main()
{
    char in[10];
    cin >> in;
    set<string> s;
    permute(in, 0, s);
    // loop over the set s
    for (auto str : s)
    {
        cout << str << endl;
    }

    return 0;
}