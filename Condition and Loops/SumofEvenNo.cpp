#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no;
    cin >> no;
    int i = 0;
    int even = 0;
    while (i <= no)
    {
        // if (i % 2 == 0)
        // {
        even += i;
        cout << even << " ";
        i += 2;
        // }
        // i++;
    }
    cout << endl;
    cout << "sum of even no's " << even << endl;

    return 0;
}
