#include <iostream>
using namespace std;

class Car
{
public:
    // below are the datamembers
    float price;
    int modelNo;
    char name[20];

    // below is function

    void print()
    {
        cout << "Name : " << name << endl;
        cout << "ModelNo : " << modelNo << endl;
        cout << "Price : " << price << endl;
    }

    float applyDiscountedPrice(float discount)
    {
        price = price * (1.0 - discount);
        return price;
    }
};
// private means cant access datamembers outside cars
// private - access modifier
// we can make them public by adding public in that
int main()
{
    // create an object
    Car c, d, r;
    // we can create multiple objects
    // '.' means refering some attribute of particular object like c
    c.price = 500;
    c.modelNo = 112;
    c.name[0] = 'B';
    c.name[1] = 'M';
    c.name[2] = 'W';
    c.name[3] = '\0';

    // cout << "name " << c.name << endl
    //      << "model no " << c.modelNo << endl
    //      << "price " << c.price << endl;

    // cout << sizeof(c) << endl;
    // cout << sizeof(Car) << endl;

    cout << "enter the discount you want to give " << endl;
    float discount;
    cin >> discount;
    // cout << c.applyDiscountedPrice(discount) << endl;

    c.print();

    return 0;
}