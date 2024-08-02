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
  }
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);

  static void insertNodeAtGivenPos(Node *&head, int data, int pos);
};

void Node::displayNode(Node *head)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  Node *temp = head;
  do
  {
    cout << temp->data << " ->";
    temp = temp->next;
  } while (temp != head);
  cout << "HEAD" << endl;
}

void Node::insertNodeAtGivenPos(Node *&head, int data, int pos)
{
  Node *newNode = new Node(data);
  if (pos == 0)
  {
    Node *temp = head;
    while (temp->next != head)
    {
      temp = temp->next;
    }
    newNode->next = head;
    temp->next = newNode;
  }
  Node *temp = head;
  for (int i = 1; i < pos - 1 && temp != nullptr && temp->next != nullptr; i++)
  {
    temp = temp->next;
  }
  if (temp == nullptr || temp->next == nullptr)
  {
    cout << "Invalid position" << endl;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}
void Node::insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    newNode->next = head;
    return;
  }
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  newNode->next = head;
  temp->next = newNode;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list : " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node data at index: " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display the node :" << endl;
  Node::displayNode(head);
  int insertData;
  cout << "Enter data that u want to insert:" << endl;
  cin >> insertData;
  int pos;
  cout << "Enter the position at which u want to insert :" << endl;
  cin >> pos;
  Node::insertNodeAtGivenPos(head, insertData, pos);
  cout << "After inserting the node:" << endl;
  Node::displayNode(head);
  return 0;
}