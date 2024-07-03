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

// main start here ...
int main()
{
  Node *root = new Node(5);
  root->left = new Node(10);
  root->right = new Node(12);
  root->left ->left = new Node(4);
  root->left ->right = new Node(3);
  root->right ->left = new Node(2);
  root->right ->right = new Node(1);

  cout<<" in order   tree  traversal"<<endl;
  root->inOrder(root);
  return 0;
}