//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node  * left;
  Node * right;
  Node(int data){
    this->data= data;
    this->left  = nullptr;
    this->right = nullptr;
  }
  static void preOrder(Node * root);
};
void Node::preOrder(Node * root){
  // base case 
  if(root==nullptr){
    return;
  }
  cout<<root->data<<" ->";
  preOrder(root->left);
  preOrder(root->right);
}


//main start here ...
int main(){
  Node * root = new Node(1);
  root->left = new Node(3);
  root->right = new Node(34);
  root->left->left = new Node(5);
  root->left->right = new Node(6);
  root->right->left = new Node(7);
  root->right->right = new Node(8);
  // display node 
  Node::preOrder(root);
  
  return 0;
}