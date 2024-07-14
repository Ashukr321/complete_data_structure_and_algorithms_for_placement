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
  static void insertNodeAtEnd(Node *&head, int data);
  static void insertAtPos(Node *&head, int data, int pos);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp ->next;
  }
  cout << "null" << endl;
}

void Node::insertNodeAtEnd(Node *&head, int data)
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
void Node::insertAtPos(Node *&head, int data, int pos)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    return;
  }
  if (pos == 1)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  for (int i = 1; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp != nullptr)
  {
    cout << "index not found " << endl;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

// main start here ...
int main()
{
  Node * head = new Node(13);
  Node::insertNodeAtEnd(head,23);
  Node::insertNodeAtEnd(head,455);
  Node::insertNodeAtEnd(head,45);

  cout<<"display Node:"<<endl;
  Node::displayNode(head);
  int target;
  cout<<"Enter the target element that u want to insert :"<<endl;
  cin>>target;
  int pos;
  cout<<"Enter the position at which u want to insert : "<<endl;
  cin>>pos;
  Node::insertAtPos(head,target,pos);
  cout<<"After inserting the node: at "<< pos<<endl;
  Node::displayNode(head);
  return 0;
}

// step
/*
create node
display node
insert at end
insert at given position

*/