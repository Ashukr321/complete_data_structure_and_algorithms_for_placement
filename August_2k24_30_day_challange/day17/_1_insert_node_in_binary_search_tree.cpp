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
  static void inOrderTraversal(Node *root);
  static Node *insertInBst(Node *root, int data);
};
// inorder traversal
void Node::inOrderTraversal(Node *root)
{
  if (root == nullptr)
  {
    return;
  }
  inOrderTraversal(root->left);
  cout << root->data << "->";
  inOrderTraversal(root->right);
}
// insertion in BST
Node * Node::insertInBst(Node *root, int data)
{
  if (root == nullptr)
  {
    return root = new Node(data);
  }
  if (root->data > data)
  {
    root->left = insertInBst(root->left, data);
  }
  if (root->data < data)
  {
    root->right = insertInBst(root->right, data);
  }
  return root;
}

// main start here ...
int main()
{
  Node *root = nullptr;
  int size;
  cout << "Enter the size of the tree" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the tree node data:" << endl;
    cin >> n;
    root = Node::insertInBst(root, n);
  }

  cout << "traverse tree inOrder " << endl;
  Node::inOrderTraversal(root);

  return 0;
}