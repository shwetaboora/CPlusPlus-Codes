
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

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main()
{
    node *root = buildTree();

    if (isHeightBalanced(root).balance)
    {
        cout << "balanced" << endl;
    }
    else
    {
        cout << "not balanced" << endl;
    }

    return 0;
}

// worst case complexity = O(N^2)
// O(N) - using BFS