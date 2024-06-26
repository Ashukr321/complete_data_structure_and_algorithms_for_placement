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
    this->next = nullptr;
  }
};

void displayNode(Node *head)
{
  // base case
  if (head == nullptr)
  {
    cout << "nullptr" << endl;
    return;
  }
  cout << head->data << " ->";
  displayNode(head->next);
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
  head = newNode;
}

int searchNodeInLinkedList(Node* head ,int target){
  if(head == nullptr){
    return -1; 
  }
  int i = 0;
  Node * temp = head;
  while(temp != nullptr){
    if(temp ->data == target){
      return i+1;
    }
    i++;
    temp = temp ->next;
  }
  return -1; // return -1 to indicate not found
}

// main start here ...
int main()
{
  int target;
  cout << "Enter the target element :" << endl;
  cin >> target;
  Node *head = nullptr;
  insertNodeAtBegin(head, 1);
  insertNodeAtBegin(head, 2);
  insertNodeAtBegin(head, 3);
  insertNodeAtBegin(head, 4);
  displayNode(head);
  cout << endl; // add a newline for better output
  int elementIndex = searchNodeInLinkedList(head, target);
  if(elementIndex == -1){
    cout << "Target element not found in the linked list." << endl;
  } else {
    cout << "The index of the target element is: " << elementIndex << endl;
  }
  return 0;
}