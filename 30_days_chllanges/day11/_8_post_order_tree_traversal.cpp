//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node * left;
  Node *right;
  Node(int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  };
  // member function 
  static void  postOrder(Node * root);
};

void Node::postOrder(Node * root){
  if(root== nullptr){
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->data<<" ->";
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
  cout<<"Display the node: "<<endl;
  Node::postOrder(root);
  
  return 0;
}