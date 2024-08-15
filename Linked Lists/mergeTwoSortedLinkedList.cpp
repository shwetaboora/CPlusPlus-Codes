// we will just chng the pointers or the address
#include <iostream>
using namespace std;
// it is a linear kind of adata structure
// it is possible that u need to allocate memory when you get a new data point
// it is a collection of nodes that are allocated in the memory

// linked list is a collection of nodes that stores some data points

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

// two types of making linked lists
// 1. linked list class (object oriented programming)
// class LinkedList
// {
//     node *head;
//     node *tail;

// public:
//     LinkedList()
//     {
//     }
//     void insert(int d)
//     {
//     }
// };

void build()
{
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ->";
        head = head->next;
    }
    cout << endl;
}

int length(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void insertAtHead(node *&head, int d)
{
    // why doing dynamic allocation instead of static allocation
    // if we do static allocation if the function call is over all the variables created inside this function will be destroyed
    if (head == NULL)
    {
        head = new node(d);
        return;
    }
    node *n = new node(d);
    // (*n).next = head;
    n->next = head;
    head = n;
}
node *takeInput()
{
    int d;
    cin >> d;
    node *head = NULL;

    while (d != -1)
    {
        insertAtHead(head, d);
        cin >> d;
    }
    return head;
}

node *takeInput2()
{
    int d;
    // cin >> d;
    node *head = NULL;
    // while (d != -1)
    while (cin >> d)
    {
        insertAtHead(head, d);
        // cin >> d;
    }
    return head;
}

ostream &operator<<(ostream &os, node *head)
{
    print(head);
    return os; // os is cout
}

istream &operator>>(istream &is, node *&head)
{
    head = takeInput();
    return is;
}

node *merge(node *a, node *b)
{
    // base case
    if (a == NULL)
    {
        return b;
    }

    if (b == NULL)
    {
        return a;
    }
    // taking temperary head pointer
    node *c;
    if (a->data < b->data)
    {
        c = a;
        c->next = merge(a->next, b);
    }
    else
    {
        c = b;
        c->next = merge(a, b->next);
    }
    return c;
}

int main()
{
    // node *head = takeInput();
    node *head2;

    node *head;
    cin >> head >> head2;
    cout << head << head2 << endl;

    node *newHead = merge(head, head2);
    cout << newHead << endl;

    // print(head);

    return 0;
}