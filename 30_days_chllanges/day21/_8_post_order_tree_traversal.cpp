//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node * left;
  Node * right;
  // constructor 
  Node(int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
  static void postOrder(Node * root);
};
void Node::postOrder(Node * root){
  // base case 
  if(root==nullptr){
    return;
  }
  // left node
  postOrder(root->left);
  //right node 
  postOrder(root->right);
  cout<<root->data<<" ->";
}

// post order follow 
// left -> right ->root

//main start here ...
int main(){
  Node * root = new Node(3);
  root->left = new Node(34);
  root->right = new Node(5);
  root->left->left = new Node(6);
  root->left->right = new Node(7);
  root->right->left = new Node(8);
  root->right->right = new Node(9);
  // display node 
  Node::postOrder(root);

  return 0;
}

