#include <iostream>
using namespace std;

class Stack {
private:
    int* array;
    int top;
    int capacity; 

public:
    Stack(int size) {
        array = new int[size];
        top = -1;
        capacity = size;
    }

    bool isUnderFlow() {
        if (top == -1) {
            return true;
        }
        return false;
    }

    bool isOverFlow() {
        if (top == capacity - 1) { // corrected: top == capacity - 1
            return true;
        }
        return false;
    }

    void push(int element) {
        if (isOverFlow()) {
            cout << "Stack is OverFlow !" << endl;
            return;
        }
        array[++top] = element;
    }

    int pop() {
        if (isUnderFlow()) {
            cout << "Stack is Underflow " << endl;
            return 0; 
        }
        return array[top--];
    }

    int size() {
        if (isUnderFlow()) {
            cout << "Stack is in UnderFlow " << endl;
            return 0; // return a default value or throw an exception
        }
        return top + 1; // because index starts from 0, so we add top + 1
    }

    int peek() {
        if (isUnderFlow()) {
            cout << "Stack is in UnderFlow " << endl;
            return 0; // return a default value or throw an exception
        }
        return array[top];
    }

    void printStack() {
        for (int i = top; i >= 0; i--) {
            cout << array[i] << " ";
        }
    }
};

int main() {
    cout << "Welcome to stack implementation using array" << endl;
    cout << endl;
    int size;
    cout << "Enter the size of the array :" << endl;
    cin >> size;
    Stack stack(size);

    int choice;
    do {
        cout << "1. Push Element in the stack " << endl;
        cout << "2. Pop Element in the stack " << endl;
        cout << "3. Peek Element in the stack " << endl;
        cout << "4. Print Elements of the stack " << endl;
        cout << "5. Exit in the stack " << endl;
        cout << "Enter Your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: // corrected: case 1 (not '1')
            int element;
            cout << "Enter the element to push in the stack: " << endl;
            cin >> element;
            stack.push(element);
            break;
        case 2:
            
            cout << "Pop Element: " << stack.pop() << endl;
            break;
        case 3:
            cout << "Peek element: " << stack.peek() << endl;
            break;
        case 4:
            cout << "Elements of the stack: " << endl;
            stack.printStack();
            cout<<endl;
            break;
        case 5:
            return 0;
        }
    } while (choice != 5);

    return 0;
}