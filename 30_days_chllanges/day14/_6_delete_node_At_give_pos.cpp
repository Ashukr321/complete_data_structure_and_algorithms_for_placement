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

  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static void deleteNodeATGivenPos(Node *&head, int pos);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
void Node::insertNodeAtEnd(Node *&head, int data)
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

void Node::deleteNodeATGivenPos(Node *&head, int pos)
{
  if (head == nullptr)
  {
    cout << "Linked list is already empty." << endl;
    return;
  }

  // Handle the case where the node to be deleted is the head node
  if (pos == 0)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
    return;
  }

  Node *temp = head;
  for (int i = 1; i < pos - 1 && temp != nullptr && temp->next != nullptr; i++)
  {
    temp = temp->next;
  }

  // Check if the position is valid
  if (temp == nullptr || temp->next == nullptr)
  {
    cout << "Position is out of range." << endl;
    return;
  }

  Node *nodeToDelete = temp->next;
  temp->next = temp->next->next;
  delete nodeToDelete;
}
// main start here ...
int main()
{

  Node *head = nullptr;
  int size;
  cout << "Enter the size of the  linked list : " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }

  cout << "before deleting the node : " << endl;
  Node ::displayNode(head);

  int pos;
  cout << "Enter the pos at which u want to delete node: " << endl;
  cin >> pos;
  Node::deleteNodeATGivenPos(head, pos);
  cout << "After deleting the node at " << pos << endl;
  Node::displayNode(head);
  return 0;
}