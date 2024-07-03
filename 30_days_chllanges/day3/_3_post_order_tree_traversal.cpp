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
  void postOrder(Node *root);
};
void Node::postOrder(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " -> ";
}
// main start here ...
int main()
{
  Node *root = new Node(5);
  root->left = new Node(3);
  root->right = new Node(7);
  root->left->left = new Node(2);
  root->left->right = new Node(4);
  root->right->left = new Node(6);
  root->right->right = new Node(8);
  cout << "post order tree traversal" << endl;
  root->postOrder(root);
  return 0;
}