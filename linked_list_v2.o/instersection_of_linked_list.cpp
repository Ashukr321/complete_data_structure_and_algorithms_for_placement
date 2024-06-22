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

void displayNode(Node *&head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "  -> ";
    temp = temp->next;
  }
  cout << "null" << endl;
}

Node *intersectionOfLinkedList(Node *&l1, Node *&l2)
{
  int l1Length = getLength(l1);
  int l2Length = getLength(l2);
  int diff = abs(l1Length - l2Length); // this will return the  positive

  // create two pointer that point to the same point
  Node *temp1 = l1; // this pointer point to the first linked list head
  Node *temp2 = l2; // this pointer point to the 2nd linked list head

  if (l1Length > l2Length)
  {
    for (int i = 0; i < diff; i++)
    {
      temp1 = temp1->next;
    }
  }
  else
  {
    for (int i = 0; i < diff; i++)
    {
      temp2 = temp2->next;
    }
  }
  while (temp1 != nullptr && temp2 != nullptr)
  {
    if (temp1 == temp2)
    {
      return temp1; // Intersection found
    }
    temp1 = temp1->next;
    temp2 = temp2->next;
  }

  return nullptr; // No intersection
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

// main start here ...
int main()
{
  Node *l1 = nullptr;

  insertNodeAtEnd(l1, 1);
  insertNodeAtEnd(l1, 2);
  insertNodeAtEnd(l1, 3);
  insertNodeAtEnd(l1, 4);

  Node *l2 = nullptr;
  insertNodeAtEnd(l2, 3);
  insertNodeAtEnd(l2, 4);
  insertNodeAtEnd(l2, 2);
  insertNodeAtEnd(l2, 1);
  insertNodeAtEnd(l2, 10);
  insertNodeAtEnd(l2, 11);

  cout << "this is linked list 1 : " << endl;
  displayNode(l1);
  cout << endl;
  cout << "this is linked list 2 : " << endl;
  displayNode(l2);
  return 0;
}