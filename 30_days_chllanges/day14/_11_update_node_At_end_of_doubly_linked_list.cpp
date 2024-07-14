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
  static void insertNodeAtHead(Node *&head, int data);
  static void updateAtEnd(Node *&head, int data);
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

void Node::insertNodeAtHead(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
  }
  else
  {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
}

void Node::updateAtEnd(Node *&head, int data)
{
  Node *temp = head;
  if (head == nullptr)
  {
    return;
  }
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->data = data;
}

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
    Node::insertNodeAtHead(head, n);
  }

  cout << "Display node : " << endl;
  Node::displayNode(head);  
  int target;
  cout<<"Enter element that u want to update: "<<endl;
  cin>>target;
  Node::updateAtEnd(head,target);
  cout<<"After updating the linked list: "<<endl;
  Node::displayNode(head);
  return 0;
}