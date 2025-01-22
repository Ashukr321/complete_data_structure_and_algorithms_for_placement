// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};

void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ---> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

// this approach taes begin and end  o(1) time complexity
// but it takes o(n) space complexity  when insert at given position
void insertNodeAtEnd(Node *&head, Node *&tail, int data)
{
  Node *newNode = new Node(data);
  if (head == nullptr)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode; // update the tail pointer
}

// main start here ...
int main()
{
  Node *head = nullptr;
  Node *tail = nullptr;
  
  insertNodeAtEnd(head, tail, 10);
  insertNodeAtEnd(head, tail, 20);
  insertNodeAtEnd(head, tail, 30);
  cout<<"Before update  the data "<<endl;
  displayNode(head);
  int data;
  cout<<"Enter your updated data "<<endl;
  cin>>data;
  cout<<"After update the data "<<endl;
  tail->data = data; // here we can directly updated the data of tail node
  displayNode(head);
  return 0;
}