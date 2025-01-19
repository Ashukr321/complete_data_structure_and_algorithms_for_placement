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

void insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}
void deleteNodeAtEnd(Node *&head)
{
  if (head == nullptr)
  {
    cout << "Linked list is empty" << endl;
    return;
  }
  Node *temp = head;
  while (temp->next->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = nullptr;
  delete temp->next;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtBegin(head, 10);
  insertNodeAtBegin(head, 20);
  insertNodeAtBegin(head, 30);
  insertNodeAtBegin(head, 40);
  cout << "Before deleting node at end " << endl;
  displayNode(head);
  cout << "After deleting node at end" << endl;
  deleteNodeAtEnd(head);
  displayNode(head);

  return 0;
}