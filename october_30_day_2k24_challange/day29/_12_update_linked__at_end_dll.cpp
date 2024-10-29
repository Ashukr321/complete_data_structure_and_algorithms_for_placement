// preprocessor
#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node *prev;
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
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
void insertNodeAtEnd(Node *&head, int data)
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
  newNode->prev = temp;
}

void  updateLinkedAtEnd(Node * &head,int data){

  // check corner case 
  if(head == nullptr){
    cout << "Linked list is empty" << endl;
    return;
  }

  Node * temp = head;

  while(temp->next!= nullptr){
    temp = temp->next;
  }

  temp->data = data;
}
// main start here ...
int main()
{
  Node *head = nullptr;
  insertNodeAtEnd(head, 1);
  insertNodeAtEnd(head, 2);
  insertNodeAtEnd(head, 3);
  insertNodeAtEnd(head, 4);
  insertNodeAtEnd(head, 5);
  displayNode(head);
  int updateData;
  cout << "Enter your updated data:" << endl;
  cin >> updateData;
  updateLinkedAtEnd(head,updateData);
  cout << "After updated linked list :" << endl;
  displayNode(head);
  return 0;
} 