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
    this->next = NULL;
  }
};
void displayNode(Node *head)
{
  Node *temp = head;
  while (temp->next != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
}

void insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  newNode->next = temp;
  head = newNode;
}

Node *middleNode(Node *head)
{
  Node *slow = head;
  Node *fast = head;
  while (fast != nullptr && fast->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}


// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtBegin(head, 1);
  insertNodeAtBegin(head, 2);
  insertNodeAtBegin(head, 3);
  insertNodeAtBegin(head, 4);
  insertNodeAtBegin(head, 5);
  insertNodeAtBegin(head, 6);
  insertNodeAtBegin(head, 7);
  displayNode(head);

  Node * midNode = middleNode( head);
  cout<<endl;
  cout<<"middle node of the linked list : "<<midNode->data<<endl;
  return 0;
}