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
  void inOrder(Node *root);
  Node *insertInBst(Node *root, int data);
  bool isValidBst(Node *root, int min = INT_MIN, int max = INT_MAX);
};

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

Node *Node::insertInBst(Node *root, int data)
{
  if (root == nullptr)
  {
    return new Node(data);
  }
  if (data < root->data)
  {
    root->left = insertInBst(root->left, data);
  }
  else if (data > root->data)
  {
    root->right = insertInBst(root->right, data);
  }
  return root;
}

bool Node::isValidBst(Node *root, int min, int max)
{
  if (root == nullptr)
  {
    return true;
  }
  if (root->data < min || root->data > max)
  {
    return false;
  }
  return isValidBst(root->left, min, root->data - 1) &&
         isValidBst(root->right, root->data + 1, max);
}

int main()
{
  Node *root = nullptr;
  root = root->insertInBst(root, 50);
  root = root->insertInBst(root, 30);
  root = root->insertInBst(root, 20);
  root = root->insertInBst(root, 40);
  root = root->insertInBst(root, 70);
  root = root->insertInBst(root, 60);
  cout << "In order traversal : " << endl;
  root->inOrder(root);
  cout << endl;
  cout << "Check if the BST is valid or not! " << endl;
  if (root->isValidBst(root))
  {
    cout << "BST is valid" << endl;
  }
  else
  {
    cout << "BST is not valid" << endl;
  }
  return 0;
}