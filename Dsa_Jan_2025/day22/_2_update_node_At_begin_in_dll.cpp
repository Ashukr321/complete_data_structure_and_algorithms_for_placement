// preprocessor
#include <iostream>
using namespace std;

// class Node
class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};

void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "--->";
    temp = temp->next;
  }
  cout << "Null" << endl;
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
  newNode->prev = temp;
}

void updateAtNode(Node *&head, int data)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  head->data = data;
}
// main start here ...
int main()

{

  Node *head = nullptr;
  insertNodeAtEnd(head, 10);
  insertNodeAtEnd(head, 20);
  insertNodeAtEnd(head, 30);
  insertNodeAtEnd(head, 40);
  cout << "Before updating the data" << endl;
  displayNode(head);
  int data;
  cout << "Enter your  data " << endl;
  cin >> data;
  cout << "After updating the data " << endl;
  updateAtNode(head, data);
  displayNode(head);
  return 0;
}