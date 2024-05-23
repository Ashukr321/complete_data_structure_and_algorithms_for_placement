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
  while (temp != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp ->next;
  }
  cout<<"NULL"<<endl;
}

// insertNode at End of the linked list 
void insertNode(Node *&head, int data){
  Node * newNode =  new Node(data);
  if(head == NULL){
     head = newNode;
     return; 
  }
  Node * temp = head; 
  while ( temp ->next != nullptr){
    temp = temp ->next;
  }
  temp ->next = newNode;
}


void deleteNodeAtPos(Node * & head , int pos ){
  Node * temp =  head; 
   if(head == nullptr){
    return;
   }
for(int i = 0; i<pos-1 && temp ->next !=nullptr; i++){
    temp  = temp->next;
}
Node * deletedNode = temp ->next;
temp ->next = temp ->next->next;
delete deletedNode;
}
// main start here ...
int main()
{

  Node * head = NULL;
  insertNode(head, 1);
  insertNode(head, 2);
  insertNode(head, 3);
  insertNode(head, 4);
  displayNode(head);
  int pos; 
  cout<<"Enter the pos : at which you want  to delete the node : "<<endl;
  cin>>pos;
  cout<<"AFTER deleting the node at postion "<<endl;
  deleteNodeAtPos(head,pos);
  displayNode(head);
  return 0;
}

// time complexity will take to delate at the given position :  o (n );
