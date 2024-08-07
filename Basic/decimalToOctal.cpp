#include <iostream>
#include <cmath>
using namespace std;

// Function to convert decimal number to octal
int decimalToOctal(int decimalNumber)
{
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}

int main()
{
    int decimalNumber;
    cin >> decimalNumber;
    cout << decimalToOctal(decimalNumber) << endl;

    return 0;
}
