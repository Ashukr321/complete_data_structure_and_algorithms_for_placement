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
    this->next = NULL;
    this->prev = NULL;
  }
};

void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "null" << endl;
}

void insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtBegin(head, 10);
  insertNodeAtBegin(head, 20);
  insertNodeAtBegin(head, 30);
  insertNodeAtBegin(head, 40);
  displayNode(head);
  return 0;
}