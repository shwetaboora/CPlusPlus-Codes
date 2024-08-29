#include <iostream>
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

void printPreorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // otherwise, root left right
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // otherwise, left root right
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

void printPostorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // otherwise, left right root
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = buildTree();
    printPreorder(root);
    cout << endl;
    printInorder(root);
    cout << endl;
    printPostorder(root);
    cout << endl;

    return 0;
}