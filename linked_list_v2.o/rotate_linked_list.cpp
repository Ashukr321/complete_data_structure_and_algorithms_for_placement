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

void displayNode(Node *head)
{
  if (head == nullptr)
  {
    cout << "List is empty" << endl;
    return;
  }
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "  ->  ";
    temp = temp->next;
  }
  cout << "null" << endl;
}

void insertAtEnd(Node **head, int data)
{
  Node *newNode = new Node(data);
  if (*head == nullptr)
  {
    *head = newNode;
    return;
  }
  Node *temp = *head;
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

Node* rotateLinkedList(Node **head, int k)
{
  if (k == 0)
  {
    return *head;
  }
  Node *current = *head;
  int count = 1;
  while (count < k && current != nullptr)
  {
    current = current->next;
    count++;
  }

  if (current == nullptr)
  {
    return *head;
  }

  Node *kthNode = current;
  while (current->next != NULL)
  {
    current = current->next;
  }
  current->next = *head;

  *head = kthNode->next;
  kthNode->next = NULL;

  return *head;
}

int main()
{
  Node *head = nullptr;
  insertAtEnd(&head, 1);
  insertAtEnd(&head, 2);
  insertAtEnd(&head, 3);
  insertAtEnd(&head, 4);
  cout << "before rotating the kth time " << endl;
  displayNode(head);

  int k;
  cout << "Enter the kth position at which you want to rotate the linked list: " << endl;
  cin >> k;
  cout << endl;
  head = rotateLinkedList(&head, k);
  cout << "After rotating the linked list by kth time " << endl;
  displayNode(head);
  return 0;
}