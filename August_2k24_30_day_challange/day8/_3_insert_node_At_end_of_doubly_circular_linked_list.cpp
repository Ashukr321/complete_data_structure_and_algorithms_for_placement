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
  }
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
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
    cout << temp->data << "  ->";
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
    return;
  }
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

int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list:" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node data :" << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  Node::displayNode(head);

  return 0;
}