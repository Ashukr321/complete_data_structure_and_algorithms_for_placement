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
  static void insertAtEnd(Node *&head, int data);
  static void insertAtPos(Node *&head, int data, int pos);
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

void Node::insertAtPos(Node *&head, int data, int pos)
{
  Node *newNode = new Node(data);
  if (head == nullptr || pos == 1)
  {
    newNode->next = head;
    if (head != nullptr)
      head->prev = newNode;
    head = newNode;
    return;
  }
  Node *temp = head;
  int i = 1;
  while (temp->next != nullptr && i < pos - 1)
  {
    temp = temp->next;
    i++;
  }
  if (temp->next == nullptr)
  {
    cout << "invalid index ~" << endl;
    return;
  }
  newNode->next = temp->next;
  newNode->prev = temp;
  temp->next->prev = newNode;
  temp->next = newNode;
}

void Node::insertAtEnd(Node *&head, int data)
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

int main()
{
  Node *head = nullptr;

  int size;
  cout << "Enter the size of the linked list : " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index : " << i << endl;
    cin >> n;
    Node::insertAtEnd(head, n);
  }
  cout << "display All nodes :" << endl;
  Node::displayNode(head);

  int target;
  cout << "Enter the node that u want to insert" << endl;
  cin >> target;
  int pos;
  cout << "Enter the position at which u want to insert " << endl;
  cin >> pos;
  Node::insertAtPos(head, target, pos);
  cout << "After inserting the node at : " << pos << endl;
  Node::displayNode(head);

  return 0;
}