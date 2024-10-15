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

void insertNodeLeft(Node *&root, int data)
{
  // check corner case
  if (root == nullptr)
  {
    // create  the newNode and return
    root = new Node(data);
    return;
  }
  Node * temp = root;
  // move to the left
  while(temp->left != nullptr)
  {
    temp = temp->left;
  }
  // create the newNode and insert into the left of the node
  temp->left = new Node(data);
}



// traverse the tree by the preOrderTreeTraversal
void preOrderTreeTraversal(Node *root)
{
  // create the base case
  if (root == nullptr)
  {
    return;
  }
  cout << root->data << " ->";
  // recursive call the preOrderTreeTraversal
  preOrderTreeTraversal(root->left);
  preOrderTreeTraversal(root->right);
}

// main start here ...
int main()
{
  // create the root node
  Node * root = new Node(10);
  insertNodeLeft(root,1);
  insertNodeLeft(root,2);
  insertNodeLeft(root,3);
  insertNodeLeft(root,4);

  cout << "print the tree in preOrder Tree traversal -> root ->left->right" << endl;
  preOrderTreeTraversal(root);

  return 0;
}