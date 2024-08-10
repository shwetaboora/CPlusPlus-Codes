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
//      - deep copy would be needed if your class has some pointers to a dynamically allocated memory

// 3. copy assignment operator(=)
//      - copies when you do assignment
//      - Car d = c; //copy constructor
//      - Car d;
//      - d = c ; //copy assignment operator
//      - you can write your own copy assignment operator to make a deep copy
//      - can be called as many times we want

// 4. destructor
#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
    float price;

public:
    int modelNo;
    char *name; // name is not a variable it is a pointer to a dynamic array

    Car()
    {
        name = NULL;
    }
    Car(float p, int m, char *n)
    {
        price = p;
        modelNo = m;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    Car(Car &x)
    {
        cout << "inside copy constructor" << endl;
        price = x.price;
        modelNo = x.modelNo;
        // name = x.name; // this is shallow copy

        // below is deep copy
        name = new char[strlen(x.name) + 1];
        strcpy(name, x.name);
    }

    void operator=(Car &x) // making own operator that makes a deep copy
    {
        price = x.price;
        modelNo = x.modelNo;
        // name = x.name; // this is shallow copy

        // below is deep copy
        name = new char[strlen(x.name) + 1];
        strcpy(name, x.name);
    }

    void setPrice(float p)
    {
        price = p;
    }
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "ModelNo : " << modelNo << endl;
        cout << "Price : " << price << endl;
    }
};

int main()
{

    Car c(100, 200, "BMW"); // calling parameterised constructor
    Car d;                  // calling constructor
    d = c;                  // copy assignment operator - this makes a shallow copy so both name get chng
    // also we can use copy assignment operator as may times and constructor can be called only once
    d.name[0] = 'A';

    d.setPrice(400);
    c.print();
    d.print();

    return 0;
}