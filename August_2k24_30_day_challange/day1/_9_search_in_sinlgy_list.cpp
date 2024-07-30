// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  };
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
  static bool searchNode(Node *head, int data);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ->";
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
bool Node::searchNode(Node *head, int data)
{
  Node *temp = head;
  
  while (temp != nullptr)
  {
    if (temp->data == data)
    {
      return true;
    }
    temp = temp->next;
  }
  return false;
}
// main start here ...
int main()
{

  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node data  at index:" << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "display the node:" << endl;
  Node::displayNode(head);
  int searchData;
  cout << "Enter the data that u want to search: " << endl;
  cin >> searchData;
  if (Node::searchNode(head, searchData))
  {
    cout << "Data found" << endl;
  }
  else
  {
    cout << "Data not found" << endl;
  }
  return 0;
}