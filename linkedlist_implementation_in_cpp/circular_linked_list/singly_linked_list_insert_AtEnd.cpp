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
  do {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "head" << endl;
}

void insertAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head;
    return;
  }

  Node *temp = head;
  while (temp->next!= head)
  {
    temp = temp->next;
  }
  newNode->next = head;
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
  displayNode(head);

  return 0;
}