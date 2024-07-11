// preprocessor
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
  };
  // member function
  static void inOrder(Node *root);
};
void Node::inOrder(Node *root)
{
  //  base case
  if (root == nullptr)
  {
    return;
  }
  // left recursion call
  inOrder(root->left);
  cout << root->data << " ->";
  inOrder(root->right);
}

// main start here ...
int main()
{

  Node *root = new Node(2);
  root->left = new Node(1);
  root->right = new Node(3);
  root->left->left = new Node(0);
  root->left->right = new Node(4);
  root->right->left = new Node(5);
  root->right->right = new Node(6);
  // display the node
  cout << "print the tree: in order " << endl;
  Node::inOrder(root);
  return 0;
}