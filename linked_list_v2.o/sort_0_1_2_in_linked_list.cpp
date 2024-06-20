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
void displayNode(Node *&head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "null" << endl;
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
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}
void sortList(Node *head)
{
  if (head == nullptr)
  {
    return;
  }
  int count0 = 0, count1 = 0, count2 = 0;
  Node *temp = head;
  while (temp != nullptr)
  {
    if (temp->data == 0)
    {
      count0++;
    }
    else if (temp->data == 1)
    {
      count1++;
    }
    else if (temp->data == 2)
    {
      count2++;
    }
    temp = temp->next;
  }
  temp = head;
  while (count0--)
  {
    temp->data = 0;
    temp = temp->next;
  }
  while (count1--)
  {
    temp->data = 1;
    temp = temp->next;
  }
  while (count2--)
  {
    temp->data = 2;
    temp = temp->next;
  }
}

// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtEnd(head, 0);
  insertNodeAtEnd(head, 1);
  insertNodeAtEnd(head, 2);
  insertNodeAtEnd(head, 1);
  insertNodeAtEnd(head, 0);
  displayNode(head);
  cout<<"After sorting the linked list : "<<endl;
  sortList(head);
  displayNode(head);
  return 0;
}