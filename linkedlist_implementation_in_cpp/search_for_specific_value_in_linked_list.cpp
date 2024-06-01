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

void insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

bool searchSpecificValue(Node *head, int data)
{
  Node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == data)
    {
      return true;
    }
    temp  = temp->next;
  }
  return false;
}

// main start here ...
int main()
{
  Node *head = NULL;
  insertNodeAtBegin(head, 1);
  insertNodeAtBegin(head, 2);
  insertNodeAtBegin(head, 3);
  insertNodeAtBegin(head, 4);
  displayNode(head);
  int data;
  cout << "Enter the data to search: ";
  cin >> data;
  if (searchSpecificValue(head, data))
  {
    cout << "yes Enter your data is present in the linked list 🤷‍♂️" << endl;
  }
  else
  {
    cout << "no Enter your data is not present in the linked list 😔" << endl;
  }

  cout<<"this is ashutosh kumar singh "<<endl;
  return 0;
}
// time complexity of the insert node at the begin is n(1) -> constant time  complexity
