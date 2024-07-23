
// Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

// Input Format
// Single Character .

// Constraints
// -

// Output Format
// lowercase UPPERCASE Invalid

// Sample Input
// $
// Sample Output
// Invalid
// Explanation
// -

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (islower(ch))
    {
        cout << "lowercase" << endl;
    }
    else if (isupper(ch))
    {
        cout << "UPPERCASE" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
    return 0;
}