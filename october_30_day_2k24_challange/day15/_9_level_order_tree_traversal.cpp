// preprocessor
#include <iostream>
#include <queue>
#include <algorithm>
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

void inOrderTreeTraversal(Node *root)

{
  // create the base case
  if (root == nullptr)
  {
    return;
  }
  inOrderTreeTraversal(root->left);
  cout << root->data << "->";
  inOrderTreeTraversal(root->right);
}
//  level order traversal we have to use the queue data structure
void levelOrderTreeTraversal(Node *root)
{
  // check the corner case
  if (root == nullptr)
  {
    return;
  }
  // create the queue
  queue<Node *> q;
  q.push(root);
  while (!q.empty())
  {
      Node * current = q.front();
      q.pop();
      cout<<current->data<<"->";
      if(current->left!=nullptr){
        q.push(current->left);
      }
      if(current->right!=nullptr){
        q.push(current->right);
      }
  }
}

// main start here ...
int main()
{
  Node *root = new Node(10);
  insertNodeAtLeft(root->left, 5);
  insertNodeAtRight(root->left, 3);
  insertNodeAtLeft(root->right, 34);
  insertNodeAtRight(root->right, 4);
  inOrderTreeTraversal(root);
  cout << endl;
  levelOrderTreeTraversal(root);
  return 0;
}