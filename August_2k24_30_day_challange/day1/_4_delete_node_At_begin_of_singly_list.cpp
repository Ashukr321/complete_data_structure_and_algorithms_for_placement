// preprocessor
#include <iostream>
using namespace std;

class Node
{
public: // this is the access modifiers in the cpp
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }

  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void deleteNodeAtBegin(Node *&head);
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

void Node::deleteNodeAtBegin(Node *&head)
{
  if (head == nullptr)
    return;
  Node *temp = head;
  head = temp->next;
  delete temp;
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
    Node::insertNodeAtEnd(head, n); // Corrected here
  }
  cout << "display all the node of the linked list :" << endl;
  Node::displayNode(head);

  cout << "After deleting the node from the beign " << endl;
  Node::deleteNodeAtBegin(head);
  cout << endl;
  Node::displayNode(head);
  return 0;
}