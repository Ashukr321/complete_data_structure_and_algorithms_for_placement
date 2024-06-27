#include <iostream>
#include <vector>
using namespace std;

class MyStack
{
private:
  vector<int> stack;
  int top;

public:
  MyStack()
  {
    top = -1; // No need to use this->
  }

  // operation of the dynamic stack
  // 1. push
  void push(int data)
  {
    stack.push_back(data);
    top++;
  }

  int pop()
  {
    if (top < 0)
    {
      cout << "Stack is empty" << endl;
      return -1;
    }
    int temp = stack.back();
    stack.pop_back();
    top--;
    return temp;
  }

  // peek
  int peek()
  {
    if (top < 0)
    {
      cout << "Stack is empty" << endl;
      return -1;
    }
    return stack[top];
  }
  // size
  int size()
  {
    return top + 1;
  }
};

int main()
{

  MyStack s;
  s.push(1);
  s.push(2);
  s.push(3);
  cout << "first pop element :" << s.pop() << endl;
  cout << "second pop element: " << s.pop() << endl;
  cout << "3rd pop element: " << s.pop() << endl;

  cout << "peek element of the stack " << s.peek() << endl;
  cout << "size of the stack " << s.size() << endl;

  return 0;
}