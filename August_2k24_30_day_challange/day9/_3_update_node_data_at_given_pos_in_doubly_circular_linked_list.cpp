// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  // constructor
  Node(int data)
  {
    this->data = data;
    this->prev = nullptr;
    this->next = nullptr;
  }
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void updateDataAtGivenPos(Node *&head, int data, int pos);
};
void Node ::displayNode(Node *head)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  Node *temp = head;
  do
  {
    cout << temp->data << " ->";
    temp = temp->next;
  } while (temp != head);
  cout << "Head" << endl;
}

void Node::insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head;
    newNode->prev = head;
  }
  else
  {
    Node *temp = head;
    while (temp->next != head)
    {
      temp = temp->next;
    }
    newNode->next = head;
    temp->next = newNode;
    head->prev = newNode;
    newNode->prev = temp;
  }
}

void Node::updateDataAtGivenPos(Node *&head, int data, int pos)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  if (pos == 1)
  {
    head->data = data;
  }
  else
  {
    Node *temp = head;
    for (int i = 1; i < pos && temp->next != head; i++)
    {
      temp = temp->next;
    }
    if (temp->next == head)
    {
      cout << "Position out of range" << endl;
      return;
    }
    temp->data = data;
  }
}
// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list:" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node data at index: " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display the node:" << endl;
  Node::displayNode(head);
  int updatedData;
  cout << "Enter the updatedData:" << endl;
  cin >> updatedData;
  int pos;
  cout << "Enter the position at which u want to insert the data :" << endl;
  cin >> pos;
  Node::updateDataAtGivenPos(head, updatedData, pos);
  cout << "After updating the linked list:" << endl;
  Node::displayNode(head);

  return 0;
}