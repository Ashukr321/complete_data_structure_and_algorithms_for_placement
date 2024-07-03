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
  void preOrder(Node *root);
  int sizeOfBinaryTree(Node *root);
};
void Node::preOrder(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return;
  }
  cout << root->data << " => ";
  preOrder(root->left);
  preOrder(root->right);
}

int Node::sizeOfBinaryTree(Node *root)
{
  if (root == 0)
  {
    return 0;
  }
  return 1 + sizeOfBinaryTree(root->left) + sizeOfBinaryTree(root->right);
}
// main start here ...
int main()
{
  Node *root = new Node(10);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  cout << "pre order traversal: " << endl;
  root->preOrder(root);
  cout<<endl;
  cout << "the size of the tree: " << root->sizeOfBinaryTree(root) << endl;
  return 0;
}