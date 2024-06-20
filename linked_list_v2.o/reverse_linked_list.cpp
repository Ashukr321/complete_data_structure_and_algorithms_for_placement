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
    cout << temp->data << "  ->  ";
    temp = temp->next;
  }
  cout << "null" << endl;
}

void insertAtEnd(Node *&head, int data)
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

Node *reverseLinkedList(Node *head)
{
  Node *prev = nullptr;
  Node *current = head;
  Node *next = nullptr;
  while (current != nullptr)
  {
    next = current->next;
    current->next = prev; // change the direction
    prev = current;       // prev ->point to current
    current = next;       // increment current
  }
  return prev; // pointer of the last node
}
// main start here ...
int main()
{
  Node *head = nullptr;
  insertAtEnd(head, 10);
  insertAtEnd(head, 20);
  insertAtEnd(head, 30);
  insertAtEnd(head, 40);
  insertAtEnd(head, 50);
  cout << "before reversing the node : " << endl;
  displayNode(head);
  cout << endl;
  cout << "After reversing the node : " << endl;
  Node *reverseNode = reverseLinkedList(head);
  displayNode(reverseNode);
  return 0;
}