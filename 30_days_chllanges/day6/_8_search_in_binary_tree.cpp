//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *left;
  Node * right;
  Node(int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
  // function declaration 
  void postOrder(Node * root);
  bool searchNode(Node * root,int target);
};
//postorder traversal
void Node::postOrder(Node * root){
  // base case 
  if(root== nullptr){
    return;
  }
  // left
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->data<<" ->";
}

bool Node::searchNode(Node *root ,int target){
   if(root == nullptr){
    return false;
   }
   if(root->data == target){
    return true;
   }
   // call the recursive call 
   return searchNode(root->left,target) || searchNode(root->right,target);
}

//main start here ...
int main(){
  Node  * root = new Node (13);
  root->left= new Node(4);
  root->right= new Node (23);
  root->left->left = new Node (9);
  root->left->right = new Node (84);
  root->right->left= new Node(4);
  root->right->right = new Node (43);
  cout<<"post order traversal of the tree: "<<endl;
  root->postOrder(root);
  cout<<endl;
  int target;
  cout<<"Enter your number : "<<endl;
  cin>>target;
  if(root->searchNode(root,target)){
    cout<<"Target found"<<endl;
  }else{
    cout<<"Target not Found ! "<<endl;
  }
  return 0;
}