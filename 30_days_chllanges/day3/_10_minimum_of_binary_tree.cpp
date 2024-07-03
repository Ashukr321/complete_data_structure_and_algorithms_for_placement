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
  int minOfBinaryTree(Node *root);
};
void Node::preOrder(Node *root)
{
  if (root == nullptr)
  {
    return;
  }
  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

int Node::minOfBinaryTree(Node *root)
{
  if (root == nullptr)
  {
    return INT_MAX;
  }
  int min = root->data;
  int leftMin = minOfBinaryTree(root->left);
  int rightMin = minOfBinaryTree(root->right);
  if (leftMin < min)
  {
    min = leftMin;
  }
  if (rightMin < min)
  {
    min = rightMin;
  }
  return min;
}
// main start here ...

int main()
{
  Node *root = new Node(10);
  root->left = new Node(12);
  root->right = new Node(23);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(1);
  cout<<"pre order tree traversal:"<<endl;
  root->preOrder(root);
  cout<<endl;
  int min = root->minOfBinaryTree(root);
  cout<<"minimum of the tree: "<<min<<endl;
  return 0;
}