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

void displayNode(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << "-> ";
    temp = temp->next;
  }
  cout << "nll" << endl;
}


void deleteNodeAtGivenPos(Node * & head,int pos){
  if(head==nullptr){
    cout<<"list is empty "<<endl;
    return;
  }
  if(pos==1){
    Node *temp=head;
    head = temp->next;
    delete temp;
    return;
  }
  Node * temp = head;
  for(int i =  1 ;i<pos-1;i++){
    temp = temp->next;
  }
  Node * deleteNode = temp->next;
  temp->next =  deleteNode->next;
  delete deleteNode;
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
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

// main start here ...
int main()
{

  Node *head = nullptr;
  insertNodeAtEnd(head, 10);
  insertNodeAtEnd(head, 20);
  insertNodeAtEnd(head, 30);
  insertNodeAtEnd(head, 40);
  insertNodeAtEnd(head, 50);
  displayNode(head);
  int pos ;
  cout << "enter the position to delete node : ";
  cin>>pos;
  deleteNodeAtGivenPos(head,pos);
  displayNode(head);
  return 0;
}