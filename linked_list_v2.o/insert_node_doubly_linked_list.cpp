#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

void insertNodeAtBeginDll(Node *&head, int data)
{
  Node * newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  newNode->next = temp;
  temp->prev = newNode;
  head = newNode;
}

void display(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ->";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  Node *head = nullptr;
  insertNodeAtBeginDll(head, 1);
  insertNodeAtBeginDll(head, 2);
  insertNodeAtBeginDll(head, 3);
  insertNodeAtBeginDll(head, 4);
  display(head);
  return 0;
}