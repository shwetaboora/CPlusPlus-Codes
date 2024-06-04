// Find total number of set bits in input a and b

#include <iostream>
using namespace std;

int countBits(int a, int b)
{
    int count = 0;
    while (a != 0) // count untill the bits of a become 0
    {
        if (a & 1) // checking leftmost bit
        {
            count++; // if found set bit, increment count
        }
        a = a >> 1; // left shift a to check next bit in next iteration
    }
    while (b != 0)
    {
        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cout << "\nEnter a = ";
    cin >> a;
    cout << "\nEnter b = ";
    cin >> b;
    cout << "Answer is " << countBits(a, b);
}