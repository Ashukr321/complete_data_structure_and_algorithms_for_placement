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
  while (temp != nullptr)
  {
    cout << temp->data << " ->";
    temp = temp->next;
  }
  cout << "null" << endl;
}

void insertAtEnd(Node *&head, int data)
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

int getLength(Node *head)
{
  int length = 0;
  Node *temp = head;
  while (temp != nullptr)
  {
    length++;
    temp = temp->next;
  }
  return length;
}
// swap the linked list using third variable

void swap(Node *a, Node *b)
{
  int temp = a->data;
  a->data = b->data;
  b->data = temp;
}

void bubbleSortLinkedList(Node *head)
{
  int length = getLength(head);
  // out loop
  for (int i = 0; i < length - 1; i++)
  {
    Node *current = head;
    Node *next = head->next;

    for (int j = 0; j < length - 1 - i; j++)
    {
      if (current->data > next->data)
      {
        swap(current, next);
      }
      current = next;
      next = next->next;
    }
  }
}
// main start here ...
int main()
{

  Node *head = nullptr;
  insertAtEnd(head, 13);
  insertAtEnd(head, 223);
  insertAtEnd(head, 23);
  insertAtEnd(head, 4);
  cout << "before sorting the linked list " << endl;
  displayNode(head);
  cout<<"After sorting the "<<endl;
  cout<<endl;
  bubbleSortLinkedList(head);
  displayNode(head);
  return 0;
}