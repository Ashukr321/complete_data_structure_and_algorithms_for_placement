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
    cout << temp->data << " ->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertNodeAtEnd(Node *&head, int data)
{
  // create the newNode
  Node *newNode = new Node(data);
  // check corner case
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
Node *reverseLinkedList(Node *&head)
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
  return prev;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list :" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int data;
    cout << "Enter the node data  at index:" << i << endl;
    cin >> data;
    insertNodeAtEnd(head, data);
  }
  cout << "Display the nodes are :" << endl;
  displayNode(head);
  cout << "After reverse the linked list:" << endl;
  head = reverseLinkedList(head);
  displayNode(head);
  return 0;
}