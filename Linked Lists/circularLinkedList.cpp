// circular linked list
// it is a LL whose last node points to the head instead of null
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

void insert(node *&head, int data)
{
    node *n = new node(data);
    node *temp = head;
    n->next = head;
    if (temp != NULL)
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
    else
    {
        n->next = n;
    }
    head = n;
}

void print(node *head)
{
    node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << temp->data << endl;
    return;
}

// deletion in circular linked list
node *getNode(node *head, int data) // search function
{
    node *temp = head;
    // for all nodes except last node
    while (temp->next != head)
    {
        if (temp->data == data)
        {
            return temp;
        }
        temp = temp->next;
    }
    // out of the loop, checking for   last node
    if (temp->data == data)
    {

        return temp;
    }
    return NULL;
}

void deleteNode(node *&head, int data)
{
    node *del = getNode(head, data);
    if (del == NULL)
    {
        return;
    }
    // otherwise
    if (head == del)
    {
        head = head->next;
    }

    node *temp = head;
    // stops one step behind the node to be deleted
    while (temp->next != del)
    {
        temp = temp->next;
    }
    temp->next = del->next;
    delete del;
}

int main()
{
    node *head = NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);
    print(head);

    deleteNode(head, 30);
    print(head);
    deleteNode(head, 10);
    print(head);

    return 0;
}