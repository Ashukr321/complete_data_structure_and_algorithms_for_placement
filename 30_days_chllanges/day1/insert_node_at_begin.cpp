//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node * next;
  Node (int data){
    this->data = data;
    this->next = nullptr;
  }
};
void displayNode( Node *head){
  Node * temp =head;
  while(temp !=nullptr ){
    cout<<temp->data<<" ->";
    temp= temp ->next;
  }
  cout<<"null"<<endl;
}
void insertAtBegin(Node * & head ,int data){
  Node * newNode = new Node(data);
  if( head == nullptr){
    head = newNode;
    return;
  }
  Node * temp = head;
  newNode ->next  = temp;
  head = newNode;
}

//main start here ...
int main(){
  Node  * head = nullptr;
  insertAtBegin(head,1);
  insertAtBegin(head,2);
  insertAtBegin(head,3);
  insertAtBegin(head,4);
  displayNode(head);
  return 0;
}