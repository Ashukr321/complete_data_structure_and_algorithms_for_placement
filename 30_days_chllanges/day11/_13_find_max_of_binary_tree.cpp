// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;
  Node(int data)
  {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
  static void preOrder(Node *root);
  static int maxOfTree(Node *root);
};

void Node::preOrder(Node *root)
{
  if (root == nullptr)
  {
    return;
  }
  cout << root->data << " ->";
  preOrder(root->left);
  preOrder(root->right);
}

int Node::maxOfTree(Node * root){
  if(root == nullptr){
    return INT_MIN;
  }
  int max = root->data;
  int leftMax = maxOfTree(root->left);
  int rightMax  = maxOfTree(root->right);
  if(leftMax>max){
    max= leftMax;
  }
  if(rightMax>max){
    max = rightMax;
  }
  return max;
}
// main start here ...
int main()
{
  Node * root = new Node(23);
  root->left = new Node(2);
  root->right = new Node(4);
  root->left->left = new Node(1);
  root->left->right = new Node(100);
  root->right->left = new Node(234);
  root->right->right = new Node(5);
  // display node
  cout<<"display Node:"<<endl;
  Node::preOrder(root);
  cout<<endl;
  cout<<"maximum of the tree: "<<Node::maxOfTree(root)<<endl;


  return 0;
}