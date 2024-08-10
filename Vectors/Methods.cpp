#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> d{1, 3, 5, 7, 10};
    // push back method to add element O(1) for most of the time
    d.push_back(16);

    // pop back method to remove last element O(1)
    d.pop_back();

    // insert elements in the middle
    d.insert(d.begin() + 3, 100);    // O(1)
    d.insert(d.begin() + 4, 4, 150); // O(N)

    // remove elements in the middle
    d.erase(d.begin() + 2);
    d.erase(d.begin() + 2, d.begin() + 4);

    // size
    cout << d.size() << endl;
    cout << d.capacity() << endl;

    // we avoid shrink
    d.resize(18);
    cout << d.capacity() << endl;

    // remove all the vector, this does not delete the memory occupied by the array
    d.clear();

    // empty
    if (d.empty())
    {
        cout << "it is empty" << endl;
        /* code */
    }
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    cout << d.front() << endl;
    cout << d.back() << endl;

    for (int x : d)
    {
        cout << x << ", ";
    }

    cout << endl;

    vector<int> v;
    // to avoid doubling, we will use reserve functions
    v.reserve(100);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        v.push_back(no); // adds element to the end of the vector
        cout << "changing capacity" << v.capacity() << endl;
    }
    cout << "capacity" << v.capacity() << endl;
    for (int x : v)
    {
        cout << x << ", ";
    }
    cout << endl;

    return 0;
}