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
  void insertNodeAtBegin(Node *&head, int data);
};

void insertNodeAtBegin(Node *&head, int data)
{
  // create the newNode ;
  Node *newNode = new Node(data);
  //  check head is null or not
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

void displayNode(Node *head)
{

  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "null" << endl;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtBegin(head, 10);
  insertNodeAtBegin(head, 20);
  insertNodeAtBegin(head, 30);
  insertNodeAtBegin(head, 40);
  displayNode(head);


  return 0;
}