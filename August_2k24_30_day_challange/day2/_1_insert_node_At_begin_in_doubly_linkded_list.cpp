// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  };
  // member function
  static void displayNode(Node *head);
  static void insertNodeAtBegin(Node *&head, int data);
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

void Node::insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  newNode->next = head;
  temp->prev = newNode;
  // update head pointer
  head = newNode;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the  size of the linked list :" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    Node::insertNodeAtBegin(head, n);
  }
  cout << "display node:" << endl;
  Node::displayNode(head);

  return 0;
}