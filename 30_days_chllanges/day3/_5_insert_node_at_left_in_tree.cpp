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
  }
  void preOrder(Node *root);
  void insertAtLeft(Node *root, int data);
};
void Node::preOrder(Node *root)
{
  // base
  if (root == nullptr)
  {
    return;
  }
  cout << root->data << " >";
  // recursive calling the function
  preOrder(root->left);
  preOrder(root->right);
}

void Node::insertAtLeft(Node *root, int data)
{
  // base
  if (root == nullptr)
  {
    return;
  }
  Node *current = root;
  while (current->left != nullptr)
  {
    current = current->left;
  }
  current ->left = new Node(data);
}

// main start here ...

int main()
{
  Node *root = new Node(1);

  root->insertAtLeft(root, 10);
  root->insertAtLeft(root, 20);
  cout << "pre order traversal of the binary tree ! " << endl;
  root->preOrder(root);
  return 0;/
}