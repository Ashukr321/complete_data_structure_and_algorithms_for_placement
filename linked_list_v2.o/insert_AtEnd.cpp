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
    this->next = NULL;
  }
};


void printNode(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
}


void insertAtEnd(Node * &head, int data)
{
  Node *newNode = new Node(data);

  if (head == nullptr)
  {
    head = newNode;
    return;
  }


  Node *temp = head;
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}



// main start here ...
int main()
{

  Node *head = NULL;
  insertAtEnd(head, 10);
  insertAtEnd(head, 13);
  insertAtEnd(head, 14);
  insertAtEnd(head, 15);
  printNode(head);

  return 0;
}