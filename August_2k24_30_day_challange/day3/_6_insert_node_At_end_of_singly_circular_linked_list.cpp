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
    this->data=data;
  }
  static void displayNode(Node *head);
  static void insertNodeAtEnd(Node *&head, int data);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  do
  {
    cout <<temp->data << " ->";
    temp = temp->next;
  } while (temp != head);
  cout << "HEAD" << endl;
}

void Node::insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == NULL)
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
  newNode->next = temp->next;
  temp->next = newNode;
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
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    Node::insertNodeAtEnd(head, n);
  }
  cout << "Display the node : " << endl;
  Node::displayNode(head);

  return 0;
}