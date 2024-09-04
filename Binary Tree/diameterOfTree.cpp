// levelorder print it level wise
// max level = height
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

// void printPreorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     // otherwise, root left right
//     cout << root->data << " ";
//     printPreorder(root->left);
//     printPreorder(root->right);
// }

// void printInorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     // otherwise, left root right
//     printInorder(root->left);
//     cout << root->data << " ";
//     printInorder(root->right);
// }

// void printPostorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     // otherwise, left right root
//     printPostorder(root->left);
//     printPostorder(root->right);
//     cout << root->data << " ";
// }

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

// void printKthLevel(node *root, int k)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     if (k == 1)
//     {
//         cout << root->data << " ";
//         return;
//     }
//     printKthLevel(root->left, k - 1);
//     printKthLevel(root->right, k - 1);
//     return;
// }

// void printAllLevel(node *root)
// {
//     int h = height(root);
//     for (int i = 1; i <= h; i++)
//     {
//         printKthLevel(root, i);
//         cout << endl;
//     }
//     return;
// }

int count(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

// preorder traverse
// int diameter(node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int h1 = height(root->left);
//     int h2 = height(root->right);

//     int op1 = h1 + h2;
//     int op2 = diameter(root->left);
//     int op3 = diameter(root->right);
//     return max(op1, max(op2, op3));
// }

// bottom up approach (optimized)postorder traversal
class Pair
{
public:
    int height;
    int diameter;
};

Pair fastDiameter(node *root)
{
    Pair p;
    if (root == NULL)
    {
        p.diameter = p.height = 0;

        return p;
    }

    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height, right.height) + 1;
    p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
    return p;
}

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main()
{
    node *root = buildTree();
    // printPreorder(root);
    // cout << endl;
    // printInorder(root);
    // cout << endl;
    // printPostorder(root);
    // cout << endl;
    // cout << height(root) << endl;
    // cout << endl;
    // printKthLevel(root, 3);
    // cout << endl;
    // cout << endl;
    // printAllLevel(root);

    // cout << count(root) << endl;

    // cout << diameter(root) << endl;

    Pair p = fastDiameter(root);
    cout << p.height << endl;
    cout << p.diameter << endl;

    return 0;
}

// worst case complexity = O(N^2)
// O(N) - using BFS