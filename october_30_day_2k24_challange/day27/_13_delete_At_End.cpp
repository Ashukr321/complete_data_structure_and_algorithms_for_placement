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
  while (temp != nullptr)
  {
    cout << temp->data << "-> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  // check corner case
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
  Node *temp = head;
  if (head == nullptr)
    return;
  while (temp->next->next != nullptr)
  {
    temp = temp->next;
  }
  Node *deleteNode = temp->next;
  temp->next = nullptr;
  delete deleteNode;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  insertAtBegin(head, 1);
  insertAtBegin(head, 2);
  insertAtBegin(head, 4);
  insertAtBegin(head, 5);
  insertAtBegin(head, 6);
  displayNode(head);
  deleteNodeAtEnd(head);
  cout << "After deleting at end:" << endl;
  displayNode(head);
  return 0;
}