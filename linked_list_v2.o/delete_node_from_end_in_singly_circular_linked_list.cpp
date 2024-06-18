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
  do
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  } while (temp!= head);
  cout << "HEAD" << endl;
}

void insertAtEndCircularLinkedList(Node *&head, int data)
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

void deleteNodeAtEndInCircularSinglyLinkedList(Node *&head)
{
  if (head == nullptr)
  {
    return;
  }
  if (head->next == head)
  {
    delete head;
    head = nullptr;
    return;
  }
  Node *temp = head;
  while (temp->next->next!= head)
  {
    temp = temp->next;
  }
  Node *deleteNode = temp->next;
  temp->next = head;
  delete deleteNode;
}

int main()
{
  Node *head = nullptr;
  insertAtEndCircularLinkedList(head, 1);
  insertAtEndCircularLinkedList(head, 2);
  insertAtEndCircularLinkedList(head, 3);
  insertAtEndCircularLinkedList(head, 4);
  displayNode(head);

  deleteNodeAtEndInCircularSinglyLinkedList(head);
  cout << "After deleting node from the end : " << endl;

  displayNode(head);

  return 0;
}