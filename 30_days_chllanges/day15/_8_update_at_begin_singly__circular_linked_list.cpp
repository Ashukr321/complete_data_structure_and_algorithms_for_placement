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
  static void insertAtEnd(Node *&head, int data);
  static void updateAtBegin(Node *&head, int data);
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
    cout << temp->data << " -> ";
    temp = temp->next;
  } while (temp != head);
  cout << "HEAD" << endl;
}

void Node::insertAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head; // create the cycle in the linked list
  }
  else
  {
    Node *temp = head;
    while (temp->next != head)
    {
      temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
  }
}

void Node ::updateAtBegin(Node *&head, int data)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  head->data = data;
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
    cout << "Enter the node data at index: " << i << endl;
    cin >> n;
    Node::insertAtEnd(head, n);
  }
  cout << "display all the node of the singly circular linked list : " << endl;
  Node::displayNode(head);

  int updatedData;
  cout << "Enter your updated data:" << endl;
  cin >> updatedData;
  cout << "After updating the linked list: " << endl;
  Node::updateAtBegin(head, updatedData);
  Node::displayNode(head);
  return 0;
}