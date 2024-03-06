#include <iostream>
using namespace std;

int main()
{

    // primitive datatypes
    //  int, float, bool, double, char

    int x = 21934;
    float y = 1923.234123;
    bool weatherRainy = true;
    double pi = 23.345243252;
    char ch = 'A';
    cout << "Data Types" << endl;
    cout << "Int = " << x << endl;
    cout << "Float = " << y << endl;
    cout << "Bool = " << weatherRainy << endl;
    cout << "Double = " << pi << endl;
    cout << "Char = " << ch << endl;
    // how much memory each is going to occupy
    // 1 byte = 8 bits
    cout << endl;
    cout << "Sizeof Datatypes" << endl;
    cout << "int = " << sizeof(x) << endl;
    cout << "float = " << sizeof(y) << endl;
    cout << "bool = " << sizeof(weatherRainy) << endl;
    cout << "double = " << sizeof(pi) << endl;
    cout << "char = " << sizeof(ch) << endl;

    // range of datatypes
    // cant expand or contract the memory at any time
    // compiler allocates a fixed sized memory to each datatype

    // range limits
    // int = 0 - (2^32-1)

    // datatype modifiers
    // unsigned - store only positive numbers = 0 - (2^32-1)
    // signed - store both positive and negative numbers
    // in signed if we have 4 bits then 1st bit is sign bit where 0 is for positive and 1 is for negative and 3 bits magnitude bits for storing the no.
    // N bits positive range =  0 - (2^(N-1) - 1)

    // how negative no.s are stored so we use 2's compliment form for negative nos in this we flip all the bits 0 to 1 and 1 to 0 of positive no. and then add 1 that is the negative no.
    // and when we add negeative no the extra bit is discarded

    // unsigned int range is  -2^(+31) to 2^(31)-1 ((  = 10^8)

    // range of char
    // 1 byte = 8 bits = 256 combinations
    // ASCII table for letter to integer for eg - A = 65

    // 1 byte is minimum allocation size
    cout << endl;
    cout << "TypeCasting" << endl;
    int a = 'a';
    cout << "a = " << a << endl;

    char ab = 98;
    cout << "98 = " << ab << endl;

    char bigNotoChar = 123456;
    cout << "typecasting a big no to char = " << bigNotoChar << endl;

    float f = 5.466;
    int g = int(f);
    cout << "typecasting float to integer = " << g << endl;

    cout << endl;
    unsigned int b = -112;
    cout << "printing unsigned int as negative no. = " << b << endl;
    return 0;
}