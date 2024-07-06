//preprocessor
#include<iostream>
using namespace std;

class Node {
  public:
  int data;
  Node * left ;
  Node *right ;
  Node (int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
  void postOrder(Node *root);
  int sumNode(Node * root);
};

void Node::postOrder(Node * root){

  // base 
  if(root == nullptr){
    return ;
  }
  //left , right , root 
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->data<<" ->";
}
int Node::sumNode(Node * root){
  // base case 
  if(root == nullptr){
    return 0;
  }
  int sum = 0;
  sum+= root->data;
  sum+=sumNode(root->left);
  sum+=sumNode(root->right);
  return sum;
}
//main start here ...

int main(){
  Node * root= new Node (45);
  root->left = new Node(4);
  root->right = new Node(5);
  root->left->left= new Node (6);
  root->left->right  = new Node(8);
  root->right->left = new Node(7);
  root->right->right = new Node(9);

  // call the function 
  cout<<"post order traversal : " <<endl;
  root->postOrder(root);
  cout<<endl;
  int sumN = root->sumNode(root);
  cout<<"the sum of  all the node data : "<< sumN<<endl;
  
  return 0;
}