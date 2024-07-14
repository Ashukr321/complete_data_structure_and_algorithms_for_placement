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

  // member fuction
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void updateAtBegin(Node *&head, int data);
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

void Node::insertNodeAtEnd(Node *&head, int data)
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
void Node::updateAtBegin(Node *&head, int data)
{

  if (head == nullptr)
  {
    return;
  }
  head->data = data;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list: " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }

  cout << "before updating the node: " << endl;
  Node::displayNode(head);
  int target;
  cout << "Enter the  target values that u want  update : " << endl;
  cin >> target;
  Node::updateAtBegin(head, target);
  cout << "After updating the head value of the linked list : " << endl;
  Node::displayNode(head);
  return 0;
}