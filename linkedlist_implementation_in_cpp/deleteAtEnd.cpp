//preprocessor
#include<iostream>
using namespace std;

class Node {
  public:
  int data;
  Node* next;
  Node(int data){
    this->data =data;
    this->next = NULL;
  }
};

void  displayNode(Node * head){
  Node * temp= head;
  while (temp !=NULL)
  {
     cout<<temp->data<<"->";
     temp = temp ->next;
  }
  cout<<"NULL"<<endl;
}

void insertNodeAtBegin( Node * & head ,int data){
  Node * newNode = new Node(data);
  if(head ==NULL){
    head = newNode;
    return;
  }
  newNode->next= head;
  head = newNode;
}

void deleteAtBegin(Node *  &head ){
  if(head == NULL){
    cout<<"linked list is already null! "<<endl;
    return;
  }
  Node * temp = head;
  head = head->next;
   delete temp;
}


//main start here ...
int main(){
  Node * head = NULL;
  insertNodeAtBegin(head,12);
  insertNodeAtBegin(head,2);
  insertNodeAtBegin(head,1);
  insertNodeAtBegin(head,129);
  deleteAtBegin(head);
  displayNode(head);
  return 0;
  
}