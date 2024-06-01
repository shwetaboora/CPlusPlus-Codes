#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "enter the amount " << endl;
    cin >> amount;

    int hundered, fifty, twenty, one;

    switch (1)
    {
    case 1:
        hundered = amount / 100;
        cout << hundered << " hundered rupees note" << endl;
        amount = amount % 100;

    case 2:
        fifty = amount / 50;
        cout << fifty << " fifty rupees note" << endl;
        amount = amount % 50;

    case 3:
        twenty = amount / 20;
        cout << twenty << " twenty rupees note" << endl;
        amount = amount % 20;

    case 4:
        one = amount / 1;
        cout << one << " one rupee coin" << endl;
        amount = amount % 1;
    }

    cout << endl;

    return 0;
}