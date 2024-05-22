#include <iostream>
using namespace std;

// class of the node

class Node
{
public:
  int data;
  Node *next;

  // Constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }

  // Destructor
  ~Node()
  {
    // Optional: You can add any cleanup code here if needed
  }
};

void insertAtEnd(Node *&head, int data)
{
  // Create the newNode
  Node *newNode = new Node(data);

  // Check if the head is null
  if (head == NULL)
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

// Main function
int main()
{
  Node *head = NULL;
  insertAtEnd(head, 1);
  insertAtEnd(head, 2);
  insertAtEnd(head, 3);
  insertAtEnd(head, 4);
  displayNode(head);

  // Clean up the allocated memory
  while (head != NULL)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
  }

  return 0;
}

//  time complexity of the insert at end of the linked list  is  p(n)
// 