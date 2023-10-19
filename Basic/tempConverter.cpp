#include <iostream>
using namespace std;

int main()
{

    int tempF = 0;
    int tempC;

    while (tempF <= 300)
    {
        tempC = (5 * (tempF - 32)) / 9;
        // you should never do 5/9 it will become 0 and answer will be wrong
        cout << tempF << " - " << tempC << endl;
        tempF = tempF + 20;
    }

    return 0;
}