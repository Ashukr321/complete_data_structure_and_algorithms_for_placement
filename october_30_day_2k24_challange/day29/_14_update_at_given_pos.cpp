// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }
};

void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ->";
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
  newNode->prev = temp;
}

void updateAtGivenPos(Node *&head, int data, int pos)
{
  // check corner case
  if (head == nullptr)
  {
    return;
  }
  Node *temp = head;
  for (int i = 1; i < pos - 1; i++)
  {
    if (temp == nullptr)
    {
      return;
    }
    temp = temp->next;
  }
  if (temp == nullptr)
  {
    return;
  }
  temp->next->data = data;
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
  cout << "Enter your updatedData:" << endl;
  cin >> updatedData;
  int pos;
  cout << "Enter the pos:" << endl;
  cin >> pos;
  updateAtGivenPos(head, updatedData, pos);
  displayNode(head);
  return 0;
}
