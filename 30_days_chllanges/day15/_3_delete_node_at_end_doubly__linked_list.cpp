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
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void deleteNodeAtEnd(Node *&head);
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

void Node::insertNodeAtEnd(Node *&head, int data)
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
  newNode->prev = temp;
}

void Node::deleteNodeAtEnd(Node * & head){
  Node * temp = head;
  if(head == nullptr){
    return;
  }
  while(temp->next->next!=nullptr){
    temp= temp->next;
  }
  if(temp==nullptr){
    return;
  }
  Node * deletedNode = temp->next->next;
  temp->next= nullptr;
  delete deletedNode;
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
    Node::insertNodeAtEnd(head, n);
  }
  cout << "before deleting end of node:" << endl;
  Node::displayNode(head);
  cout<<"After deleting the node:"<<endl;
  Node::deleteNodeAtEnd(head);
  Node::displayNode(head);
  return 0;
}