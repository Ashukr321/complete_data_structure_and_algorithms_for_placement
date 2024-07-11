#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  // constructor 
  Node (int data){
    this->data = data;
    this->next = nullptr;
  }
  // member function 
  static void insertAtHead(Node * & head, int data);
  static void disPlayNode(Node * head);
};

void Node ::disPlayNode(Node * head){
  if(head == nullptr) {
    cout << "List is empty" << endl;
    return;
  }
  
  Node * temp = head;
  do{
    cout<<temp->data<<" -> ";
    temp = temp->next;
  }while(temp!= head);
  cout<<"HEAD"<<endl;
  cout<<endl;
}

void Node::insertAtHead(Node * &head,int data){
  Node * newNode = new Node(data);
  if(head== nullptr){
    head = newNode;
    newNode->next= newNode; // for circular linked list
  } else {
    Node *temp = head;
    while(temp->next!= head){
      temp = temp->next;
    }
    newNode->next= head;
    temp->next= newNode;
    head = newNode;
  }
}

int main(){
  Node* head = nullptr;
  int size;
  cout<<"Enter the size of the linked list : "<<endl;
  cin>>size;
  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter the element at index: "<< i <<endl;
    cin>>n;
    Node::insertAtHead(head,n);
  }

  cout<<"Display the node:"<<endl;
  Node::disPlayNode(head);
  
  return 0;
}