// preprocessor
#include <iostream>
using namespace std;

// create the class stack
class Stack
{
private:
  int capacity;
  int *array;
  int top;

public:
  // constructor
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
    if (top == capacity - 1)
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
    // check corner case
    if (isOverFlow())
    {
      cout << "Stack is OverFlow ! " << endl;
      return;
    }
    array[++top] = data;
  }
  // pop
  int pop()
  {
    // check corner case
    if (isUnderFlow())
    {
      cout << "Stack in Underflow " << endl;
      return -1;
    }
    int value = array[top];
    array[top--] == 0;
    return value;
  }
  // reverseStack
  void reverseStack()
  {
    int *temp = new int[capacity];
    for (int i = 0; i <= top; i++)
    {
      temp[i] = array[top - i];
    }
    delete[] array;
    array = temp;
  }

  void printStack(){
    for(int i = 0 ; i<=top;i++){
      cout<<array[i]<<" ";
    }
  }
};

// main start here ...
int main()
{

  Stack stack(5);

  
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);
  stack.push(5);
  cout<<"Print stack before reverse "<<endl;
  stack.printStack();
  cout<<endl;
  cout<<"After reverse the stack "<<endl;
  stack.reverseStack();
  stack.printStack();

  return 0;
}