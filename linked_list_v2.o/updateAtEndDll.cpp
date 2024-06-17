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
    this->next = nullptr;
    this->prev = nullptr;
  }
};
void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
}

void insertAtEndDll(Node *&head, int data)
{
  Node *newNode = new Node(data);
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

void updateAtEndDll(Node * &  head , int data){
  if( head == nullptr){
    cout << "List is empty" << endl;
    return;
  }
  Node * temp = head;
  while(temp->next != nullptr){
    temp = temp -> next;
  }
  temp -> data = data;
}

// main start here ...
int main()
{

    Node * head = nullptr;
    insertAtEndDll(head,1);
    insertAtEndDll(head,2);
    insertAtEndDll(head,3);
    insertAtEndDll(head,4);
    displayNode(head);
    cout<<endl;
    int data;
    cout<<"Enter you data that want to update at end of the dll : "<<endl;
    cin>>data;
    updateAtEndDll(head,data);
    displayNode( head);

  return 0;
}