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
    this->next = NULL;
  }
};

// print the linked list
void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

// insert node at end of the linked  list
void insertAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == NULL)
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
}
void deleteAtEnd(Node *head)
{
  Node *temp = head;
  if (head == NULL)
  {
    return;
  }
  while (temp->next ->next !=nullptr)
  {
    temp = temp->next;
  }
  delete temp->next;
  temp->next = NULL;
}
// main start here ...
int main()
{
  Node *head = NULL;

  insertAtEnd(head, 1);
  insertAtEnd(head, 10);
  insertAtEnd(head, 20);
  insertAtEnd(head, 40);
  insertAtEnd(head, 50);
  displayNode(head);
  cout<<"After deleting node from the end of the linked list ! "<<endl;
  deleteAtEnd(head);
  displayNode(head);
  return 0;
}

//  time complexity  insert at end is 0(n)
