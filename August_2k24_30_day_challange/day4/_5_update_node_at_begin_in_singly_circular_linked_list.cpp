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
  static void updateNodeAtBegin(Node *&head, int data);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  do
  {
    cout << temp->data << "->";
    temp = temp->next;
  } while (temp != head);
  cout << "head" << endl;
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
  cout << "Enter the size of the linked list : " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index : " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display the node : " << endl;
  Node::displayNode(head);
  int updatedData;
  cout << "Enter the updatedData:" << endl;
  cin >> updatedData;
  Node::updateNodeAtBegin(head, updatedData);
  cout << "After updating the data  at begin of the linked list :" << endl;
  Node::displayNode(head);
  return 0;
}