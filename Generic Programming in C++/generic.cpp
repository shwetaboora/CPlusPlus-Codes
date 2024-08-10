// advantage of c++ stl is all the containers and algorithms are generic which means they can work with different datatypes

// generic programming using stl
// 1. algorithm
// 2. container(vector)

#include <iostream>
using namespace std;
// linear search

template <typename T>
int search(T a[], int n, T key)
{
    for (int pos = 0; pos < n; pos++)
    {
        if (a[pos] == key)
        {
            return pos;
        }
    }
    return n;
}

int main()
{
    int a[] = {1, 2, 3, 10, 12};
    int n = sizeof(a) / sizeof(int);
    int key = 10;
    cout << search(a, n, key) << endl;

    float arr[] = {1.1, 2.4, 2.7};
    float k = 2.4;
    cout << search(arr, 3, k) << endl;
    return 0;
}