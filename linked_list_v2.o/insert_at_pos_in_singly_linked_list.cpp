#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node ( int data){
    this->data = data ;
    this->next  = nullptr;
  }
};

void displayNode (Node * head){
  Node * temp = head;
  if(temp == nullptr) return; // handle empty list
  do {
    cout << temp -> data << " -> ";
    temp = temp ->next;
  } while(temp != head);
  cout << "HEAD" << endl; // indicate the end of the circular list
}

void insertAtEndCircularLinkedList(Node * & head,int data){
  Node * newNode = new Node ( data);
  if( head == nullptr){
    head = newNode;
    newNode ->next= head;
    return;
  }
  Node* temp = head;
  while( temp->next != head){ // fix the condition to stop at the last node
    temp = temp ->next;
  }
  newNode ->next = head; // fix the next pointer of the new node
  temp ->next= newNode;
}

void  insertAtPos(Node * head , int  pos ,int data){
  Node * newNode = new Node ( data);
  if ( pos == 1){
      head = newNode;
      newNode->next = head;
      return;
  }
  Node * temp = head;
  for(int i = 0; i<pos-1 && temp != nullptr ; i++){
    temp = temp ->next;
  }
  newNode ->next = temp ->next;
  temp ->next= newNode;
}
int main(){
  Node * head = nullptr;
  insertAtEndCircularLinkedList( head,1);
  insertAtEndCircularLinkedList( head,2);
  insertAtEndCircularLinkedList( head,3);
  insertAtEndCircularLinkedList( head,4);
  displayNode(head);
  cout<<endl;
  insertAtPos(head,2,1000);
  cout<<"After inserting the node at the pos:"<<endl;
  cout<<endl;
  displayNode(head);
  
  return 0;
}