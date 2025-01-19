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
void displayNode(Node *&head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ->";
    temp = temp->next;
  }
  cout << "Null" << endl;
}

void deleteNodeAtBegin(Node *&head)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  Node *temp = head;
  head = temp->next;
  delete temp;
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
// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtBegin(head, 10);
  insertNodeAtBegin(head, 20);
  insertNodeAtBegin(head, 30);
  cout << "Before delete Node at Begin" << endl;
  displayNode(head);
  cout << "After delete Node at Begin" << endl;
  deleteNodeAtBegin(head);
  displayNode(head);

  return 0;
}