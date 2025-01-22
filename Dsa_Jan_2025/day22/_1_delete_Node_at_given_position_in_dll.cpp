// preprocessor
#include <iostream>
using namespace std;

// class Node
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
    this->next = NULL;
    this->prev = NULL;
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
  cout << "null" << endl;
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
  newNode->prev = temp;
}

void deleteNodeAtGivenPosition(Node *&head, int position)
{
  if (head == nullptr)
    return;
  if (position == 1)
  {
    Node *temp = head;
    head = temp->next;
    temp->next->prev = nullptr;
    temp->next = nullptr;
    delete temp;
  }
  Node *temp = head;
  for (int i = 1; i < position - 1; i++)
  {
    temp = temp->next;
  }
  Node *deleteNode = temp->next;
  temp->next = deleteNode->next;
  deleteNode->next->prev = temp;
  deleteNode->next = nullptr;
  deleteNode->prev = nullptr;
  delete deleteNode;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtEnd(head, 10);
  insertNodeAtEnd(head, 20);
  insertNodeAtEnd(head, 30);
  insertNodeAtEnd(head, 40);
  insertNodeAtEnd(head, 50);
  displayNode(head);
  int position;
  cout << "Enter your position as which you want to delete the node " << endl;
  cin >> position;
  deleteNodeAtGivenPosition(head, position);
  cout << "After delete the  node at  =>" << position << endl;
  displayNode(head);
  return 0;
}