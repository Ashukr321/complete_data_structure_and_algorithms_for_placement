//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node * left; 
  Node * right;
  Node (int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
  void preOrder(Node *root);
  Node * insertInBst(Node * root,int data);
};

void Node::preOrder(Node * root){
  // base case 
  if(root == nullptr){
    return;
  }
  cout<<root->data<< " > ";
  preOrder(root->left);
  preOrder(root->right);
}

Node * Node::insertInBst(Node * root , int data){
  //base case 
  if( root == nullptr){
    return new Node ( data);
  }
  if(data < root->data){
    root->left = insertInBst(root->left, data);
  }
  else if(data > root->data){
    root->right = insertInBst(root->right, data);
  }
  return root;
}

//main start here ...
int main(){
  Node * root = new Node(10);
  root = root->insertInBst(root, 5);
  root = root->insertInBst(root, 15);
  root = root->insertInBst(root, 3);
  root = root->insertInBst(root, 7);
  root = root->insertInBst(root, 12);
  root = root->insertInBst(root, 18);
  cout<<"pre order traversal "<<endl;
  root->preOrder(root);
  return 0;
}

