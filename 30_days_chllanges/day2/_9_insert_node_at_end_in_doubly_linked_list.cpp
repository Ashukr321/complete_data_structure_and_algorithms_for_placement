//preprocessor
#include<iostream>
using namespace std;


class Node {
  public:
  int data ;
  Node * next; 
  Node * prev;
  Node (int data){
    this->data = data;
    this->next = nullptr;
    this->prev= nullptr;
  }
};
void displayNode(Node * head){
  Node *temp = head;
  while(temp != nullptr){
    cout<<temp ->data<< " ->";
    temp = temp ->next;
  }
  cout<<"null"<<endl;
}

void insertNodeAtDll(Node * & head,int data){
  Node * newNode  = new Node(data);
  if( head == nullptr){
    head = newNode;
    return;
  }
  Node * temp = head;
  while(temp ->next != nullptr){
    temp = temp ->next;
  }
  temp ->next = newNode;
  newNode ->prev = temp;
}
//main start here ...
int main(){
  Node * head = nullptr;
  insertNodeAtDll(head,1);
  insertNodeAtDll(head,2);
  insertNodeAtDll(head,3);
  insertNodeAtDll(head,4);
  insertNodeAtDll(head,5);
  displayNode(head);
  return 0;
}