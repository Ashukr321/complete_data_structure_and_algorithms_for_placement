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
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
};

void Node::displayNode(Node *head)
{
  if (head == nullptr)
  {
    cout << "Linked list is empty." << endl;
    return;
  }

  Node *temp = head;
  do
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  } while (temp != head);
  cout << "HEAD" << endl;
}

void Node::insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = newNode;
    newNode->prev = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }

  // if we insert node at end the end node ->next point to head  default
  newNode->next = head;
  newNode->prev = temp;
  temp->next = newNode;
  head->prev = newNode;
}
// main start here...
int main()
{
  Node *head = nullptr;
  Node::insertNodeAtEnd(head, 1);
  Node::insertNodeAtEnd(head, 2);
  Node::insertNodeAtEnd(head, 3);
  Node::insertNodeAtEnd(head, 4);
  Node::insertNodeAtEnd(head, 5);
  Node::displayNode(head);

  return 0;
}