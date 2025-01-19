// preprocessor
#include <iostream>
using namespace std;

//  create the  node class
class Node
{
public:
  int data;
  Node *next;
  // constructor
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
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

void insertNodeAtPosition(Node * &head, int data, int pos)
{
  // create the newNode
  Node *newNode = new Node(data);
  if (pos == 1)
  {
    newNode->next = head;
    head = newNode;
    return;
  }
  Node *temp = head;
  for (int i = 1; i < pos - 1 && temp!=nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr)
    return;
  newNode->next = temp->next;
  temp->next = newNode;
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
  int pos;
  cout << "Enter the position to insert: ";
  cin >> pos;
  int data;
  cout << "Enter the data to insert: ";
  cin >> data;
  insertNodeAtPosition(head, data, pos);
  cout << "After insert node at given position" << data << " -> " << pos << endl;
  displayNode(head);

  return 0;
}