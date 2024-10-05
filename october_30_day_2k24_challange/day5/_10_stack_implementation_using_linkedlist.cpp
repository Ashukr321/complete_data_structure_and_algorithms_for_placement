// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

class Stack
{
private:
  Node *top;

public:
  // constructor
  Stack()
  {
    top = nullptr;
  }
  // isEmpty
  bool isEmpty()
  {
    if (top == nullptr)
    {
      return true;
    }
    return false;
  }
  // push
  void push(int value)
  {
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
  }

  // pop
  int pop()
  {
    if (isEmpty())
    {
      cout << "Stack is Empty" << endl;
      return -1; // Return a default value to indicate an error
    }
    int value = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;
    return value;
  }
  // peek
  int peek()
  {
    if (isEmpty())
    {
      cout << "Stack is empty " << endl;
      return -1; // Return a default value to indicate an error
    }
    return top->data;
  }
  void printStack()
  {
    Node *temp = top;
    while (temp != nullptr) 
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl; 
  }
};
// main start here ...
int main()
{
  Stack stack;
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);
  stack.push(5);
  
  stack.printStack();
  return 0;
}