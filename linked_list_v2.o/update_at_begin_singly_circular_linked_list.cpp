//preprocessor
#include<iostream>
using namespace std;


class Node {
  public:
  int data;
  Node* next;
  Node ( int data){
    this-> data = data;
    this->next= nullptr;
  }
};

void displayNode ( Node * head ){
  Node * temp = head; 
  do{
    cout<<temp ->data<<" -> ";
    temp = temp ->next;
  }while(temp !=head);
  cout<<"HEAD"<<endl;
}

void insertNodeAtEndCircularSinglyLinkedList(Node * & head, int data){
  Node * newNode = new Node(data);
  if( head ==nullptr){
    head = newNode;
    newNode->next = head;
    return;
  }

  Node * temp = head;
  while(temp ->next !=head){
    temp = temp ->next;
  }
  newNode ->next= temp ->next;
  temp->next = newNode;
}



void updateAtBeginSinglyCircularLinkedList(Node * & head , int data){
  Node * temp = head;

  if( head == nullptr){
    cout<<"linked is empty : "<<endl;
    return;
  }
  temp ->data  = data;
}
//main start here ...
int main(){

  Node  * head = nullptr;
  
  insertNodeAtEndCircularSinglyLinkedList(head,13);
  insertNodeAtEndCircularSinglyLinkedList(head,123);
  insertNodeAtEndCircularSinglyLinkedList(head,14);
  insertNodeAtEndCircularSinglyLinkedList(head,124);
  displayNode(head);
  cout<<"After updating the node at the begin : "<<endl;
  updateAtBeginSinglyCircularLinkedList(head,1344);
  displayNode(head);
  return 0;
}