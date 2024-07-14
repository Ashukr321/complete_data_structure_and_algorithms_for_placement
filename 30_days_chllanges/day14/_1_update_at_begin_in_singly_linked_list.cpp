// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  // members variables
  int data;
  Node *next;
  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
  // member function
  static void displayNode(Node *head);
  static void insertAtHead(Node *&head, int data);
  static void updateAtHead(Node *&head, int data);
};

void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " =>";
    temp = temp->next;
  }
  cout << "NuLL" << endl;
}

// insertAthEAD;
void Node::insertAtHead(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  newNode->next = temp;
  head = newNode;
}

// updateAtHead
void Node::updateAtHead(Node *&head, int data)
{
  if (head == nullptr)
  {
    cout << "linked list empty : " << endl;
    return;
  }
  head->data = data;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  int size;
  cout << "Enter the size of the linked list: " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    Node::insertAtHead(head, n);
  }

  cout << "display the node: " << endl;
  Node::displayNode(head);

  int updatedData;
  cout << "Enter the update data of the head: " << endl;
  cin >> updatedData;
  Node::updateAtHead(head, updatedData);
  cout << "After updating the head data of the linked list : " << endl;
  Node::displayNode(head);
  return 0;
}