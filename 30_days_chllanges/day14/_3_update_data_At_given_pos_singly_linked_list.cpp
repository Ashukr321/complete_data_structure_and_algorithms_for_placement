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

  static void displayNode(Node *head);
  static void insertAtEnd(Node *&head, int data);
  static void updateAtPos(Node *&head, int data, int pos);
};

// displayNode
void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

// insertAtEnd
void Node::insertAtEnd(Node *&head, int data)
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

void Node::updateAtPos(Node *&head, int data, int pos)
{
  Node *temp = head;

  if (pos == 1)
  {
    head->data = data;
  }
  for (int i = 0; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr)
  {
    cout << "Invalid Position" << endl;
    return;
  }
  temp->data = data;
}

// main start here ...
int main()
{

  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << endl;
    cin >> n;
    Node::insertAtEnd(head, n);
  }

  cout << "before updating data at given pos:" << endl;
  Node::displayNode(head);
  int updatedData;
  cout << "Enter updated data:" << endl;
  cin >> updatedData;
  int pos;
  cout << "Enter the pos: " << endl;
  cin >> pos;
  Node::updateAtPos(head, updatedData, pos);
  cout << "After updating the data at " << pos << "with " << updatedData << endl;
  Node::displayNode(head);

  return 0;
}