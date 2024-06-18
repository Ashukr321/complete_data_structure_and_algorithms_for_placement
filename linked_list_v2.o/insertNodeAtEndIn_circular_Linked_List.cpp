// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};

void displayNode(Node *head)
{
  Node *temp = head;
  while (temp->next != head)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
}

void insertAtEndCircularLinkedList (Node * & head, int data){
  Node * newNode = new Node( data);
  if( head == nullptr){
    head = newNode;
    newNode ->next = head;
    return;
  }
  Node * temp = head;
  while( temp ->next !=head){
    temp = temp ->next;
  }
  newNode ->next  = temp->next;
  temp ->next = newNode;
}
// main start here ...
int main()
{
Node * head = nullptr;
   insertAtEndCircularLinkedList(head,123);
   insertAtEndCircularLinkedList(head,13);
   insertAtEndCircularLinkedList(head,12);
   insertAtEndCircularLinkedList(head,1);
   displayNode(head);
  return 0;
}