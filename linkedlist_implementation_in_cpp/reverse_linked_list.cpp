//preprocessor
#include<iostream>
using namespace std;

class Node {
  public:
  int data ; 
  Node* next; 
  Node(int data){
  this->data = data; 
  this->next =NULL;
  }
};
void displayNode(Node* head){
  Node * temp = head; 
  while( temp!=NULL){
    cout<<temp->data <<" -> ";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
}

void insertNodeAtEnd(Node * & head  , int data){
  Node * newNode = new Node(data);
  if( head ==NULL){
    head = newNode;
    return;
  }
  Node* temp = head ;
   while( temp ->next !=NULL){
    temp  = temp->next;
   }
  temp->next = newNode;
}

Node * reverseLinkedList(Node * head){
  Node * prev = nullptr;
  Node*  current = head; 
  Node * next = nullptr;
  while (current!=NULL)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  return prev;
}

//main start here ...
int main(){
  Node* head = NULL;
  insertNodeAtEnd(head,1);
  insertNodeAtEnd(head,2);
  insertNodeAtEnd(head,3);
  insertNodeAtEnd(head,4);
  displayNode(head);
  cout<<"After reversing the  linked list : "<<endl;
 Node * reverseHead =  reverseLinkedList(head);
  displayNode(reverseHead);
  return 0;
}

// time complexity of the reversing the  linked list is : o(n);
