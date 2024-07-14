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
  static void deleteNodeAtEnd(Node *&head);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "-> ";
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
}

void Node::deleteNodeAtEnd(Node *&head){
  if(head == nullptr){
    cout<<"linked list is already null : "<<endl;
    return;
  }
  Node * temp  = head;
  while(temp ->next->next != nullptr){
    temp = temp ->next;
  }
  temp ->next= nullptr;

}
// main start here ...
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
    Node::insertNodeAtEnd(head, n);
  }

  cout << "before deleting the node at end : " << endl;
  Node::displayNode(head);

  cout<<"After deleting the node at end of the linked list: "<<endl;
  Node::deleteNodeAtEnd(head);
  Node::displayNode(head);
  return 0;
}