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
  };
  void preOrder(Node *root);
  int maxNode(Node *root);
};

void Node::preOrder(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return;
  }
  // recursive case
  cout << root->data << " ->";
  preOrder(root->left);
  preOrder(root->right);
};

int Node::maxNode(Node * root){
  // base case
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
  if (rightMax > max)
  {
    max = rightMax;
  }
  return max;
}
// main start here ...
int main()
{
  Node *root = new Node(34);
  root->left = new Node(4);
  root->right = new Node(53);
  root->left->left = new Node(5);
  root->left->right = new Node(9);
  root->right->left = new Node(8);
  root->right->right = new Node(34);
  // print the node
  cout << "pre order traversal of the node: " << endl;
  root->preOrder(root);
  cout << endl;
  int max = root->maxNode( root);
  cout << "the maximum of the  tree: " << max << endl;

  return 0;
}