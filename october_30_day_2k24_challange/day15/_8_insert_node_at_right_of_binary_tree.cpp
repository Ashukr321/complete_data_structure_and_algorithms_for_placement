// preprocessor
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
};

void postOrderTreeTraversal(Node *root)
{
  // create the base case
  if (root == nullptr)
  {
    return;
  }
  postOrderTreeTraversal(root->left);
  postOrderTreeTraversal(root->right);
  cout << root->data << " ->";
}

void insertNodeAtRight(Node *&root, int data)
{

  // check corner case
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

// insertNodeAtLeft
void insertNodeAtLeft(Node *&root, int data)
{
  // check corner case
  if (root == nullptr)
  {
    root = new Node(data);
    return;
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
  Node * root = new Node(12);
  insertNodeAtLeft(root,1);
  insertNodeAtRight(root,2);
  insertNodeAtLeft(root->left,3);
  insertNodeAtRight(root->left,4);
   
  insertNodeAtLeft(root->right,5);
  insertNodeAtRight(root->right,6);
  postOrderTreeTraversal(root);

  return 0;
}