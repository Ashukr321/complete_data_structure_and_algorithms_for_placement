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
    this->next = NULL;
    this->prev = NULL;
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

void insertNodeAtGivenPosition(Node *&head, int data, int position)
{
  Node *newNode = new Node(data);
  if (position == 1)
  {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return;
  }
  Node *temp = head;
  for (int i = 1; i < position - 1; i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next->prev = newNode;
  temp->next = newNode;
  newNode->prev = temp;
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
  newNode->prev = temp;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  insertAtEnd(head, 10);
  insertAtEnd(head, 20);
  insertAtEnd(head, 30);
  insertAtEnd(head, 40);
  displayNode(head);

  int data;
  cout<<"Enter your data "<<endl;
  cin>>data;
  int position;
  cout<<"Enter your position "<<endl;
  cin>>position;
  insertNodeAtGivenPosition(head, data, position);
  displayNode(head);
  return 0;
}