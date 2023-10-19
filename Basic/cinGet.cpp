#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // prblm statement - read a list of characters(sentence)
    // cin.get()
    char ch;
    // cin >> ch;
    // cin dont read spaces so we can use cin.get for reading spaces
    // reads first character
    ch = cin.get(); // it reads any single character including spaces/newlines from the input buffer.
    while (ch != '.')
    {
        // print the last character that we have read
        cout << ch;
        // update the char in the memory(read the next character)
        // reads rest of the characters
        ch = cin.get();
        // cin >> ch;
    }

    // /n or newline character sends the input to the input buffer
    // the final character ch will store in memory is .
    return 0;
}
