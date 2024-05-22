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
  ~Node()
  {
    cout << "destructor called" << endl;
  }
};

void displayNode(Node *head)
{
  Node *temp = head; 
  while (temp != nullptr)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
void insertNodeAtPosition(Node *&head, int pos, int data)
{
  Node *newNode = new Node(data);
  if (pos == 0)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  if(temp == nullptr){
    cout<<"postion is not found !"<<endl;
    delete newNode;
    return;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

// main start here ...
int main()
{
  Node *head = NULL;
  insertNodeAtPosition(head, 0, 10);
  insertNodeAtPosition(head, 1, 20);
  insertNodeAtPosition(head, 2, 50);
  insertNodeAtPosition(head, 4, 20);
  displayNode(head);
  return 0;
}