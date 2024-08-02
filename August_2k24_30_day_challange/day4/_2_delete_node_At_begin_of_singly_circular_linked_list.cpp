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
  };
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
    newNode->next = head; // create the cycle in the node ;
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

void Node::deleteNodeAtBegin(Node *&head)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  if (head->next == head)
  {
    delete head;
    head = nullptr;
    return;
  }
  Node *deleteNode = head;
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  temp->next = deleteNode->next;
  head = deleteNode->next;
  delete deleteNode;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list:" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node data at index:" << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display the node: " << endl;
  Node::displayNode(head);
  cout << "After deleting the node at begin of the linked list :" << endl;
  Node::deleteNodeAtBegin(head);

  Node::displayNode(head);
  return 0;
}