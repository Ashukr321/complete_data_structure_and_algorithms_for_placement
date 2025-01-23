//preprocessor
#include<iostream>
using namespace std;

// class Node
class Node{
  public:
  int data;
  Node * left;
  Node * right;
  //constructor
  Node(int data){
    this->data = data;
    this->left =nullptr;
    this->right = nullptr;
  }
};

void preOrder(Node * root){
  // base case 
  if(root ==nullptr)
  {
    return;
  }
  cout<<root->data<<" ,";
  preOrder(root->left);
  preOrder(root->right);
}


void insertNodeAtLeft(Node * & root,int data){
  
  // check 
  if(root==nullptr){
    root = new Node(data);
    return;
  }
  // create temp Node that point to the root 
  Node * temp = root;
  while(temp->left!=nullptr){
    temp= temp->left;
  }
  temp->left = new Node(data);
}

//main start here ...
int main(){
  Node * root = nullptr;
  insertNodeAtLeft(root,10);
  insertNodeAtLeft(root,20);
  insertNodeAtLeft(root,30);
  preOrder(root);
  return 0;
}