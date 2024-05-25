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
};
void checkCircular(Node * head){
  Node * temp = head; 
  
  for (int i = 0; i < 20; i++)
  {
    cout<<temp->data<<"->";
    temp = temp ->next;
  }
  
}
// display the node
void displayNode(Node *head)
{
  Node *temp = head;
  while (temp->next!= head)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
}



//  insertNodeAtBegin
void insertNodeAtBegin(Node *&head, int data)
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
  newNode->next = head;
  temp->next = newNode;
  head = newNode;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtBegin(head, 1);
  insertNodeAtBegin(head, 2);
  insertNodeAtBegin(head, 3);
  insertNodeAtBegin(head, 4);
  displayNode(head);
  cout<<endl;
  checkCircular(head);
  return 0;
}

//   singly circular linked list
// insertion of the node at the  begin  will take o(n) time complexity
