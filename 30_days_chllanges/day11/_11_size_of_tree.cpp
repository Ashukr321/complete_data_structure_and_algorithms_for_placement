//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node * left;
  Node * right;
  //constructor 
  Node(int data){
    this->data = data;
    this->left= nullptr;
    this->right  = nullptr;
  }
  static void displayNode(Node  * root);
  static int sizeOfBinaryTree(Node * root); 
};

void Node::displayNode(Node *root){
  if(root == nullptr) return;
  cout<<root->data<<" -> ";
  displayNode(root->left);
  displayNode(root->right);
}
int Node::sizeOfBinaryTree(Node * root){
  if(root == nullptr) return 0;
  return 1 + sizeOfBinaryTree(root->left) + sizeOfBinaryTree(root->right);
}
//main start here ...
int main(){
  Node * root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  Node::displayNode(root);
  cout<<endl;
  cout<<Node::sizeOfBinaryTree(root)<<endl;
  
  
  return 0;
}