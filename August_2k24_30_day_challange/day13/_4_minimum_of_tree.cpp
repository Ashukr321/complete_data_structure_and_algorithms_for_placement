// preprocessor
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
  static void insertAtLeft(Node *root, int data);
  static void insertAtRight(Node *root, int data);
  static int minimumOfTree(Node *root);
};
void Node::insertAtLeft(Node *root, int data)
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
    q.pop(); // this will remove element from the front of the queue
    cout << current->data << endl;
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

int Node::minimumOfTree(Node *root)
{
  if (root == nullptr)
  {
    return INT_MAX;
  }
  int min = root->data;
  int leftMin = minimumOfTree(root->left);
  int rightMin = minimumOfTree(root->right);
  if (leftMin < min)
  {

    min = leftMin;
  }
  if (rightMin < min)
  {
    min = rightMin;
  }
  return min;
}
// main start here ...
int main()
{
  Node *root = new Node(3);
  Node::insertAtLeft(root, 34);
  Node::insertAtRight(root, 45);
  Node::insertAtLeft(root->left, 5);
  Node::insertAtRight(root->left, 56);
  Node::insertAtRight(root->right, 576);
  Node::insertAtLeft(root->right, 8);
  cout << "level order tree traversal :" << endl;
  Node::levelOrderTraversal(root);
  cout << "the minimum of the tree: " << Node::minimumOfTree(root);

  return 0;
}