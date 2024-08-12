// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  // data members
  int data;
  Node *left;
  Node *right;

  Node(int data)
  {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
  static void preOrderTraversal(Node *root);
};

void Node::preOrderTraversal(Node *root)
{
  if (root == nullptr)
    return;
  cout << root->data << "->";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

// main start here ...
int main()
{

  Node *root = nullptr;
  root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  Node::preOrderTraversal(root);

  return 0;
}