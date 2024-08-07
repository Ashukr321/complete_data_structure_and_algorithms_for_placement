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
  static void insertAtGivenPos(Node *&head, int data, int pos);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  do
  {
    cout << temp->data << " ->";
    temp = temp->next;

  } while (temp != head);
  cout << "head" << endl;
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

void Node::insertAtGivenPos(Node *&head, int data, int pos)
{
  if (head == nullptr)
  {
    return;
  }

  if (pos == 1)
  {
    Node *temp = head;
    Node *newNode = new Node(data);
    while (temp->next != head)
    {
      temp = temp->next;
    }
    newNode->next = head;
    temp->next = newNode;
    head->prev = newNode;
    newNode->prev = temp;
    head = newNode;
  }
  Node *temp = head;
  for (int i = 1; i < pos - 1 && temp != nullptr && temp->next != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr)
  {
    return;
  }
  Node *newNode = new Node(data);
  newNode->next = temp->next;
  newNode->next->prev = newNode;
  temp->next = newNode;
  newNode->prev = temp;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list :" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node data at index:" << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }

  cout << "display the node data:" << endl;
  Node::displayNode(head);
  int insertedData;
  cout << "Enter data that u want to insert :" << endl;
  cin >> insertedData;
  int pos;
  cout << "Enter you pos at which u want to insert your data: " << endl;
  cin >> pos;
  Node::insertAtGivenPos(head, insertedData, pos);
  cout << endl;
  Node::displayNode(head);
  return 0;
}