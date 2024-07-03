#include<iostream>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int data) {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
  int heightOfTree(Node *root);
};

int Node::heightOfTree(Node *root) {
  if (root == nullptr) {
    return 0;
  }
  int leftHeight = heightOfTree(root->left);
  int rightHeight = heightOfTree(root->right);
  return max(leftHeight, rightHeight) + 1;
}

// main starts here ...
int main() {
  Node *root = new Node(5);
  root->left = new Node(3);
  root->right = new Node(7);
  root->left->left = new Node(2);
  root->left->right = new Node(4);
  root->right->left = new Node(6);
  root->right->right = new Node(8);

  cout << "Height of tree: " << root->heightOfTree(root) << endl;

  return 0;
}
