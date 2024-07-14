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
  }
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void updateDataAtEnd(Node *&head, int data);
};
// function to display the node
void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "null" << endl;
}

// insertNodeAtEnd
void Node::insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  while(temp ->next!= nullptr){
    temp = temp ->next;
  }
  temp ->next = newNode;
}

// update at end
void Node::updateDataAtEnd(Node * & head,int data){
  if(head == nullptr){
    cout<<"linked list empty : "<<endl;
    return;
  }

  Node * temp = head;
  while(temp ->next != nullptr){
    temp = temp ->next;

  }
  temp ->data = data;
}

// main start here ...
int main()
{
  Node * head = nullptr;
  int size;
  cout<<"Enter the size of the linked list : "<<endl;
  cin>>size;
  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter the node at "<<i<<endl;
    cin>>n;
    Node::insertNodeAtEnd(head,n);
  }
  cout<<"before updating the node at end : "<<endl;
  Node::displayNode(head);

  int updateData;
  cout<<"Enter the updated data : "<<endl;
  cin>>updateData;

  Node::updateDataAtEnd(head,updateData);
  cout<<"After updating the node at end : "<<endl;
  Node::displayNode(head);
  
  return 0;
}