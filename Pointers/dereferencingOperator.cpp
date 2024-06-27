#include <iostream>
using namespace std;

int main()
{
    // * is used in multiplication, pointer, dereference any address
    // &bucket --> Address
    // *address --> Bucket

    int x = 10;
    cout << &x << endl; // address of x
    int *xptr;
    xptr = &x;

    cout << xptr << endl; // address of x

    cout << &xptr << endl; // address of xptr

    cout << *(&x) << endl; // value of x as star of address is bucket

    cout << *(xptr) << endl; // value of x as xptr have address of x so it will give value of x

    cout << *(&xptr) << endl; // address of x as &xptr is address of xptr and star give bucket so bucket is x's address so it will give address of x

    cout << &(*xptr) << endl; // address of x as *xptr means x bucket and & means address so it gives x's address

    // Double pointer
    int **xxptr = &xptr;
    cout << xxptr << endl;
    cout << *(xxptr) << endl;

    return 0;
}