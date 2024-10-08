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

void insertNodeAtEnd(Node *&head, int data)
{
  // create the newNode;
  Node *newNode = new Node(data);
  Node *temp = head;
  // check corner case
  if (temp == nullptr)
  {
    head = newNode;
    return;
  }

  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

void displayNode(Node *&head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "-> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

Node *middNode(Node *head)
{
  Node *slow = head;
  Node *fast = head;
  while (fast != nullptr && fast->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}
int searchNode(Node *head, int target)
{
  int position = 1;
  Node *currentNode = head;
  while (currentNode != nullptr)
  {
    if (currentNode->data == target)
    {
      return position;
    }
    currentNode = currentNode->next;
    position++;
  }
  return -1;
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
  cout << "Display the node :" << endl;
  displayNode(head);
  cout << endl;
  Node *midNode = middNode(head);

  cout << midNode->data << endl;
  int target;
  cout << "Enter the target data :" << endl;
  cin >> target;
  cout<<endl;
  cout << searchNode(head, target) << endl;
  return 0;
}