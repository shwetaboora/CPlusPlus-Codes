// Iterators  - as an entity that helps us to access the data within a  container with certain restrictions

// 1. Input iterators - an entity through which you can read data from container and move ahead(read only iterator)
// for eg - a keyboard

// 2. output iterators - an entity through which you can write into the container and move ahead (write only iterator)
// for eg - printer

// 3. forward iterators - iterators with functionalities of input and output iterator in sigle direction
// for eg - singly linked list

// 4. bidirectional iterators - forward iterator that can move in both direction
// for eg - doubly linked list

// 5. random access iterators - iterator that can read / write in both directions and also can take jumps
// it is provided by arrays or vectors

// Why learn iterators??
// we want to make generic algorithms with freedom from underlying data structures
// For eg - 1. we made search() function to work on all data-types using templates
//          2. now we can make search() function to work on all types of containers using iterators

#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;
// linear search
// templates - get freedom from datatypes we can use any datatypes
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

// ForwardIterator is a return type
// templates + iterator - get freedom from containers
template <class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{
    while (start != end)
    {
        if (*start == key)
        {
            return start;
        }
        start++;
    }
    return end;
}

// templates + iterator + comparators - gives freedom from different type of operations operating
template <class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp)
{
    while (start != end)
    {
        if (cmp(*start, key))
        {
            return start;
        }
        start++;
    }
    return end;
}

class Book
{
public:
    string name;
    int price;

    Book()
    {
    }

    Book(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
};

class BookCompare
{
public:
    bool operator()(Book A, Book B)
    {
        if (A.name == B.name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Book b1("C++", 100); // old edition
    Book b2("Java", 120);
    Book b3("Python", 130);

    // list<Book> l;
    vector<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book bookToFind("C++", 110); // new edition

    BookCompare cmp;

    // list<Book>::iterator it = search(l.begin(), l.end(), bookToFind, cmp);
    auto it = search(l.begin(), l.end(), bookToFind, cmp);
    if (it != = l.end())
    {
        cout << "book found in the library " << endl;
    }
    else
    {
        cout << "book not found in the library " << endl;
    }

    // if (cmp(b1, bookToFind))
    // {
    //     cout << "true same books " << endl;
    // }

    // int a[] = {1, 2, 3, 10, 12};
    // int n = sizeof(a) / sizeof(int);
    // int key = 10;
    // cout << search(a, n, key) << endl;

    // float arr[] = {1.1, 2.4, 2.7};
    // float k = 2.4;
    // cout << search(arr, 3, k) << endl;

    // list<int> l;
    // l.push_back(1);
    // l.push_back(2);
    // l.push_back(5);
    // l.push_back(3);

    // auto it = search(l.begin(), l.end(), 15);
    // if (it == l.end())
    // {
    //     cout << "element not present" << endl;
    // }
    // else
    // {
    //     cout << *it << endl;
    // }

    return 0;
}