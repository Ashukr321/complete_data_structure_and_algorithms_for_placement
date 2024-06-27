#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};

class MyStack
{
public:
  Node *head;
  int size;
  MyStack()
  {
    head = nullptr;
    size = 0;
  }
  // push
  void push(int data)
  {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    size++;
  }
  int pop()
  {
    if (head == nullptr)
    {
      cout << "Stack is empty. Cannot pop." << endl;
      return INT_MAX; // Return a value that indicates an error
    }
    int res = head->data;
    Node *temp = head;
    head = temp->next;
    delete temp;
    size--;
    return res;
  }
  int getSize()
  {
    return size;
  }
  bool isEmpty()
  {
    return head == nullptr;
  }
  int peek()
  {
    if (head == nullptr)
    {
      cout << "Stack is empty. Cannot peek." << endl;
      return INT_MAX; // Return a value that indicates an error
    }
    return head->data;
  }
};

int main()
{
  MyStack s;
  s.push(10);
  s.push(20);
  s.push(30);

  cout << "Size: " << s.getSize() << endl;
  cout << "Peek: " << s.peek() << endl;
  cout << "Pop: " << s.pop() << endl;
  cout << "Size: " << s.getSize() << endl;
  cout << "IsEmpty: " << (s.isEmpty() ? "True" : "False") << endl;

  return 0;
}