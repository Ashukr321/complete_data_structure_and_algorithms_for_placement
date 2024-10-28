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

bool searchNode(Node *head, int data)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    if (temp->data == data)
    {
      return true;
    }
    temp = temp->next;
  }
  return false;
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
  int searchData;
  cout << "Enter the  searchData :" << endl;
  cin >> searchData;
  if (searchNode(head, searchData))
  {
    cout << "yes node is present in the linked list :" << endl;
  }
  else
  {
    cout << "Sorry ! Node data is not +nt in the linked list :" << endl;
  }

  return 0;
}