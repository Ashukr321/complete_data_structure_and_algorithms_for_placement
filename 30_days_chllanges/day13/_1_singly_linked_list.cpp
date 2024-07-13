//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node * next;
  // constructor 
  Node(int data){
    this->data = data;
    this->next = nullptr;
  }

  // function 
  static void displayNode(Node * head);
  static void insertNodeAtBegin(Node *  &head, int data);
};
// insertNode 
void Node::insertNodeAtBegin(Node  *& head, int data ){
  
  Node * newNode = new Node(data);
  if(head==nullptr){
    return;
  }
  Node *temp = head;
  newNode->next= temp;
  head = newNode;
}

void Node::displayNode(Node * head){
  Node *temp = head;
  while(temp !=nullptr){
    cout<<temp->data<< " ->";
    temp  = temp ->next;
  }
  cout<<"null"<<endl;
}
//main start here ...
int main(){
  
  Node * head= new Node(1);
  Node::insertNodeAtBegin(head,13);
   Node::insertNodeAtBegin(head,3);
   Node::insertNodeAtBegin(head,40);
  Node::insertNodeAtBegin(head,30);
  
  cout<<"display the node: "<<endl;
  Node::displayNode(head);
  return 0;
}