// some special functions that c++ classes give you when you create a class object
// 4 different special functions that are always present inside a class
// 1. constructor
//      - responsible for creating an object
//      - Gets called automatically and only once.
//      - same name as class name
// 2. copy constructor
//      - make a copy of given constructor
//      - also exists by default

// 3. copy assignment operator
// 4. destructor

#include <iostream>
#include <cstring>
using namespace std;

// Access Specifiers - public, private and (protected) not covered
// Public - when we want to give access and update of datamembers outside the class
// private - when we dont want anyone to change or update the datamember outside class

class Car
{
private:
    float price;

public:
    int modelNo;
    char name[20];

    // Default constructor
    // Car() {}

    // constructor
    Car()
    {
        cout << "inside car constructor" << endl;
    }
    // parameterized constructor
    Car(float p, int m, char *n)
    {
        price = p;
        modelNo = m;
        strcpy(name, n);
    }
    // constructor overlaoding - when we have different constructor of same name
    Car(float p)
    {
        price = p;
    }

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
    void setPrice(float p) // setter
    {
        float msp = 111;
        if (p > 0)
        {
            price = p;
        }
        price = msp;
    }
    float getPrice() // getter
    {
        return price;
    }
};

int main()
{
    Car c; // make a call to the constructor function present inside the class
    Car d(222, 333, "AUDI");
    d.print();
    // c.price = 500;
    c.modelNo = 112;
    c.name[0] = 'B';
    c.name[1] = 'M';
    c.name[2] = 'W';
    c.name[3] = '\0';

    // cout << "enter the discount you want to give " << endl;
    // float discount;
    // cin >> discount;
    c.setPrice(10);
    c.print();

    return 0;
}