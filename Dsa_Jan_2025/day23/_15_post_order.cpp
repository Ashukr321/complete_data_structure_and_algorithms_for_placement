// preprocessor
#include <iostream>
using namespace std;

// class Node
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
    this->left = NULL;
    this->right = NULL;
  }
};

void postOrderTraversal(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return;
  }
  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout << root->data << " ,";
}
// main start here ...
int main()
{
  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);
  root->right->left = new Node(60);
  postOrderTraversal(root);

  return 0;
}