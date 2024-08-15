// we have given a linked lisst we have to check whether it contains a cycle or not// we will just chng the pointers or the address
#include <iostream>
using namespace std;
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

node *midPoint(node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }

    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

// in arrays overall complexity was O(NLogN)
// in Linked List overall complexity was O(NLogN)
node *mergeSort(node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // rec case
    // 1. break
    node *mid = midPoint(head);
    node *a = head;
    node *b = mid->next;
    mid->next = NULL;

    // 2. rec sort the two parts
    a = mergeSort(a);
    b = mergeSort(b);

    // 3. merge them
    node *c = merge(a, b);

    return c;
}

bool detectCycle(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    // node *head = takeInput();
    node *head;
    cin >> head;
    cout << head;

    head = mergeSort(head);
    cout << head << endl;

    // print(head);

    return 0;
}