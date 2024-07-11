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
  
  static void insertLeft(Node *&root, int data);
  static void insertRight(Node *&root, int data);
  static void displayNode(Node *root);
};

// insert left
void Node::insertLeft(Node *&root, int data)
{
  if (root == nullptr)
  {
    root = new Node(data);
    return;
  }
  if (root->left == nullptr)
  {
    root->left = new Node(data);
    return;
  }
  insertLeft(root->left, data);
}

void Node::insertRight(Node *&root, int data)
{
  if (root == nullptr)
  {
    root = new Node(data);
    return;
  }
  if (root->right == nullptr)
  {
    root->right = new Node(data);
    return;
  }
  insertRight(root->right, data);
}

void Node::displayNode(Node *root)
{
  // base case 
  if(root == nullptr)
  {
    return;
  }
  cout << root->data << endl;
  displayNode(root->left);
  displayNode(root->right);
}

// main start here ...
int main()
{
  Node *root = new Node(23);
  Node::insertLeft(root, 12);
  Node::insertRight(root, 45);
  Node::insertLeft(root, 7);
  Node::insertRight(root, 67);
  
  cout << "Displaying the tree:" << endl;
  Node::displayNode(root);
  
  return 0;
}