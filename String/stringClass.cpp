#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string class -- part of c++ stl standard template library
    // string class provides alternatives of char array
    // it is a container that contains a char array
    // always in "" double quotes

    // string init
    string s;
    string s1("hello");
    string s2 = "hii";

    // we can also call copy constructor for string object
    string s3(s2);
    string s4 = s3;
    // we can also init a string object from an array

    char a[] = {'a',
                'b',
                'c', '\0'};
    string s5(a);

    cout << s << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    if (s.empty())
    {
        cout << "s is empty string" << endl;
    }

    // append to add something

    s.append("hii123");
    cout << s << endl;

    s = s + "abcdef";
    cout << s << endl;

    // clear to remove / erase content of stirng
    cout << s.length() << endl;
    s.clear();
    cout << s.length() << endl;

    // compare two strings
    cout << s.compare(s1) << endl;

    // overloaded operators
    if (s1 < s)
    {
        cout << "s1 is lexiographically smaller than s" << endl;
    }

    cout << s[0] << endl;

    // find substrings
    string s7 = "i want apple in the store";
    int idx = s7.find("apple");
    cout << idx << endl;

    // remove a word from the string
    string word = " apple ";
    int len = word.length();
    cout << s7 << endl;
    s7.erase(idx, len);
    cout << s7 << endl;

    // iterate over all the characters of the string
    for (int i = 0; i < s7.length(); i++)
    {
        cout << s7[i] << ":";
    }
    cout << endl;
    // iterators  -- begin-- points to begining of the string
    // end-- points to end of the strings
    // auto automatically defines the datatype depending upon what type of value we have
    // for (string::iterator i = 0; i < count; i++) if we dont want to use auto

    for (auto it = s7.begin(); it != s7.end(); it++)
    {
        cout << (*it) << ","; // we se value at the ith character
    }
    cout << endl;
    // for each loop for iterating all characters of string
    for (auto c : s7)
    {
        cout << c << ".";
    }

    return 0;
}