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
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "-> ";
    temp = temp->next;
  }
  cout << "null" << endl;
}
// is this is correct code 
Node * findMiddleOfNode(Node  * head){
  Node * slow= head;
  Node * fast = head;
  while(fast !=nullptr && fast ->next != nullptr){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}
void insertNodeAtBegin(Node *&head, int data)
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

// main start here ...
int main()
{

  Node *head = nullptr;
  insertNodeAtBegin(head, 10);
  insertNodeAtBegin(head, 1);
  insertNodeAtBegin(head, 20);
  insertNodeAtBegin(head, 30);
  displayNode(head);
  Node * midNode = findMiddleOfNode(head);
  cout<<"middle node of the linked list : "<<midNode->data<<endl;
  return 0;
}