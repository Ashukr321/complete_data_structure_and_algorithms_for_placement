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
  }

  static void levelOrderTraversal(Node *root);
  static void insertNodeAtLeft(Node *root, int data);
  static void insertNodeAtRight(Node *root, int data);
  static int heightOfTree(Node *root);
};

void Node::insertNodeAtLeft(Node *root, int data)
{
  // worst case
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

void Node::insertNodeAtRight(Node *root, int data)
{
  // worst case
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
  // worst case handling
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
    cout << current->data << "->";
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

int Node::heightOfTree(Node *root)
{
  if (root == nullptr)
  {
    return 0;
  }
  int leftHeight = heightOfTree(root->left);
  int rightHeight = heightOfTree(root->right);
  return max(leftHeight, rightHeight) + 1;
}

int main()
{
  Node *root = new Node(1);
  Node::insertNodeAtLeft(root, 2);
  Node::insertNodeAtRight(root, 3);
  Node::insertNodeAtLeft(root->left, 4);
  Node::insertNodeAtRight(root->left, 5);
  Node::insertNodeAtLeft(root->right, 6);
  Node::insertNodeAtRight(root->right, 7);

  Node::levelOrderTraversal(root);

  cout << "Height of the tree: " << Node::heightOfTree(root) << endl;

  return 0;
}