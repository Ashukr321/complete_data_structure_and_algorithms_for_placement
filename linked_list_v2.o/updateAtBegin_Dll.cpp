#include<iostream>
using namespace std;

class Node {
  public:
  int data ;
  Node * next = nullptr;
  Node * prev = nullptr;
  Node (int data){
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }
};

void displayNode ( Node * head ){
  Node * temp = head;
  while(temp != nullptr){
    cout<<temp->data<<" -> ";  
    temp = temp ->next;
  }
}
void insertAtHeadDll(Node * & head,int data){
  Node * newNode = new Node(data);
  if(head == nullptr){
    head = newNode;
    return;
  }
  
  Node * temp = head;
  newNode->next = temp ;
  temp  ->prev = newNode ;
  head  = newNode;
}

void updateAtBeginDll(Node * & head,int data){
  if (head == nullptr) {
    cout << "List is empty" << endl;
    return;
  }
  head->data = data;
}

int main(){
  Node * head = nullptr;
  insertAtHeadDll(head,1);
  insertAtHeadDll(head,2);
  insertAtHeadDll(head,3);
  insertAtHeadDll(head,4);
  displayNode(head);
  int data;
  cout<<endl;
  cout<<"Enter the data that you want to update it at begin: "<<endl;
  cin>>data;
  updateAtBeginDll(head,data);
  displayNode(head);
  return 0;
}