#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

class Node{
  public:
  int data;
  Node * left;
  Node * right;
  Node(int data){
    this->data = data;
    this->left = nullptr;
    this->right =nullptr;
  }
  static int heightOfTree(Node * root);
  static  int minHeightOfTree(Node * root);
};

int Node::heightOfTree(Node * root){
  if(root== nullptr){
    return 0;
  };
  int leftHeight = heightOfTree(root->left);
  int rightHeight= heightOfTree(root->right);
  return 1 + max(leftHeight, rightHeight);
}

int Node::minHeightOfTree(Node * root){
  if(root==nullptr){
    return 0;
  }
  int leftHeight = minHeightOfTree(root->left);
  int rightHeight = minHeightOfTree(root->right);
  return 1+min(leftHeight,rightHeight);
}

int main(){
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

  int heightOfTree = Node::heightOfTree(root);
  cout << "Maximum Height of tree is : " << heightOfTree << endl;
  int minHeight = Node::minHeightOfTree(root);
  cout << "Minimum Height of tree is : " << minHeight << endl;
  return 0;
}