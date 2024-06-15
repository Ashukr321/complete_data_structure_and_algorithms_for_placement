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

  ~Node()
  {
    cout << " destructure called !" << endl;
    return;
  }
};

void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ->  ";
    temp = temp->next;
  }
}

void insertNodeAtPosition(Node *&head, int pos, int data)
{
  Node *newNode = new Node(data);
  if (pos == 0)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }

  newNode->next = temp->next;
  temp->next = newNode;
}

void insertNodeAtEnd(Node *&head, int data)
{
  Node * newNode = new Node ( data);
  if( head ==nullptr){
    head= newNode;
    return;
  }
  Node * temp = head; 
  while(temp->next !=NULL){
    temp =  temp ->next;
  }
  temp->next = newNode;
}
// main start here ...
int main()
{
  Node *head = nullptr;
insertNodeAtEnd(head,12);
insertNodeAtEnd(head,12);
insertNodeAtEnd(head,12);
insertNodeAtEnd(head,12);
insertNodeAtPosition(head,1,400);
displayNode(head);
  return 0;
}