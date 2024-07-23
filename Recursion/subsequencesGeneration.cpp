// subsequences / subseets generation

// given a string containing n characters find out the all subsets of that string.

// s = "abc"
// subsets = {" ", "a", "b","c","ab","ac","bc","abc"}

#include <iostream>
using namespace std;

void generateSubsequences(char input[], char output[], int i, int j)
{
    // base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        cout << output << endl;
        return;
    }

    // recursive case
    // 1. include the current char
    output[j] = input[i];
    generateSubsequences(input, output, i + 1, j + 1);

    // 2. exclude the current char
    generateSubsequences(input, output, i + 1, j);
}

int main()
{
    char input[] = "abc";
    char output[10];

    generateSubsequences(input, output, 0, 0);

    return 0;
}