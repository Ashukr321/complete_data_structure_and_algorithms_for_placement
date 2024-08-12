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
  static void postOrderTreeTraversal(Node *root);
};

void Node::postOrderTreeTraversal(Node *root)
{
  if (root == nullptr)
  {
    return;
  }
  postOrderTreeTraversal(root->left);
  postOrderTreeTraversal(root->right);
  cout << root->data << " ->";
}
// main start here ...
int main()
{

  Node *root = new Node(23);
  root->left = new Node(34);
  root->right = new Node(35);
  root->left->left = new Node(5);
  root->left->right = new Node(5);
  root->right->left = new Node(5);
  root->right->right = new Node(7);
  Node::postOrderTreeTraversal(root);
  return 0;
}