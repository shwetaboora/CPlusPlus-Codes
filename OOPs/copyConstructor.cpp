// some special functions that c++ classes give you when you create a class object
// 4 different special functions that are always present inside a class
// 1. constructor
//      - responsible for creating an object
//      - Gets called automatically and only once.
//      - same name as class name
// 2. copy constructor
//      - make a copy of given object
//      - also exists by default
//      - when you need to define your own copy constructor? called as shallow copy
//      - you have to make your own copy constructor if a deep copy is needed!
// deep copy would be needed if your class has some pointers to a dynamically allocated memory

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
    // why passed by reference only..?
    // because we these constructor were depending on each other on loop so we putted it in reference so tht we are not copying and x is same bucket as e and x is reference var.

    Car(Car &x)
    {
        cout << "below is the copy constructor" << endl;
        price = x.price;
        modelNo = x.modelNo;
        strcpy(name, x.name);
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
        if (p > msp)
        {
            price = p;
        }
        else
        {
            price = msp;
        }
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
    cout << "car d" << endl;
    d.print();

    // copy constructor
    Car e(d); // it is a copy e of the object d;
    e.setPrice(456);

    // another way of calling copy constructor
    Car f = e;

    cout << "car e" << endl;
    e.print();

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