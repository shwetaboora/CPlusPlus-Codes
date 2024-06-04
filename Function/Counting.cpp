#include <iostream>
using namespace std;

// function signature
// void is for non returnable function means it doesn't return any value
void printCounting(int n) // int n function parameter of argument
{
    // function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    // function call
    printCounting(n);

    return 0;
}