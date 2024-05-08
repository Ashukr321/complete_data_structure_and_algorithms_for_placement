//preprocessor
#include<iostream>
using namespace std;

class Node {
  public:
  int value;
  Node * next;

  // create the constructor 
  Node(int data ){
    this->value = data;
    this->next=NULL;
  }
  ~Node(){
    
  }
};


void displayNode( Node * head){
  Node * temp = head;
  while(temp != NULL){
    cout<<temp->value << " -> ";
    temp = temp->next;

  }
  cout << "NULL" << endl; // Print NULL at the end
}

void InsertAtEnd(Node * &head,int data){
  Node * newNode = new Node(data);
  if(head ==NULL){
    head = newNode;
    return;
  }

  Node * temp = head;
  while( temp->next !=NULL){
    temp = temp->next ;
  }
  temp->next = newNode;
}

//main start here ...
int main(){
  Node * head = NULL;
   InsertAtEnd(head,1);
   InsertAtEnd(head,2);
   InsertAtEnd(head,3);
   InsertAtEnd(head,4);
   InsertAtEnd(head,5);
   displayNode(head);
  return 0;
}