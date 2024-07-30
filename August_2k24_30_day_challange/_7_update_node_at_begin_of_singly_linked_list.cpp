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
  static void insertNodeAtBegin(Node *&head, int data);
  static void updateNodeAtBegin(Node *&head, int data);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "null" << endl;
}

void Node::insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

void Node::updateNodeAtBegin(Node *&head, int data)
{
  if (head == nullptr)
  {
    return;
  }
  head->data = data;
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
    Node::insertNodeAtBegin(head, n);
  }
  cout << "Display the node:" << endl;
  Node::displayNode(head);
  int updatedData;
  cout << "Enter the updated data:" << endl;
  cin >> updatedData;
  Node::updateNodeAtBegin(head, updatedData); // This line was missing
  cout << endl;
  cout << "After updating first node of the linked list : " << endl;
  Node::displayNode(head);
  return 0;
}