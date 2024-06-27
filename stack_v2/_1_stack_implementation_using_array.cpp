#include <iostream>
using namespace std;

class MyStack
{
private:
  int *stack;
  int capacity;
  int top;

public:
  MyStack(int capacity)
  {
    this->capacity = capacity;
    stack = new int[capacity];
    top = -1;
  }

  void push(int data)
  {
    if (top >= capacity - 1)
    {
      cout << "Stack is full. Cannot push " << data << endl;
      return;
    }
    top++;
    stack[top] = data;
  }

  int pop()
  {
    if (top < 0)
    {
      cout << "Stack is empty. Cannot pop." << endl;
      return -1;
    }
    int temp = stack[top];
    top--;
    return temp;
  }

  bool isEmpty()
  {
    return (top == -1);
  }

  int size()
  {
    return top + 1;
  }

  int peek()
  {
    if (top < 0)
    {
      cout << "Stack is empty. Cannot peek." << endl;
      return -1;
    }
    return stack[top];
  }
};

int main()
{
  int size;
  cout << "Enter the size of the stack: " << endl;
  cin >> size;
  MyStack s(size);

  for (int i = 0; i < size; i++)
  {
    int data;
    cout<<"Enter the element at index: "<< i <<endl;
    cin>>data;
    s.push(data);
  }
  
  cout << "First pop element = " << s.pop() << endl;
  cout << "2nd pop element = " << s.pop() << endl;
  cout << "3rd pop element = " << s.pop() << endl;

  cout << "Size of the stack: " << s.size() << endl;

  cout << "Peek element of the stack: " << s.peek() << endl;

  if (s.isEmpty())
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    cout << "Stack is not empty" << endl;
  }

  return 0;
}