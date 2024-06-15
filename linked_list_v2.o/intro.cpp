// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  // inline  member function

  int data;
  Node *next;

  // this is create the pointer that store the data
  // of type of Node data structure
  //  constructor

  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};

void insertAtHead(Node *&head, int data)
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

void printNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
}

int main()
{
  Node *head = nullptr;
  insertAtHead(head, 123);
  insertAtHead(head, 13);
  insertAtHead(head, 12);
  insertAtHead(head, 3);
  insertAtHead(head, 323);
  printNode(head);
  return 0;
}

// linked list in the data  structure
//   linked list is the dynamic data structure
//    application of the linked list
//    1. database query
//    2. browser history
//    3. undo and redo functionality
//    4. dynamic memory allocation
//    5. implementation of stack and queue
// linked list is use to implement the stack and queue data structure
