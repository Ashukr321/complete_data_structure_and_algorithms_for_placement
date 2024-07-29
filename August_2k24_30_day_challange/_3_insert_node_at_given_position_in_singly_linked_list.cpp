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
  };
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void inertNodeAtGivenPos(Node *&head, int data, int pos);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "-> ";
    temp = temp->next;
  }
  cout << "null" << endl;
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

void Node::inertNodeAtGivenPos(Node *&head, int data, int pos)
{
  Node *newNode = new Node(data);

  if (pos == 1)
  {
    newNode->next = head;
    head = newNode;
    return;
  }
  Node *temp = head;
  for (int i = 1; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr)
  {
    cout << "Invalid position" << endl;
    return;
  }
  newNode->next = temp->next;
  temp->next = newNode;
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

  cout << "Display All the node :" << endl;
  Node::displayNode(head);

  int target;
  cout << "Enter the element that u want to insert in to the linked list:" << endl;
  cin >> target;
  int pos;
  cout << "Enter the position at which u want to insert the node :" << endl;
  cin >> pos;
  Node::inertNodeAtGivenPos(head, target, pos);
  cout << "after insetting the node at the given position :" << pos << endl;
  Node::displayNode(head);
  return 0;
}