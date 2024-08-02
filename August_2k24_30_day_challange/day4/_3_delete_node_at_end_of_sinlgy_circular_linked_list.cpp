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
  static void insertNode(Node *&head, int data);
  static void deleteNode(Node *&head);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  do
  {
    cout << temp->data << " ->";
    temp = temp->next;
  } while (temp != head);
  cout << "HEAD" << endl;
}

void Node::insertNode(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head; // here  we create the cycle
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
void Node::deleteNode(Node *&head)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  Node *temp = head;
  while (temp->next->next != head)
  {
    temp = temp->next;
  }
  Node *deleteNode = temp->next;
  temp->next = head;
  delete deleteNode;
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
    Node::insertNode(head, n);
  }
  cout << "Display the node:" << endl;
  Node::displayNode(head);
  cout << "After deleting the node at end of the singly circular linked list:" << endl;
  Node::deleteNode(head);
  Node::displayNode(head);
  return 0;
}