// preprocessor
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
  static void deleteNodeAtBegin(Node *&head);
};
void Node::displayNode(Node *head)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
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
    newNode->prev = head;
  }
  else
  {
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
};
void Node::deleteNodeAtBegin(Node *&head)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
  }
  Node *deletedNode = head;
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  temp->next = deletedNode->next;
  deletedNode->prev = temp;
  head = deletedNode->next;
  delete deletedNode;
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
    cout << "Enter the node data at index " << i << ":" << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display the node:" << endl;
  Node::displayNode(head);
  cout << "delete the node at begin :" << endl;
  Node::deleteNodeAtBegin(head);
  cout << "After deleting the node at begin :" << endl;
  Node::displayNode(head);
  return 0;
}