// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  // constructor 
  Node(int data){
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }
};
void displayNode ( Node * head){
  Node * temp = head; 
  while(temp !=nullptr){
    cout<<temp->data<<"->";
    temp = temp ->next;
  }
  cout<<"NULL"<<endl;
}


void insertAtPosDll(Node *  & head ,int pos , int data ){
  Node * newNode = new Node(data);
  if(head ==nullptr){
    return;
  }
  Node * temp = head;
  for(int i = 0  ; i<pos-1&& temp!=nullptr;i++){
    temp = temp ->next;
  }
  if(temp ==nullptr){
    cout<<"Invalid position"<<endl;
  }else{
     newNode ->next = temp ->next;
     temp ->next = newNode;
     temp->next->prev  = newNode;
     newNode->prev = temp;
  }
}


void insertAtBeginDll(Node * & head, int data){
  Node * newNode  = new Node(data);
  if(head == nullptr){
    head = newNode;
    return;
  }
  
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}
// main start here ...
int main()
{

  Node * head = nullptr;
  insertAtBeginDll(head,1);
  insertAtBeginDll(head,2);
  insertAtBeginDll(head,1);
  insertAtBeginDll(head,1);
  insertAtBeginDll(head,4);
  insertAtPosDll(head,2,23);
  displayNode(head);
  return 0;
}