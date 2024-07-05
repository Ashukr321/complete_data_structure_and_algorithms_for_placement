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

  // function declaration
  void inOrder(Node *root);
  int sumNode(Node *root);
};

void Node::inOrder(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return;
  }
  inOrder(root->left);
  cout << root->data << " ->";
  inOrder(root->right);
}

int Node::sumNode(Node *root)
{
  if (root == nullptr)
  {
    return 0;
  }
  int sum = root->data;
  sum += sumNode(root->left);
  sum += sumNode(root->right);
  return sum;
}

// main start here ...
int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  // in order traversal
  cout << "in order traversal of the node : " << endl;
  root->inOrder(root);
  cout << endl;

  int sum = root->sumNode(root);
  cout << "the sum of the node : " << sum << endl;
  return 0;
}