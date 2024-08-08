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
  static int lengthOfLinkedList(Node * head);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "->";
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
int Node::lengthOfLinkedList(Node * head){
  int length =0;
  Node * temp = head;
  while(temp!=nullptr){
    length++;
    temp = temp->next;
  }
  return length;
}

int main()
{

  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list: ";
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node data at index " << i << ": ";
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Displaying the linked list: ";
  Node::displayNode(head);
  cout<<endl;
  cout<<"The length of the linked list :"<<Node::lengthOfLinkedList(head)<<endl;
  return 0;
}