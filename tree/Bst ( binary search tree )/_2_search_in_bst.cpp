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
  Node *insertInBst(Node *root, int data);
  void inOrder(Node *root);
  bool searchInBst(Node *root, int target);
};

Node *Node::insertInBst(Node *root, int target)
{
  // base case
  if (root == nullptr)
  {
    return new Node(target);
  }
  if (root->data > target)
  {
    root->left = insertInBst(root->left, target);
  }
  if (root->data < target)
  {
    root->right = insertInBst(root->right, target);
  }

  return root;
}
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

bool Node::searchInBst(Node *root, int target)
{
  // base case
  if (root == nullptr)
  {
    return false;
  }
  if (root->data == target)
  {
    return true;
  }
  if (root->data > target)
  {
    return searchInBst(root->left, target);
  }
  else
  {
    return searchInBst(root->right, target);
  }
}

// main start here ...
int main()
{
  //  duplicate element is not allow
  Node *root = new Node(5);
  root = root->insertInBst(root, 4);
  root = root->insertInBst(root, 2);
  root = root->insertInBst(root, 1);
  root = root->insertInBst(root, 6);
  root = root->insertInBst(root, 7);

  cout << "in order traversal" << endl;
  root->inOrder(root);

  int target;
  cout<<endl;
  cout << "Enter the target element that you want to find : " << endl;
  cin >> target;
  if(root->searchInBst(root,target)){
    cout << "Element found" << endl;
  }else {
    cout << "Element not found" << endl;
  }

  return 0;
}