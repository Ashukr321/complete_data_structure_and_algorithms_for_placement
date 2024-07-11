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

  static void insertNodeAtEnd(Node *&head, int data);
  static void displayNode(Node *head);
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
    cout << temp->data << " ->";
    temp = temp->next;
  } while (temp != head);
  cout << "HEAD" << endl;
  cout << endl;
}

void Node::insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = newNode;
    newNode->prev = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->prev = temp;
  newNode->next = head;
  head->prev = newNode;
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
    cout << "Enter element at index:" << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  
  cout << "print the node: " << endl;
  Node::displayNode(head);

  return 0;
}