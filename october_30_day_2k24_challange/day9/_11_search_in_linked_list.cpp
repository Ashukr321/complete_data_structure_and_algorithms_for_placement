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

void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int searchNode(Node *head, int target)
{
  Node *temp = head;
  int pos = 1;
  while (temp != nullptr)
  {
    if (temp->data == target)
    {
      return pos;
    }
    else
    {
      temp = temp->next;
      pos++;
    }
  }
  return -1;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  insertAtEnd(head, 1);
  insertAtEnd(head, 2);
  insertAtEnd(head, 3);
  insertAtEnd(head, 4);
  insertAtEnd(head, 5);
  cout << "display the node :" << endl;
  displayNode(head);
  int target;
  cout << "Enter the target Node data :" << endl;
  cin >> target;
  cout << "Index of the target node:" << searchNode(head, target) << endl;
  return 0;
}