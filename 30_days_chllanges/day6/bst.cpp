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
  // function declaration
  void inOrder(Node *root);
  Node *insertInBst(Node *root, int data);
};
void Node::inOrder(Node *root)
{
  // base case
  if (root == nullptr)
  {
    return;
  }
  // left
  inOrder(root->left);
  cout << root->data <<endl;
  inOrder(root->right);
}
Node * insertInBst(Node * root,int data){
  // base case 
  if( root == nullptr){
    return new Node(data);
  }
  // left
  if(root->data>data){
    root->left = insertInBst(root->left,data);
  }
  if(root->data<data){
    root->right = insertInBst(root->right ,data);
  }
  return root;
}
// main start here ...
int main()
{
  cout << "insert in bst" << endl;
  Node *root = nullptr;
  root = root->insertInBst(root,5);
  root = root->insertInBst(root,4);
  root = root->insertInBst(root,6);
  root = root->insertInBst(root,3);
  root = root->insertInBst(root,7);
  // print the node in the in order 
  cout<<"print the node in the in order traversal : "<<endl;
  root->inOrder(root);

  return 0;
}