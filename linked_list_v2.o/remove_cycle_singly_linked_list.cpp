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
};
void displayNode(Node *head)
{
  Node *temp = head;
  do
  {
    cout << temp->data << " ->";
    temp = temp->next;
  } while (temp != head);
  cout << "head" << endl;
}

void insertAtEnd(Node *&head, int data)
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
  newNode->next = temp->next;
  temp->next = newNode;
}

void checkCycle(Node *head)
{
  Node *temp = head;
  for (int i = 0; i < 20; i++)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
}

void brackCycle(Node *&head)
{
  if (head == nullptr)
  {
    cout << "linked list empty !" << endl;
    return;
  }
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  temp->next = nullptr;
}
// main start here ...
int main()
{

  Node *head = nullptr;
  insertAtEnd(head, 1);
  insertAtEnd(head, 2);
  insertAtEnd(head, 3);
  insertAtEnd(head, 4);
  displayNode(head);

  cout << "check linked cycle: " << endl;
  checkCycle(head);
  cout << endl;

  cout << "After break the  cycle of the linked list: " << endl;
  brackCycle(head);
  displayNode(head);
  cout << endl;
  checkCycle(head);
  return 0;
}