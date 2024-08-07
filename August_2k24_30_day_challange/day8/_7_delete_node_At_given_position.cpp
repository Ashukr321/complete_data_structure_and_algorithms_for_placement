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
  static void deleteNodeAtPos(Node *&head, int pos);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  do
  {
    cout << temp->data << "->";
    temp = temp->next;
  } while (temp != head);
  cout << "HEAD" << endl;
}

void Node::insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = newNode;
    newNode->prev = newNode;
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

void Node::deleteNodeAtPos(Node *&head, int pos)
{
  if (head == nullptr)
  {
    return;
  }
  if (pos == 0)
  {
    if (head->next == head)
    {
      delete head;
      head = nullptr;
    }
    else
    {
      Node *temp = head;
      while (temp->next != head)
      {
        temp = temp->next;
      }
      temp->next = head->next;
      head->next->prev = temp;
      delete head;
      head = temp->next;
    }
  }
  else
  {
    Node *temp = head;
    for (int i = 0; i < pos - 1 && temp != nullptr && temp->next != head; i++)
    {
      temp = temp->next;
    }
    if (temp->next == head)
    {
      cout << "Position out of range" << endl;
      return;
    }
    Node *deletedNode = temp->next;
    temp->next = deletedNode->next;
    deletedNode->next->prev = temp;
    if (deletedNode == head)
    {
      head = temp->next;
    }
    delete deletedNode;
  }
}

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
  cout << "Enter the position at which u want to delete the node:" << endl;
  cin >> pos;
  Node::deleteNodeAtPos(head, pos);
  cout << endl;
  cout << "After deleting the node :" << endl;
  Node::displayNode(head);
  return 0;
}