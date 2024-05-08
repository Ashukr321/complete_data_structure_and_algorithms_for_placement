#include <iostream>
#include <cstdlib> // for NULL
using namespace std;

class Node
{
public:
  int value;
  Node *next; // Pointer to the next Node

  // Constructor
  Node(int data)
  {
    this->value = data;
    this->next = NULL; // Initialize next to NULL
  }

  // Destructor
  ~Node() {
    // No dynamic memory is allocated here, so nothing to deallocate.
  }
};

// Insert a new node at the head of the linked list
void insertAtHead(Node *&head, int data)
{
  Node *newNode = new Node(data); // Create a new node
  newNode->next = head; // Point the new node's next to the current head
  head = newNode; // Make the new node the head of the list
}

// Display the linked list
void display(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl; // Print NULL at the end
}

int main()
{
  Node *head = NULL; // Initialize head to NULL to represent an empty list
  insertAtHead(head, 2);
  insertAtHead(head, 3);
  insertAtHead(head, 3);
  insertAtHead(head, 3);
  insertAtHead(head, 3);
  cout << "The linked list is: ";
  display(head);
  return 0;
}
