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
  static void insertAtPos(Node *&head, int pos, int data);
  static void insertAtEnd(Node *&head, int data);
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
    cout << temp->data << " ->";
    temp = temp->next;
  } while (temp != head);
  cout << "head" << endl;
}

void Node::insertAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head; // circular link
    return;
  }
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->next = head; // circular link
}

void Node::insertAtPos(Node *&head, int pos, int data)
{
  Node *newNode = new Node(data);
  if (pos == 1)
  {
    newNode->next = head;
    Node *temp = head;
    while (temp->next != head)
    {
      temp = temp->next;
    }
    temp->next = newNode;
    head = newNode;
    return;
  }
  Node *temp = head;
  int i = 1;
  while (temp->next != head && i < pos - 1)
  {
    temp = temp->next;
    i++;
  }
  if (temp->next == head)
  {
    cout << "invalid index " << endl;
    return;
  }

  newNode->next = temp->next;
  temp->next = newNode;
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
    cout << " Enter the  at index : \t" << i << endl;
    cin >> n;
    Node::insertAtEnd(head, n);
  }

  cout << "Display Node:" << endl;

  Node::displayNode(head);
  int target;
  cout << "Enter the element that u want to insert: " << endl;
  cin >> target;
  int pos;
  cout << "Enter the position at which u want to insert it : " << endl;
  cin >> pos;
  Node::insertAtPos(head, pos, target);
  cout << "After updating the node at : " << pos << endl;
  Node::displayNode(head);

  return 0;
}