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
  Node *temp = head;
  do
  {
    cout << temp->data << "->";
    temp = temp->next;
  } while (temp != head);
  cout << "HEAD" << endl;
}

void insertAtEndSinglyCircularLinkedList(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    head->next = head;
    return;
  }
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

void updateAtEndSinglyCircularLinkedList(Node *&head, int data)
{
  if (head == nullptr)
  {
    cout << "linked  list is Empty : " << endl;
    return;
  }
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  temp->data = data;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  insertAtEndSinglyCircularLinkedList(head, 1);
  insertAtEndSinglyCircularLinkedList(head, 4);
  insertAtEndSinglyCircularLinkedList(head, 3);
  insertAtEndSinglyCircularLinkedList(head, 5);
  insertAtEndSinglyCircularLinkedList(head, 5);
  displayNode(head);

  cout<<"After updating node data from the end of the linked list : "<<endl;

updateAtEndSinglyCircularLinkedList(head,323);
displayNode(head);
  return 0;
}