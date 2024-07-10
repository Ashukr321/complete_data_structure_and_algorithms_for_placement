//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node * right;
  // constructor 
  Node (int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
  void preOrder(Node  * root);
};

void Node::preOrder(Node* root){
  // base case 
  if( root == nullptr){
    return;
  }
  // process current node
  cout<<root->data<<" ->";
  preOrder(root->left);
  preOrder(root->right);
}

//main start here ...
int main(){
  Node * root = new Node(23);
  root->left = new Node(34);
  root->right = new Node(5);
  root->left->left = new Node(45);
  root->left->right = new Node(55);
  root->right->left = new Node(5);
  root->right ->right = new Node(56);
  // print the node in the  preorder traversal 
  root->preOrder(root);
  
  return 0;
}