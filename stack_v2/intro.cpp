#include<iostream>
using namespace std;

class Stack {
  private:
    int *arr;
    int top;
    int capacity;

  public:
    Stack(int capacity) {
      this->capacity = capacity;
      this->top = -1;
      this->arr = new int[capacity];
    }

    void push(int data) {
      if (top == capacity - 1) {
        cout << "Stack Overflow. Cannot push " << data << endl;
        return;
      }
      arr[++top] = data;
      cout << "Pushing " << data << endl;
    }
};

int main() {
  int size;
  cout << "Enter the size of the stack: ";
  cin >> size;

  Stack s(size);

  s.push(12);
  s.push(1);
  s.push(1);

  return 0;
}