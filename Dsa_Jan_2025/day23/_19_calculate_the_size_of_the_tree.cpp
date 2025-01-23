// preprocessor
#include <iostream>
using namespace std;

// class Node
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

void inorderTraversal(Node *root)
{

  // base case
  if (root == nullptr)
  {
    return;
  }
  Node *temp = root;
  inorderTraversal(temp->left);
  cout << temp->data << " ";
  inorderTraversal(temp->right);
}

void insertNodeLeft(Node *root, int data)
{
  Node *newNode = new Node(data);
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

void insertNodeRight(Node *root, int data)
{
  // create the newNode
  Node *newNode = new Node(data);

  // base cae
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

int getSizeTree(Node *root)
{
  int cnt = 0;
  // base case
  if (root == nullptr)
  {
    return cnt;
  }
  int leftsize = getSizeTree(root->left);
  int rightsize = getSizeTree(root->right);
  return 1 + leftsize + rightsize;
}

int maxOfNode(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return 0;
  }
  int max = root->data;
  int leftMax = maxOfNode(root->left);
  if (leftMax > max)
  {
    max = leftMax;
  }

  int rightMax = maxOfNode(root->right);
  if (rightMax > max)
  {
    max = rightMax;
  }

  return max;
}

// main start here ...
int main()
{

  // create the root node
  Node *root = nullptr;
  root = new Node(10);
  insertNodeLeft(root, 20);
  insertNodeRight(root, 30);
  insertNodeLeft(root, 40);
  insertNodeRight(root, 50);
  insertNodeLeft(root, 60);
  inorderTraversal(root);
  cout << endl;
  cout << "getsize of the node " << getSizeTree(root) << endl;
  cout << "Maximum node " << maxOfNode(root) << endl;
  return 0;
}