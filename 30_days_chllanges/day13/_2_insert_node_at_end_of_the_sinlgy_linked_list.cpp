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

  // member function
  static void displayNode(Node *head);
  static void insertAtEnd(Node *&head, int data);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "null" << endl;
}

// insertNodeAtEnd
void Node::insertAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    return;
  }
  Node *temp = head;
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

// main start here ...
int main()
{
  Node *head = new Node(13);
  Node::insertAtEnd(head, 3);
  Node::insertAtEnd(head, 45);
  Node::insertAtEnd(head, 245);
  cout << "display the node:" << endl;
  Node::displayNode(head);

  return 0;
}