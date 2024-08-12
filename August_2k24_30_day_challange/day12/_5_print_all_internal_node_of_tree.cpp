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
  }
  static void printInternalNode(Node *root);
};

void Node::printInternalNode(Node *root)
{
  // check worst case
  if (root == nullptr)
  {
    return;
  }
  if (root->left != nullptr || root->right != nullptr)
  {
    cout << root->data << " -> ";
  }
  printInternalNode(root->left);
  printInternalNode(root->right);
}
// main start here ...
int main()
{
  Node *root = new Node(23);
  root->left = new Node(3);
  root->right = new Node(45);
  root->left->left = new Node(465);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(8);

  cout << "print all the internal Node:" << endl;
  Node::printInternalNode(root);
  return 0;
}