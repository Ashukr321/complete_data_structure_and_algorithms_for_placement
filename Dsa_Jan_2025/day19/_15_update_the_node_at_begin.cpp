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

void updateNodeAtBegin(Node *&head, int data)
{
  // check
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  head->data = data;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtEnd(head, 10);
  insertNodeAtEnd(head, 20);
  insertNodeAtEnd(head, 30);
  insertNodeAtEnd(head, 40);
  cout << "Before updating node at begin " << endl;
  displayNode(head);
  int data;
  cout << "Enter the data to update at begin : ";
  cin >> data;
  updateNodeAtBegin(head, data);
  displayNode(head);

  return 0;
}