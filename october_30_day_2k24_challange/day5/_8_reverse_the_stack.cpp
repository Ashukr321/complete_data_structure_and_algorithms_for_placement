// preprocessor
#include <iostream>
using namespace std;

class Stack
{
private:
  int top;
  int *array;
  int capacity;

public:
  Stack(int capacity)
  {
    this->capacity = capacity;
    top = -1;
    array = new int[capacity];
  }
  // isUnderFlow
  bool isUnderFlow()
  {
    if (top == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  // isOverFlow
  bool isOverFlow()
  {
    if (top == capacity)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  // push
  void push(int data)
  {
    // check of overFlow case
    if (isOverFlow())
    {
      cout << "Stack is overflow " << endl;
      return;
    }
    array[++top] = data;
  }
  // pop
  int pop()
  {
    // check stack is underFlow
    if (isUnderFlow())
    {
      cout << "Stack is in underFlow " << endl;
      return -1;
    }

    return array[top--];
  }

  void reverseStack(){
    int * temp = new int[capacity];
    for(int  i = 0 ;i<=top; i++){
      temp[i] =array[top-i];
    }
    // delete the array stack
    delete[]array;
    array=temp; 
  }
  void printStack(){
    for (int i =0; i <= top; i++)
    {
      cout<<array[i]<<endl;
    }
  }
};
// main start here ...
int main()
{
  Stack stack (5);
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);
  stack.push(5);
  //print the stack 
  stack.printStack();
  cout<<"After reverse the stack "<<endl;
  stack.reverseStack();
  cout<<endl;
  stack.printStack();
  return 0;
}