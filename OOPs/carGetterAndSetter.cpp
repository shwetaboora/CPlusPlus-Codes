#include <iostream>
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
    Car c, d, r;
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