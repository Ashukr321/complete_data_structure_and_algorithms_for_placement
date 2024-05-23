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
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

Node *middleNode(Node *head)
{
  if (head == nullptr)
  {
    return nullptr;
  }

  // Tortoise and Hare algorithm, two-pointer approach
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
  insertNodeAtBegin(head, 1);
  insertNodeAtBegin(head, 2);
  insertNodeAtBegin(head, 3);
  insertNodeAtBegin(head, 40);
  insertNodeAtBegin(head, 43);
  insertNodeAtBegin(head, 44);
  insertNodeAtBegin(head, 444);
  displayNode(head);
  Node *middle = middleNode(head);
  if (!middle)
  {
    cout << "No middle node" << endl;
  }
  else
  {
    cout << "Middle element of the linked list: " << middle->data << endl;
  }

  return 0;
}
