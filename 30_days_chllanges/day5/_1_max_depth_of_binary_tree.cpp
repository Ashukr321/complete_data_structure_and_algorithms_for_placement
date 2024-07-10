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
    this->left = nullptr; // nullptr is the type safe 
    this->right = nullptr;
  }
  // print 
  void postOrder(Node *left);
  int maxDepth(Node * root);
};

// here we use te scope :: resolution 
void Node::postOrder(Node *root){
  // base case 
  if(root == nullptr){
    return ;
  }
  // left
  postOrder(root->left);
  cout<<root->data<<" =>";
  postOrder(root->right);

}

//maxDepth of  the Node 
int Node::maxDepth(Node * root){
  if(root ==nullptr){
    return 0;
  }
  return 1+max(maxDepth(root->left),maxDepth(root->right));
}

//main start here ...
int main(){
  Node * root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);
  root->right->left = new Node(60);
  root->right->right = new Node(70);
  cout<<"post order traversal :"<<endl;
  root->postOrder(root);
  cout<<endl;
  cout<<"max depth of the tree:"<<endl;
 int max =  root->maxDepth(root);
 cout << max << endl;
 return 0;
}

/*
⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐
concept revised 
constructor 
  types  
    default
    parameterized
    copy constructor -> when we take the reference of the object of the same class 
destructor -> this will call automatically 

scope resolution : :: 

data members -> variables that declare inside the class 

local variables -> variables that defined inside the function 

shadowing -> when we have a global variable and the same name we have in the local variables then we can say this 
is the shadowing   of the variables 

*/