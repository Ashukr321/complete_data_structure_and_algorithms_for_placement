#include <iostream>
#include <queue>
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
  static void levelOrderTraversal(Node *root);
  static void insertAtLeft(Node *root, int data);
  static void insertAtRight(Node *root, int data);
};

void Node::insertAtLeft(Node *root, int data)
{
  // check worst case
  if (root == nullptr)
  {
    return;
  }
  Node *current = root;
  while (current->left != nullptr)
  {
    current = current->left;
  }
  current->left = new Node(data);
}

void Node::insertAtRight(Node *root, int data)
{
  if (root == nullptr)
  {
    return;
  }
  Node *current = root;
  while (current->right != nullptr)
  {
    current = current->right;
  }
  current->right = new Node(data);
}

void Node::levelOrderTraversal(Node *root)
{
  if (root == nullptr)
  {
    return;
  }
  queue<Node *> q;
  q.push(root);
  while (!q.empty())
  {
    Node *current = q.front();
    q.pop();
    cout << current->data << " ->  ";
    if (current->left != nullptr)
    {
      q.push(current->left);
    }
    if (current->right != nullptr)
    {
      q.push(current->right);
    }
  }
  cout << endl;
}

// main start here ...
int main()
{

  Node *root = new Node(23);
  root->insertAtLeft(root, 23);
  root->insertAtRight(root, 45);
  root->left->insertAtLeft(root->left, 5);
  root->right->insertAtRight(root->right, 4);
  Node::levelOrderTraversal(root); // time complexity of the tree level Order tree traversal -> o(n);

  return 0;
}