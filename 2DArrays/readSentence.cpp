#include <iostream>
using namespace std;

void readLine(char a[], int maxLen, char delim = '\n')
{
    int i = 0;
    char ch = cin.get();
    while (ch != delim)
    {
        a[i] = ch;
        i++;
        if (i == (maxLen - 1))
        {
            break;
        }
        ch = cin.get();
    }
    // once out of the loops
    a[i] = '\0';
    return;
}
int main()
{
    // read a sentence / paragraph and store it
    // cin.get() reads a single character
    // you have to put a loop to read character till you get a new line character \n.

    char a[100];
    // readLine(a, 100);
    cin.getline(a, 100);
    cout << a << endl;

    return 0;
}