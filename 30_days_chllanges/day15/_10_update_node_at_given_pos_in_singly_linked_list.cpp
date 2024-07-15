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
  static void displayNode(Node *head);
  static void insertNodeEnd(Node *&head, int data);
  static void updateAtGivenPos(Node *&head, int data, int pos);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  if (head == nullptr)
  {
    cout << "Linked list is empty." << endl;
    return;
  }
  do
  {
    cout << temp->data << "->";
    temp = temp->next;
  } while (temp != head);
  cout << "head" << endl;
}

void Node::insertNodeEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head;
    return;
  }
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  head = newNode; // Update head to the new node
}

void Node::updateAtGivenPos(Node *&head, int data, int pos)
{
  if (head == nullptr)
  {
    cout << "Linked list is already empty." << endl;
    return;
  }
  if (pos == 1)
  {
    head->data = data;
  }
  Node *temp = head;
  int i = 1;
  while (temp->next != head && i < pos - 1)
  {
    temp = temp->next;
    i++;
  }
  if (i == pos - 1)
  {
    temp->next->data = data;
  }
  else
  {
    cout << "Position out of range." << endl;
  }
}

int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list: " << endl;
  cin >> size;

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    Node::insertNodeEnd(head, n);
  }
  cout << "Display all the nodes:" << endl;
  Node::displayNode(head);
  int updatedData;
  cout << "Enter your updated data:" << endl;
  cin >> updatedData;
  int pos;
  cout << "Enter position: " << endl;
  cin >> pos;
  Node::updateAtGivenPos(head, updatedData, pos);
  cout << "After updating the node:" << endl;
  Node::displayNode(head);
  return 0;
}