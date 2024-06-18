//preprocessor
#include<iostream>
using namespace std;

class Node {
  public:
  int data ;
  Node * next ;
  Node (int data){
    this-> data = data;
    this->next = nullptr;
  }
};

void displayNode (Node* head ){
  Node * temp  = head;
  do{
    cout<<temp ->data<< " -> ";
    temp = temp ->next;
  } while(temp !=head);
  cout<<"HEAD"<<endl;
}

void insertAtEndSinglyLinkedList(Node * & head,int data){
  Node * newNode = new Node(data);
  if(head == nullptr){
      head = newNode;
      newNode ->next= head;
      return ;
  }

  Node * temp  = head;
  while( temp ->next != head){
    temp = temp ->next;
  }
  newNode ->next= temp ->next;
  temp->next= newNode;
}


void updateNodeAtBeginSinglyCircularLinkedList(Node *  & head , int data){
  if(head  == nullptr){
    cout<<"linked list is the empty  : "<<endl;
    return;
  }

head ->data= data;
}

//main start here ...
int main(){
  Node * head = nullptr;
  insertAtEndSinglyLinkedList(head,1);
  insertAtEndSinglyLinkedList(head,2);
  insertAtEndSinglyLinkedList(head,3);
  insertAtEndSinglyLinkedList(head,4);
  insertAtEndSinglyLinkedList(head,5);
  displayNode(head);
  int data;
  cout<<"Enter your data : "<<endl;
  cin>>data;
  updateNodeAtBeginSinglyCircularLinkedList(head,data);
  displayNode(head);
  
  return 0;
}