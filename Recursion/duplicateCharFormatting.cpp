// Take an input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned

// Input Format
// Enter a String

// Constraints
// 1<= Length of string <= 10^4

// Output Format
// Display the resulting string (i.e after inserting (*) b/w all the duplicate characters)

// Sample Input
// hello

// Sample Output
// hel*lo

// Explanation
// We insert a "*" between the two consecutive 'l' .

#include <iostream>
#include <string>
using namespace std;

string insertStar(string s, int index = 0)
{

    if (index == s.length() - 1)
    {
        return s;
    }

    if (s[index] == s[index + 1])
    {
        s.insert(index + 1, "*");

        return insertStar(s, index + 2);
    }
    else
    {
        return insertStar(s, index + 1);
    }
}

int main()
{
    string str;
    cin >> str;

    string result = insertStar(str);
    cout << "Result: " << result << endl;

    return 0;
}