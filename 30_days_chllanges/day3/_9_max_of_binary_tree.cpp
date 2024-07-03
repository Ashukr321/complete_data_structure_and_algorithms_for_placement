#include <iostream>
#include <climits>
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
  };
  void inOrder(Node *root);
  int maxOfBinaryTree(Node *root);
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
  cout << root->data << " => ";
  // right call
  inOrder(root->right);
}

int Node::maxOfBinaryTree(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return INT_MIN;
  }
  int max = root->data;
  int leftMax = maxOfBinaryTree(root->left);
  int rightMax = maxOfBinaryTree(root->right);
  if (leftMax > max)
  {
    max = leftMax;
  }
  if (rightMax > max)
  {
    max = rightMax;
  }
  return max;
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
  root->right->right = new Node(70);
  cout << "in order traversal" << endl;
  root->inOrder(root);
  cout << endl;
  int max = root->maxOfBinaryTree(root);
  cout << "the maximum of the binary tree: " << max << endl;
  return 0;
}