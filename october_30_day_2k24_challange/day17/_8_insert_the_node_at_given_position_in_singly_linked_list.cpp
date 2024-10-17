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
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  // check the corner case
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

void insertNodeAtGivenPos(Node *&head, int data, int pos)
{
  if (pos == -1)
  {
    return;
  }
  Node *newNode = new Node(data);
  Node *temp = head;
  for (int i = 1; i < pos - 1; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr)
  {
    cout << "Invalid position" << endl;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtEnd(head, 1);
  insertNodeAtEnd(head, 2);
  insertNodeAtEnd(head, 3);
  insertNodeAtEnd(head, 4);
  insertNodeAtEnd(head, 5);
  cout << "display the node :" << endl;
  displayNode(head);
  int insertedData;
  cout << "Enter your data that you want to insert " << endl;
  cin >> insertedData;
  int pos;
  cout << "Enter the position at which you want to insert the data " << endl;
  cin >> pos;
  insertNodeAtGivenPos(head, insertedData, pos);
  cout << "After inserted at postion :" << pos << endl;
  displayNode(head);

  return 0;
}