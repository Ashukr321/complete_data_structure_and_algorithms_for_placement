#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }

    // member function
    static void preOrder(Node *root);
    static int findMin(Node *root);
};

// preorder traversal
void Node::preOrder(Node *root)
{
    // base case
    if (root == nullptr)
    {
        return;
    }
    // recursive case
    cout << root->data << " -> ";
    preOrder(root->left);
    preOrder(root->right);
}

// find minimum value in the tree
int Node::findMin(Node *root)
{
    if (root == nullptr)
    {
        return INT_MAX;
    }
    int minVal = root->data;
    int leftMin = findMin(root->left);
    int rightMin = findMin(root->right);
    if (leftMin < minVal)
    {
        minVal = leftMin;
    }
    if (rightMin < minVal)
    {
        minVal = rightMin;
    }
    return minVal;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(12);
    root->right = new Node(23);
    root->left->left = new Node(24);
    root->left->right = new Node(234);
    root->right->left = new Node(245);
    root->right->right = new Node(4);

    cout << endl;
    cout << "Display the nodes of the binary tree: " << endl;
    Node::preOrder(root);
    cout << endl;
    cout << "Minimum of the tree: " << Node::findMin(root) << endl;
    return 0;
}