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

void display(Node *head)
{
  int cnt = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    cnt++;
    cout << temp->data << " ---> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
  cout << "Length of linked list is : " << cnt << endl;
}


void insertNodeAtTail(Node *&head, Node *&tail, int data)
{
  Node *newNode = new Node(data);
  if (tail == nullptr)
  {
    tail = newNode;
    head = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}


// main start here ...
int main()
{
  Node *head = nullptr;
  Node *tail = nullptr;
  insertNodeAtTail(head, tail, 10);
  insertNodeAtTail(head, tail, 20);
  insertNodeAtTail(head, tail, 30);
  display(head);

  return 0;
}