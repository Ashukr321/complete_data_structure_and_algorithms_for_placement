// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }

  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void insertNodeAtGivenPosition(Node *&head, int data, int pos);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ->";
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

void Node::insertNodeAtGivenPosition(Node *&head, int data, int pos)
{
  Node *newNode = new Node(data);
  if (pos == 0)
  {
    newNode->next = head;
    head->prev = newNode;
    return;
  }
  Node *temp = head;
  for (int i = 1; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  newNode->prev = temp;
  temp->next->prev = newNode;
  temp->next = newNode;
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
    cout << "Enter the node data at index" << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }

  cout << "display node:" << endl;
  Node::displayNode(head);

  int insertData;
  cout << "Enter the data that u want to insert in to dll linked list:" << endl;
  cin >> insertData;
  int pos;
  cout << "Enter the position at which u want to insert node:" << endl;
  cin >> pos;
  Node::insertNodeAtGivenPosition(head, insertData, pos);
  cout << "after inserting the new node:" << endl;
  Node::displayNode(head);

  return 0;
}