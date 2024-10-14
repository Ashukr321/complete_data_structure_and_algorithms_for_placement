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
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void reverseLinkedList(Node *&head);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
void Node::insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  // check corner case
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

void Node::reverseLinkedList(Node *&head)
{
  Node *prev = nullptr;
  Node *current = head;
  Node *next = nullptr;
  while (current != nullptr)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  Node::insertNodeAtEnd(head, 1);
  Node::insertNodeAtEnd(head, 2);
  Node::insertNodeAtEnd(head, 3);
  Node::insertNodeAtEnd(head, 4);
  Node::insertNodeAtEnd(head, 5);
  cout << "Before reverse  the linked list :" << endl;
  Node::displayNode(head);
  cout << "After reverse the linked list :" << endl;
  Node::reverseLinkedList(head);
  Node::displayNode(head);

  return 0;
}