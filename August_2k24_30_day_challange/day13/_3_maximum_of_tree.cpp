//preprocessor
#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node * left;
  Node * right;
  Node(int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
  static int maxOfTree(Node * root);
};

int Node::maxOfTree(Node * root){
  if(root ==nullptr){
    return INT_MIN;
  }
  int max = root->data;
  int leftMax = maxOfTree(root->left);
  if(leftMax>max){
    max = leftMax;
  }
  int rightMax= maxOfTree(root->right);
  if(rightMax >max){
    max = rightMax;
  }
  return max;
}



//main start here ...
int main(){
  Node * root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);
  cout << "Maximum element in the tree is " << Node::maxOfTree(root);
  return 0;
}