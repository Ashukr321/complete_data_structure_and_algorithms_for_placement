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
  static Node *insertInBst(Node *&root, int data); // Pass by reference
  static bool searchInBst(Node *root, int target);
};

bool Node::searchInBst(Node *root, int target)
{
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
  if (root->data < target)
  {
    return searchInBst(root->right, target);
  }
}

void Node::inOrderTraversal(Node *root)
{
  if (root == nullptr)
  {
    return;
  }
  inOrderTraversal(root->left);
  cout << root->data << " ->";
  inOrderTraversal(root->right);
}
Node *Node::insertInBst(Node *&root, int data) // Pass by reference
{
  if (root == nullptr)
  {
    return new Node(data);
  }
  if (root->data > data)
  {
    root->left = insertInBst(root->left, data);
  }
  else if (root->data < data)
  {
    root->right = insertInBst(root->right, data);
  }
  return root;
}

int main()
{
  Node *root = nullptr;
  int size;
  cout << "Enter the size of the linked list :" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the tree data:" << endl;
    cin >> n;
    root = Node::insertInBst(root, n); // Assign the result to root
  }
  cout << "Traverse the tree node:" << endl;
  Node::inOrderTraversal(root);
  cout << endl; // Add a newline at the end
  int target;
  cout << "Enter the target element that you want to search in the binary search tree:" << endl;
  cin >> target;

  if (Node::searchInBst(root, target))
  {
    cout << "Element found in the binary search tree" << endl;
  }
  else
  {
    cout << "Element not found in the binary search tree" << endl;
  }
  return 0;
}