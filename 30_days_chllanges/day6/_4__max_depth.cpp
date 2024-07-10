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
  int maxDepth(Node *root);
};
void Node::inOrder(Node *root)
{
  // base case

  if (root == nullptr)
  {
    return;
  }
  // left
  inOrder(root->left);
  cout << root->data << " ->";
  inOrder(root->right);
}
int Node::maxDepth(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return 0;
  }
  return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

// main start here ...
int main()
{
  Node *root = new Node(34);
  root->left = new Node(5);
  root->right = new Node(6);
  root->left->left = new Node(55);
  root->left->right = new Node(6);
  root->right->left = new Node(66);
  root->right->right = new Node(9);

  cout << "in order binary tree traversal: " << endl;
  root->inOrder(root);
  cout<<endl;
  int max = root->maxDepth(root);
  cout << "maximum depth of the node: " << max << endl;
  return 0;
}