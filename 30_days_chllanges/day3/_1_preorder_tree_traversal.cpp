//preprocessor
#include<iostream>
using namespace std;

class Node {
  public:
  int data;
  Node * left ;
  Node *right;
  Node ( int data){
    this-> data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
   void preOrder(Node * root);
};

void Node::preOrder(Node * root)
{
  // base case 
  if(root==nullptr){
    return;
  }
  cout<<root->data<<" > ";
  preOrder(root->left);
  preOrder(root->right);
}


//main start here ...
int main(){
  Node * root = new Node(5);
  root->left = new Node(10);
  root->right = new Node(12);
  root->left ->left = new Node(4);
  root->left ->right = new Node(3);
  root ->right ->left = new Node(2);
  root->right ->right = new Node(1);
  cout<<"Pre order traversal of the  binary tree !"<<endl;
  root->preOrder(root);
  return 0;
}