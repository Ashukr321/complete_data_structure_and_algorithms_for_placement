// Preprocessor
#include <iostream>
using namespace std;

class Stack
{
private:
  int *stack;
  int size;
  int top;

public:
  Stack(int size)
  {
    this->size = size;
    this->stack = new int[size];
    top = -1;
  }

  ~Stack()
  {
    delete[] stack; // Deallocate memory when the object is destroyed
  }

  bool isEmpty()
  {
    return top == -1;
  }

  bool isFull()
  {
    return top == size - 1;
  }

  void push(int element)
  {
    if (isFull())
    {
      cout << "Stack is full. Overflow condition!" << endl;
    }
    else
    {
      stack[++top] = element;
    }
  }

  int pop()
  {
    if (isEmpty())
    {
      cout << "Stack is empty. Underflow condition!" << endl;
      return -1; // Return a sentinel value to indicate error
    }
    else
    {
      return stack[top--];
    }
  }

  void displayStack()
  {
    for (int i = 0; i <= top; i++)
    {
      cout << stack[i] << " ";
    }
    cout << endl;
  }
};

// Main starts here...
int main()
{
  cout << "Implementing the stack using array" << endl;
  int size;
  cout << "Enter the size of the stack: ";
  cin >> size;

  Stack s1(size);

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    s1.push(n); // Corrected to use push() method
  }

  s1.displayStack();

  return 0;
}