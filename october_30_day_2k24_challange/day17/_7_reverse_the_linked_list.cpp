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
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  // check corner case
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

void reverseLinkedList(Node *&head)
{
  Node *prev = nullptr;
  Node *current = head;
  Node *next = nullptr;
  while (current != nullptr)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}
// main start here ...
int main()
{

  Node *head = nullptr;
  insertNodeAtBegin(head, 1);
  insertNodeAtBegin(head, 2);
  insertNodeAtBegin(head, 3);
  insertNodeAtBegin(head, 4);
  insertNodeAtBegin(head, 5);
  cout << "Display the node before reverse" << endl;
  displayNode(head);
  cout<<"After reverse the linked list :"<<endl;
  reverseLinkedList(head);
  displayNode(head);
  return 0;
}