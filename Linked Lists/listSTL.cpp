#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    // initialization
    list<int> l1{1, 2, 3, 10, 5, 8};

    // different datatype
    list<string> l2{"apple", "banana", "kiwi", "guava"};
    l2.push_back("strawberry");

    // sort
    l2.sort();

    // reverse
    l2.reverse();

    // pop_front
    cout << l2.front() << endl;
    l2.pop_front();

    // add to the front of the list
    l2.push_front("pineapple");
    cout << l2.back() << endl;
    l2.pop_back();

    // iterate over the list and print the data
    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << (*it) << " -> ";
    }
    cout << endl;

    // some more functions in the list
    l2.push_back("orange");
    l2.push_back("grapes");

    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;

    // remove
    string f;
    // cin >> f;
    // l2.remove(f);

    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;
    // erase one or elements at list
    auto it = l2.begin();
    it++;
    it++;
    l2.erase(it);

    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout << endl;
    // we can insert elements in the list
    it = l2.begin();
    it++;
    l2.insert(it, "fruitjuice");
    for (string s : l2)
    {
        cout << s << "-->";
    }
    return 0;
}