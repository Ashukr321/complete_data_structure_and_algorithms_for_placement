// preprocessor
#include <iostream>
using namespace std;

class Stack
{
private:
  int capacity;
  int top;
  int *array;

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
    return (top == -1);
  }

  // isOverFlow
  bool isOverFlow()
  {
    return (top == capacity - 1);
  }

  // push 
  void push(int data)
  {
    // check corner case 
    if (isOverFlow())
    {
      cout << "Stack is Overflow " << endl;
      return;
    }
    else
    {
      array[++top] = data;
    }
  }

  // pop 
  int pop()
  {
    // check corner case 
    if (isUnderFlow())
    {
      cout << "Stack is in Underflow" << endl;
      return -1; // return a default value or throw an exception
    }
    else
    {
      int value = array[top];
      top--; // decrement top before assigning 0
      array[top + 1] = 0; // assign 0 to the popped element
      return value;
    }
  }

  // peek 
  int peek()
  {
    return array[top];
  }

  // midOfStack
  int midOfStack()
  {
    int mid = top / 2;
    if (top % 2 == 0)
    {
      return (array[mid - 1] + array[mid]) / 2;
    }
    else
    {
      return array[mid];
    }
  }

  // printStack 
  void printStack()
  {
    for (int i = 0; i <= top; i++)
    {
      cout << array[i] << "  ";
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

  stack.printStack();
  cout << endl;
  cout << " mid  element of the stack " << stack.midOfStack() << endl;

  return 0;
}