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
    cout << temp->data << " -> ";
    temp = temp->next;
  }
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
void deleteAtGivenPos(Node *&head, int pos)
{
  Node *temp = head;
  if (pos == 0)
  {
    cout << "Head is already empty : " << endl;
    return;
  }
  for (int i = 0; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr || temp->next == nullptr)
  {
    cout << "temp is null:" << endl;
    return;
  }
  Node *deleteNode = temp->next;
  temp->next = temp->next->next;
  delete deleteNode;
}


// main start here ...
int main()
{
  Node *head = nullptr;
  insertAtEnd(head, 1);
  insertAtEnd(head, 2);
  insertAtEnd(head, 3);
  insertAtEnd(head, 4);
  displayNode(head);
  cout << "After deleting the node at given pos" << endl;
  deleteAtGivenPos(head, 2);
  displayNode(head);
  return 0;
}