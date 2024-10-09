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

void removeDuplicateNode(Node *&head)
{
  Node *current = head;
  while (current != nullptr && current->next != nullptr)
  {
    if (current->data == current->next->data)
    {
      Node *temp = current->next;
      current->next = current->next->next;
      delete temp;
    }
    else
    {
          current = current->next;
    }
  }
}
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

void insertNode(Node *&head, int data)
{
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

// main start here ...
int main()
{
  Node *head = nullptr;
  insertNode(head, 1);
  insertNode(head, 2);
  insertNode(head, 3);
  insertNode(head, 4);
  insertNode(head, 4);
  insertNode(head, 5);
  cout << "Before remove duplicate element :" << endl;
  displayNode(head);
  removeDuplicateNode(head);
  cout << "After remove duplicate Node from sorted order  :" << endl;
  displayNode(head);

  return 0;
}