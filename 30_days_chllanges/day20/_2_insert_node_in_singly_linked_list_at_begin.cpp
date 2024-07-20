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
  head = newNode;
}

// main start here ...
int main()
{
  // create the empty head node pointer
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list : " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element of the node: " << i << endl;
    cin >> n;
    // we can access the insertAtHead methods directly bec. we  create the function static
    Node::insertAtHead(head, n);
  }

  cout << "Display All node:" << endl;
  Node::displayNode(head);

  return 0;
}