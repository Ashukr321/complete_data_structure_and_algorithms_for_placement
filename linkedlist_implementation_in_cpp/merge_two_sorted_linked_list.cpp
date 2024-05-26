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
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertNodeAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

Node* mergeLinkedList(Node* l1, Node* l2) {
  Node dummy(-1);
  Node* current = &dummy;

  while (l1 != nullptr && l2 != nullptr) {
    if (l1->data < l2->data) {
      current->next = l1;
      l1 = l1->next;
    } else {
      current->next = l2;
      l2 = l2->next;
    }
    current = current->next;
  }

  if (l1 != nullptr) {
    current->next = l1;
  } else {
    current->next = l2;
  }

  return dummy.next;
}

// main starts here ...
int main()
{
  Node *l1 = nullptr;
  Node *l2 = nullptr;
  insertNodeAtEnd(l1, 1);
  insertNodeAtEnd(l1, 2);
  insertNodeAtEnd(l1, 3);

  insertNodeAtEnd(l2, 1);
  insertNodeAtEnd(l2, 5);
  insertNodeAtEnd(l2, 10);

  cout << "Before merging the sorted linked lists:" << endl;
  displayNode(l1);
  displayNode(l2);

  cout << endl;
  cout << "After merging the sorted linked lists:" << endl;
  Node *mergedList = mergeLinkedList(l1, l2);
  displayNode(mergedList);

  return 0;
}
