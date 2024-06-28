#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    pair<int, char> p;
    p.first = 10;
    p.second = 'b';

    pair<int, char> p2(p);
    cout << p2.first << endl;
    cout << p2.second << endl;

    pair<int, string> p3 = make_pair(100, "hello");
    cout << p3.first << " " << p3.second << endl;
    int a, b;
    cin >> a >> b;
    pair<int, int> p4 = make_pair(a, b);
    cout << p4.first << " " << p4.second << endl;

    // we can make array or vector of pairs
    pair<pair<int, int>, string> car;
    car.second = "i10";
    car.first.first = 132;
    car.first.second = 15;
    cout << car.second << endl;
    cout << car.first.second << endl;

    return 0;
}