#include <iostream>
using namespace std;
// mid point of linked list
// runner technique - single pass
// we will just chng the pointers or the address

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

void reverse(node *&head)
{
    node *c = head;
    node *p = NULL;
    node *n;

    while (c != NULL)
    {
        // first save the next node
        n = c->next;
        // secondly make the current node point to prev
        c->next = p;

        //  third we will update p and c take them 1 step forward
        p = c;
        c = n;
    }
    head = p;
}

node *recReverse(node *head)
{
    // smallest linked list
    if (head->next == NULL || head == NULL)
    {
        return head;
    }

    // recursive case
    node *smallHead = recReverse(head->next);

    // node *temp = smallHead;
    // while (temp->next != NULL)
    // {
    //     temp = temp->next;
    // }
    // node *temp = head->next;
    // temp->next = head;
    head->next->next = head;
    head->next = NULL;

    return smallHead;
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

int main()
{
    // node *head = takeInput();
    // node *head2 = takeInput();//ostream

    node *head;
    cin >> head;
    cout << head;
    // head = reverse(head);
    // head = recReverse(head);
    node *mid = midPoint(head);
    cout << mid->data << endl;
    // cout << head;

    // print(head);

    return 0;
}