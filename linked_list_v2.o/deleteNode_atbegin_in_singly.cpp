// preprocessor
#include <iostream>
using namespace std;


class Node
{
public:
  int data;
  Node *next = nullptr;

  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};


void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ->";
    temp = temp->next;
  }
}


void insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  newNode->next = temp;
  head = newNode;
}


void deleteNodeAtBegin( Node * &head){
  if( head ==nullptr){
    cout<<"node is already empty : "<<endl;
    return;

  }
  Node *temp = head;
  head = temp ->next;
  delete temp;
}


// main start here ...
int main()
{
  Node * head  = nullptr;
  insertNodeAtBegin(head, 1);
  insertNodeAtBegin(head, 2);
  insertNodeAtBegin(head, 3);
  insertNodeAtBegin(head, 4);
  deleteNodeAtBegin(head);
  displayNode(head);
  return 0;
}