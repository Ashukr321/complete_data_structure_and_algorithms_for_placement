//preprocessor
#include<iostream>
using namespace std;

class Node {
  public:
  int data;
  Node * next ;
  Node (int data){
    this-> data = data;
    this->next= nullptr;
  }
};
void displayNode ( Node * head){
  Node * temp = head;
  do {
    cout << temp->data << "  -> ";
    temp = temp->next;
  }while(temp !=head);
  cout<<"HEAD"<<endl;
}

void insertAtEnd(Node * & head, int data){
  Node * newNode = new Node(data);
  if( head == nullptr){
    head = newNode;
    newNode ->next= head;
    return;
  }
  Node * temp = head;
  while(temp ->next != head){
    temp = temp ->next;
  }
  newNode ->next = temp->next;
  temp ->next= newNode;
}
void updateAtEnd(Node * & head, int data,int pos){
  if( head == nullptr){
    cout<<"List is empty"<<endl;
    return;
  }
  Node * temp  = head;
  for(int i = 0 ; i<pos-1 && temp != nullptr  ; i++ ){
    temp = temp ->next;
  }
  
  if(temp == nullptr){
    cout<<"Position out of range"<<endl;
    return;
  }
  temp ->data = data;
}
//main start here ...
int main(){
  

  Node * head = nullptr;
  insertAtEnd( head,1);
  insertAtEnd( head,2);
  insertAtEnd( head,3);
  insertAtEnd( head,4);
  displayNode(head);
  cout<<"After updating : "<<endl;
  updateAtEnd(head,1394,3);
  displayNode(head);
  
  return 0;
}