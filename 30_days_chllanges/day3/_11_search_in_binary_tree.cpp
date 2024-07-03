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
  bool searchInBinaryTree(Node *root, int target);
};

void Node::preOrder(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return;
  }
  cout << root->data << " > ";
  preOrder(root->left);
  preOrder(root->right);
}

bool Node::searchInBinaryTree(Node *root, int target)
{
  // base case
  if (root == nullptr)
  {
    return false;
  }
  if (root->data == target)
  {
    return true;
  }
  return searchInBinaryTree(root->left, target) || searchInBinaryTree(root->right, target);
}

// main start here...
int main()
{
  int target;

  cout << "Enter target element" << endl;
  cin >> target;
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(34);
  root->left->right = new Node(4);

  root->right->left = new Node(4);
  root->right->right = new Node(40);
  cout << "preOrder traversal" << endl;
  root->preOrder(root);
  cout << endl;
  if (root->searchInBinaryTree(root, target))
  {
    cout << "found" << endl;
  }
  else
  {
    cout << "not found" << endl;
  }
  return 0;
}