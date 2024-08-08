// preprocessor
#include <iostream>

// Avoid using namespace std; instead, use std:: where necessary
using std::cin;
using std::cout;
using std::endl;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;

  // Constructor
  Node(int data) : data(data), next(nullptr), prev(nullptr) {}

  // Static methods
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void updateNodeAtEnd(Node *&head, int data);
};

// Display the linked list
void Node::displayNode(Node *head)
{
  if (head == nullptr)
  {
    cout << "List is empty." << endl;
    return;
  }

  Node *temp = head;
  do
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  } while (temp != head);
  cout << "HEAD" << endl;
}
void Node::updateNodeAtEnd(Node *&head, int data)
{
  if (head == nullptr)
  {
    return;
  }
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  temp->data = data;
}

// Insert a new node at the end of the linked list
void Node::insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);

  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head; // Circular linked list
    return;
  }

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

// Main function
int main()
{
  Node *head = nullptr;
  int size;

  cout << "Enter the size of the linked list: ";
  cin >> size;

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node data at index " << i << ": ";
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }

  cout << "Display the node: " << endl;
  Node::displayNode(head);

  int updatedData;
  cout << "Enter updated data:" << endl;
  cin >> updatedData;
  Node::updateNodeAtEnd(head, updatedData);
  cout << "After updating the node data at end  of the linked list :" << endl;
  Node::displayNode(head);

  return 0;
}