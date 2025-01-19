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
    this->next = NULL;
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
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
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
  insertNodeAtBegin(head, 10);
  insertNodeAtBegin(head, 20);
  insertNodeAtBegin(head, 30);
  insertNodeAtBegin(head, 40);
  insertNodeAtBegin(head, 50);
  displayNode(head);
  int data;
  cout << "Enter the data that you wnat to search" << endl;
  cin >> data;
  if (searchNode(head, data))
  {
    cout << "Node is present" << endl;
  }
  else
  {
    cout << "Node is not present" << endl;
  }

  return 0;
}