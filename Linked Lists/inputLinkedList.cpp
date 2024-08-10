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

// 2. functions (procedural programming)  -- mostly for interview purposes
void build()
{
}

// |2| |
// |data | next|

// passing a pointer by reference(node*&head)
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
// passing the head pointer by value because it will not update the actual value of head
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
void insertAtTail(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void insertInMiddle(node *&head, int data, int p)
{
    // corner case
    if (head == NULL or p == 0)
    {
        insertAtHead(head, data);
    }
    else if (p > length(head))
    {
        insertAtTail(head, data);
    }
    else
    {
        // take p-1 jumps
        int jump = 1;
        node *temp = head;
        while (jump <= p - 1)
        {
            temp = temp->next;
            jump++;
        }

        // create a new node
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}
// in array deletion memory is wasted
// but in linked lists it deletes that node so the memory is saved
void deleteHead(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head->next;
    delete head;
    head = temp;
}

// search operation
// only option is linear search
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (head->data == key)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

// recursively
bool searchRecursive(node *head, int key)
{
    if (head == NULL)
    {
        return false;
    }
    // recursive cases
    if (head->data == key)
    {
        return true;
    }
    else
    {
        return searchRecursive(head->next, key);
    }
}

// void takeInput(node *&head) -- one way of taking input
// {
// }

node *takeInput2()
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

int main()
{
    node *head = takeInput2();
    print(head);

    return 0;
}