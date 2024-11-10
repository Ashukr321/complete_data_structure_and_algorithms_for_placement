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
    this->data = data;
    this->next = NULL;
  }
};

// displayNode
void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertAtEnd(Node *&head, int data)
{
  Node *newNode = new Node(data);
  // check corner case
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

Node * findMidNode(Node *head){
  Node* slow = head;
  Node* fast = head;
  while(fast!=nullptr && fast->next!=nullptr){
    slow = slow->next;
    fast= fast->next->next;
  }
  return slow;
}

// ⭐ reverse the linked list 
void reverseLinkedList(Node * & head){
  Node * prev = nullptr;
  Node * current  = head;
  Node * next = nullptr;
  while(current!=nullptr){
    next = current->next;
    current->next= prev;
    prev = current;
    current = next;
  }
  head = prev;
}
// main start here ...
int main()
{

  Node *head = nullptr;
  insertAtEnd(head, 1);
  insertAtEnd(head, 2);
  insertAtEnd(head, 3);
  insertAtEnd(head, 4);
  insertAtEnd(head, 5);
  displayNode(head);
  Node * midNode= findMidNode(head);
  cout<<"Mid Node is "<<midNode->data<<endl;

  cout<<"Reverse the linked list "<<endl;
  reverseLinkedList(head);
  displayNode(head);
  return 0;
}