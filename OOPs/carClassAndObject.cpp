#include <iostream>
using namespace std;

// defining a new datatype
class Car // class does not take any space in the memory
{
    int price;
    int modelNo;
    char name[20];
};

int main()
{
    // create an object
    Car c;
    // car is the data type c is the variable that denotes the object
    // now this c is gonna take space in the memory

    Car arr[20]; // stores info about max 20 cars
    cout << sizeof(c) << endl;
    cout << sizeof(Car) << endl;
    return 0;
}