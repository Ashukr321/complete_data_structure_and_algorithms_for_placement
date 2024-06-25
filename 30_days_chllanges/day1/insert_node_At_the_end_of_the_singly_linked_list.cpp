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
  cout<<"null"<<endl;
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

// main start here ...
int main()
{
  Node *head = nullptr;
  insertAtEnd(head, 12);
  insertAtEnd(head, 2);
  insertAtEnd(head, 42);
  insertAtEnd(head, 32);
  insertAtEnd(head, 1);
  displayNode(head);

  return 0;
}