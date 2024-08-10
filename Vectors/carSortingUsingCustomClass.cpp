#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

//  a person wants to book a cab. there are n no of cabs which are available around you. give cordinates of the cabs x1,y1 x2,y2 etc
// we are standing at origin
// we want to know about distances of the cab from you in the sorted order

class Car
{
public:
    string carName;
    int x, y;
    Car()
    {
    }
    Car(string n, int x, int y)
    {
        carName = n;
        this->x = x;
        this->y = y;
    }
    int dist()
    {
        // returns square of distance from origin
        return x * x + y * y;
    }
};

bool compare(Car A, Car B)
{
    int da = A.dist();
    int db = B.dist();

    if (da == db)
    {
        return A.carName.length() < B.carName.length();
    }
    return da < db;
}

int main()
{
    int n;
    cin >> n;

    vector<Car> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        string name;
        cin >> name >> x >> y;
        Car temp(name, x, y);
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), compare);

    // for each loop
    for (auto c : v)
    {
        cout << "Car " << c.carName << " dist- " << c.dist() << " location " << c.x << "," << c.y << endl;
    }

    return 0;
}