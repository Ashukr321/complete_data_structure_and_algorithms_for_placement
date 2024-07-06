//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node  * left ; 
   Node * right ; 
   Node(int data){
    this->data  = data;
    this->left = nullptr;
    this ->right   = nullptr;
   }
   // create the function  that display the node int he inOrder  
   void inOrder(Node * root);
};
void Node::inOrder(Node * root){
  // base case 
  if(root == nullptr){
    return;
  }
  // left
  inOrder(root->left);
  cout<<root->data<<"  -> ";
  inOrder(root->right);
}


//main start here ...
int main(){
  Node * root = new Node(23);
  root->left = new Node(3);
  root->right = new Node(4);
  root->left->left = new Node(455);
  root ->left ->right = new Node(5);
  root -> right ->left = new Node(55);
  root ->right->right = new  Node(45);

  // print the node in the inorder traversal 
  cout<<"print the node in the inOrder traversal : "<<endl;
  root->inOrder(root);
  return 0;
}