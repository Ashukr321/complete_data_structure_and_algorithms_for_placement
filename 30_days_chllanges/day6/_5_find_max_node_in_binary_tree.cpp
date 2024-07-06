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
  };
  void perOrder(Node *root);
  int maxNode(Node *root);
};

void Node::perOrder(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return;
  }
  cout << root->data << " ->";
  perOrder(root->left);
  perOrder(root->right);
}

int Node::maxNode(Node *root)
{
  if (root == nullptr)
  {
    return INT_MIN;
  }
  int max = root->data;
  int leftMax = maxNode(root->left);
  int rightMax = maxNode(root->right);
  if (leftMax > max)
  {
    max = leftMax;
  }
  //
  if (rightMax > max)
  {
    max = rightMax;
  }
  return max;
}

// main start here ...

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(55);
  root->right->left = new Node(56);
  root->right->right = new Node(555);
  // call the function on the class node
  cout << "pre order traversal : " << endl;
  root->perOrder(root);
  cout << endl;
  int max = root->maxNode(root);
  cout << "the maximum node the binary tree : " << max << endl;

  return 0;
}