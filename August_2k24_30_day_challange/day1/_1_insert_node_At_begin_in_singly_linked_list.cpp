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
  static void InsertNodeAtBegin(Node *&head, int data);
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

void Node::InsertNodeAtBegin(Node *&head, int data)
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

// main start here ...
int main()
{
  Node *head = nullptr; // initialize head to nullptr

  int size;
  cout << "Enter the size of the linked list :" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node data at index " << i << endl;
    cin >> n;
    Node::InsertNodeAtBegin(head, n);
  }
  cout << "DISPLAY THE NODE" << endl;
  Node::displayNode(head);
  return 0;
}