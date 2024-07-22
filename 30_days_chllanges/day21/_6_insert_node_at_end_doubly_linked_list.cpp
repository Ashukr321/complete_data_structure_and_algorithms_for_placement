//preprocessor
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node  * next;
  Node * prev;
  // constructor 
  Node(int data){
    this->data =data;
    this->next= nullptr;
    this->prev = nullptr;
  }
  static void displayNode(Node * head);
  static void insertAtEndInDll(Node * & head,int data);
};



void Node::displayNode(Node * head){
  Node * temp = head;
  while(temp != nullptr){
    cout<<temp->data<< " ->";
    temp = temp->next;
  }
  cout<<"nullptr"<<endl;
}

void Node::insertAtEndInDll(Node * & head,int data){
  Node * newNode = new Node(data);
  if(head ==nullptr){
    head = newNode;
    return;
  }
  Node * temp = head;
  while(temp->next != nullptr){
    temp = temp->next;
  }
  temp->next =newNode;
  newNode->prev= temp;
}


//main start here ...
int main(){
  Node * head = nullptr;
  int size;
  cout<<"Enter the size of the dll linked list"<<endl;
  cin>>size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout<<"Enter the node data at index"<< i <<endl;
    cin>>n;
    Node::insertAtEndInDll(head,n);
  }
  cout<<"display the node:"<<endl;
  Node::displayNode(head);

  return 0;
}