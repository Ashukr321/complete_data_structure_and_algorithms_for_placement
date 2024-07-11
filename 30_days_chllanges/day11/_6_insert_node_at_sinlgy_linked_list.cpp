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
  // member function
  static void displayNode(Node *head);
  static void insertAtHead(Node *&head, int data);
  static int linkedListSum(Node *head);
};
void Node::displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
  cout << endl;
}
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
int Node::linkedListSum(Node *head)
{
  Node *temp = head;
  int sum = 0;
  while (temp != nullptr)
  {
    sum += temp->data;
    temp = temp->next;
  }
  return sum;
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
  cout << "Display the Node: " << endl;
  Node ::displayNode(head);
  cout << endl;
  cout << "The sum of the linked list is : " << Node::linkedListSum(head) << endl;
  return 0;
}
