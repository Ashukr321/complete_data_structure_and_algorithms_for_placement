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
void insertNodeAtEnd(Node *&head, int data)
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

void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
}

void deleteNodeAtEnd(Node *&head)
{
  if (head == nullptr)
  {
    cout << " linked list already  empty : " << endl;
    return;
  }
  Node *temp = head;
  while (temp->next->next != nullptr)
  {
    temp = temp->next;
  }

  delete temp->next;
  temp ->next = nullptr;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtEnd(head, 1);
  insertNodeAtEnd(head, 2);
  insertNodeAtEnd(head, 3);
  insertNodeAtEnd(head, 4);
  displayNode(head);
  cout << "After deleting the node at the end of the linked list " << endl;
  deleteNodeAtEnd(head);
  displayNode(head);
  return 0;
}