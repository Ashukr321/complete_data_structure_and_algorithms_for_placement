// preprocessor
#include <iostream>
#include <math.h>
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
  };

  static void inOrder(Node *root);
  static int height(Node *root);
};
void Node::inOrder(Node *root)
{
  if (root == nullptr)
    return;
  inOrder(root->left);
  cout << root->data << " ->";
  inOrder(root->right);
}

int Node::height(Node *root)
{
  if (root == nullptr)
  {
    return 0;
  }
  return 1 + max(height(root->left), height(root->right));
}

// main start here ...
int main()
{
  Node *root = new Node(23);
  root->left = new Node(23);
  root->right = new Node(23);
  root->left->left = new Node(23);
  root->left->right = new Node(23);
  root->right->left = new Node(23);
  root->right->right = new Node(23);
  // display node
  Node::inOrder(root);
  cout << endl;
  cout << "height of the binary tree:" << Node::height(root) << endl;
  return 0;
}