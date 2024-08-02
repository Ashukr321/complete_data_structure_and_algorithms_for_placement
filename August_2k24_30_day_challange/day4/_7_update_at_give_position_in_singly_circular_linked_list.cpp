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
  static void updateNodeAtPos(Node *&head, int data, int pos);
};
void Node::updateNodeAtPos(Node *&head, int data, int pos)
{
  if (head == nullptr)
  {
    return;
  }
  if (pos == 0)
  {
    Node *temp = head;
    temp->data = data;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  temp->data = data;
}

void Node ::displayNode(Node *head)
{
  Node *temp = head;
  do
  {
    cout << temp->data << " ->";
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
    cout << "Enter the node data at index " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "display the node:" << endl;
  Node::displayNode(head);
  Node::updateNodeAtPos(head, 400, 3);
  cout << "After updating the node " << endl;
  Node::displayNode(head);

  return 0;
}