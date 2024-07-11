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
  // function
  static void displayNode(Node *head);
  static void insertNode(Node *&head, int data);
  static void insertAtPos(Node *&head, int data, int pos);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}


// insertNode at  end of the linked list
void Node::insertNode(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }

  Node *temp = head;
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }

  temp->next = newNode;
}

// 
void Node::insertAtPos(Node *&head, int data, int pos)
{
  Node *newNode = new Node(data);

  // check empty case
  if (head == nullptr)
  {
    return;
  }
  
  // check if position is 1
  if (pos == 1)
  {
    newNode->next = head;
    head = newNode;
    return;
  }
  
  Node * temp = head;

  for (int i = 0; i <pos-1 &&temp !=nullptr; i++)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;

}

  // main start here ...
  int main(){
    Node *head = nullptr;
    Node::insertNode(head, 132);
    Node::insertNode(head, 12);
    Node::insertNode(head, 1);
    Node::insertNode(head, 14);
    Node::insertNode(head, 2);

    cout << "print the node of  singly linked list :" << endl;
    Node::displayNode(head);
    int pos;
    int target;
    cout << "Enter the element that you want to insert into  the linked list : " << endl;
    cin >> target;

    cout << endl;
    cout << "Enter  the  position : " << endl;
    cin >> pos;
    Node::insertAtPos(head,target,pos);

    cout<<"After inserting node at given pos :"<<endl;
    Node::displayNode(head);
    
    return 0;
  }