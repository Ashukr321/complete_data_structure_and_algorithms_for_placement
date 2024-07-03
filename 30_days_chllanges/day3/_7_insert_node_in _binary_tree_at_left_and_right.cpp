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
  void postOrder(Node *root);
  void insertAtLeft(Node *&root, int data);
  void insertAtRight(Node *&root, int data);
};

void Node::postOrder(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

void Node::insertAtLeft(Node *&root, int data){
  // base 
  if(root == nullptr){
    root = new Node(data);
    return;
  }
  if(root->left == nullptr){
    root->left = new Node(data);
    return;
  }
  Node * current = root;
  while( current ->left->left != nullptr){
    current = current->left;
  }
  current->left->left = new Node(data);
}

void Node::insertAtRight(Node *&root, int data){
  //base case 
  if(root == nullptr){
    root = new Node(data);
    return;
  }
  if(root->right == nullptr){
    root->right = new Node(data);
    return;
  }
  Node * current = root;
  while( current->right->right != nullptr){
    current = current->right;
  }
  current->right->right = new Node(data);
}

int main()
{
  Node * root = new Node(1);
  root->insertAtLeft(root, 2);
  root->insertAtRight(root,3);
  root->insertAtLeft(root,4);
  root->insertAtRight(root->left,5);
  root->insertAtRight(root->right,7);
  root->insertAtLeft(root->right,6);

  root->postOrder(root);
  return 0;
}