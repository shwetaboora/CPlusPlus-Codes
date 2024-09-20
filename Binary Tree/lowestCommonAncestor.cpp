// levelorder print it level wise
// max level = height
#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void levelOrderBuild(node *&root)
{
    int d;
    cin >> d;
    root = new node(d);
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *n = q.front();
        q.pop();
        int c1, c2;
        cin >> c1 >> c2;
        if (c1 != -1)
        {
            n->left = new node(c1);
            q.push(n->left);
        }
        if (c2 != -1)
        {
            n->right = new node(c2);
            q.push(n->right);
        }
    }
}

void levelOrderPrint(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *n = q.front();
        q.pop();
        if (n == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {

            cout << n->data << " ";
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
    }
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls, rs) + 1;
}

istream &operator>>(istream &is, node *&root)
{
    levelOrderBuild(root);
    return is;
}

ostream &operator<<(ostream &os, node *root)
{
    levelOrderPrint(root);
    return os;
}

void printKthLevel(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    printKthLevel(root->left, k - 1);
    printKthLevel(root->right, k - 1);
}

int printAtDistanceK(node *root, node *target, int k)
{
    // base case
    if (root == NULL)
    {
        return -1;
    }
    // reach the target the node
    if (root == target)
    {
        printKthLevel(target, k);
        return 0;
    }
    // next step
    int DL = printAtDistanceK(root->left, target, k);
    if (DL != -1)
    {
        // again there are 2 cases
        // ancestor itself or you need go to the right ancestor
        if (DL + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printKthLevel(root->right, k - 2 - DL);
        }
        return 1 + DL;
    }
    int DR = printAtDistanceK(root->right, target, k);
    if (DR != -1)
    {
        if (DR + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printKthLevel(root->left, k - 2 - DR);
        }
        return 1 + DR;
    }
    // node was not present in left and right of subtree of a given node
    return -1;
}

int main()
{

    node *root = NULL;
    cin >> root;
    if (root->left && root->left->left)
    {
        node *target = root->left->left;
        cout << root << endl;
        int k = 2;
        printAtDistanceK(root, target, k);
    }
    else
    {
        cout << "target node doesnot exist" << endl;
    }

    return 0;
}

// worst case complexity = O(N^2)
// O(N) - using BFS