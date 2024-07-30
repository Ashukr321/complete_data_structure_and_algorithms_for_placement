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
  static void insertNodeAtEnd(Node *&head, int data);
  static void deleteNodeGivenPos(Node *&head, int pos);
};

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
}

void Node::deleteNodeGivenPos(Node *&head, int pos)
{
  if (head == nullptr)
  {
    return;
  }
  if (pos == 0)
  {
    Node *temp = head;
    head = temp->next;
    delete temp;
    return;
  }
  Node *temp = head;
  for (int i = 1; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr || temp->next == nullptr)
  {
    cout << "Position out of range" << endl;
    return;
  }
  // delete node at given position logic : </iostream>
  Node *deleteNode = temp->next;
  temp->next = deleteNode->next;
  delete deleteNode;
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
    cout << "Enter the node data at index:" << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display the node:" << endl;
  Node::displayNode(head);
  int pos;
  cout << "Enter the position at which you want to delete :" << endl;
  cin >> pos;

  Node::deleteNodeGivenPos(head, pos);
  cout << endl;
  Node::displayNode(head);
  return 0;
}