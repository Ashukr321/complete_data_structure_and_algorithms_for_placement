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
  static void insertNodeAtEnd(Node *&head, int data);
  static void deleteNodeAtGivenPos(Node *&head, int pos);
};

// Function to display the circular linked list
void Node::displayNode(Node *head)
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
  cout << "HEAD" << endl;
}

// Function to insert a new node at the end of the circular linked list
void Node::insertNodeAtEnd(Node *&head, int data)
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
  newNode->next = head;
  temp->next = newNode;
}

// Function to delete a node at a given position in the circular linked list
void Node::deleteNodeAtGivenPos(Node *&head, int pos)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  if (pos < 1)
  {
    cout << "Position should be greater than 0" << endl;
    return;
  }
  if (pos == 1)
  {
    if (head->next == head)
    {
      delete head;
      head = nullptr;
      return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
      temp = temp->next;
    }
    Node *deleteNode = head;
    temp->next = deleteNode->next;
    head = deleteNode->next;
    delete deleteNode;
  }
  else
  {
    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr && temp->next != nullptr;i++){
      temp = temp->next;
    }
    if (temp->next == head || temp->next == nullptr)
    {
      cout << "Position out of range" << endl;
      return;
    }
    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
  }
}

// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list :" << endl;
  cin >> size;
  if (size < 1)
  {
    cout << "Size should be greater than 0" << endl;
    return 0;
  }
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index :   " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display the linked list :" << endl;
  Node::displayNode(head);

  int pos;
  cout << "Enter the position of the node to delete:" << endl;
  cin >> pos;
  Node::deleteNodeAtGivenPos(head, pos);
  cout << "Display the linked list after deletion:" << endl;
  Node::displayNode(head);

  return 0;
}