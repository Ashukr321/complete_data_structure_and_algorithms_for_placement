//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node * prev ;
  Node( int data){
    this->data = data;
    this->next =nullptr;
    this->prev = nullptr;
  }
};

void displayNode (Node * head){
  Node * temp = head;
  while (temp !=nullptr)
  {
    cout<<temp->data<<"->";
    temp = temp->next;
  }
}

void insertAtEndDll(Node *  &  head  ,int data){
  Node * newNode = new Node ( data);
  if(head ==nullptr){
    head = newNode;
    return;
  }
  Node * temp = head ;
  while( temp ->next != nullptr){
    temp =  temp ->next;
  }
  temp ->next = newNode;
  newNode ->prev = temp ;
}

//main start here ...
int main(){
  Node * head = nullptr;
  insertAtEndDll(head,1);
  insertAtEndDll(head,2);
  insertAtEndDll(head,3);
  insertAtEndDll(head,4);
  displayNode(head);
  int data;
  cout<<endl;
  cout<<"Enter the data that you want to insert  in the node "<<endl;
  cin>>data;
  insertAtEndDll(head,data);
  displayNode(head);
  return 0;
}