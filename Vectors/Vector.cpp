#include <iostream>
#include <vector>
using namespace std;
// container of stl - vector
// VECTOR
// Dynamic array that can grow and shrink in size automatically according to the requirement
//  memory is linear
int main()
{
    // ways to initialize and create vector
    vector<int> a;
    vector<int> b(5, 10); // 5 int with value 10 - used while we have to initialize with 0 (n,0)
    vector<int> c(b.begin(), b.end());
    vector<int> d{1, 3, 5, 7, 10};

    // how we can iterate over the vector
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << ", ";
    }
    cout << endl;

    for (auto it = b.begin(); it != b.end(); it++)
    {
        cout << (*it) << ", ";
    }
    cout << endl;

    // for each loop

    for (int x : d)
    {
        cout << x << ", ";
    }
    cout << endl;

    // discuss more functions
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        v.push_back(no); // adds element to the end of the vector
    }
    for (int x : v)
    {
        cout << x << ", ";
    }
    cout << endl;

    // understand at memory level, what are the differences in the two
    cout << v.size() << endl;
    cout << v.capacity() << endl; // size of underlying array
    cout << v.max_size() << endl; // maximum no of elements a vector can hold in the worst case acc to the available memory in the system
    cout << d.size() << endl;
    cout << d.capacity() << endl; // size of underlying array
    cout << d.max_size() << endl; // maximum no of elements a vector can hold in the worst case acc to the available memory in the system
    return 0;
}