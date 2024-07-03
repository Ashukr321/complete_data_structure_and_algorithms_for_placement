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
  Node *insertInBst(Node *root, int data);
  void inOrder(Node *root);
  Node *findMax(Node *root);
};

Node *Node::insertInBst(Node *root, int data)
{
  if (root == nullptr)
  {
    return new Node(data);
  }
  if (root->data > data)
  {
    root->left = insertInBst(root->left, data);
  }
  else if (root->data < data)
  {
    root->right = insertInBst(root->right, data);
  }
  return root;
}

Node *Node::findMax(Node *root)
{
  if (root == nullptr)
  {
    return root;
  }
  while (root->right!= nullptr)
  {
    root = root->right;
  }
  return root;
}

void Node::inOrder(Node *root)
{
  if (root == nullptr)
  {
    return;
  }
  inOrder(root->left);
  cout << root->data << " =>";
  inOrder(root->right);
}

int main()
{
  Node *root = nullptr;
  root = root->insertInBst(root, 5);
  root = root->insertInBst(root, 23);
  root = root->insertInBst(root, 3);
  root = root->insertInBst(root, 7);
  root = root->insertInBst(root, 5);
  cout << "in order traversal :" << endl;
  root->inOrder(root);
  cout << endl;
  Node *maxNode = root->findMax(root);
  if (maxNode!= nullptr)
  {
    cout << "max node is " << maxNode->data << endl;
  }
  return 0;
}