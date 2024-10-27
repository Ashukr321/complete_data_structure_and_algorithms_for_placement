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
  while (temp != nullptr)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
void insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  // Check corner case
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

void insertAtGivenPos(Node *&head, int pos, int data)
{
  Node *newNode = new Node(data);
  // check corner case
  if (head == nullptr)
  {
    return;
  }
  if (pos == 1)
  {
    newNode->next = head;
    head = newNode;
    return;
  }
  
  Node *temp = head;

  for (int i = 1; i < pos - 1; i++)
  {
    temp = temp->next;
  }

  if (temp == nullptr)
  {
    cout << "Invalid position" << endl;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtEnd(head, 1);
  insertNodeAtEnd(head, 2);
  insertNodeAtEnd(head, 3);
  insertNodeAtEnd(head, 4);
  insertNodeAtEnd(head, 5);
  displayNode(head);
  int insertData;
  cout << "Enter your data that you want to insert " << endl;
  cin >> insertData;
  int pos;
  cout << "Enter your position at which you want to insert the node in the linked list :" << endl;
  cin >> pos;
  insertAtGivenPos(head,pos,insertData);

  cout << "After insertion node at pos :  " << pos << endl;
  displayNode(head);

  return 0;
}