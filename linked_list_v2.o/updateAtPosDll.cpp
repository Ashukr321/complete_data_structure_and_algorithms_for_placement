//preprocessor
#include<iostream>
using namespace std;

class Node {
  public:
  int data ;
  Node* next ;
  Node * prev;
  Node(int val){
    data = val;
    next = NULL ;
    prev = NULL ;

  }
};

void displayNode ( Node * head){
  Node * temp = head ;
  while(temp != NULL){
    cout << temp -> data << " ->  ";
    temp = temp -> next ;
    }
}
void insertNodeAtBegin(Node * & head ,int data){
  Node * newNode = new Node(data);
  if( head ==nullptr){
    head = newNode;
    return;
  }
  Node * temp = head; 
  newNode -> next =  temp ;
  temp -> prev = newNode ;
  head=newNode;
}
void updateAtPosDll( Node * & head, int pos, int data){
  Node * temp = head ;
  if( head == nullptr){
    cout << "List is empty" << endl ;
    return;
  }
  for(int i = 0; i< pos-1 && temp != nullptr ; i++){
    temp = temp -> next ;
  }
  if(temp == nullptr){
    cout << "Position out of range" << endl ;
    return;
  }
  temp ->data= data;
  
}
//main start here ...
int main(){
  Node  * head = nullptr;
  insertNodeAtBegin( head, 132);
  insertNodeAtBegin( head, 12);
  insertNodeAtBegin( head, 2);
  insertNodeAtBegin( head, 12);
  displayNode( head);
  int data ;
  cout<<"Enter your data: "<<endl;
  cin>>data;
  updateAtPosDll(head,2,data);
  cout<<endl;
  displayNode( head);
  return 0;
}