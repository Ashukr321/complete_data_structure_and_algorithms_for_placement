//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node * left;
  Node *right;
  // constructor 
  Node(int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  };
  // member function 
  static void preOrder(Node* root);
};

void Node::preOrder(Node * root){
  if(root== nullptr){
    return;
  }

  // recursive call the fuction 
  cout<<root->data<<" ->";
  preOrder(root->left);
  preOrder(root->right);
}
//main start here ...
int main(){
  
  Node * root = new Node (13);
  root->left= new Node(32);
  root->right = new Node(42);
  root->left->left = new Node(12);
  root->left->right = new Node(23);
  root->right->left = new Node(43);
  root->right->right = new Node(44);
  cout<<"print the node: "<<endl;
  Node::preOrder(root);ccl
  return 0;

}