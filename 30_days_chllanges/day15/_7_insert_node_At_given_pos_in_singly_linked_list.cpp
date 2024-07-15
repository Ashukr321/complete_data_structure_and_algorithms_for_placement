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
  static void insertAtPos(Node *&head, int pos, int data);
  static void insertAtEnd(Node *&head, int data);
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

void Node::insertAtEnd(Node *&head, int data)
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
  newNode->next = temp->next;
  temp->next = newNode;
}

void Node::insertAtPos(Node *&head, int pos, int data)
{
  Node *newNode = new Node(data);
  if (pos == 1)
  {
    head == newNode;
    newNode->next = head;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr)
  {
    cout << "invalid index " << endl;
    return;
  }

  temp->data = data;
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
    cout << " Enter the  at index : \t" << i << endl;
    cin >> n;
    Node::insertAtEnd(head, n);
  }

  cout << "Display Node:" << endl;

  Node::displayNode(head);
  int target;
  cout << "Enter the element that u want to update: " << endl;
  cin >> target;
  int pos;
  cout << "Enter the position at which u want to update it : " << endl;
  cin >> pos;
  Node::insertAtPos(head, pos, target);
  cout << "After updating the node at : " << pos << endl;
  Node::displayNode(head);

  return 0;
}