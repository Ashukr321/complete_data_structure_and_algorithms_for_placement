// preprocessor
#include <iostream>
using namespace std;

//  class Node
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
};

void postOrder(Node *root)
{
  // base case
  if (root == nullptr)
    return;
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

void insertNodeAtRight(Node *root, int data)
{
  if (root == nullptr)
  {
    root = new Node(data);
    return;
  }
  Node *temp = root;
  while (temp->right != nullptr)
  {
    temp = temp->right;
  }
  temp->right = new Node(data);
}

Node insertLeft(Node * &root, int data)
{
  // base case
  if (root == nullptr)
  {
    root = new Node(data);
    
  }
  Node *temp = root;
  while (temp->left != nullptr)
  {
    temp = temp->left;
  }
  temp->left = new Node(data);
}
// main start here ...
int main()
{
  Node *root = nullptr;
  insertLeft(root, 10);
  insertLeft(root, 20);
  insertLeft(root, 30);
  insertLeft(root, 40);

  insertNodeAtRight(root, 50);
  insertNodeAtRight(root, 60);
  insertNodeAtRight(root, 70);
  postOrder(root);

  return 0;
}