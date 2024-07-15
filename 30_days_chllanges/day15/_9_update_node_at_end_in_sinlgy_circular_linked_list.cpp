// preprocessor
#include <iostream>
using namespace std;

class Node
{
  // this is the access modifiers
public:
  // this is the access modifiers
  int data;
  Node *next; // pointer that hold the address of the next node:
  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
  // member function
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void updateAtEnd(Node * & head,int data);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  if (head == nullptr)
  {
    cout << "linked list is empty  !" << endl;
    return;
  }
  do
  {
    cout << temp->data << " -> ";
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
  newNode->next = temp->next;
  temp->next = newNode;
}

void Node::updateAtEnd(Node * & head,int data){
 if(head==nullptr){
  cout<<"linked list is empty : "<<endl;
  return;
 }
 Node * temp = head;
 while(temp ->next!= head){
  temp  = temp ->next;
 }
 temp->data= data;
}

// main start here ...
int main()
{

  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list:" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "display all node:" << endl;
  Node::displayNode(head);

  int updatedData;
  cout<<"Enter your updated data:"<<endl;
  cin>>updatedData;
  Node::updateAtEnd(head,updatedData);
  cout<<"after updating the node at end :"<<endl;
  Node::displayNode(head);
  return 0;
}