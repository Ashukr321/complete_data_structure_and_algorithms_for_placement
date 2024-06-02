#include <iostream>
using namespace std;

class  Node {
  public:
  int data ;
  Node * next;
  Node(int data){
    this->data = data;
    this->next  = nullptr;
  }
};


class StackUsingLinked {
  private:
  Node *top;
  public:
  //  create the  constructor 
  StackUsingLinked(){
    top = nullptr;
  }

  void  push (int data){
    Node * newNode = new Node(data);
    newNode ->next =top ;
    top = newNode; //  increment the index of the top by 1 

  };

  int pop (){
    //   validate 
    if(isEmpty()){
      throw std::invalid_argument("Stack is empty");
    }
    Node * temp = top;
    int popData  = temp ->data;
    top = top->next;
    delete temp ; 
    return popData;
  }

   int peek(){
    if(isEmpty()){
      throw std::invalid_argument("Stack is empty");
    }
    return top->data;
   }

  bool isEmpty(){
    return top == nullptr;
  }

 



};



int main() {
    StackUsingLinked s;
    s.push(12);
    s.push(13);
    s.push(14);
    cout<<s.isEmpty()<<endl;
    cout<<s.peek()<<endl;

    return 0;
}
