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
    this->next = next;
  }
};

// display the node
void display(Node *head)
{
  Node *temp = head;
  do
  {
    cout << temp->data << " ->";
    temp = temp->next;
  } while (temp != head);
  cout << "head" << endl;
}

void insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head;
    return;
  }
  Node *temp = head;

  while (temp->next != head)
  {
    temp = temp->next;
  }

  newNode->next = head;
  temp->next = newNode;
}

// insert node at given position in the singly circular liked list
void insertAtPos(Node *&head, int pos, int data)
{
  Node *newNode = new Node(data);
  if (pos == 1)
  {
    head = newNode;
    newNode->next = head;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr)
  {
    cout << "invalid position" << endl;
    return;
  }

  newNode->next = temp->next;
  temp->next = newNode;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtEnd(head, 12);
  insertNodeAtEnd(head, 1);
  insertNodeAtEnd(head, 2);
  display(head);
  cout << endl;
  insertAtPos(head, 2, 100);
  cout << endl;
  display(head);
  return 0;
}