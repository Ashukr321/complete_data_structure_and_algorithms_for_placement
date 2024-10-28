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
void updateAtEnd(Node *&head, int data)
{
  // check corner case
  if (head == nullptr)
  {
    insertNodeAtEnd(head, data);
    return;
  }

  Node *temp = head;
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->data = data;
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
  displayNode(head);
  int updatedData;
  cout << "Enter data that u want to update at end of the linked list:" << endl;
  cin >> updatedData;
  cout<<"After update linked list end node data :->"<<endl;
  updateAtEnd(head, updatedData);
  displayNode(head);
  return 0;
}