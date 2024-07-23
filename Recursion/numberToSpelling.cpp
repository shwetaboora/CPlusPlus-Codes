#include <iostream>
using namespace std;
// 2048 --> two zero four eight

char words[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void spelling(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // recursive case
    spelling(n / 10);
    int digit = n % 10;

    cout << words[digit] << " "; // if we use this statement above the func we will get the out put in reverse
    return;
}

int main()
{
    int n;
    cin >> n;
    spelling(n);

    return 0;
}