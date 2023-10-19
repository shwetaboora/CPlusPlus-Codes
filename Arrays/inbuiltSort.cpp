#include <iostream>
#include <algorithm> // includes sort() function
using namespace std;
// for using this sort function in decreasing order we need to define a comparator function
bool compare(int a, int b)
{
    return a < b; // if < is used it will show us increasing order if we use > this will show us decreasing order
}

int main()
{
    int n, key;
    cout << "enter no of elements you want in array: ";
    cin >> n;
    int a[100];
    cout << "enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sort an array using sort() function
    // more efficient than basic sorting algorithms
    // compare function is sent here as a parameter to a function or passed as a parameter
    sort(a, a + n, compare); // contains multiple parameters 1st is starting point of the container, another is end point
    // ending point we have to give should be a+n
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    return 0;
}