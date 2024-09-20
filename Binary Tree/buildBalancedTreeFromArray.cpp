// replace each node by sum of child nodes
// donot change leaf nodes

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

node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void BFS(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *f = q.front();
        if (f == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {

            cout << f->data << " ";
            q.pop();
            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
    }
    return;
}

class HBPair
{
public:
    int height;
    bool balance;
};

HBPair isHeightBalanced(node *root)
{
    HBPair p;
    if (root == NULL)
    {
        p.height = 0;
        p.balance = true;
        return p;
    }

    // recursive case (post order traversal)
    HBPair left = isHeightBalanced(root->left);
    HBPair right = isHeightBalanced(root->right);
    p.height = max(left.height, right.height) + 1;
    if (abs(left.height - right.height) <= 1 && left.balance && right.balance)
    {
        p.balance = true;
    }
    else
    {
        p.balance = false;
    }
    return p;
}

node *buildTreeFromArray(int *a, int s, int e)
{
    // base case
    if (s > e)
    {
        return NULL;
    }

    // recursive case

    int mid = (s + e) / 2;
    node *root = new node(a[mid]);
    root->left = buildTreeFromArray(a, s, mid - 1);
    root->right = buildTreeFromArray(a, mid + 1, e);
    return root;
}

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main()
{
    // node *root = buildTree();

    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    node *root = buildTreeFromArray(a, 0, n - 1);
    BFS(root);
    return 0;
}
