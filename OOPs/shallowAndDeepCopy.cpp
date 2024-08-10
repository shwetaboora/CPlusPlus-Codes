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
    Car d(c);               // calling copy constructor
    d.name[0] = 'A';

    d.setPrice(400);
    c.print();
    d.print();

    return 0;
}