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
  static void levelOrderTreeTraversal(Node *root);
};
void Node::levelOrderTreeTraversal(Node *root)
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
    cout << current->data << " ";
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

  Node *root = new Node(3);
  root->left = new Node(45);
  root->right = new Node(455);
  root->left->left = new Node(5);
  root->left->right = new Node(56);
  root->right->left = new Node(9);
  root->right->right = new Node(6);
  Node::levelOrderTreeTraversal(root);
  return 0;
}