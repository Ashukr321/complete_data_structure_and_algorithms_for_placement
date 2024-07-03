// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;
  Node(int data)
  {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
  void inOrder(Node *root);
  void insertAtRight(Node *root, int data);
};

void Node::inOrder(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return;
  }
  inOrder(root->left);
  cout << root->data << " =>";
  inOrder(root->right);
}

void Node::insertAtRight(Node *root, int data)
{
  // base
  if (root == nullptr)
  {
    return;
  }
  Node *current = root;
  while (current->right != nullptr)
  {
    current = current->right;
  }
  current->right = new Node(data);
}

// main start here ...
int main()
{
  Node *root = new Node(1);
  root->insertAtRight(root, 2);
  root->insertAtRight(root, 10);
  cout << "in order traversal  of the binary tree" << endl;
  root->inOrder(root);
  return 0;
}