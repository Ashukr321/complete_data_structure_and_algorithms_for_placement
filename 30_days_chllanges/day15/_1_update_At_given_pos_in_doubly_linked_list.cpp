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
    this->next = nullptr;
    this->prev = nullptr;
  }
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void updateAtGivenPos(Node *&head, int data, int pos);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void Node::insertNodeAtEnd(Node *&head, int data)
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
  newNode->prev = temp;
}

void Node::updateAtGivenPos(Node *&head, int data, int pos)
{
  if (head == nullptr)
  {
    return;
  }
  if (pos == 1)
  {
    head->data = data;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr)
  {
    return;
  }
  temp->data = data;
}

// main start here ...
int main()
{

  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list : " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "before updating at given pos : " << endl;
  Node::displayNode(head);
  int target;
  cout << "Enter the target element :" << endl;
  cin >> target;
  int pos;
  cout << "Enter the pos at which u want to update" << endl;
  cin >> pos;
  Node::updateAtGivenPos(head, target, pos);
  Node::displayNode(head);

  return 0;
}