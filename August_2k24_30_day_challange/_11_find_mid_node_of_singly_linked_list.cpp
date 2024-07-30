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
  static Node *findMidNode(Node *head);
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

Node *Node::findMidNode(Node *head)
{
  Node *slow = head;
  Node *fast = head;
  while (fast->next != nullptr && fast->next->next !=nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
 return slow;
}

// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list :" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the node data at index: " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display node:" << endl;
  Node::displayNode(head);
  Node *midNode = Node::findMidNode(head);
  cout << "mid node : " << midNode->data << endl;
  return 0;
}