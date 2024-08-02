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
  static void updateNodeAtEnd(Node *&head, int data);
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

void Node::insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head;
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
void Node::updateNodeAtEnd(Node *&head, int data)
{
  if (head == nullptr)
  {
    return;
  }
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }

  temp->data = data;
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
    cout << "Enter the node data at index: " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display the node : " << endl;
  Node::displayNode(head);

  int updatedData;
  cout << "Enter the data to be updated at the end of the linked list: ";
  cin >> updatedData;
  Node::updateNodeAtEnd(head, updatedData);
  cout << "After updating the end  node of the linked list : " << endl;
  Node::displayNode(head);
  return 0;
}