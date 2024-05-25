//preprocessor
#include<iostream>
using namespace std;

class Node {
  public:

  int data; 
  Node * next;
  Node * prev; 

  Node(int data){
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }
};

void displayNode(Node * head ){
  Node  * temp = head; 
  while( temp != NULL){
    cout<<temp->data<< "-> ";
    temp = temp->next; 
  }
  cout<<"NULL"<<endl;
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

//main start here ...
int main(){
  
  Node * head = NULL;
  insertAtBeginDll(head,1);
  insertAtBeginDll(head,2);
  insertAtBeginDll(head,3);
  displayNode(head);
  return 0;
}