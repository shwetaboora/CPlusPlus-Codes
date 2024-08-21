#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// a person wants to book a cab. there are n no of cabs which are available around you. give cordinates of the cabs x1,y1 x2,y2 etc
// we are standing at origin
// we want to know about distances of the cab from you in the sorted order

// pair is a container that stores two objects
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    int d1 = p1.first * p1.first + p1.second * p1.second;
    int d2 = p2.first * p2.first + p2.second * p2.second;
    if (d1 == d2)
    {
        // sort according to x cordinate
        return p1.first < p2.first;
    }

    return d1 < d2;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);

    // for each loop
    for (auto p : v)
    {
        cout << "Car " << p.first << "," << p.second << endl;
    }

    return 0;
}