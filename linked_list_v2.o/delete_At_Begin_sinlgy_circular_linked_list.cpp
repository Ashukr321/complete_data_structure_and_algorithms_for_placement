//preprocessor
#include<iostream>
using namespace std;

class Node {
  public:
  int data;
  Node * next;
  Node ( int data){
    this->data= data;
    this->next = nullptr;
  }
};
void displayNode(Node * head){
  Node * temp = head;
  if(head ==nullptr){
    return;
  }
  do
  {
  cout<<temp ->data<< "-> ";
  temp = temp ->next;
  } while (temp !=head);
  cout<<"HEAD"<<endl;
}


void insertAtEndCircularLinkedList(Node * & head, int data){
  Node * newNode = new Node(data);
  if( head == nullptr){
    head= newNode;
    newNode ->next = head;
    return;
  }

  Node * temp = head;
  while( temp ->next != head){
    temp = temp ->next;
  } 
  newNode ->next= temp ->next;
  temp ->next = newNode;
}

void deleteNodeAtBegin(Node * & head ){
  if( head ==nullptr){
    return;
  }
  Node * deleteNode = head;
  head = deleteNode ->next;
}


//main start here ...
int main(){
  Node * head = nullptr;
  insertAtEndCircularLinkedList(head,1);
  insertAtEndCircularLinkedList(head,2);
  insertAtEndCircularLinkedList(head,3);
  insertAtEndCircularLinkedList(head,4);
  displayNode(head);
  cout<<"After deleting the node from the begin: "<<endl;
  deleteNodeAtBegin(head);
  cout<<endl;
  displayNode(head);
  
  return 0;
}