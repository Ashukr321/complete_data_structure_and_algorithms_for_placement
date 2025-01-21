// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  // CONSTRUCTORS
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

Node *findMidNode(Node *head)
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
void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
void insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}
// main start here ...
int main()
{

  Node *head = nullptr;
  insertNodeAtEnd(head, 10);
  insertNodeAtEnd(head, 20);
  insertNodeAtEnd(head, 30);
  insertNodeAtEnd(head, 40);
  displayNode(head);
  Node *midNode = findMidNode(head);
  cout << "Mid Node is : " << midNode->data << endl;
  return 0;
}