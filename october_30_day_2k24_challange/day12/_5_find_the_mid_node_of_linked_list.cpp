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

void insertNodeAtEnd(Node *&head, int data)
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

void printLinkedList(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
Node *findMidNode(Node *head)
{
  Node *slow = head;
  Node *fast = head;
  while (fast != nullptr && fast->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
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
  printLinkedList(head);
  cout<<endl;
  cout<<"Mid Node of Linked list"<<endl;
  Node *midNode = findMidNode(head);
  cout << midNode->data << endl;
  return 0;
}