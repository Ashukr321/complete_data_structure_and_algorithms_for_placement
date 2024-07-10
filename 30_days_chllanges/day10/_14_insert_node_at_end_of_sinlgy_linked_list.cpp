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
    this->next = NULL;
  }
  // static function
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "  ->";
    temp = temp->next;
  }
  cout<<"nullptr"<<endl;
}

// insertNode At End of of the linked list
void Node::insertNodeAtEnd(Node *&head, int data)
{
  // check the linked list is empty or not
  if (head == nullptr)
  {
    head = new Node(data);
  }
  Node *newNode = new Node(data);
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

  Node *head = nullptr;
  // size of the linked list 
  int size;
  cout<<"Enter the size of the linked list  : "<<endl;
  cin>>size;
  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter your element : "<<endl;
    cin>>n;
    Node::insertNodeAtEnd(head,n);
  }

  cout<<"display the  linked list : "<<endl;
  Node::displayNode(head);
  
  return 0;
}