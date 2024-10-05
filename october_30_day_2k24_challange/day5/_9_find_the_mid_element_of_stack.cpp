// preprocessor
#include <iostream>
using namespace std;

class Stack
{

private:
  int *array;
  int top;
  int capacity;

public:
  // constructor
  Stack(int capacity)
  {
    this->capacity = capacity;
    top = -1;
    array = new int[capacity];
  }
  // function
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
      cout << "Stack is overflow" << endl;
      return;
    }
    array[++top] = data;
  }
  // pop
  int pop()
  {
    // check the corner case
    if (isUnderFlow())
    {
      cout << "Stack is inUnder flow " << endl;
      return -1;
    }
    return array[top--];
  }
  int midOfStackElement()
  {
    int median = top / 2;
    if (median % 2 == 0)
    {
      return (array[median - 1] + array[median]) / 2;
    }
    else
    {
      return array[median];
    }
  }
};

// main start here ...
int main()
{

  Stack stack(5);
  
  stack.push(10);
  stack.push(20);
  stack.push(34);
  stack.push(3);
  stack.push(3);
  stack.push(3);

  cout << "Mid Element of the stack " << stack.midOfStackElement() << endl;

  return 0;
}