#include <iostream>
using namespace std;

class FixedSizeStack
{
private:
  int *stack;
  int maxSize;
  int topIndex;

public:
  // Constructor to initialize the stack
  FixedSizeStack(int size)
  {
    this->maxSize = size;
    stack = new int[maxSize];
    topIndex = -1;
  }

  // Destructor to clean up allocated memory
  ~FixedSizeStack()
  {
    delete[] stack;
  }

  // Check if the stack is full
  bool isFull()
  {
    return topIndex == maxSize - 1;
  }

  // Check if the stack is empty
  bool isEmpty()
  {
    return topIndex == -1;
  }

  // Get the current size of the stack
  int size()
  {
    return topIndex + 1;
  }

  // Peek the top element of the stack
  int peek()
  {
    if (isEmpty())
    {
      cout << "Stack is empty" << endl;
      return -1; // Return a sentinel value indicating an error
    }
    return stack[topIndex];
  }

  // Push an element onto the stack
  void push(int value)
  {
    if (isFull())
    {
      cout << "Stack is full" << endl;
    }
    else
    {
      stack[++topIndex] = value;
    }
  }

  // Pop an element from the stack
  int pop()
  {
    if (isEmpty())
    {
      cout << "Stack is empty" << endl;
      return -1; // Return a sentinel value indicating an error
    }
    return stack[topIndex--];
  }
};

// Main function starts here
int main()
{
  int size;
  cout << "Enter the maxSize of the stack!" << endl;
  cin >> size;

  FixedSizeStack stack(size);

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter element at index " << i << " and push :" << endl;
    cin >> n;
    stack.push(n);
  }

  cout << "Top element: " << stack.peek() << endl; // Should output 30
  stack.pop();
  cout << "Top element after pop: " << stack.peek() << endl; // Should output 20
  return 0;
}
