//preprocessor
#include<iostream>
using namespace std;
 
class Node {
 public:
 int data; 
 Node * next;// this is the  next is the   pointer 

 //create the constructor 
 Node(int data){
  this->data = data;
  this->next = NULL;
 }
 //create the destructure 
 ~Node(){
  cout<<"destructor called"<<endl;
 }
};

void dispalyNode(Node * head){
  Node * temp = head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<< "NULL "<<endl;
}
 void insertNodeAtBegin( Node * &head , int data){
   Node * newNode = new Node(data);
   if( head == NULL){
    head = newNode;
    return;
   }
    Node * temp = head; 
    newNode->next = head;
    head = newNode;
 }

//main start here ...
int main(){
  Node * head = NULL;
  insertNodeAtBegin(head , 1);
  insertNodeAtBegin(head , 2);
  insertNodeAtBegin(head , 3);
  insertNodeAtBegin(head , 4);
  dispalyNode(head);
  return 0;
}


//  create the node 
// use access modifier 
// public , private and protected 
// create the  the display node of the linked list 
//  insert Node at begin in the linked  list 
