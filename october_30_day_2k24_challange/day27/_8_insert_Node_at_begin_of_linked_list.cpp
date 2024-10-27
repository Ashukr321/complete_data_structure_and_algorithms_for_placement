// preprocessor
#include <iostream>
using namespace std;

// singly linked list
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
};
void displayNode(Node *head)
{
  Node *temp = head;
  int sum = 0;
  while (temp != nullptr)
  {
    cout << temp->data << "->";
    sum+=temp->data;
    temp = temp->next;
  }
  cout << "NULL" << endl;
  cout<<endl;
  cout<<"the sum of the linked list node :"<< sum <<endl;
}

void insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  // check corner case
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}
// main start here ...
int main()
{

  Node * head =nullptr;
  insertNodeAtBegin(head,1);
  insertNodeAtBegin(head,2);
  insertNodeAtBegin(head,3);
  insertNodeAtBegin(head,4);
  insertNodeAtBegin(head,5);
  displayNode(head);
  return 0;
}