// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  // constructor
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
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  // check corner case
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
  newNode->prev = temp;
}
void insertAtGivenPos(Node *&head, int data, int pos)
{
  Node *newNode = new Node(data);
  if (pos == 0)
  {
    cout << "Invalid index:" << endl;
    return;
  }
  if (pos == 1)
  {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }

  Node *temp = head;
  for (int i = 1; i < pos - 1; i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  newNode->prev = temp;
  newNode->next->prev = newNode;
  temp->next = newNode;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  insertAtEnd(head, 1);
  insertAtEnd(head, 2);
  insertAtEnd(head, 3);
  insertAtEnd(head, 4);
  insertAtEnd(head, 5);
  displayNode(head);
  cout<<endl;
  cout<<"After insertion at pos:"<<endl;
  

  insertAtGivenPos(head,200,2);
  displayNode(head);


  return 0;
}
