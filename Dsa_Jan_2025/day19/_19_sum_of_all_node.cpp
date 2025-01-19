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
    this->next = NULL;
  }
};

void displayNode(Node *head)
{
  int sum = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "-> ";
    sum += temp->data;
    temp = temp->next;
  }
  cout << "null" << endl;
  cout << "the sum of the all node data " << sum << endl;
}

void insertAtTail(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == NULL)
  {
    head = new Node(data);
    return;
  }
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

// main start here ...
int main()
{

  Node *head = nullptr;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  insertAtTail(head, 4);
  displayNode(head);

  return 0;
}