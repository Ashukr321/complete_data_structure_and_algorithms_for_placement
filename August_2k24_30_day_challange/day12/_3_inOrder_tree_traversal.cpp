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

  static void inOrderTreeTraversal(Node *root);
};
void Node::inOrderTreeTraversal(Node *root)
{
  if (root == nullptr)
  {
    return;
  }
  inOrderTreeTraversal(root->left);
  cout << root->data << " ->";
  inOrderTreeTraversal(root->right);
}
// main start here ...
int main()
{
  Node *root = new Node(34);
  root->left = new Node(44);
  root->right = new Node(56);
  root->left->left = new Node(22);
  root->right->left = new Node(34);
  Node::inOrderTreeTraversal(root);

  return 0;
}