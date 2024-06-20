//preprocessor
#include<iostream>
using namespace std;
class Node {
  public:
  int data;
   Node * next;
   Node ( int data){
    this-> data = data;
    this->next= nullptr;
   }
};

void displayNode(Node * head){
  Node * temp = head;
  while( temp ->next != nullptr){
    cout << temp -> data << "  -> ";
    temp= temp -> next;
  }
}
void insertNodeAtEnd(Node  * &  head , int data){
  Node * newNode = new Node (data);
  if( head == nullptr){
    head = newNode;
    return;
  }
  Node * temp = head;
  while (temp ->next != nullptr)
  {
    temp = temp->next;
  }
  temp ->next = newNode;
  
}

int lengthOfNode(Node * head){
  int count   = 0; 
  Node * temp = head;
  while(temp -> next != nullptr){
    count++;
    temp = temp ->next;
  }
  return count;
}




//main start here ...
int main(){
  Node * head = nullptr;
  insertNodeAtEnd(head,13);
  insertNodeAtEnd(head,13);
  insertNodeAtEnd(head,3);
  insertNodeAtEnd(head,323);
  insertNodeAtEnd(head,3);
  displayNode ( head);
  cout<<endl;

  int length = lengthOfNode(head);
  cout<<"length of the node is : "<<length<<endl; 
  return 0;
}