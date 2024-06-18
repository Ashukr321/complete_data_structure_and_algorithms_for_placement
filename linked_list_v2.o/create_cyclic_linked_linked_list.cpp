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

void insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head;
    return;
  }

  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  newNode->next = head;
  temp->next = newNode;
  head = newNode;
}
// main start here ...
int main()
{
  Node *head = nullptr;

  insertNodeAtBegin(head, 13);
  insertNodeAtBegin(head, 12);
  insertNodeAtBegin(head, 13);
  insertNodeAtBegin(head, 14);
  insertNodeAtBegin(head, 15);
  displayNode(head);
  return 0;
}