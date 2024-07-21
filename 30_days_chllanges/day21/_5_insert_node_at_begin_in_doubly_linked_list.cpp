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
  static void insertAtHead(Node *&head, int data);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ->";
    temp = temp->next;
  }
  cout << "nullptr" << endl;
}
void Node::insertAtHead(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }

  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

// main start here ...
int main()
{

  Node *head = nullptr;
  int size;
  cout << "Enter the size of the dll " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node value at index" << i << endl;
    cin >> n;
    Node::insertAtHead(head, n);
  }
  cout << "display All node: " << endl;
  Node::displayNode(head);

  return 0;
}