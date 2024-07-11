// preprocessor
#include <iostream>
using namespace std;

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
    this->left = nullptr;
    this->right = nullptr;
  }
  // member function
  static void inOrder(Node *root);
  static bool searchInBinaryTree(Node *root, int target);
};

void Node::inOrder(Node *root)
{
  if (root == nullptr)
  {
    return;
  }
  // recursive call the fuction
  inOrder(root->left);
  cout << root->data << " =>";
  inOrder(root->right);
}


bool Node::searchInBinaryTree(Node *root, int target)
{
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

// main start here ...
int main()
{
  Node *root = new Node(13);
  root->left = new Node(32);
  root->right = new Node(4);
  root->left->left = new Node(5);
  root->left->right = new Node(6);
  root->right->left = new Node(7);
  root->right->right = new Node(8);
  int target;
  // in order tree traversal
  cout << "in order tree traversal => " << endl;
  Node::inOrder(root);
  cout << endl;
  cout << "Enter your target element : " << endl;
  cin >> target;
  if (Node::searchInBinaryTree(root, target))
  {
    cout << "Target element found" << endl;
  }
  else
  {
    cout << "Target element not found" << endl;
  }
  return 0;
}