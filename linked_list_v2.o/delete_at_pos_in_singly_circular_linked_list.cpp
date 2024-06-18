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
  do
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  } while (temp != head);
  cout << "HEAD" << endl;
}

void insertNodeAtEndSinglyCircularLinkedList(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head;
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

void deleteNodeAtPosSinglyCircularLinkedList(Node *head, int pos)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  Node * deleteNode = temp->next;
  temp->next = deleteNode->next;
  delete deleteNode;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtEndSinglyCircularLinkedList(head, 10);
  insertNodeAtEndSinglyCircularLinkedList(head, 20);
  insertNodeAtEndSinglyCircularLinkedList(head, 30);
  insertNodeAtEndSinglyCircularLinkedList(head, 40);
  displayNode(head);
 
  int data;
  cout<<"Enter your data : "<<endl;
  cin>>data;
  deleteNodeAtPosSinglyCircularLinkedList(head,data);
  displayNode(head);
  return 0;
}