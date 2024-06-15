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
};

void display(Node *head)
{
  Node *temp = head;
  while (temp!= nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl; // add this line to print NULL at the end
}

void insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

void updateAtBegin(Node *&head, int data)
{
  if (head == nullptr)
  {
   cout<<"we can't update linked list is empty ! "<<endl;
   return;
  }
  head->data = data;
}

int main()
{
  Node *head = nullptr;
  insertNodeAtBegin(head, 1);
  insertNodeAtBegin(head, 2);
  insertNodeAtBegin(head, 3);
  insertNodeAtBegin(head, 4);

  display(head);
  cout<<endl;
  cout<<"After updating the data of the head node! "<<endl;
  updateAtBegin(head, 10);
  display(head);
  
  return 0;
}