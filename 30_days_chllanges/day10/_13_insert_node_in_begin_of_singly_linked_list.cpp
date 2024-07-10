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
  }

  // create the static methods that can be directly access to the class :: reference
  static void displayNode(Node *head);
  static void insertNodeAtBegin(Node *&head, int data);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "nullptr" << endl; // to indicate the end of the linked list
}

void Node::insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
  }
  else
  {
    newNode->next = head;
    head = newNode;
  }
}



int main()
{
  Node *head = nullptr;
  int size;
  cout<<"Enter the size of the array : "<<endl;
  cin>>size;
  
  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter the element at index: "<< i<< "th"<<endl;
    cin>>n;
    Node::insertNodeAtBegin(head, n);
  }

  cout<<"singly linked is form : "<<endl;
  Node::displayNode(head);  
  return 0;
}