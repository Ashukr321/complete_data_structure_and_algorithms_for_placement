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

  void inOrder(Node *root);
  Node *insertInBst(Node *root, int data);
  Node *findMin(Node *root);
};

void Node::inOrder(Node *root)
{
  if (root == nullptr)
  {
    return;
  }
  inOrder(root->left);
  cout << root->data << " ->";
  inOrder(root->right);
}

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

Node *Node::findMin(Node *root)
{
  if (root == nullptr)
  {
    return root;
  }
  while (root->left != nullptr)
  {
    root = root->left;
  }
  return root;
}

int main()
{
  Node *root = nullptr;
  root = root->insertInBst(root, 5);
  root = root->insertInBst(root, 3);
  root = root->insertInBst(root, 7);
  root = root->insertInBst(root, 2);
  root = root->insertInBst(root, 4);
  root = root->insertInBst(root, 6);
  cout << "in order traversal" << endl;
  root->inOrder(root);
  cout << endl;
  Node *minNode = root->findMin(root);
  if (minNode != nullptr)
  {
    cout << "min node is " << minNode->data << endl;
  }
  else
  {
    cout << "min node is nullptr" << endl;
  }
  return 0;
}