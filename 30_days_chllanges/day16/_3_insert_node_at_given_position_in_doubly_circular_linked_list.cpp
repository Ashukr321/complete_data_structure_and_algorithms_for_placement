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
  static void insertNodeAtEnd(Node *&head, int data);
  static void insertAtPos(Node *&head, int data, int pos);
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
    cout << temp->data << "-> ";
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
    newNode->next = newNode;
    newNode->prev = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  newNode->next = head;
  newNode->prev = temp;
  temp->next = newNode;
  head->prev = newNode;
}

void Node::insertAtPos(Node * & head,int data,int pos){
  Node *newNode = new Node(data);
  if(pos==1){
    newNode->next = head;

  }
}
// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list : " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display All nodes: " << endl;
  Node::displayNode(head);

  return 0;
}