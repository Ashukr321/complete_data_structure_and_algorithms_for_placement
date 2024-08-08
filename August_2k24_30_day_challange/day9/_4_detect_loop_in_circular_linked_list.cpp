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
  static void detectCyclic(Node *head);
};

void Node ::displayNode(Node *head)
{
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
void Node::detectCyclic(Node *head)
{
  Node *temp = head;
  for (int i = 0; i < 10; i++)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout<<"head"<<endl;
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
    cout << "Enter the node data at index:" << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "display node:" << endl;
  Node::displayNode(head);
  cout << endl;
  Node::detectCyclic(head);
  return 0;
}