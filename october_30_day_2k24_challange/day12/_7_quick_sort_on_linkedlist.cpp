#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev; // added prev pointer

  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr; // initialize prev to nullptr
  }
};

void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertNodeAtBegin(Node *&head, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode; // set prev pointer of head to newNode
  head = newNode;
}

void swap(Node *a, Node *b)
{
  int temp = a->data;
  a->data = b->data;
  b->data = temp;
}

Node *partition(Node *low, Node *high)
{
  int pivot = high->data;
  Node *i = low;
  for (Node *j = low; j != high; j = j->next)
  {
    if (j->data <= pivot)
    {
      i = (i == low) ? low : i->next;
      swap(i, j);
    }
  }
  i = (i == low) ? low : i->next;
  swap(i, high);
  return i;
}

void quickSort(Node *low, Node *high)
{
  if (low != nullptr && high != nullptr && low != high && low != high->next)
  {
    Node *pivot = partition(low, high);
    quickSort(low, pivot->prev);
    quickSort(pivot->next, high);
  }
}

void quickSortList(Node **head)
{
  Node *h = *head;
  if (h == nullptr)
  {
    return;
  }
  Node *tail = *head;
  while (tail->next != nullptr)
  {
    tail = tail->next;
  }

  quickSort(h, tail);
}

int main()
{
  Node *head = nullptr;
  insertNodeAtBegin(head, 1);
  insertNodeAtBegin(head, 4);
  insertNodeAtBegin(head, 2);
  insertNodeAtBegin(head, 5);
  insertNodeAtBegin(head, 3);

  cout << "Before sorting :" << endl;
  displayNode(head);

  quickSortList(&head);

  cout << "After quick sort linked list " << endl;
  displayNode(head);

  return 0;
}