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
  if (head == nullptr)
  {
    cout << "nullptr" << endl;
    return;
  }
  cout << head->data << " ->";
  displayNode(head->next);
}

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

void deleteNode(Node *&head)
{
  Node *temp = head;
  if (head == nullptr)
  {
    cout << "nullptr" << endl;
    return;
  }
  while (temp->next->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = nullptr;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtEnd(head, 1);
  insertNodeAtEnd(head, 2);
  insertNodeAtEnd(head, 3);
  insertNodeAtEnd(head, 4);
  cout << "before deleting the node" << endl;
  displayNode(head);
  cout << "After deleting the node :" << endl;
  deleteNode(head);
  displayNode(head);

  return 0;
}