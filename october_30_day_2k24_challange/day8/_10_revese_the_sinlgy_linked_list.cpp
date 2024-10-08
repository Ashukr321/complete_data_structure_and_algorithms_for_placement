// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};
void insertNodeAtEnd(Node *&head, int data)
{
  Node *temp = head;
  // check corner case
  if (temp == nullptr)
  {
    head = new Node(data);
    return;
  }

  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  Node *newNode = new Node(data);
  temp->next = newNode;
}

void displayLinkedList(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
}

Node *reverseLinkedList(Node *&head)
{
  // create 3 pointer
  Node *prev = nullptr;
  Node *current = head;
  Node *next = nullptr;

  // implement reversing logic
  while (current != nullptr)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  return prev;
}
// main start here ...
int main()
{

  // create the head node
  Node *head = nullptr;
  insertNodeAtEnd(head, 1);
  insertNodeAtEnd(head, 2);
  insertNodeAtEnd(head, 3);
  insertNodeAtEnd(head, 4);
  insertNodeAtEnd(head, 5);

  cout << "Display node Before reversing  :" << endl;
  displayLinkedList(head);
  head = reverseLinkedList(head);
  cout << endl;
  cout << "After reverse the linked list :" << endl;
  displayLinkedList(head);
  return 0;
}