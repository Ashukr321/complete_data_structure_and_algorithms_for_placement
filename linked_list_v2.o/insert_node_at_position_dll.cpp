// preprocessor
#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }
};
void display(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
}

void insertAtEnd(Node * & head , int data){
  Node * newNode = new Node ( data);
  if( head == nullptr){
    head = newNode;
    return;
  }
  
  Node * temp = head ;
  while( temp ->next != nullptr){
    temp = temp ->next;  
  }
  temp ->next = newNode;
  newNode->prev = temp;
}
void insertNodeAtPosDll(Node * & head, int pos, int data){
  Node * newNode = new Node ( data);
  if( head ==nullptr){
    head = newNode;
    return;
  }
  Node * temp = head;
  for(int i = 0 ; i<pos-1 && temp !=nullptr ; i++){
    temp = temp ->next;
  }
  newNode->next = temp ->next;
  temp->next = newNode;
  temp->next->prev= newNode;
  newNode ->prev  = temp;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  insertAtEnd(head,1);
  insertAtEnd(head,2);
  insertAtEnd(head,3);
  insertAtEnd(head,4);

  display(head);
  cout<<endl;
  cout<<"After inserting node at the pos:"<<endl;
  insertNodeAtPosDll(head,2,1000);
  display(head);

  return 0;
}