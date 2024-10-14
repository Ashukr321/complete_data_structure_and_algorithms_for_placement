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
    this->next = nullptr;
  }
  static void displayNode(Node *head);
  static void insertNodeAtBegin(Node *&head, int data);
  static void insertNodeAtGivenPos(Node *&head, int data, int pos);
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

void Node::insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  // check corner case
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}
void Node::insertNodeAtGivenPos(Node *&head, int data, int pos)
{
  Node *newNode = new Node(data); // create the newNode
  if (pos == 1 && head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;

  for (int i = 1; i <pos-1 ; i++)
  {
    temp = temp->next;
  }

  if (temp == nullptr)
  {
    cout << "Invalid position" << endl;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  Node::insertNodeAtBegin(head, 10);
  Node::insertNodeAtBegin(head, 20);
  Node::insertNodeAtBegin(head, 30);
  Node::insertNodeAtBegin(head, 40);
  Node::insertNodeAtBegin(head, 50);
  Node::displayNode(head);

  int nodeData;
  cout << "Enter the node data : that u want to insert :" << endl;
  cin >> nodeData;
  int pos;
  cout << "Enter the position:" << endl;
  cin >> pos;
  Node::insertNodeAtGivenPos(head, nodeData, pos);
  cout << "After insert at given postion " << nodeData << "at " << pos << endl;
  Node::displayNode(head);
  return 0;
}