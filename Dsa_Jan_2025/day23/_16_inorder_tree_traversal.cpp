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
};

void inorderTraversal(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return;
  }
  inorderTraversal(root->left);
  cout << root->data << " ";
  inorderTraversal(root->right);
}
// main start here ...
int main()
{
  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(5);
  root->right->left = new Node(60);

  inorderTraversal(root);
  return 0;
}