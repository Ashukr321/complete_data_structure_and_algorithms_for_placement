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
    this->left = NULL;
    this->right = NULL;
  }
};

void preOrder(Node *root)
{
  if (root == nullptr)
  {
    return;
  }

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void insertNodeAtLeft(Node *&root, int data)
{
  Node *newNode = new Node(data);
  // base case
  if (root == nullptr)
  {
    root = newNode;
    return;
  }
  Node *temp = root;
  while (temp->left != nullptr)
  {
    temp = temp->left;
  }
  temp->left = newNode;
}

void insertNodeAtRight(Node *&root, int data)
{
  // new Node
  Node *newNode = new Node(data);
  // base case
  if (root == nullptr)
  {
    root = newNode;
    return;
  }
  Node *temp = root;
  while (temp->right != nullptr)
  {
    temp = temp->right;
  }
  temp->right = newNode;
}

int minElement(Node *root)
{
  if (root == nullptr)
  {
    return INT_MAX; // Return INT_MAX for an empty tree
  }

  // Get the minimum from the left and right subtrees
  int leftMin = minElement(root->left);
  int rightMin = minElement(root->right);

  // Return the minimum among the current node and the valid minimums from subtrees
  return min(root->data, min(leftMin, rightMin));
}

// main start here ...
int main()
{
  Node *root = new Node(10);
  insertNodeAtLeft(root, 5);
  insertNodeAtRight(root, 15);
  insertNodeAtLeft(root->left, 2);
  insertNodeAtRight(root->left, 7);
  insertNodeAtRight(root->right, 34);

  cout << "Pre-order traversal: ";
  preOrder(root);
  cout << endl;

  cout << "Min element is: " << minElement(root) << endl;

  return 0;
}