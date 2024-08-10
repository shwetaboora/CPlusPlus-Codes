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
//      - goal of destructor is to clear out the memory occupied by the object
//      - gets called automatically when the object goes out of the scope
//      - generally we dont have to write anything for the destructor
//      - except for the cases when you have dynamically allocated members inside your class
//      - process of destroying is last to first object created in the last is destroyed first

// 5. Const Data Members
//      - once init, they cant change their value

// 6. Initialization List
//      - Init constant as well as other data members

// 7. Const Parameters
//      - they donot get updated inside that function in which they are used

// 8. Const functions
//      - we can also make functions as constant
//      - these donot update data members of the class

#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
    float price;

public:
    int modelNo;
    char *name;    // name is not a variable it is a pointer to a dynamic array
    const int msp; // const data member and it is read only member

    Car : msp(99)() // initialization list
    {
        name = NULL;
    }
    Car(float p, int m, char *n, int minPrice = 99) : price(p), msp(minPrice)
    {
        modelNo = m;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    Car(const Car &x) : msp(x.msp) // making x as const parameter
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

    void print() const // this is const function
    {
        cout << "Name : " << name << endl;
        cout << "ModelNo : " << modelNo << endl;
        cout << "Price : " << price << endl;
    }

    // ~Car() // this destructor is for static objects
    // {
    //     cout << "inside destructor of Car " << name << endl;
    // }

    ~Car()
    { // for dynamically allocated data members
        cout << "destroying Car " << name << endl;
        if (name != NULL)
        {
            delete[] name;
        }
    }
};

int main()
{
    // this is statically created car
    Car c(100, 200, "BMW"); // calling parameterised constructor
    cout << c.msp << endl;
    // c.msp++; //we can not do this with const data members
    Car d(c); // calling copy constructor
    d.name[0] = 'A';

    d.setPrice(400);
    c.print();
    d.print();

    // dynamically created Car
    Car *e = new Car(10, 20, "ferrari");
    e->print(); // arrow is used because is dynamic and by the help of arrow we are calling print function

    // delete keyword to delete those objects
    delete e;

    return 0;
}