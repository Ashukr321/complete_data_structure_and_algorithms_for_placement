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
  };
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void deleteNodeAtGivenPos(Node *&head, int pos);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " =>";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void Node ::insertNodeAtEnd(Node *&head, int data)
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
  newNode->prev = temp;
}

void Node::deleteNodeAtGivenPos(Node *&head, int pos)
{
  if (head == nullptr)
  {
    return;
  }
  if (pos == 0)
  {
    Node *temp = head;
    head = temp->next;
    delete temp;
  }
  Node *temp = head;
  for (int i = 1; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }

  if (temp == nullptr)
  {
    return;
  }
  Node *deleteNode = temp->next;
  temp->next = deleteNode->next;
  delete deleteNode;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list: ";
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node data at index:" << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display the node:" << endl;
  Node::displayNode(head);

  int pos;
  cout << "Enter the position at which node data delete :" << endl;
  cin >> pos;
  cout << "After deleting the node at pos" << pos << endl;
  Node::deleteNodeAtGivenPos(head, pos);
  cout << "display the node:" << endl;
  Node::displayNode(head);
  return 0;
}