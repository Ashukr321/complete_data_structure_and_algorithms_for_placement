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
    this->next = nullptr;
  }
};
void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertNodeAtEnd(Node *&head, int data)
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
void reverseLinkedList(Node *&head)
{
  // create the three pointer
  Node *prev = nullptr;
  Node *current = head;
  Node *next = nullptr;
  // check corner case
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
  insertNodeAtEnd(head, 1);
  insertNodeAtEnd(head, 2);
  insertNodeAtEnd(head, 3);
  insertNodeAtEnd(head, 4);
  insertNodeAtEnd(head, 5);
  cout << "Before reverse the linked list :" << endl;
  displayNode(head);
  cout << "After reverse the linked list :" << endl;
  reverseLinkedList(head);
  displayNode(head);

  return 0;
}