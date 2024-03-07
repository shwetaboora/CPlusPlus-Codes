#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int no;
    cin >> no;
    int sum = 0;
    int i = 0;
    while (i <= no)
    {
        // cout << sum << " ";
        sum = i + sum;
        i++;
    }
    cout << sum << " value of sum ";

    return 0;
}
