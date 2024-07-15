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
  static void deleteNodeAtPos(Node * & head,int pos);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp!= nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void Node::insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node * temp = head;
  while(temp->next!= nullptr){
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->prev= temp;
}

void Node::deleteNodeAtPos(Node * & head,int pos){
  Node *temp = head;
  if(pos==1){
    Node * deleteNode = head;
    head = deleteNode->next;
    if(head!= nullptr)
        head->prev= nullptr;
    delete deleteNode;
  }

  int i = 1;
  while(temp->next!= nullptr && i < pos-1){
    temp = temp->next;
    i++;
  }
  if(temp->next == nullptr){
    cout<<"Invalid position"<<endl;
    return;
  }
  Node * deleteNode = temp->next;
  temp->next= temp->next->next;
  if(temp->next!= nullptr)
      temp->next->prev= temp;
  delete deleteNode;
}

int main()
{
  Node *head = nullptr;
  int size;
  cout<<"Enter the size of the linked list: "<<endl;
  cin>>size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout<<"Enter the element at index: "<< i <<endl;
    cin>>n;
    Node::insertNodeAtEnd(head,n);
  }
  cout<<"before deleting the node: "<<endl;
  Node::displayNode(head);

  int pos1;
  cout << "Enter the position to delete: ";
  cin >> pos1;
  Node::deleteNodeAtPos(head, pos1);
  cout << "After deleting the node: " << endl;
  Node::displayNode(head);

  

  return 0;
}