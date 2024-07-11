// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }
  // member  function
  static void displayNode(Node *head);
  static void insertNodeAtPos(Node *&head, int data, int pos);
  static void insertNodeAtBegin(Node * & head,int data);

};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "->" ;
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void Node::insertNodeAtBegin(Node * & head,int data){
  Node *newNode = new Node(data);
  if( head== nullptr){
    head = newNode;
    return;
  }
  Node * temp = head;
  newNode->next= temp ;
  temp ->prev = newNode;
  head = newNode;
}
void Node::insertNodeAtPos(Node *&head, int data, int pos)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  // if pos =1;

  if (pos == 1)
  {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr)
  {
    cout << "invalid position" << endl;
  }
  newNode->next = temp->next;
  temp->next->prev = newNode;
  temp->next = newNode;
  newNode->prev = temp;
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
    Node::insertNodeAtBegin(head,n);
  }
  cout<<endl;
  cout<<"display all the node : "<<endl;
  Node::displayNode(head);

  int data;
  cout<<"Enter your data that want to insert at pos:"<<endl;
  cin>>data;
  int pos;
  cout<<"Enter your  pos:"<<endl;
  cin>>pos;

  cout<<endl;
  Node::insertNodeAtPos(head,data,pos);
  cout<<"After inserting node at given pos:"<<endl;
  Node::displayNode(head);

  return 0;
}