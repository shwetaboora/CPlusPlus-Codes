#include <iostream>
using namespace std;
// precedence -- which operator will be executed first if it is used in the expression
//  associativity -- if multiple operators have the same precedence then how it will gona execute left to right or right to left

int main()
{
    int digits = 0;
    int alphabets = 0;
    int spaces = 0;
    int others = 0;

    char ch;
    ch = cin.get();

    while (ch != '$')
    {
        if (ch >= '0' and ch <= '9')
        {
            digits++;
        }
        else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
        {
            alphabets++;
        }
        else if (ch == ' ' or ch == '\n' or ch == '\t')
        {
            spaces++;
        }
        else
        {
            others++;
        }
        ch = cin.get();
    }

    cout << "digits " << digits << " alphabets " << alphabets << " spaces " << spaces << " others " << others << endl;

    return 0;
}
