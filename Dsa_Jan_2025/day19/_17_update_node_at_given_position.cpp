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
  while (temp != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
void insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}
void updateNodeAtGivenPosition(Node *&head, int data, int position)
{
  if (position == 1)
  {
    head->data = data;
    return;
  }
  Node *temp = head;
  for (int i = 1; i <= position-1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  temp->data = data;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtEnd(head, 10);
  insertNodeAtEnd(head, 20);
  insertNodeAtEnd(head, 30);
  insertNodeAtEnd(head, 40);

  displayNode(head);
  cout << " after update data at given position" << endl;

  updateNodeAtGivenPosition(head, 300, 2);
  displayNode(head);
  return 0;
}