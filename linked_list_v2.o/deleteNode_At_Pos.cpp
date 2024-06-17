// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }
};

void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " =>";
    temp = temp->next;
  }
}

void insertNodeAtEndDll(Node *&head, int data)
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
  newNode->prev = temp;
}


void deleteNodeAtPosDll(Node *&head, int pos)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1 && temp != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr || temp->next == nullptr)
  {
    cout << "Position out of bound" << endl;
    return;
  }
  Node *deleteNode = temp->next;
  temp->next = temp->next->next;
  if (temp->next != nullptr)
  {
    temp->next->prev = temp;
  }
  delete deleteNode;
}
// main start here ...
int main()
{

  Node *head = nullptr;
  insertNodeAtEndDll(head, 1);
  insertNodeAtEndDll(head, 2);
  insertNodeAtEndDll(head, 3);
  insertNodeAtEndDll(head, 4);
  displayNode(head);
  cout<<endl;
  cout<<"After deleting the node at the given position:"<<endl;
  deleteNodeAtPosDll(head,2);
  cout<<endl;
  displayNode(head);
  return 0;
}